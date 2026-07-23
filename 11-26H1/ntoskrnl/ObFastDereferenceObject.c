/*
 * XREFs of ObFastDereferenceObject @ 0x140264CB0
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x1403E17A0 (IopDequeueIrpFromFileObject.c)
 *     SeSetLearningModeObjectInformation @ 0x14041D674 (SeSetLearningModeObjectInformation.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140459608 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepDesktopAppxSubProcessToken @ 0x14051E308 (SepDesktopAppxSubProcessToken.c)
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     PspAllocateNotificationChannel @ 0x1407FD498 (PspAllocateNotificationChannel.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408EF444 (AlpcpCheckConnectionSecurity.c)
 *     EtwpBuildProcessEvent @ 0x1408FBCAC (EtwpBuildProcessEvent.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x140904FBC (EtwTiLogImpersonateClient.c)
 *     EtwpApplyPackageIdFilter @ 0x140913700 (EtwpApplyPackageIdFilter.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140923720 (MiIsUserQueryVmCallerTrusted.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1409C9978 (ExpWnfQueryCurrentUserSID.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1409C9B4C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpPsProvTraceProcess @ 0x1409CE5FC (EtwpPsProvTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     PfSnCheckModernApp @ 0x1409D34B4 (PfSnCheckModernApp.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     DbgkCreateThread @ 0x1409E74F4 (DbgkCreateThread.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     PspMapSystemDll @ 0x140A08A9C (PspMapSystemDll.c)
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A7D6D8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A94144 (PspGetNoChildProcessRestrictedPolicy.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB430C (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140AB918C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140AB9228 (SepIsSiblingTokenByPointer.c)
 *     PspGetRedirectionTrustPolicy @ 0x140B002E4 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140B040DC (PspSetRedirectionTrustPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140B40E18 (PspSetNoChildProcessRestrictedPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140B52BC8 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     PspInitializeProcessSecurity @ 0x140B80FF8 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     PspInitPhase3 @ 0x140CDE944 (PspInitPhase3.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

signed __int64 __fastcall ObFastDereferenceObject(signed __int64 *a1, ULONG_PTR a2, unsigned int a3)
{
  signed __int64 result; // rax
  signed __int64 v5; // rtt
  signed __int64 v6; // rdi
  bool v7; // cc
  signed __int64 BugCheckParameter4; // rdi
  BOOLEAN v9; // al
  ULONG_PTR v10; // rcx
  __int64 v11; // rax

  _m_prefetchw(a1);
  result = *a1;
  while ( (a2 ^ result) < 0xF )
  {
    v5 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v5 == result )
    {
      if ( ObpTraceFlags )
        return ObpPushStackInfo(a2 - 48, -1LL, a3);
      return result;
    }
  }
  if ( ObpTraceFlags )
    result = ObpPushStackInfo(a2 - 48, 0xFFFFFFFFLL, a3);
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  BugCheckParameter4 = v6 - 1;
  if ( v7 )
  {
    if ( *(_QWORD *)(a2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)],
        a2,
        1uLL,
        *(_QWORD *)(a2 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 2uLL, BugCheckParameter4);
    v9 = KeAreAllApcsDisabled();
    v10 = a2 - 48;
    if ( v9 )
    {
      return ObpDeferObjectDeletion(v10);
    }
    else
    {
      v11 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v10);
      if ( v11 )
        ObpHandleRevocationBlockRemoveObject(v11);
      if ( ObpTraceFlags )
        ObpDeregisterObject(a2 - 48);
      return ObpRemoveObjectRoutine(a2 - 48, 0LL);
    }
  }
  return result;
}
