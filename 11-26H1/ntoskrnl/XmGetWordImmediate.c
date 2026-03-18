/*
 * XREFs of XmGetWordImmediate @ 0x1404A8610
 * Callers:
 *     XmLongJump @ 0x1404A7780 (XmLongJump.c)
 *     XmMoveRegImmediate @ 0x1404A8250 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1404A886C (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x1404A88C0 (XmAccumImmediate.c)
 *     XmImmediateEnter @ 0x1405AC3E0 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1405AC430 (XmImmediateJump.c)
 *     XmSegmentOffset @ 0x1405AC850 (XmSegmentOffset.c)
 *     XmRetOp @ 0x1405ADA50 (XmRetOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A8B20 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x140533940 (longjmp.c)
 */

__int64 __fastcall XmGetWordImmediate(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 1 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 2;
  return *(unsigned __int16 *)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 58), (unsigned __int16)v1);
}
