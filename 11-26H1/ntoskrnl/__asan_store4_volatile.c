/*
 * XREFs of __asan_store4_volatile @ 0x1405E36F0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

void __fastcall _asan_store4_volatile(ULONG_PTR BugCheckParameter1)
{
  signed __int8 v2; // cl
  char v3; // dl
  char v4; // al
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( !KasaniValidationEnabled || BugCheckParameter1 < 0xFFFF800000000000uLL )
    return;
  v2 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow);
  if ( (BugCheckParameter1 & 7) <= 4 )
  {
    if ( !v2 || v2 >= 8 || (char)(((BugCheckParameter1 + 3) & 7) + 1) <= v2 )
      goto LABEL_14;
LABEL_29:
    KasaniReport(BugCheckParameter1, 4uLL, 1u, retaddr, v2);
  }
  if ( !v2 || v2 >= 8 )
  {
    v3 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000002LL) >> 3) + KasaniShadow);
    v2 = v3;
    if ( (((_BYTE)BugCheckParameter1 + 2) & 7) == 7 )
    {
      if ( !v3 || v3 >= 8 )
      {
        v2 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000003LL) >> 3) + KasaniShadow);
        if ( !v2 || v2 >= 8 || (char)(((BugCheckParameter1 + 3) & 7) + 1) <= v2 )
          goto LABEL_12;
      }
    }
    else if ( !v3 || v3 >= 8 || (char)(((BugCheckParameter1 + 3) & 7) + 1) <= v3 )
    {
LABEL_12:
      v4 = 1;
      goto LABEL_13;
    }
  }
  v4 = 0;
LABEL_13:
  if ( !v4 )
    goto LABEL_29;
LABEL_14:
  if ( v2 == 9 && KeGetCurrentIrql() >= 2u )
    KasaniReport(BugCheckParameter1, 4uLL, 1u, retaddr, 9u);
  if ( KcsaniValidationEnabled )
    KcsanValidateAddress(BugCheckParameter1, 4, 1, 1, retaddr);
}
