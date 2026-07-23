/*
 * XREFs of __asan_store16 @ 0x1405E2810
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

void __fastcall _asan_store16(ULONG_PTR BugCheckParameter1)
{
  char v2; // cl
  signed __int8 v3; // al
  char v4; // dl
  char v5; // r8
  int v6; // r8d
  char v7; // dl
  char v8; // dl
  char v9; // dl
  bool v10; // cc
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( !KasaniValidationEnabled || BugCheckParameter1 < 0xFFFF800000000000uLL )
    return;
  v2 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow);
  v3 = v2;
  if ( (BugCheckParameter1 & 7) == 0 )
  {
    if ( v2 && v2 < 8 )
      goto LABEL_55;
    goto LABEL_26;
  }
  if ( v2 && v2 < 8 )
    goto LABEL_55;
  v4 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000004LL) >> 3) + KasaniShadow);
  v3 = v4;
  if ( (((_BYTE)BugCheckParameter1 + 4) & 7u) <= 4 )
  {
    if ( !v4 || v4 >= 8 )
      goto LABEL_26;
    v5 = BugCheckParameter1 + 7;
    goto LABEL_22;
  }
  if ( v4 && v4 < 8 )
    goto LABEL_55;
  v4 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000006LL) >> 3) + KasaniShadow);
  v3 = v4;
  if ( (((_BYTE)BugCheckParameter1 + 6) & 7) != 7 )
  {
    if ( !v4 || v4 >= 8 )
      goto LABEL_26;
    v5 = BugCheckParameter1 + 7;
LABEL_22:
    if ( (char)((v5 & 7) + 1) > v4 )
      goto LABEL_55;
    goto LABEL_26;
  }
  if ( v4 && v4 < 8 )
    goto LABEL_55;
  v3 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000007LL) >> 3) + KasaniShadow);
  if ( v3 )
  {
    if ( v3 < 8 && (char)(((BugCheckParameter1 + 7) & 7) + 1) > v3 )
      goto LABEL_55;
  }
LABEL_26:
  v6 = BugCheckParameter1 + 8;
  v7 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000008LL) >> 3) + KasaniShadow);
  v3 = v7;
  if ( (((_BYTE)BugCheckParameter1 + 8) & 7) == 0 )
  {
    if ( !v7 || v7 >= 8 )
      goto LABEL_39;
    goto LABEL_55;
  }
  if ( v7 && v7 < 8 )
    goto LABEL_55;
  v6 = BugCheckParameter1 + 12;
  v8 = *(_BYTE *)(((BugCheckParameter1 + 0x80000000000CLL) >> 3) + KasaniShadow);
  v3 = v8;
  if ( (((_BYTE)BugCheckParameter1 + 12) & 7u) <= 4 )
  {
    if ( !v8 || v8 >= 8 )
      goto LABEL_39;
    v10 = (char)(((BugCheckParameter1 + 15) & 7) + 1) <= v8;
    goto LABEL_38;
  }
  if ( v8 && v8 < 8 )
    goto LABEL_55;
  v6 = BugCheckParameter1 + 14;
  v9 = *(_BYTE *)(((BugCheckParameter1 + 0x80000000000ELL) >> 3) + KasaniShadow);
  v3 = v9;
  if ( (((_BYTE)BugCheckParameter1 + 14) & 7) != 7 )
  {
    if ( !v9 || v9 >= 8 )
      goto LABEL_39;
    v10 = (char)(((BugCheckParameter1 + 15) & 7) + 1) <= v9;
    goto LABEL_38;
  }
  if ( v9 && v9 < 8 )
LABEL_55:
    KasaniReport(BugCheckParameter1, 0x10uLL, 1u, retaddr, v3);
  v6 = BugCheckParameter1 + 15;
  v3 = *(_BYTE *)(((BugCheckParameter1 + 0x80000000000FLL) >> 3) + KasaniShadow);
  if ( !v3 || v3 >= 8 )
    goto LABEL_39;
  v10 = (char)((v6 & 7) + 1) <= v3;
LABEL_38:
  if ( !v10 )
    goto LABEL_55;
LABEL_39:
  if ( v3 == 9 && KeGetCurrentIrql() >= 2u )
    KasaniReport(BugCheckParameter1, 0x10uLL, 1u, retaddr, 9u);
  if ( KcsaniValidationEnabled )
  {
    LOBYTE(v6) = 1;
    KcsanValidateAddress(BugCheckParameter1, 16, v6, 0, retaddr);
  }
}
