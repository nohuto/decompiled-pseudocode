/*
 * XREFs of MiCreateExtendInfo @ 0x140997A0C
 * Callers:
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiCreateExtendInfo(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v5; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  bool v14; // zf
  $241382875694CED3D471BC5892DE3337 *v15; // rcx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 40);
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 40, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v8, (__int64)v5);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 8);
LABEL_8:
    v12 = *(_QWORD *)(a2 + 48);
    if ( *(_QWORD *)v11 < v12 )
      *(_QWORD *)v11 = v12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((unsigned __int64)v5);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 )
    {
      v15 = &CurrentThread->152;
      if ( ($241382875694CED3D471BC5892DE3337 *)v15->ApcState.ApcListHead[0].Flink != v15 )
        KiCheckForKernelApcDelivery((__int64)v15, v13);
    }
    return v11;
  }
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x10uLL, 2017684813, CurrentProcessorColor | 0x80000000);
  v11 = PoolMm;
  if ( PoolMm )
  {
    *(_DWORD *)(PoolMm + 8) = 1;
    *(_QWORD *)PoolMm = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), -1LL, -1LL);
    *(_QWORD *)(a1 + 32) = PoolMm;
    goto LABEL_8;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v20, v19);
  return 0LL;
}
