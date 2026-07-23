/*
 * XREFs of __asan_loadN @ 0x1405E1E80
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

void __fastcall _asan_loadN(ULONG_PTR BugCheckParameter1, ULONG_PTR a2)
{
  signed __int8 *v3; // rax
  ULONG_PTR v4; // r8
  signed __int8 v5; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniValidationEnabled && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( a2 )
    {
      v3 = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
      v4 = KasaniShadow + ((a2 + BugCheckParameter1 + 0x7FFFFFFFFFFFLL) >> 3);
      if ( (unsigned __int64)v3 < v4 )
      {
        while ( 1 )
        {
          v5 = *v3;
          if ( *v3 )
          {
            if ( v5 < 8 )
              break;
          }
          if ( (unsigned __int64)++v3 >= v4 )
            goto LABEL_8;
        }
LABEL_16:
        KasaniReport(BugCheckParameter1, a2, 0, retaddr, v5);
      }
LABEL_8:
      v5 = *v3;
      if ( *v3 && v5 < 8 && (char)(((a2 + BugCheckParameter1 - 1) & 7) + 1) > v5 )
        goto LABEL_16;
      if ( v5 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(BugCheckParameter1, a2, 0, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress(BugCheckParameter1, a2, 0, 0, retaddr);
  }
}
