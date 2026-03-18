/*
 * XREFs of KiInterruptLinkage @ 0x14072BC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KiInterruptLinkage(__int64 a1, char a2)
{
  __int64 v2; // rbp

  *(_BYTE *)(v2 + 224) = a2;
  JUMPOUT(0x14072BF49LL);
}
