/*
 * XREFs of XmGetLongImmediate @ 0x1405695F0
 * Callers:
 *     XmMoveRegImmediate @ 0x14046A5B0 (XmMoveRegImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x14046A7D4 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x14046A9BC (XmGetImmediateSourceValue.c)
 *     XmAccumImmediate @ 0x14046AA10 (XmAccumImmediate.c)
 *     XmImmediateJump @ 0x140572000 (XmImmediateJump.c)
 *     XmLongJump @ 0x1405721A0 (XmLongJump.c)
 *     XmSegmentOffset @ 0x140572470 (XmSegmentOffset.c)
 *     XmEvaluateIndexSpecifier @ 0x140574338 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x14046AC70 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1404F9210 (longjmp.c)
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
