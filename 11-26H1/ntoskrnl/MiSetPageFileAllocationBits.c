/*
 * XREFs of MiSetPageFileAllocationBits @ 0x1403FDBF4
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x1403FEDBC (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 *     MiModwriterConfirmMdl @ 0x140401828 (MiModwriterConfirmMdl.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 */

__int64 __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 result; // rax

  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 80) + 8LL), a2, a3);
  result = *(_DWORD *)(a1 + 12) - a3;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
