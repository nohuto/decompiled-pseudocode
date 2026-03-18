/*
 * XREFs of VmpPauseResumeNotify @ 0x14081CC04
 * Callers:
 *     VmPauseResumeNotify @ 0x14081C0E0 (VmPauseResumeNotify.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     SmStoreExistsForProcess @ 0x140513B48 (SmStoreExistsForProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 */

__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi
  unsigned int v13; // eax
  int v14; // esi
  int v15; // esi
  struct _KLOCK_ENTRIES *v16; // r9
  int i; // r14d
  struct _KTHREAD *v18; // rax
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // r14
  unsigned int v22; // ecx

  v4 = (unsigned __int64 *)(a1 + 160);
  v7 = 4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire(a1 + 160, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v10, (__int64)v4);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = *(_DWORD *)(a1 + 168);
  if ( (v13 & 1) != 0 )
  {
    v14 = -1073740682;
    goto LABEL_38;
  }
  v15 = (v13 >> 1) & 3;
  if ( a2 )
  {
    if ( v15 >= a2 )
    {
      v14 = -1073741811;
      goto LABEL_38;
    }
  }
  else if ( !v15 )
  {
    v14 = 1075380276;
    goto LABEL_38;
  }
  *(_DWORD *)(a1 + 168) = v13 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  KeLeaveCriticalRegion();
  if ( a2 )
  {
    for ( i = v15 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v7 = a2;
        goto LABEL_29;
      }
      if ( i == 1 )
      {
        if ( ((*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].Spare0d >> 8) & 0xFFFFFFFFFFFuLL) > (unsigned int)VmPauseOutswapSizeCapMB )
          continue;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || *(_DWORD *)(MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 1300) == -1 && i != 3 )
        {
          continue;
        }
        SmStoreExistsForProcess((unsigned __int64)KeGetCurrentThread()->ApcState.Process);
      }
      v14 = MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL);
      if ( v14 < 0 )
        goto LABEL_30;
    }
  }
  MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL);
  v7 = 0;
LABEL_29:
  v14 = 0;
LABEL_30:
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v19 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, v16);
  v21 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v19, (__int64)v4);
  if ( v21 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v21, v20);
    else
      *((_BYTE *)v21 + 10) = 1;
  }
  v22 = *(_DWORD *)(a1 + 168) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 168) = v22;
  if ( v7 != 4 )
    *(_DWORD *)(a1 + 168) = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(2 * v7)) & 6;
LABEL_38:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  KeLeaveCriticalRegion();
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
