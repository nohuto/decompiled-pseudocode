/*
 * XREFs of KiInterruptLinkage @ 0x1407307D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KiInterruptLinkage(__int64 a1, char a2)
{
  __int64 v2; // rbp

  *(_BYTE *)(v2 + 224) = a2;
  JUMPOUT(0x140730B19LL);
}
