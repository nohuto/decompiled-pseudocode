/*
 * XREFs of XmGetCodeByte @ 0x14046AC28
 * Callers:
 *     XmGroup2ByByte @ 0x140469BD0 (XmGroup2ByByte.c)
 *     XmMoveRegImmediate @ 0x14046A5B0 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x14046A7D4 (XmEvaluateAddressSpecifier.c)
 *     XmShortJump @ 0x14046A950 (XmShortJump.c)
 *     XmGetImmediateSourceValue @ 0x14046A9BC (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x14046AA10 (XmAccumImmediate.c)
 *     XmEmulateStream @ 0x14046AAC4 (XmEmulateStream.c)
 *     XmGroup8BitOffset @ 0x140571F00 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x140571FB0 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x1405723B0 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x140572520 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x140574338 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x14046AC70 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1404F9210 (longjmp.c)
 */

char __fastcall XmGetCodeByte(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)(a1 + 20);
  if ( (unsigned int)v1 > *(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  ++*(_WORD *)(a1 + 20);
  return *(_BYTE *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), v1);
}
