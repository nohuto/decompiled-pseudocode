/*
 * XREFs of PsRestoreImpersonation @ 0x140A48260
 * Callers:
 *     CmpAddRemoveContainerToCLFSLog @ 0x140862B64 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140863388 (CmpStartCLFSLog.c)
 *     NtOpenThreadTokenEx @ 0x140A47C40 (NtOpenThreadTokenEx.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     SeQueryTokenTrustLink @ 0x14049BC94 (SeQueryTokenTrustLink.c)
 *     PspWriteTebImpersonationInfo @ 0x140928FB0 (PspWriteTebImpersonationInfo.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KTHREAD *v17; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0;
  Token = (__int64)ImpersonationState->Token;
  v17 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v9);
      PsReferenceSiloContext((void *)Token);
      v17 = (struct _KTHREAD *)ImpersonationState->Token;
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
    Thread[1].WaitBlock[1].Thread = v17;
    *($353D57E818BB6F967B4B818D974CF463 *)((char *)&Thread[1].116 + 4) = ($353D57E818BB6F967B4B818D974CF463)v10;
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v15, v16);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    if ( v14 )
      ObfDereferenceObject(v14);
    if ( v5 )
      PspWriteTebImpersonationInfo((__int64)Thread, (__int64)CurrentThread);
  }
}
