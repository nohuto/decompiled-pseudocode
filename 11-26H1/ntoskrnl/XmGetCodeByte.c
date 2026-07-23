/*
 * XREFs of XmGetCodeByte @ 0x1404A2170
 * Callers:
 *     XmGroup2ByByte @ 0x1404A10C0 (XmGroup2ByByte.c)
 *     XmMoveRegImmediate @ 0x1404A18E0 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmShortJump @ 0x1404A1E90 (XmShortJump.c)
 *     XmGetImmediateSourceValue @ 0x1404A1EFC (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x1404A1F50 (XmAccumImmediate.c)
 *     XmEmulateStream @ 0x1404A2008 (XmEmulateStream.c)
 *     XmGroup8BitOffset @ 0x1405AEB40 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1405AEBF0 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x1405AEFA0 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x1405AF120 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x1405B0F38 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A21B0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
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
