/*
 * XREFs of PsReferencePrimaryTokenWithTag @ 0x140279330
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1403ABB50 (SepReferenceTokenByHandle.c)
 *     RtlpQueryLowBoxId @ 0x14045AF90 (RtlpQueryLowBoxId.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x140791B6C (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     SeAuditProcessExit @ 0x140818810 (SeAuditProcessExit.c)
 *     CmpCreateRegistryProcessToken @ 0x14085D1A0 (CmpCreateRegistryProcessToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408EF444 (AlpcpCheckConnectionSecurity.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     EtwpBuildProcessEvent @ 0x1408FBCAC (EtwpBuildProcessEvent.c)
 *     AlpcpImpersonateMessage @ 0x140903CB0 (AlpcpImpersonateMessage.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x140904FBC (EtwTiLogImpersonateClient.c)
 *     SeCreateClientSecurity @ 0x140905390 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1409055F0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1409058A0 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     EtwpApplyPackageIdFilter @ 0x140913700 (EtwpApplyPackageIdFilter.c)
 *     PspCombineSecurityDomains @ 0x14091CFB8 (PspCombineSecurityDomains.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140923720 (MiIsUserQueryVmCallerTrusted.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     SeAuditProcessCreation @ 0x140945DFC (SeAuditProcessCreation.c)
 *     SeCreateAccessStateEx @ 0x1409463F0 (SeCreateAccessStateEx.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     MmCreateSectionEx @ 0x14098B2D0 (MmCreateSectionEx.c)
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1409C9978 (ExpWnfQueryCurrentUserSID.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1409C9B4C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     EtwpPsProvTraceProcess @ 0x1409CE5FC (EtwpPsProvTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     PfSnCheckModernApp @ 0x1409D34B4 (PfSnCheckModernApp.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     PsQueryProcessAttributes @ 0x1409DD970 (PsQueryProcessAttributes.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409E7AE4 (PspDisablePrimaryTokenExchange.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140A21FFC (ObpSetCurrentProcessDeviceMap.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A4FC60 (EtwpGetSidExtendedHeaderItem.c)
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 *     PsReferencePrimaryToken @ 0x140A52220 (PsReferencePrimaryToken.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A7D6D8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtOpenProcessTokenEx @ 0x140A87780 (NtOpenProcessTokenEx.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A94144 (PspGetNoChildProcessRestrictedPolicy.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 *     MiInitializeVsmEnclave @ 0x140AB8C78 (MiInitializeVsmEnclave.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140AB918C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140AB9228 (SepIsSiblingTokenByPointer.c)
 *     PspReferenceTokenForNewProcess @ 0x140ADA368 (PspReferenceTokenForNewProcess.c)
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140AFEDF8 (EtwpAcquireTokenAccessInformation.c)
 *     PspGetRedirectionTrustPolicy @ 0x140B002E4 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140B040DC (PspSetRedirectionTrustPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140B40E18 (PspSetNoChildProcessRestrictedPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140B52BC8 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspInitializeProcessSecurity @ 0x140B80FF8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall PsReferencePrimaryTokenWithTag(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 v6; // r8
  signed __int64 v7; // rax
  ULONG_PTR v8; // rbp
  unsigned int v9; // r8d
  int v10; // r13d
  ULONG_PTR v11; // r14
  LegacyAutoBoost *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KTHREAD *v16; // r10
  unsigned __int64 v17; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v19; // r9
  unsigned int v20; // r11d
  __int64 *v21; // rsi
  char v22; // al
  __int64 v23; // rcx
  char v24; // r8
  __int64 v25; // rax
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v30; // al
  signed __int8 v31; // tt
  signed __int8 v32; // al
  signed __int8 v33; // tt
  char v34; // dl
  __int64 v35; // rbx
  struct _KPRCB *v36; // rcx
  unsigned __int32 *v37; // r8
  struct _KTHREAD *v39; // rdx
  char *v40; // r10
  unsigned int v41; // r8d
  __int64 v42; // r9
  LegacyAutoBoost *v43; // rcx
  unsigned __int32 v44; // eax
  unsigned __int32 v45; // ett
  unsigned __int32 v46; // eax
  __int64 v47; // rdx
  unsigned __int32 v48; // ett
  struct _KPRCB *v49; // rcx
  unsigned __int32 *v50; // r8
  unsigned __int32 v51; // eax
  __int64 v52; // rdx
  unsigned __int32 v53; // ett
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+8h]

  _m_prefetchw((const void *)(a1 + 584));
  v6 = *(_QWORD *)(a1 + 584);
  if ( (v6 & 0xF) != 0 )
  {
    do
    {
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 584), v6 - 1, v6);
      if ( v6 == v7 )
        break;
      v6 = v7;
    }
    while ( (v7 & 0xF) != 0 );
  }
  v8 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = v6 & 0xF;
  v10 = 1;
  if ( v9 > 1 )
    goto LABEL_4;
  if ( v9 )
  {
    v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 48), 0xFuLL);
    if ( v25 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v8, 0x10uLL, v25 + 15);
    _m_prefetchw((const void *)(a1 + 584));
    v26 = *(_QWORD *)(a1 + 584);
    while ( (v26 & 0xF) == 0 && v8 == (v26 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v27 = v26;
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 584), v26 + 15, v26);
      if ( v27 == v26 )
        goto LABEL_4;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v8 - 48), 0xFFFFFFFFFFFFFFF1uLL);
LABEL_4:
    ObpTraceObjectReferenceIfActive(v8 - 48, 1, a2);
    if ( v8 )
      return v8;
  }
  v11 = a1 + 456;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 456, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 456), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 456), 0, v12, (struct _KTHREAD *)(a1 + 456));
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v12 + 33) |= 2u;
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v8 = *(_QWORD *)(a1 + 584) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v8 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 584) & 0xFFFFFFFFFFFFFFF0uLL), a2);
  v13 = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 456));
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    v14 = 0LL;
    CurrentIrql = -1;
    _disable();
    v16 = KeGetCurrentThread();
    v17 = 0LL;
    AutoBoostThreadState = (__int64 *)v16->AutoBoostThreadState;
    v19 = *AutoBoostThreadState;
    v20 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
    while ( 1 )
    {
      if ( (unsigned int)v17 >= v20 )
      {
        if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, a1 + 456, 0LL, 0LL);
        goto LABEL_49;
      }
      v21 = (__int64 *)(v19 + 48LL * (unsigned int)v17 + 16);
      v22 = *((_BYTE *)v21 + 33);
      if ( (v22 & 0x10) == 0 )
      {
        v23 = *v21;
        v24 = v21[4] & 2;
        if ( v24 )
          v23 = *(_QWORD *)(v23 + 24);
        if ( v23 == v11 && (v22 & 2) != 0 )
          break;
      }
      v17 = (unsigned int)(v17 + 1);
    }
    v14 = v19 + 48LL * (unsigned int)v17 + 16;
    *((_BYTE *)v21 + 33) = v22 & 0xFC | 1;
    if ( v24 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v17) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v17);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v44 = *SchedulerAssist;
        do
        {
          v17 = v44;
          LODWORD(v17) = v44 & 0xFFDFFFFF;
          v45 = v44;
          v44 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v44 & 0xFFDFFFFF, v44);
        }
        while ( v45 != v44 );
        if ( (v44 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v17, SchedulerAssist, v19);
      }
      _enable();
      v10 = 0;
      _m_prefetchw((char *)v21 + 35);
      v30 = *((_BYTE *)v21 + 35);
      do
      {
        v31 = v30;
        v30 = _InterlockedCompareExchange8((volatile signed __int8 *)v21 + 35, v30 | 1, v30);
      }
      while ( v31 != v30 );
      if ( (v30 & 1) != 0 )
      {
        do
        {
          while ( (*((_BYTE *)v21 + 35) & 1) != 0 )
            _mm_pause();
          _m_prefetchw((char *)v21 + 35);
          v32 = *((_BYTE *)v21 + 35);
          do
          {
            v33 = v32;
            v32 = _InterlockedCompareExchange8((volatile signed __int8 *)v21 + 35, v32 | 1, v32);
          }
          while ( v33 != v32 );
        }
        while ( (v32 & 1) != 0 );
      }
      AutoBoost::KiAbpEntryUnlink((AutoBoost *)v21, (struct AutoBoost::_AB_THREAD_ENTRY *)v17);
      _InterlockedAnd8((volatile signed __int8 *)v21 + 35, 0xFEu);
    }
    v34 = *((_BYTE *)v21 + 36);
    v35 = v21[5];
    *((_DWORD *)v21 + 10) = 0;
    *v21 = 0LL;
    *((_WORD *)v21 + 16) = 0;
    LOWORD(v21[-6 * (v34 & 0x7F) - 1]) |= 1 << (v34 & 0xF);
    v13 = v35;
    if ( v10 )
    {
LABEL_49:
      v36 = KeGetCurrentPrcb();
      v37 = (unsigned __int32 *)v36->SchedulerAssist;
      if ( v37 )
      {
        _m_prefetchw(v37);
        v46 = *v37;
        do
        {
          v47 = v46;
          LODWORD(v47) = v46 & 0xFFDFFFFF;
          v48 = v46;
          v46 = _InterlockedCompareExchange((volatile signed __int32 *)v37, v46 & 0xFFDFFFFF, v46);
        }
        while ( v48 != v46 );
        if ( (v46 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v36, v47, v37, v19);
      }
      _enable();
      goto LABEL_56;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
LABEL_56:
    if ( (_DWORD)v13 )
      AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v14 - 48LL * (*(_BYTE *)(v14 + 36) & 0x7F) - 16), v11, v13, 0LL);
  }
  else
  {
    v39 = KeGetCurrentThread();
    _disable();
    v40 = (char *)v39->AutoBoostThreadState;
    v41 = 0;
    v42 = v11 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v41 < (unsigned __int8)v40[12] )
    {
      v43 = (LegacyAutoBoost *)&v40[88 * v41 + 16];
      if ( (*(_QWORD *)v43 & 0x7FFFFFFFFFFFFFFCLL) == v42 && *((_BYTE *)v43 + 10) && (*(_QWORD *)v43 & 1) == 0 )
      {
        *((_BYTE *)v43 + 10) = 0;
        if ( v43 )
        {
          LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
            v43,
            (struct _KLOCK_ENTRY *)v39,
            (struct _KTHREAD *)v11,
            (void *)1,
            0LL);
          goto LABEL_58;
        }
        break;
      }
      ++v41;
    }
    if ( (*((_DWORD *)&v39->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v39, v11, 0LL, 0LL);
    v49 = KeGetCurrentPrcb();
    v50 = (unsigned __int32 *)v49->SchedulerAssist;
    if ( v50 )
    {
      _m_prefetchw(v50);
      v51 = *v50;
      do
      {
        v52 = v51;
        LODWORD(v52) = v51 & 0xFFDFFFFF;
        v53 = v51;
        v51 = _InterlockedCompareExchange((volatile signed __int32 *)v50, v51 & 0xFFDFFFFF, v51);
      }
      while ( v53 != v51 );
      if ( (v51 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v49, v52, v50, v42);
    }
    _enable();
  }
LABEL_58:
  KeLeaveCriticalRegionThread(CurrentThread);
  return v8;
}
