/*
 * XREFs of PsImpersonateClient @ 0x140904330
 * Callers:
 *     CmpCmdHiveOpen @ 0x1408BAC48 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     AlpcpImpersonateMessage @ 0x140903CB0 (AlpcpImpersonateMessage.c)
 *     PsRevertThreadToSelf @ 0x1409041C0 (PsRevertThreadToSelf.c)
 *     SeImpersonateClientEx @ 0x1409041F0 (SeImpersonateClientEx.c)
 *     PsAssignImpersonationToken @ 0x140904250 (PsAssignImpersonationToken.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 *     PsRevertToSelf @ 0x140AE5830 (PsRevertToSelf.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140406340 (SepSetProcessTrustLabelAceForToken.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     SeSetTokenTrustLink @ 0x14049C734 (SeSetTokenTrustLink.c)
 *     PsIsProcessLoggingEnabled @ 0x1404A3994 (PsIsProcessLoggingEnabled.c)
 *     SeQueryTokenTrustSid @ 0x1404B5310 (SeQueryTokenTrustSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SepFinalizeTokenAcls @ 0x140902AEC (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140902B30 (SepAppendAceToTokenObjectAcl.c)
 *     PspWriteTebImpersonationInfo @ 0x140904AC0 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 *     EtwTiLogImpersonateClient @ 0x140904FBC (EtwTiLogImpersonateClient.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  _KPROCESS *Process; // r14
  char v6; // r15
  unsigned __int64 v8; // r13
  ULONG_PTR v10; // r12
  struct _KLOCK_ENTRIES *v11; // r9
  signed __int64 ActiveProcessors; // rax
  signed __int64 v13; // rtt
  unsigned __int64 *p_WaitBlockList; // r15
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // r12
  void *v20; // r12
  struct _KTHREAD *CurrentThread; // rdi
  AutoBoost *v23; // rax
  void *v24; // rdx
  AutoBoost *v25; // rbx
  struct _KTHREAD *v26; // r11
  bool v27; // zf
  int v28; // ecx
  NTSTATUS inserted; // r15d
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  _QWORD *v32; // r13
  _WORD *v33; // r8
  int v34; // eax
  int v35; // eax
  int v36; // r9d
  PVOID v38; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h]
  PSID SourceSid; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v41; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v42[4]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v43; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+E0h] [rbp-20h] BYREF

  Process = Thread->Process;
  v6 = 0;
  SourceSid = 0LL;
  v8 = (unsigned __int64)Token;
  if ( !Token )
  {
    v20 = 0LL;
    Object = 0LL;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
    --CurrentThread->KernelApcDisable;
    v23 = (AutoBoost *)KeAbPreAcquire(
                         (__int64)&Thread[1].WaitBlockList,
                         0LL,
                         0LL,
                         (struct _KLOCK_ENTRIES *)EffectiveOnly);
    v25 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v23, (__int64)p_WaitBlockList);
    if ( v25 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v25, v24);
      else
        *((_BYTE *)v25 + 10) = 1;
    }
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v20 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Object = Thread[1].WaitBlock[1].Thread;
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
      if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)Process, (__int64)Process, 256) )
      {
        v41 = v26;
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_IMPERSONATION_REVERT) )
        {
          if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000000uLL) )
          {
            v34 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, (unsigned __int64 *)&v41);
            v35 = EtwpTiFillThreadIdentity(&UserData[v34].Ptr, (__int64)Thread);
            EtwWrite(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_IMPERSONATION_REVERT, 0LL, v35 + v36, UserData);
          }
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_WaitBlockList);
LABEL_25:
    KeAbPostRelease((unsigned __int64)p_WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    PspWriteTebImpersonationInfo(Thread, CurrentThread);
    if ( v20 )
      ObfDereferenceObjectWithTag(v20, 0x746C6644u);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return 0;
  }
  v10 = PsReferencePrimaryTokenWithTag(
          (__int64)Process,
          0x746C6644u,
          CopyOnOpen,
          (struct _KLOCK_ENTRIES *)EffectiveOnly);
  LODWORD(Object) = ImpersonationLevel;
  if ( !v10 )
  {
LABEL_10:
    PsReferenceSiloContext((void *)v8);
LABEL_11:
    p_WaitBlockList = (unsigned __int64 *)&Thread[1].WaitBlockList;
    v15 = (unsigned __int8)Object & 3 | (4LL * (EffectiveOnly & 1));
    v41 = KeGetCurrentThread();
    --v41->KernelApcDisable;
    v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL | v15;
    v17 = (AutoBoost *)KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL, 0LL, v11);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&Thread[1].WaitBlockList,
        v17,
        (__int64)&Thread[1].WaitBlockList);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v20 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Object = Thread[1].WaitBlock[1].Thread;
      Thread[1].WaitBlock[1].Thread = 0LL;
    }
    else
    {
      v20 = 0LL;
      Object = 0LL;
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
    }
    Thread[1].WaitBlock[1].Thread = (struct _KTHREAD *)SourceSid;
    *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&Thread[1].116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)v16;
    if ( CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)Process, (__int64)Process, 256) )
      EtwTiLogImpersonateClient(Process, Thread, v20, v8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    CurrentThread = v41;
    goto LABEL_25;
  }
  if ( (int)SeTokenCanImpersonate((PACCESS_TOKEN)v10, (PACCESS_TOKEN)v8) >= 0 )
  {
LABEL_4:
    _m_prefetchw(&Process[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
    do
    {
      if ( (v10 ^ ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v10, 0x746C6644u);
        goto LABEL_9;
      }
      v13 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&Process[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v13 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v10 - 48, -1, 0x746C6644u);
LABEL_9:
    if ( v6 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v27 = *(_DWORD *)(v8 + 192) == 2;
  v28 = 1;
  LODWORD(Object) = 1;
  if ( v27 )
  {
    if ( *(int *)(v8 + 196) < 1 )
      v28 = *(_DWORD *)(v8 + 196);
    LODWORD(Object) = v28;
  }
  v42[0] = 48LL;
  v38 = 0LL;
  memset(&v42[1], 0, 24);
  v43 = 0LL;
  inserted = SepDuplicateToken(v8, (unsigned int)v42, 0, 2, v28, 0, 0, (__int64)&v38);
  if ( inserted < 0 )
    goto LABEL_46;
  inserted = ObInsertObjectEx(v38, 0LL, 0LL, 0LL, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_46;
  v32 = v38;
  if ( (*((_DWORD *)v38 + 50) & 0x4000) != 0 )
  {
    v33 = (_WORD *)*((_QWORD *)v38 + 98);
    if ( v33 )
    {
      inserted = SepAppendAceToTokenObjectAcl((__int64)v38, 983551, v33, v11);
      if ( inserted < 0 )
      {
        ObfDereferenceObject(v38);
LABEL_46:
        v8 = 0LL;
        goto LABEL_47;
      }
      v32 = v38;
    }
  }
  if ( (int)SepAppendAceToTokenObjectAcl((__int64)v32, 8, SeAliasAdminsSid, v11) >= 0 )
    SepSetProcessTrustLabelAceForToken(v32);
  v8 = (unsigned __int64)v38;
LABEL_47:
  if ( inserted >= 0 )
  {
    v6 = 1;
    goto LABEL_4;
  }
  _m_prefetchw(&Process[1].ActiveProcessors);
  v30 = (signed __int64)Process[1].ActiveProcessors;
  do
  {
    if ( (v10 ^ v30) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v10, 0x746C6644u);
      return inserted;
    }
    v31 = v30;
    v30 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].ActiveProcessors, v30 + 1, v30);
  }
  while ( v31 != v30 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v10 - 48, -1, 0x746C6644u);
  return inserted;
}
