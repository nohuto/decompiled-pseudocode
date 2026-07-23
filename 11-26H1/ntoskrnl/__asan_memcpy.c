/*
 * XREFs of __asan_memcpy @ 0x1405E2150
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall _asan_memcpy(ULONG_PTR BugCheckParameter1, const void *a2, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v3; // rbx
  signed __int8 *v6; // rdx
  signed __int8 v7; // al
  signed __int8 *v8; // rdx
  signed __int8 v9; // cl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = BugCheckParameter2;
  if ( KasaniValidationEnabled && (unsigned __int64)a2 >= 0xFFFF800000000000uLL )
  {
    if ( BugCheckParameter2 )
    {
      v6 = (signed __int8 *)(KasaniShadow + (((unsigned __int64)a2 + 0x800000000000LL) >> 3));
      BugCheckParameter2 = KasaniShadow + (((unsigned __int64)a2 + BugCheckParameter2 + 0x7FFFFFFFFFFFLL) >> 3);
      if ( (unsigned __int64)v6 < BugCheckParameter2 )
      {
        while ( 1 )
        {
          v7 = *v6;
          if ( *v6 )
          {
            if ( v7 < 8 )
              break;
          }
          if ( (unsigned __int64)++v6 >= BugCheckParameter2 )
            goto LABEL_8;
        }
LABEL_30:
        KasaniReport((ULONG_PTR)a2, v3, 0, retaddr, v7);
      }
LABEL_8:
      v7 = *v6;
      if ( *v6 && v7 < 8 && (char)((((_BYTE)a2 + v3 - 1) & 7) + 1) > v7 )
        goto LABEL_30;
      if ( v7 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport((ULONG_PTR)a2, v3, 0, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress((_DWORD)a2, v3, 0, 0, retaddr);
  }
  if ( KasaniValidationEnabled && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( v3 )
    {
      BugCheckParameter2 = KasaniShadow + ((v3 + BugCheckParameter1 + 0x7FFFFFFFFFFFLL) >> 3);
      v8 = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
      if ( (unsigned __int64)v8 < BugCheckParameter2 )
      {
        while ( 1 )
        {
          v9 = *v8;
          if ( *v8 )
          {
            if ( v9 < 8 )
              break;
          }
          if ( (unsigned __int64)++v8 >= BugCheckParameter2 )
            goto LABEL_22;
        }
LABEL_32:
        KasaniReport(BugCheckParameter1, v3, 1u, retaddr, v9);
      }
LABEL_22:
      v9 = *v8;
      if ( *v8 && v9 < 8 && (char)(((BugCheckParameter1 + v3 - 1) & 7) + 1) > v9 )
        goto LABEL_32;
      if ( v9 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(BugCheckParameter1, v3, 1u, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
    {
      LOBYTE(BugCheckParameter2) = 1;
      KcsanValidateAddress(BugCheckParameter1, v3, BugCheckParameter2, 0, retaddr);
    }
  }
  return memmove((void *)BugCheckParameter1, a2, v3);
}
