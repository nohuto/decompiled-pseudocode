/*
 * XREFs of __asan_load8_volatile @ 0x1405E1CE0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

void __fastcall _asan_load8_volatile(ULONG_PTR BugCheckParameter1)
{
  signed __int8 v2; // cl
  char v3; // dl
  char v4; // dl
  bool v5; // cc
  char v6; // al
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( !KasaniValidationEnabled || BugCheckParameter1 < 0xFFFF800000000000uLL )
    return;
  v2 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow);
  if ( (BugCheckParameter1 & 7) == 0 )
  {
    if ( !v2 || v2 >= 8 )
      goto LABEL_18;
LABEL_35:
    KasaniReport(BugCheckParameter1, 8uLL, 0, retaddr, v2);
  }
  if ( v2 && v2 < 8 )
    goto LABEL_27;
  v3 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000004LL) >> 3) + KasaniShadow);
  v2 = v3;
  if ( (((_BYTE)BugCheckParameter1 + 4) & 7u) <= 4 )
  {
    if ( !v3 || v3 >= 8 || (char)(((BugCheckParameter1 + 7) & 7) + 1) <= v3 )
      goto LABEL_16;
  }
  else
  {
    if ( v3 && v3 < 8 )
      goto LABEL_27;
    v4 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000006LL) >> 3) + KasaniShadow);
    v2 = v4;
    if ( (((_BYTE)BugCheckParameter1 + 6) & 7) == 7 )
    {
      if ( v4 && v4 < 8 )
        goto LABEL_27;
      v2 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000007LL) >> 3) + KasaniShadow);
      if ( !v2 || v2 >= 8 )
        goto LABEL_16;
      v5 = (char)(((BugCheckParameter1 + 7) & 7) + 1) <= v2;
    }
    else
    {
      if ( !v4 || v4 >= 8 )
        goto LABEL_16;
      v5 = (char)(((BugCheckParameter1 + 7) & 7) + 1) <= v4;
    }
    if ( v5 )
    {
LABEL_16:
      v6 = 1;
      goto LABEL_17;
    }
  }
LABEL_27:
  v6 = 0;
LABEL_17:
  if ( !v6 )
    goto LABEL_35;
LABEL_18:
  if ( v2 == 9 && KeGetCurrentIrql() >= 2u )
    KasaniReport(BugCheckParameter1, 8uLL, 0, retaddr, 9u);
  if ( KcsaniValidationEnabled )
    KcsanValidateAddress(BugCheckParameter1, 8, 0, 1, retaddr);
}
