/*
 * XREFs of PopPdcRegister @ 0x1407DF940
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopIsPlatformAoAcCapableInitialized @ 0x1404C1130 (PopIsPlatformAoAcCapableInitialized.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPdcRegister(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 IsPlatformAoAc; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-8h]

  v2 = 0;
  if ( a2 )
  {
    PopAcquirePolicyLock(a1, a2);
    PopModernStandbyTransitionInfo = 0LL;
    *(_OWORD *)&qword_140E67790 = *(_OWORD *)(a1 + 8);
    *((_OWORD *)&qword_140E67790 + 1) = *(_OWORD *)(a1 + 24);
    *((_OWORD *)&qword_140E67790 + 2) = *(_OWORD *)(a1 + 40);
    *((_OWORD *)&qword_140E67790 + 3) = *(_OWORD *)(a1 + 56);
    *((_OWORD *)&qword_140E67790 + 4) = *(_OWORD *)(a1 + 72);
    *((_OWORD *)&qword_140E67790 + 5) = *(_OWORD *)(a1 + 88);
    *((_OWORD *)&qword_140E67790 + 6) = *(_OWORD *)(a1 + 104);
    *((_OWORD *)&qword_140E67790 + 7) = *(_OWORD *)(a1 + 120);
    *((_OWORD *)&qword_140E67790 + 8) = *(_OWORD *)(a1 + 136);
    *((_OWORD *)&qword_140E67790 + 9) = *(_OWORD *)(a1 + 152);
    *((_OWORD *)&qword_140E67790 + 10) = *(_OWORD *)(a1 + 168);
    *((_OWORD *)&qword_140E67790 + 11) = *(_OWORD *)(a1 + 184);
    *((_OWORD *)&qword_140E67790 + 12) = *(_OWORD *)(a1 + 200);
    *(&qword_140E67790 + 26) = *(_QWORD *)(a1 + 216);
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
      PopReleasePolicyLock(v11, v10, v12, v13, v17);
      LOBYTE(v14) = IsPlatformAoAc;
      guard_dispatch_icall_no_overrides(v14, v15);
    }
    else
    {
      PopReleasePolicyLock(v6, v5, v7, v8, v17);
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopPdcDeviceListLock.Header.WaitListHead.Blink, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
