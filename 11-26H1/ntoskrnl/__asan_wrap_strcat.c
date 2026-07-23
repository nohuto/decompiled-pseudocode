/*
 * XREFs of __asan_wrap_strcat @ 0x1405E4340
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

ULONG_PTR __fastcall _asan_wrap_strcat(ULONG_PTR BugCheckParameter1, const char *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  ULONG_PTR v4; // r14
  ULONG_PTR v7; // rbx
  signed __int8 v8; // dl
  char v9; // al
  ULONG_PTR v10; // rbx
  signed __int8 v11; // dl
  char v12; // al
  unsigned __int64 v13; // r10
  signed __int8 *v14; // rdx
  unsigned __int64 v15; // r8
  signed __int8 v16; // cl
  char *v17; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = BugCheckParameter1 + 0x800000000000LL;
  v7 = BugCheckParameter1;
  do
  {
    if ( v3 == -1 )
      break;
    if ( KasaniValidationEnabled && v7 >= 0xFFFF800000000000uLL )
    {
      v8 = *(_BYTE *)(((v4 + v3) >> 3) + KasaniShadow);
      if ( v8 )
      {
        if ( v8 < 8 && (char)((v7 & 7) + 1) > v8 )
          KasaniReport(v7, 1uLL, 0, retaddr, v8);
        if ( v8 == 9 && KeGetCurrentIrql() >= 2u )
          KasaniReport(v7, 1uLL, 0, retaddr, 9u);
      }
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v7, 1, 0, 0, retaddr);
    }
    v9 = *(_BYTE *)v7;
    ++v3;
    ++v7;
  }
  while ( v9 );
  v10 = (ULONG_PTR)a2;
  do
  {
    if ( v2 == -1 )
      break;
    if ( KasaniValidationEnabled && v10 >= 0xFFFF800000000000uLL )
    {
      v11 = *(_BYTE *)(((unsigned __int64)&a2[v2 + 0x800000000000LL] >> 3) + KasaniShadow);
      if ( v11 )
      {
        if ( v11 < 8 && (char)((v10 & 7) + 1) > v11 )
          KasaniReport(v10, 1uLL, 0, retaddr, v11);
        if ( v11 == 9 && KeGetCurrentIrql() >= 2u )
          KasaniReport(v10, 1uLL, 0, retaddr, 9u);
      }
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v10, 1, 0, 0, retaddr);
    }
    v12 = *(_BYTE *)v10;
    ++v2;
    ++v10;
  }
  while ( v12 );
  v13 = v3 + BugCheckParameter1;
  if ( KasaniValidationEnabled && v13 >= 0xFFFF800000000000uLL )
  {
    if ( v2 != 1 )
    {
      v14 = (signed __int8 *)(KasaniShadow + ((v13 + 0x800000000000LL) >> 3));
      v15 = KasaniShadow + ((v2 - 1 + v13 + 0x7FFFFFFFFFFFLL) >> 3);
      if ( (unsigned __int64)v14 < v15 )
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            if ( v16 < 8 )
              break;
          }
          if ( (unsigned __int64)++v14 >= v15 )
            goto LABEL_32;
        }
LABEL_42:
        KasaniReport(v3 + BugCheckParameter1, v2 - 1, 1u, retaddr, v16);
      }
LABEL_32:
      v16 = *v14;
      if ( *v14 && v16 < 8 && (char)(((v13 + v2 - 2) & 7) + 1) > v16 )
        goto LABEL_42;
      if ( v16 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(v3 + BugCheckParameter1, v2 - 1, 1u, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress(v3 + BugCheckParameter1, v2 - 1, 1, 0, retaddr);
  }
  v17 = (char *)(BugCheckParameter1 - 1);
  while ( *++v17 != 0 )
    ;
  strcpy(v17, a2);
  return BugCheckParameter1;
}
