/*
 * XREFs of PsDisableImpersonation @ 0x140A64710
 * Callers:
 *     CmpAddRemoveContainerToCLFSLog @ 0x140862B64 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140863388 (CmpStartCLFSLog.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

BOOLEAN __stdcall PsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KLOCK_ENTRIES *v2; // r9
  char v3; // r14
  BOOLEAN result; // al
  unsigned __int64 *p_WaitBlockList; // rsi
  struct _KTHREAD *CurrentThread; // r15
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbp
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  void *v15; // rcx

  v3 = 0;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL, 0LL, v2);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v9, (__int64)p_WaitBlockList);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
    {
      v3 = 1;
      ImpersonationState->Level = *((_DWORD *)&Thread[1].0 + 1) & 3;
      ImpersonationState->EffectiveOnly = (*(_BYTE *)(&Thread[1].MiscFlags + 1) & 4) != 0;
      ImpersonationState->CopyOnOpen = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 2)) & 1;
      v12 = Thread[1].WaitBlock[1].Thread;
      if ( v12 )
      {
        ImpersonationState->Token = v12;
        v15 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        Thread[1].WaitBlock[1].Thread = 0LL;
        ObfDereferenceObject(v15);
      }
      else
      {
        ImpersonationState->Token = (PACCESS_TOKEN)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_WaitBlockList);
    KeAbPostRelease((unsigned __int64)p_WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14);
    if ( v3 )
      return 1;
  }
  ImpersonationState->Level = SecurityAnonymous;
  result = 0;
  *(_WORD *)&ImpersonationState->CopyOnOpen = 0;
  ImpersonationState->Token = 0LL;
  return result;
}
