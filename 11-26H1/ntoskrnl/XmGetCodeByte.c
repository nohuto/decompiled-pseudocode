/*
 * XREFs of XmGetCodeByte @ 0x1404A8AE0
 * Callers:
 *     XmGroup2ByByte @ 0x1404A7A30 (XmGroup2ByByte.c)
 *     XmMoveRegImmediate @ 0x1404A8250 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
 *     XmShortJump @ 0x1404A8800 (XmShortJump.c)
 *     XmGetImmediateSourceValue @ 0x1404A886C (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x1404A88C0 (XmAccumImmediate.c)
 *     XmEmulateStream @ 0x1404A8978 (XmEmulateStream.c)
 *     XmGroup8BitOffset @ 0x1405AC330 (XmGroup8BitOffset.c)
 *     XmImmediateEnter @ 0x1405AC3E0 (XmImmediateEnter.c)
 *     XmPortImmediate @ 0x1405AC790 (XmPortImmediate.c)
 *     XmShiftDouble @ 0x1405AC910 (XmShiftDouble.c)
 *     XmEvaluateIndexSpecifier @ 0x1405AE728 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A8B20 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x140533940 (longjmp.c)
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
