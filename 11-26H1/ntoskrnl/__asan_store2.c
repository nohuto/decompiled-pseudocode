/*
 * XREFs of __asan_store2 @ 0x1405E3120
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

void __fastcall _asan_store2(ULONG_PTR BugCheckParameter1)
{
  int v2; // r8d
  signed __int8 v3; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = retaddr;
  if ( !KasaniValidationEnabled || BugCheckParameter1 < 0xFFFF800000000000uLL )
    return;
  v3 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow);
  if ( (BugCheckParameter1 & 7) == 7 )
  {
    if ( !v3 || v3 >= 8 )
    {
      v3 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000001LL) >> 3) + KasaniShadow);
      if ( !v3 || v3 >= 8 || (char)(((BugCheckParameter1 + 1) & 7) + 1) <= v3 )
        goto LABEL_12;
    }
LABEL_23:
    KasaniReport(BugCheckParameter1, 2uLL, 1u, retaddr, v3);
  }
  if ( v3 && v3 < 8 && (char)(((BugCheckParameter1 + 1) & 7) + 1) > v3 )
    goto LABEL_23;
LABEL_12:
  if ( v3 == 9 && KeGetCurrentIrql() >= 2u )
    KasaniReport(BugCheckParameter1, 2uLL, 1u, retaddr, 9u);
  if ( KcsaniValidationEnabled )
  {
    LOBYTE(v2) = 1;
    KcsanValidateAddress(BugCheckParameter1, 2, v2, 0, retaddr);
  }
}
