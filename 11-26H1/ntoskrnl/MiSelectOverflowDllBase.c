/*
 * XREFs of MiSelectOverflowDllBase @ 0x140B4B79C
 * Callers:
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiImageCanUseHighOverflowArea @ 0x140B4B980 (MiImageCanUseHighOverflowArea.c)
 */

__int64 __fastcall MiSelectOverflowDllBase(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r14d
  int v5; // r8d
  int CanUseHighOverflowArea; // r11d
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx
  __int64 *p_WaitStatus; // rcx
  __int64 v13; // r12
  __int64 *v14; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v16; // r13
  AutoBoost *v17; // rax
  void *v18; // rdx
  signed __int8 v19; // cf
  AutoBoost *v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // rdx
  $241382875694CED3D471BC5892DE3337 *v24; // rcx

  v3 = *(_DWORD *)(a1 + 8);
  CanUseHighOverflowArea = MiImageCanUseHighOverflowArea(a1, a2, a3);
  v7 = ((v3 << 12) + 0xFFFF) & 0xFFFF0000;
  v8 = CanUseHighOverflowArea != 0 ? 0x10000000LL : 0x4000000LL;
  if ( v7 > v8 )
  {
    v9 = (unsigned __int8)ExGenRandom(1, v8) << 16;
    if ( a2 >= 0x1010000 )
    {
      v10 = v7 + a2;
      if ( v7 + a2 <= a2 )
      {
        if ( v7 || v10 >= 0x7FFFFFFF0000LL )
          return v9 + 0x10000LL;
        return a2 - v9;
      }
      if ( v10 <= 0x7FFFFFFF0000LL )
        return a2 - v9;
    }
    return v9 + 0x10000LL;
  }
  p_WaitStatus = (__int64 *)&stru_140E2D2D0.152;
  if ( v5 == 3 )
    p_WaitStatus = (__int64 *)&stru_140E2D2D0.WaitStatus;
  v13 = *p_WaitStatus;
  v14 = p_WaitStatus + 1;
  if ( CanUseHighOverflowArea )
  {
    v13 = p_WaitStatus[2];
    v14 = p_WaitStatus + 3;
  }
  CurrentThread = KeGetCurrentThread();
  v16 = v8 + v13;
  --CurrentThread->SpecialApcDisable;
  v17 = (AutoBoost *)KeAbPreAcquire(
                       (__int64)&stru_140E2D2D0.116 + 4,
                       0LL,
                       0LL,
                       (struct _KLOCK_ENTRIES *)(unsigned int)-CanUseHighOverflowArea);
  v19 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E2D2D0.116 + 1, 0LL);
  v20 = v17;
  if ( v19 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)((char *)&stru_140E2D2D0.116 + 4),
      v17,
      (__int64)&stru_140E2D2D0.116 + 4);
  if ( v20 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v20, v18);
    else
      *((_BYTE *)v20 + 10) = 1;
  }
  v21 = *v14;
  if ( v7 > v16 - *v14 )
    v21 = v13;
  *v14 = v7 + v21;
  if ( v7 + v21 == v16 )
    *v14 = v13;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)((char *)&stru_140E2D2D0.116 + 4), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)((char *)&stru_140E2D2D0.116 + 4));
  KeAbPostRelease((unsigned __int64)&stru_140E2D2D0.116 + 4);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v24 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v24->ApcState.ApcListHead[0].Flink != v24 )
      KiCheckForKernelApcDelivery((__int64)v24, v22);
  }
  return v21;
}
