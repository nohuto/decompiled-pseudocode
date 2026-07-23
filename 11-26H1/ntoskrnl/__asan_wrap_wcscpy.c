/*
 * XREFs of __asan_wrap_wcscpy @ 0x1405E5330
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

ULONG_PTR __fastcall _asan_wrap_wcscpy(ULONG_PTR BugCheckParameter1, __int16 *a2)
{
  __int16 *v2; // rdi
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rsi
  signed __int8 v6; // al
  __int16 v8; // ax
  signed __int8 *v9; // rdx
  ULONG_PTR v10; // r8
  signed __int8 v11; // cl
  ULONG_PTR v12; // rcx
  __int16 v13; // ax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = a2;
  v4 = (ULONG_PTR)a2;
  v5 = 0LL;
  while ( v5 != -1LL )
  {
    if ( KasaniValidationEnabled && v4 >= 0xFFFF800000000000uLL )
    {
      v6 = *(_BYTE *)(((v4 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( (v4 & 7) == 7 )
      {
        if ( v6 && v6 < 8
          || (v6 = *(_BYTE *)(((v4 + 0x800000000001LL) >> 3) + KasaniShadow)) != 0
          && v6 < 8
          && (char)(((v4 + 1) & 7) + 1) > v6 )
        {
LABEL_40:
          KasaniReport(v4, 2uLL, 0, retaddr, v6);
        }
      }
      else if ( v6 && v6 < 8 && (char)(((v4 + 1) & 7) + 1) > v6 )
      {
        goto LABEL_40;
      }
      if ( v6 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(v4, 2uLL, 0, retaddr, 9u);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v4, 2, 0, 0, retaddr);
    }
    v8 = *(_WORD *)v4;
    v5 += 2LL;
    v4 += 2LL;
    if ( !v8 )
      break;
  }
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
            goto LABEL_30;
        }
LABEL_41:
        KasaniReport(BugCheckParameter1, v5, 1u, retaddr, v11);
      }
LABEL_30:
      v11 = *v9;
      if ( *v9 && v11 < 8 && (char)(((v5 + BugCheckParameter1 - 1) & 7) + 1) > v11 )
        goto LABEL_41;
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
    *(__int16 *)((char *)v2 + v12) = *v2;
    ++v2;
  }
  while ( v13 );
  return BugCheckParameter1;
}
