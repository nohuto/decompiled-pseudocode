/*
 * XREFs of PsImpersonateClient @ 0x140928820
 * Callers:
 *     CmpCmdHiveOpen @ 0x1408B4674 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     AlpcpImpersonateMessage @ 0x1409281A0 (AlpcpImpersonateMessage.c)
 *     PsRevertThreadToSelf @ 0x1409286B0 (PsRevertThreadToSelf.c)
 *     SeImpersonateClientEx @ 0x1409286E0 (SeImpersonateClientEx.c)
 *     PsAssignImpersonationToken @ 0x140928740 (PsAssignImpersonationToken.c)
 *     PsRevertToSelf @ 0x140A17630 (PsRevertToSelf.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1402563E0 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140257DB0 (EtwpTiFillProcessIdentity.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140260160 (SepSetProcessTrustLabelAceForToken.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EtwpTiFillThreadIdentity @ 0x1404A21B8 (EtwpTiFillThreadIdentity.c)
 *     SeSetTokenTrustLink @ 0x1404A2D14 (SeSetTokenTrustLink.c)
 *     PsIsProcessLoggingEnabled @ 0x1404AA304 (PsIsProcessLoggingEnabled.c)
 *     SeQueryTokenTrustSid @ 0x1404BBB30 (SeQueryTokenTrustSid.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SepFinalizeTokenAcls @ 0x140926FDC (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140927020 (SepAppendAceToTokenObjectAcl.c)
 *     PspWriteTebImpersonationInfo @ 0x140928FB0 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x140929184 (SeTokenCanImpersonate.c)
 *     EtwTiLogImpersonateClient @ 0x1409294AC (EtwTiLogImpersonateClient.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     RtlCopySid @ 0x140A2AE10 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  AutoBoost *v25; // rax
  void *v26; // rdx
  AutoBoost *v27; // rbx
  struct _KTHREAD *v28; // r11
  bool v29; // zf
  int v30; // ecx
  NTSTATUS inserted; // r15d
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  _QWORD *v34; // r13
  _WORD *v35; // r8
  int v36; // eax
  int v37; // eax
  int v38; // r9d
  PVOID v40; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h]
  PSID SourceSid; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v43; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v44[4]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v45; // [rsp+98h] [rbp-68h]
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
    v25 = (AutoBoost *)KeAbPreAcquire(
                         (__int64)&Thread[1].WaitBlockList,
                         0LL,
                         0LL,
                         (struct _KLOCK_ENTRIES *)EffectiveOnly);
    v27 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
      ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v25, (__int64)p_WaitBlockList);
    if ( v27 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v27, v26);
      else
        *((_BYTE *)v27 + 10) = 1;
    }
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v20 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Object = Thread[1].WaitBlock[1].Thread;
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
      if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)Process, (__int64)Process, 256) )
      {
        v43 = v28;
        if ( EtwEventEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, &THREATINT_PROCESS_IMPERSONATION_REVERT) )
        {
          if ( EtwProviderEnabled(*(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount, 0, 0x8000000000uLL) )
          {
            v36 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, (unsigned __int64 *)&v43);
            v37 = EtwpTiFillThreadIdentity(&UserData[v36].Ptr, (__int64)Thread);
            EtwWrite(
              *(REGHANDLE *)&EtwpSecurityLock.AbWaitEntryCount,
              &THREATINT_PROCESS_IMPERSONATION_REVERT,
              0LL,
              v37 + v38,
              UserData);
          }
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_WaitBlockList);
LABEL_25:
    KeAbPostRelease((unsigned __int64)p_WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v22, v23);
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
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
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
    *($353D57E818BB6F967B4B818D974CF463 *)((char *)&Thread[1].116 + 4) = ($353D57E818BB6F967B4B818D974CF463)v16;
    if ( CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)Process, (__int64)Process, 256) )
      EtwTiLogImpersonateClient(Process, Thread, v20, v8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    CurrentThread = v43;
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
  v29 = *(_DWORD *)(v8 + 192) == 2;
  v30 = 1;
  LODWORD(Object) = 1;
  if ( v29 )
  {
    if ( *(int *)(v8 + 196) < 1 )
      v30 = *(_DWORD *)(v8 + 196);
    LODWORD(Object) = v30;
  }
  v44[0] = 48LL;
  v40 = 0LL;
  memset(&v44[1], 0, 24);
  v45 = 0LL;
  inserted = SepDuplicateToken(v8, (unsigned int)v44, 0, 2, v30, 0, 0, (__int64)&v40);
  if ( inserted < 0 )
    goto LABEL_46;
  inserted = ObInsertObjectEx(v40, 0LL, 0LL, 0LL, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_46;
  v34 = v40;
  if ( (*((_DWORD *)v40 + 50) & 0x4000) != 0 )
  {
    v35 = (_WORD *)*((_QWORD *)v40 + 98);
    if ( v35 )
    {
      inserted = SepAppendAceToTokenObjectAcl((__int64)v40, 983551, v35, v11);
      if ( inserted < 0 )
      {
        ObfDereferenceObject(v40);
LABEL_46:
        v8 = 0LL;
        goto LABEL_47;
      }
      v34 = v40;
    }
  }
  if ( (int)SepAppendAceToTokenObjectAcl((__int64)v34, 8, SeAliasAdminsSid, v11) >= 0 )
    SepSetProcessTrustLabelAceForToken(v34);
  v8 = (unsigned __int64)v40;
LABEL_47:
  if ( inserted >= 0 )
  {
    v6 = 1;
    goto LABEL_4;
  }
  _m_prefetchw(&Process[1].ActiveProcessors);
  v32 = (signed __int64)Process[1].ActiveProcessors;
  do
  {
    if ( (v10 ^ v32) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v10, 0x746C6644u);
      return inserted;
    }
    v33 = v32;
    v32 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].ActiveProcessors, v32 + 1, v32);
  }
  while ( v33 != v32 );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v10 - 48, -1, 0x746C6644u);
  return inserted;
}
