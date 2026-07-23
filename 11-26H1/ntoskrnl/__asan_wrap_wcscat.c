/*
 * XREFs of __asan_wrap_wcscat @ 0x1405E4F60
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

ULONG_PTR __fastcall _asan_wrap_wcscat(ULONG_PTR BugCheckParameter1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // r8
  signed __int8 v8; // dl
  __int16 v10; // ax
  ULONG_PTR v11; // rbx
  signed __int8 v12; // dl
  __int16 v14; // ax
  unsigned __int64 v15; // r10
  signed __int8 *v16; // rdx
  signed __int8 v17; // cl
  ULONG_PTR v18; // rcx
  bool v19; // zf
  __int64 v20; // rdx
  __int16 v21; // ax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0LL;
  v3 = 0LL;
  v6 = BugCheckParameter1;
  LODWORD(v7) = 1;
  while ( v3 != -1 )
  {
    if ( KasaniValidationEnabled && v6 >= 0xFFFF800000000000uLL )
    {
      v8 = *(_BYTE *)(((v6 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( (v6 & 7) == 7 )
      {
        if ( v8 && v8 < 8
          || (v8 = *(_BYTE *)(((v6 + 0x800000000001LL) >> 3) + KasaniShadow)) != 0
          && v8 < 8
          && (char)(((v6 + 1) & 7) + 1) > v8 )
        {
LABEL_65:
          KasaniReport(v6, 2uLL, 0, retaddr, v8);
        }
      }
      else if ( v8 && v8 < 8 && (char)(((v6 + 1) & 7) + 1) > v8 )
      {
        goto LABEL_65;
      }
      if ( v8 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(v6, 2uLL, 0, retaddr, 9u);
      if ( KcsaniValidationEnabled )
      {
        KcsanValidateAddress(v6, 2, 0, 0, retaddr);
        LODWORD(v7) = 1;
      }
    }
    v10 = *(_WORD *)v6;
    v3 += 2LL;
    v6 += 2LL;
    if ( !v10 )
      break;
  }
  v11 = a2;
  while ( v2 != -1 )
  {
    if ( KasaniValidationEnabled && v11 >= 0xFFFF800000000000uLL )
    {
      v12 = *(_BYTE *)(((v11 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( (v11 & 7) == 7 )
      {
        if ( v12 && v12 < 8
          || (v12 = *(_BYTE *)(((v11 + 0x800000000001LL) >> 3) + KasaniShadow)) != 0
          && v12 < 8
          && (char)(((v11 + 1) & 7) + 1) > v12 )
        {
LABEL_67:
          KasaniReport(v11, 2uLL, 0, retaddr, v12);
        }
      }
      else if ( v12 && v12 < 8 && (char)(((v11 + 1) & 7) + 1) > v12 )
      {
        goto LABEL_67;
      }
      if ( v12 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(v11, 2uLL, 0, retaddr, 9u);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v11, 2, 0, 0, retaddr);
    }
    v14 = *(_WORD *)v11;
    v2 += 2LL;
    v11 += 2LL;
    if ( !v14 )
      break;
    LODWORD(v7) = 1;
  }
  v15 = v3 + BugCheckParameter1;
  if ( KasaniValidationEnabled && v15 >= 0xFFFF800000000000uLL )
  {
    if ( v2 != 2 )
    {
      v16 = (signed __int8 *)(KasaniShadow + ((v15 + 0x800000000000LL) >> 3));
      v7 = KasaniShadow + ((v2 - 2 + v15 + 0x7FFFFFFFFFFFLL) >> 3);
      if ( (unsigned __int64)v16 < v7 )
      {
        while ( 1 )
        {
          v17 = *v16;
          if ( *v16 )
          {
            if ( v17 < 8 )
              break;
          }
          if ( (unsigned __int64)++v16 >= v7 )
            goto LABEL_53;
        }
LABEL_69:
        KasaniReport(v3 + BugCheckParameter1, v2 - 2, 1u, retaddr, v17);
      }
LABEL_53:
      v17 = *v16;
      if ( *v16 && v17 < 8 && (char)(((v15 + v2 - 3) & 7) + 1) > v17 )
        goto LABEL_69;
      if ( v17 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(v3 + BugCheckParameter1, v2 - 2, 1u, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
    {
      LOBYTE(v7) = 1;
      KcsanValidateAddress(v3 + BugCheckParameter1, v2 - 2, v7, 0, retaddr);
    }
  }
  v18 = BugCheckParameter1 - 2;
  do
  {
    v19 = *(_WORD *)(v18 + 2) == 0;
    v18 += 2LL;
  }
  while ( !v19 );
  v20 = 0LL;
  do
  {
    v21 = *(_WORD *)(a2 + 2 * v20);
    *(_WORD *)(v18 + 2 * v20++) = v21;
  }
  while ( v21 );
  return BugCheckParameter1;
}
