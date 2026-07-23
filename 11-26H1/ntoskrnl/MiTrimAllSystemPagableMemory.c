/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x14044EF98
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x1406FCC10 (MmTrimAllSystemPagableMemory.c)
 *     MmShutdownSystem @ 0x140C06930 (MmShutdownSystem.c)
 *     MmVerifierTrimMemory @ 0x140C497C8 (MmVerifierTrimMemory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiPurgePartitionStandby @ 0x140461F1C (MiPurgePartitionStandby.c)
 *     MiEmptyThisWorkingSet @ 0x1404FA1B4 (MiEmptyThisWorkingSet.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1)
{
  _DWORD *v1; // r14
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 AnyMultiplexedVm; // rax
  int v6; // edx
  unsigned int v7; // r9d
  _DWORD *v8; // r8
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  __int64 v13; // r13
  int v14; // eax
  bool v15; // zf
  $241382875694CED3D471BC5892DE3337 *v16; // rcx

  v1 = &unk_140E36228;
  v3 = 0;
  v4 = 0LL;
  do
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm((unsigned int)v4, v4);
    if ( *v8 != *(_DWORD *)(AnyMultiplexedVm + 4) )
      v3 |= v7 << v6;
    v4 = v7 + v6;
  }
  while ( (int)v4 <= 3 );
  if ( !v3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( v7 + _InterlockedExchangeAdd(&dword_140E36204, v7) == v7 )
  {
    v11 = v7;
    _InterlockedExchange64(&qword_140E36238, (__int64)KeGetCurrentThread());
    v12 = 0;
    do
    {
      if ( ((unsigned __int8)v3 & (unsigned __int8)v7) != 0 )
      {
        v13 = MiGetAnyMultiplexedVm(v12, v4);
        v14 = MiEmptyThisWorkingSet(v13);
        v7 = v11;
        if ( v14 )
          *v1 = *(_DWORD *)(v13 + 4);
      }
      v12 += v7;
      ++v1;
      v3 >>= 1;
    }
    while ( v3 );
    if ( a1 )
    {
      MiPurgePartitionStandby(&MiSystemPartition, 8LL, 0LL);
      LOWORD(v7) = v11;
    }
    _InterlockedExchange64(&qword_140E36238, 0LL);
  }
  _InterlockedDecrement(&dword_140E36204);
  v15 = (_WORD)v7 + CurrentThread->SpecialApcDisable == 0;
  CurrentThread->SpecialApcDisable += v7;
  if ( v15 )
  {
    v16 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v16->ApcState.ApcListHead[0].Flink != v16 )
      KiCheckForKernelApcDelivery((__int64)v16, v4);
  }
  return v11;
}
