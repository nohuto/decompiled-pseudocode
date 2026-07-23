/*
 * XREFs of __asan_memset @ 0x1405E2360
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall _asan_memset(ULONG_PTR BugCheckParameter1, int Val, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v3; // rdi
  signed __int8 *v6; // rdx
  signed __int8 v7; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = BugCheckParameter2;
  if ( KasaniValidationEnabled && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( BugCheckParameter2 )
    {
      v6 = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
      BugCheckParameter2 = KasaniShadow + ((BugCheckParameter2 + BugCheckParameter1 + 0x7FFFFFFFFFFFLL) >> 3);
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
LABEL_16:
        KasaniReport(BugCheckParameter1, v3, 1u, retaddr, v7);
      }
LABEL_8:
      v7 = *v6;
      if ( *v6 && v7 < 8 && (char)(((v3 + BugCheckParameter1 - 1) & 7) + 1) > v7 )
        goto LABEL_16;
      if ( v7 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(BugCheckParameter1, v3, 1u, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
    {
      LOBYTE(BugCheckParameter2) = 1;
      KcsanValidateAddress(BugCheckParameter1, v3, BugCheckParameter2, 0, retaddr);
    }
  }
  return memset_0((void *)BugCheckParameter1, Val, v3);
}
