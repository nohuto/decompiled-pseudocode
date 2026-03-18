/*
 * XREFs of XmGetOffsetAddress @ 0x140574594
 * Callers:
 *     XmGroup45General @ 0x14046A030 (XmGroup45General.c)
 *     XmGeneralBitOffset @ 0x140571C10 (XmGeneralBitOffset.c)
 *     XmGroup8BitOffset @ 0x140571F00 (XmGroup8BitOffset.c)
 *     XmLoadSegment @ 0x1405720D0 (XmLoadSegment.c)
 *     XmSegmentOffset @ 0x140572470 (XmSegmentOffset.c)
 *     XmXlatOpcode @ 0x1405725C0 (XmXlatOpcode.c)
 *     XmBoundOp @ 0x140573CF0 (XmBoundOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x14046AC70 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1404F9210 (longjmp.c)
 */

int *__fastcall XmGetOffsetAddress(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d

  v2 = *(unsigned int *)(a1 + 116);
  v3 = *(unsigned __int16 *)(a1 + 2 * v2 + 68);
  if ( a2 > v3 || a2 + *(_DWORD *)(a1 + 120) > v3 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return x86BiosTranslateAddress(*(_WORD *)(a1 + 2 * v2 + 56), a2);
}
