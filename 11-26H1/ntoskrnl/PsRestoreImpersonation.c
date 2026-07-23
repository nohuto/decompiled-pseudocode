/*
 * XREFs of PsRestoreImpersonation @ 0x140A51550
 * Callers:
 *     CmpAddRemoveContainerToCLFSLog @ 0x140868F44 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140869768 (CmpStartCLFSLog.c)
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SeQueryTokenTrustLink @ 0x1404957E4 (SeQueryTokenTrustLink.c)
 *     PspWriteTebImpersonationInfo @ 0x140904AC0 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KLOCK_ENTRIES *v2; // r9
  struct _KTHREAD *CurrentThread; // r12
  void *v4; // r15
  signed __int8 v5; // r13
  __int64 Token; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbp
  struct _KTHREAD *v14; // rbp
  struct _KTHREAD *v15; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0;
  Token = (__int64)ImpersonationState->Token;
  v15 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v9);
      PsReferenceSiloContext((void *)Token);
      v15 = (struct _KTHREAD *)ImpersonationState->Token;
    }
    v10 = Token & 0xFFFFFFFFFFFFFFF8uLL | (ImpersonationState->EffectiveOnly != 0 ? 4 : 0) | (unsigned __int64)(ImpersonationState->Level & 3);
  }
  else
  {
    v10 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL, 0LL, v2);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Thread[1].WaitBlockList, v11, (__int64)&Thread[1].WaitBlockList);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v14 = Thread[1].WaitBlock[1].Thread;
    v4 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  else
  {
    v14 = 0LL;
  }
  if ( ImpersonationState->Token )
  {
    Thread[1].WaitBlock[1].Thread = v15;
    *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&Thread[1].116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)v10;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
  }
  else
  {
    v5 = _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((unsigned __int64)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    if ( v14 )
      ObfDereferenceObject(v14);
    if ( v5 )
      PspWriteTebImpersonationInfo((__int64)Thread, (__int64)CurrentThread);
  }
}
