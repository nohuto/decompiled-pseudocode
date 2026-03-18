/*
 * XREFs of XmGetLongImmediate @ 0x140531404
 * Callers:
 *     XmLongJump @ 0x1404A7780 (XmLongJump.c)
 *     XmMoveRegImmediate @ 0x1404A8250 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x1404A886C (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x1404A88C0 (XmAccumImmediate.c)
 *     XmImmediateJump @ 0x1405AC430 (XmImmediateJump.c)
 *     XmSegmentOffset @ 0x1405AC850 (XmSegmentOffset.c)
 *     XmEvaluateIndexSpecifier @ 0x1405AE728 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A8B20 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x140533940 (longjmp.c)
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
