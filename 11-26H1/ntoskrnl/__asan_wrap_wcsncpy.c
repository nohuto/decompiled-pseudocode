/*
 * XREFs of __asan_wrap_wcsncpy @ 0x1405E5740
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpy @ 0x14053A660 (wcsncpy.c)
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

wchar_t *__fastcall _asan_wrap_wcsncpy(wchar_t *BugCheckParameter1, const wchar_t *a2, size_t Count)
{
  char v3; // bp
  char *v4; // r12
  const wchar_t *v6; // r15
  ULONG_PTR v9; // rbx
  ULONG_PTR v10; // r8
  signed __int8 v11; // dl
  ULONG_PTR v12; // rcx
  char v13; // r8
  __int16 v15; // ax
  size_t v16; // r10
  signed __int8 *v17; // rdx
  signed __int8 v18; // cl
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = (_BYTE)a2 + 1;
  v4 = (char *)a2 + 0x800000000001LL;
  v6 = a2 + 0x400000000000LL;
  v9 = (ULONG_PTR)a2;
  do
  {
    v10 = v9 - (_QWORD)a2;
    if ( v9 - (_QWORD)a2 == -1LL )
      break;
    if ( KasaniValidationEnabled && v9 >= 0xFFFF800000000000uLL )
    {
      v11 = *(_BYTE *)((((unsigned __int64)v6 + v10) >> 3) + KasaniShadow);
      if ( (v9 & 7) == 7 )
      {
        if ( v11 && v11 < 8
          || (v12 = (unsigned __int64)&v4[v10] >> 3,
              v13 = ((v3 + v10) & 7) + 1,
              (v11 = *(_BYTE *)(v12 + KasaniShadow)) != 0)
          && v11 < 8
          && v13 > v11 )
        {
LABEL_38:
          KasaniReport(v9, 2uLL, 0, retaddr, v11);
        }
      }
      else if ( v11 && v11 < 8 && (char)(((v9 + 1) & 7) + 1) > v11 )
      {
        goto LABEL_38;
      }
      if ( v11 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(v9, 2uLL, 0, retaddr, 9u);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v9, 2, 0, 0, retaddr);
    }
    v15 = *(_WORD *)v9;
    v9 += 2LL;
  }
  while ( v15 );
  v16 = 2 * Count;
  if ( KasaniValidationEnabled && (unsigned __int64)BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( v16 )
    {
      v17 = (signed __int8 *)(KasaniShadow + ((unsigned __int64)(BugCheckParameter1 + 0x400000000000LL) >> 3));
      v10 = KasaniShadow + (((unsigned __int64)&BugCheckParameter1[v16 / 2 + 0x3FFFFFFFFFFFLL] + 1) >> 3);
      if ( (unsigned __int64)v17 < v10 )
      {
        while ( 1 )
        {
          v18 = *v17;
          if ( *v17 )
          {
            if ( v18 < 8 )
              break;
          }
          if ( (unsigned __int64)++v17 >= v10 )
            goto LABEL_30;
        }
LABEL_39:
        KasaniReport((ULONG_PTR)BugCheckParameter1, 2 * Count, 1u, retaddr, v18);
      }
LABEL_30:
      v18 = *v17;
      if ( *v17 && v18 < 8 && (char)(((v16 + (_BYTE)BugCheckParameter1 - 1) & 7) + 1) > v18 )
        goto LABEL_39;
      if ( v18 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport((ULONG_PTR)BugCheckParameter1, 2 * Count, 1u, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
    {
      LOBYTE(v10) = 1;
      KcsanValidateAddress((_DWORD)BugCheckParameter1, 2 * Count, v10, 0, retaddr);
    }
  }
  return wcsncpy(BugCheckParameter1, a2, Count);
}
