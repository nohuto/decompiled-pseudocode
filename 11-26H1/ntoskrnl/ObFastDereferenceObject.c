/*
 * XREFs of ObFastDereferenceObject @ 0x140265740
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x1403DE5B0 (IopDequeueIrpFromFileObject.c)
 *     SeSetLearningModeObjectInformation @ 0x140430644 (SeSetLearningModeObjectInformation.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14045FC94 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepDesktopAppxSubProcessToken @ 0x14045FEB8 (SepDesktopAppxSubProcessToken.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     PspAllocateNotificationChannel @ 0x1407F7938 (PspAllocateNotificationChannel.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408E8E84 (AlpcpCheckConnectionSecurity.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140920364 (MiIsUserQueryVmCallerTrusted.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 *     EtwTiLogImpersonateClient @ 0x1409294AC (EtwTiLogImpersonateClient.c)
 *     EtwpApplyPackageIdFilter @ 0x140937B60 (EtwpApplyPackageIdFilter.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14094E028 (ExpWnfQueryCurrentUserSID.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14094E20C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpPsProvTraceProcess @ 0x140952CBC (EtwpPsProvTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1409540B8 (EtwTraceAppStateChange.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140954D20 (EtwpPsProvProcessEnumCallback.c)
 *     PspMapSystemDll @ 0x140962C14 (PspMapSystemDll.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 *     EtwpBuildProcessEvent @ 0x14096D8A8 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     PfSnCheckModernApp @ 0x1409E923C (PfSnCheckModernApp.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 *     PspInitializeProcessSecurity @ 0x140A2B070 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 *     NtOpenThreadTokenEx @ 0x140A47C40 (NtOpenThreadTokenEx.c)
 *     EtwTiLogSyscallUsage @ 0x140A53288 (EtwTiLogSyscallUsage.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A6C0A8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A8F474 (PspGetNoChildProcessRestrictedPolicy.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB2F6C (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB7984 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x140AB7B4C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140AB7BE8 (SepIsSiblingTokenByPointer.c)
 *     PspGetRedirectionTrustPolicy @ 0x140AFE274 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x140B023AC (PspSetRedirectionTrustPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140B3EDE8 (PspSetNoChildProcessRestrictedPolicy.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140B50338 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     PspInitPhase3 @ 0x140CD85C4 (PspInitPhase3.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140263C40 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269BD0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x140923BC0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A5A090 (ObpHandleRevocationBlockRemoveObject.c)
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
