/*
 * XREFs of XmGetWordImmediate @ 0x1404A1CA0
 * Callers:
 *     XmLongJump @ 0x1404A0E10 (XmLongJump.c)
 *     XmMoveRegImmediate @ 0x1404A18E0 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1404A1EFC (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x1404A1F50 (XmAccumImmediate.c)
 *     XmImmediateEnter @ 0x1405AEBF0 (XmImmediateEnter.c)
 *     XmImmediateJump @ 0x1405AEC40 (XmImmediateJump.c)
 *     XmSegmentOffset @ 0x1405AF060 (XmSegmentOffset.c)
 *     XmRetOp @ 0x1405B0260 (XmRetOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A21B0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
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
