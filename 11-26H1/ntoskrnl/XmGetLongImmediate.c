/*
 * XREFs of XmGetLongImmediate @ 0x140533904
 * Callers:
 *     XmLongJump @ 0x1404A0E10 (XmLongJump.c)
 *     XmMoveRegImmediate @ 0x1404A18E0 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1404A1EFC (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x1404A1F50 (XmAccumImmediate.c)
 *     XmImmediateJump @ 0x1405AEC40 (XmImmediateJump.c)
 *     XmSegmentOffset @ 0x1405AF060 (XmSegmentOffset.c)
 *     XmEvaluateIndexSpecifier @ 0x1405B0F38 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A21B0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

__int64 __fastcall XmGetLongImmediate(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 3 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 4;
  return (unsigned int)*x86BiosTranslateAddress(*(_WORD *)(a1 + 58), v1);
}
