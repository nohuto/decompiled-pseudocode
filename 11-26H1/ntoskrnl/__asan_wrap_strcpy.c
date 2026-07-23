/*
 * XREFs of __asan_wrap_strcpy @ 0x1405E4830
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

ULONG_PTR __fastcall _asan_wrap_strcpy(ULONG_PTR BugCheckParameter1, char *a2)
{
  char *v2; // rbx
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // rsi
  _BYTE *v6; // r15
  signed __int8 v7; // dl
  char v8; // al
  signed __int8 *v9; // rdx
  ULONG_PTR v10; // r8
  signed __int8 v11; // cl
  ULONG_PTR v12; // rcx
  char v13; // al
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = a2;
  v4 = (ULONG_PTR)a2;
  v5 = 0LL;
  v6 = a2 + 0x800000000000LL;
  do
  {
    if ( v5 == -1LL )
      break;
    if ( KasaniValidationEnabled && v4 >= 0xFFFF800000000000uLL )
    {
      v7 = *(_BYTE *)(((unsigned __int64)&v6[v5] >> 3) + KasaniShadow);
      if ( v7 )
      {
        if ( v7 < 8 && (char)((v4 & 7) + 1) > v7 )
          KasaniReport(v4, 1uLL, 0, retaddr, v7);
        if ( v7 == 9 && KeGetCurrentIrql() >= 2u )
          KasaniReport(v4, 1uLL, 0, retaddr, 9u);
      }
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v4, 1, 0, 0, retaddr);
    }
    v8 = *(_BYTE *)v4;
    ++v5;
    ++v4;
  }
  while ( v8 );
  if ( KasaniValidationEnabled && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( v5 )
    {
      v9 = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
      v10 = KasaniShadow + ((BugCheckParameter1 + v5 + 0x7FFFFFFFFFFFLL) >> 3);
      if ( (unsigned __int64)v9 < v10 )
      {
        while ( 1 )
        {
          v11 = *v9;
          if ( *v9 )
          {
            if ( v11 < 8 )
              break;
          }
          if ( (unsigned __int64)++v9 >= v10 )
            goto LABEL_20;
        }
LABEL_30:
        KasaniReport(BugCheckParameter1, v5, 1u, retaddr, v11);
      }
LABEL_20:
      v11 = *v9;
      if ( *v9 && v11 < 8 && (char)(((BugCheckParameter1 + v5 - 1) & 7) + 1) > v11 )
        goto LABEL_30;
      if ( v11 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(BugCheckParameter1, v5, 1u, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress(BugCheckParameter1, v5, 1, 0, retaddr);
  }
  v12 = BugCheckParameter1 - (_QWORD)v2;
  do
  {
    v13 = *v2;
    v2[v12] = *v2;
    ++v2;
  }
  while ( v13 );
  return BugCheckParameter1;
}
