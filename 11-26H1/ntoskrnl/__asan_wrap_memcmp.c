/*
 * XREFs of __asan_wrap_memcmp @ 0x1405E4130
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

int __fastcall _asan_wrap_memcmp(ULONG_PTR BugCheckParameter1, const void *a2, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v6; // r8
  signed __int8 *v7; // rdx
  signed __int8 v8; // al
  char v9; // cl
  ULONG_PTR v10; // r8
  signed __int8 *v11; // rdx
  signed __int8 v12; // cl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( KasaniValidationEnabled && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( BugCheckParameter2 )
    {
      v6 = KasaniShadow + ((BugCheckParameter2 + BugCheckParameter1 + 0x7FFFFFFFFFFFLL) >> 3);
      v7 = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
      if ( (unsigned __int64)v7 < v6 )
      {
        while ( 1 )
        {
          v8 = *v7;
          if ( *v7 )
          {
            if ( v8 < 8 )
              break;
          }
          if ( (unsigned __int64)++v7 >= v6 )
            goto LABEL_8;
        }
LABEL_30:
        KasaniReport(BugCheckParameter1, BugCheckParameter2, 0, retaddr, v8);
      }
LABEL_8:
      v8 = *v7;
      v9 = ((BugCheckParameter1 + BugCheckParameter2 - 1) & 7) + 1;
      if ( *v7 && v8 < 8 && v9 > v8 )
        goto LABEL_30;
      if ( v8 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(BugCheckParameter1, BugCheckParameter2, 0, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress(BugCheckParameter1, BugCheckParameter2, 0, 0, retaddr);
  }
  if ( KasaniValidationEnabled && (unsigned __int64)a2 >= 0xFFFF800000000000uLL )
  {
    if ( BugCheckParameter2 )
    {
      v10 = KasaniShadow + (((unsigned __int64)a2 + BugCheckParameter2 + 0x7FFFFFFFFFFFLL) >> 3);
      v11 = (signed __int8 *)(KasaniShadow + (((unsigned __int64)a2 + 0x800000000000LL) >> 3));
      if ( (unsigned __int64)v11 < v10 )
      {
        while ( 1 )
        {
          v12 = *v11;
          if ( *v11 )
          {
            if ( v12 < 8 )
              break;
          }
          if ( (unsigned __int64)++v11 >= v10 )
            goto LABEL_22;
        }
LABEL_32:
        KasaniReport((ULONG_PTR)a2, BugCheckParameter2, 0, retaddr, v12);
      }
LABEL_22:
      v12 = *v11;
      if ( *v11 && v12 < 8 && (char)((((_BYTE)a2 + BugCheckParameter2 - 1) & 7) + 1) > v12 )
        goto LABEL_32;
      if ( v12 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport((ULONG_PTR)a2, BugCheckParameter2, 0, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress((_DWORD)a2, BugCheckParameter2, 0, 0, retaddr);
  }
  return memcmp((const void *)BugCheckParameter1, a2, BugCheckParameter2);
}
