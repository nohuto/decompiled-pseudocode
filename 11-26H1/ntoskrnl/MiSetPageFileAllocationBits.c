/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140404AF4
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x140405CC8 (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x140405E3C (MiFindFreePageFileSpace.c)
 *     MiModwriterConfirmMdl @ 0x140408738 (MiModwriterConfirmMdl.c)
 * Callees:
 *     RtlSetBits @ 0x140358D10 (RtlSetBits.c)
 */

__int64 __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 result; // rax

  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 80) + 8LL), a2, a3);
  result = *(_DWORD *)(a1 + 12) - a3;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
