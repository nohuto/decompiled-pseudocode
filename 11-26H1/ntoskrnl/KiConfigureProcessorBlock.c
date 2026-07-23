/*
 * XREFs of KiConfigureProcessorBlock @ 0x140BF9A10
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140BFB030 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x140404550 (KeIsEmptyGroupMask.c)
 *     KeSetBitGroupMask @ 0x1404D3960 (KeSetBitGroupMask.c)
 */

unsigned __int64 __fastcall KiConfigureProcessorBlock(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // edi
  char v3; // dl
  unsigned int v4; // edi
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  int v10; // eax

  v1 = *(_QWORD *)(a1 + 192);
  v2 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + *(unsigned int *)(a1 + 36));
  v3 = v2 & 0x3F;
  v4 = v2 >> 6;
  v5 = *(_QWORD *)(v1 + 128) | (1LL << v3);
  _BitScanForward64(&v6, v5);
  *(_QWORD *)(v1 + 128) = v5;
  *(_BYTE *)(v1 + 124) = v6;
  _BitScanReverse64(&v7, v5);
  *(_DWORD *)(v1 + 176) = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v4].Flink
                          + (unsigned int)v6);
  result = v5 - 1;
  *(_DWORD *)(v1 + 180) = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v4].Flink
                          + (unsigned int)v7);
  if ( ((v5 - 1) & v5) == 0 )
  {
    v9 = KeNodeBlock[*(unsigned __int16 *)(v1 + 138)];
    LOBYTE(v10) = KeIsEmptyGroupMask((unsigned __int64 *)(v9 + 16));
    if ( v10 )
      *(_BYTE *)(v9 + 12) = v4;
    KeSetBitGroupMask(v9 + 16, v4);
    result = (unsigned int)(*(_DWORD *)(v9 + 48) + 1);
    *(_DWORD *)(v9 + 48) = result;
  }
  return result;
}
