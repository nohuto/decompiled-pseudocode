/*
 * XREFs of MiCreatePfnDatabase @ 0x140CF8B98
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiCreatePartitionOffsets @ 0x14086F090 (MiCreatePartitionOffsets.c)
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x140CF7504 (MiInitializeNumaGraph.c)
 *     MxCreateSparsePfnDatabase @ 0x140CFC864 (MxCreateSparsePfnDatabase.c)
 *     MiInitializePartitions @ 0x140CFF024 (MiInitializePartitions.c)
 *     MiQueryHardwareCacheInformation @ 0x140D05588 (MiQueryHardwareCacheInformation.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx

  MiQueryHardwareCacheInformation();
  qword_140E2D904 = 0x10000000100LL;
  dword_140E2D90C = 256;
  v2 = 256;
  if ( dword_140E2D900[0] <= 0x100u )
  {
    v2 = dword_140E2D900[0];
    if ( dword_140E2D900[0] < 0x20u )
      v2 = 32;
  }
  dword_140E2D900[0] = v2;
  v3 = qword_140E2D920 + 1;
  if ( qword_140E34930 == qword_140E2D920 + 1 )
    v3 = qword_140E2D920 + 2049;
  v4 = 48 * v3;
  qword_140E2D838 = 48 * v3;
  qword_140E2D810 = 48 * v3 + 384LL * (unsigned __int16)KeNumberNodes;
  qword_140E34B58 = (qword_140E2D810 + 4LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = (qword_140E34B58 + 360LL * (unsigned __int16)KeNumberNodes + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)&stru_140E2ED08.CurrentRunTime = v5;
  stru_140E2ED08.KernelStack = (void *)MiCreatePartitionOffsets(0LL, 0LL);
  v6 = (__int64)stru_140E2ED08.KernelStack + v5;
  v7 = ((unsigned __int64)stru_140E2ED08.KernelStack + v5) / 0x30;
  v8 = v7 + 1;
  if ( (char *)stru_140E2ED08.KernelStack + v5 == (void *)(48 * v7) )
    v8 = ((unsigned __int64)stru_140E2ED08.KernelStack + v5) / 0x30;
  if ( v8 + 2048 <= 0xFFFFFFFFFELL )
  {
    qword_140E34930 = v8;
    v6 = 48 * (v8 + 2048);
  }
  v9 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  qword_140E2D880 = v9 >> 12;
  qword_140E2D888 = (v9 - v4) >> 12;
  MmPfnDatabase = 0xFFFFDE0000000000uLL;
  qword_140E2D890 = v9 - 0x220000000000LL;
  qword_140E2D838 -= 0x220000000000LL;
  qword_140E2D810 -= 0x220000000000LL;
  qword_140E34B58 -= 0x220000000000LL;
  *(_QWORD *)&stru_140E2ED08.CurrentRunTime -= 0x220000000000LL;
  MiCreatePartitionOffsets(&MiSystemPartition, *(__int64 *)&stru_140E2ED08.CurrentRunTime);
  MxCreateSparsePfnDatabase(a1);
  MiInitializePartitions(0LL);
  MiInitializePartition(&MiSystemPartition, 0);
  return MiInitializeNumaGraph(a1);
}
