/*
 * XREFs of PopPdcRegister @ 0x14077B0D8
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopIsPlatformAoAcCapableInitialized @ 0x1404C7820 (PopIsPlatformAoAcCapableInitialized.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPdcRegister(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  unsigned __int8 IsPlatformAoAc; // bl
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = 0;
  if ( a2 )
  {
    PopAcquirePolicyLock(a1, a2);
    PopModernStandbyTransitionInfo = 0LL;
    *(_OWORD *)&qword_140E67530 = *(_OWORD *)(a1 + 8);
    *((_OWORD *)&qword_140E67530 + 1) = *(_OWORD *)(a1 + 24);
    *((_OWORD *)&qword_140E67530 + 2) = *(_OWORD *)(a1 + 40);
    *((_OWORD *)&qword_140E67530 + 3) = *(_OWORD *)(a1 + 56);
    *((_OWORD *)&qword_140E67530 + 4) = *(_OWORD *)(a1 + 72);
    *((_OWORD *)&qword_140E67530 + 5) = *(_OWORD *)(a1 + 88);
    *((_OWORD *)&qword_140E67530 + 6) = *(_OWORD *)(a1 + 104);
    *((_OWORD *)&qword_140E67530 + 7) = *(_OWORD *)(a1 + 120);
    *((_OWORD *)&qword_140E67530 + 8) = *(_OWORD *)(a1 + 136);
    *((_OWORD *)&qword_140E67530 + 9) = *(_OWORD *)(a1 + 152);
    *((_OWORD *)&qword_140E67530 + 10) = *(_OWORD *)(a1 + 168);
    *((_OWORD *)&qword_140E67530 + 11) = *(_OWORD *)(a1 + 184);
    *((_OWORD *)&qword_140E67530 + 12) = *(_OWORD *)(a1 + 200);
    *(&qword_140E67530 + 26) = *(_QWORD *)(a1 + 216);
    *a2 = PdcPoResiliencyClient;
    a2[1] = PdcPoLowPower;
    a2[2] = PdcPoSetPowerAction;
    a2[3] = PdcPoReportButton;
    a2[4] = PdcPoReportLidState;
    a2[5] = PdcPoRecordButton;
    a2[6] = PdcPoVerifyActionPolicy;
    a2[7] = PdcPoVerifyPowerState;
    a2[8] = PdcPoBlockSessionSwitchEx;
    a2[9] = PopControlMonitor;
    a2[10] = PopNotifyCsStateExited;
    a2[11] = PdcPoCurrentPdcPhase;
    a2[12] = PdcPoPpmRegisterProfiles;
    a2[13] = PdcPoPpmApplyProfile;
    a2[14] = PdcPoPpmResetProfile;
    a2[15] = PdcPoNetworkResiliency;
    a2[16] = PpmQueryDripsResidency;
    a2[17] = PdcPoSleepStudyHelperSetPhaseActive;
    a2[18] = PdcPoLidReliabilityUpdateCallback;
    a2[19] = PopBSDiagSetTriageData;
    a2[20] = PopBSDiagSetTriageThread;
    a2[21] = KeQueryCurrentWaitInformationThread;
    if ( PopIsPlatformAoAcCapableInitialized() )
    {
      IsPlatformAoAc = SSHSupportIsPlatformAoAc();
      PopReleasePolicyLock();
      LOBYTE(v6) = IsPlatformAoAc;
      guard_dispatch_icall_no_overrides(v6, v7);
    }
    else
    {
      PopReleasePolicyLock();
    }
    if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopModernStandbyStateNotify.PriorityFloorCounts[8], DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
