/*
 * XREFs of PopBatteryApplyCompositeState @ 0x140946EB0
 * Callers:
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     _tlgCreate1Sz_char @ 0x1403EEB48 (_tlgCreate1Sz_char.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopInitilizeAcDcSettings @ 0x140438218 (PopInitilizeAcDcSettings.c)
 *     PopSetNotificationWork @ 0x1404385A0 (PopSetNotificationWork.c)
 *     PopCheckForWork @ 0x1404385D4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404E11C4 (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     PopUpdateAcDcState @ 0x1404EA054 (PopUpdateAcDcState.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1404F0044 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopTracePowerReconfig @ 0x1404F1A9C (PopTracePowerReconfig.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopRecordBatteryLevel @ 0x1407C8F74 (PopRecordBatteryLevel.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1407D2B34 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x1407D2E84 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x1407D2FD8 (PopDiagTraceBatteryTriggerMet.c)
 *     PopBatteryUpdateAlarms @ 0x140943228 (PopBatteryUpdateAlarms.c)
 *     PopUpdateSystemIdleContext @ 0x140945524 (PopUpdateSystemIdleContext.c)
 *     PpmProfileAcDcUpdate @ 0x140945984 (PpmProfileAcDcUpdate.c)
 *     PopRecordAcDcState @ 0x14094625C (PopRecordAcDcState.c)
 *     PopBatteryTracePercentageRemaining @ 0x1409463FC (PopBatteryTracePercentageRemaining.c)
 *     PopSqmBatteryUpdate @ 0x1409465DC (PopSqmBatteryUpdate.c)
 *     PopRecordBatteryPercentage @ 0x140946660 (PopRecordBatteryPercentage.c)
 *     PopCheckCachedPowerSourceStateUpdates @ 0x140946990 (PopCheckCachedPowerSourceStateUpdates.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140946C64 (PopBatteryCheckCompositeCapacity.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x1409474E0 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14094756C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14094762C (PopAccountCbEnergyChange.c)
 *     PopRecalculateCBTriggerLevels @ 0x1409479E4 (PopRecalculateCBTriggerLevels.c)
 *     PopEsQueueStateEvaluation @ 0x140947B44 (PopEsQueueStateEvaluation.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopSetPowerSettingValueAcDc @ 0x140A3E450 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     CalculateBatteryCount @ 0x140B36054 (CalculateBatteryCount.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

char __fastcall PopBatteryApplyCompositeState(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  int v5; // r14d
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  int v15; // eax
  int v16; // r14d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // edi
  unsigned int v21; // eax
  int v22; // ebx
  __int64 v23; // rcx
  unsigned __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // r8
  struct _KLOCK_ENTRIES *v35; // r9
  unsigned __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r8
  struct _KLOCK_ENTRIES *v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // r8d
  int v44; // eax
  unsigned int updated; // eax
  __int64 v46; // rdx
  struct _KLOCK_ENTRIES *v47; // r9
  unsigned int v48; // ecx
  __int64 v49; // r8
  const CHAR *v50; // rdx
  int v51; // r8d
  __int64 v52; // [rsp+20h] [rbp-69h]
  __int64 v53; // [rsp+20h] [rbp-69h]
  __int64 v54; // [rsp+20h] [rbp-69h]
  char v55; // [rsp+40h] [rbp-49h]
  unsigned int v56; // [rsp+44h] [rbp-45h] BYREF
  int v57; // [rsp+48h] [rbp-41h] BYREF
  int v58; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v59; // [rsp+50h] [rbp-39h] BYREF
  int v60[3]; // [rsp+54h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61[2]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v62[2]; // [rsp+80h] [rbp-9h] BYREF
  int *v63; // [rsp+90h] [rbp+7h]
  __int64 v64; // [rsp+98h] [rbp+Fh]

  v3 = ~*(_DWORD *)a1;
  v59 = 0;
  v58 = 0;
  v5 = a2;
  v57 = 0;
  v60[0] = 0;
  v6 = v3 & 1;
  v56 = 0;
  v55 = 0;
  PopAcquirePolicyLock(a1, a2);
  if ( PopUpdateAcDcState(v6) )
  {
    PopBatteryUpdateAlarms(1, 0LL);
    PopSetNotificationWork(4u);
    PopRecordAcDcState(v6, v38, v39, v40);
    PopUpdateSystemIdleContext(2);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate(v42, v41, v43);
    if ( v6 == 1 )
      PopMaxChargeRate = 0LL;
    v55 = 1;
  }
  if ( byte_140F0FE78 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4LL, &dword_140F0FE74);
    CalculateBatteryCount(&v56, &v58, &v59);
    v9 = v56;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != v56 )
    {
      PopCachedValidBatteryCount = v56;
      PopDiagTraceBatteryCountChange(v56, v58, v59);
    }
    v55 = 1;
  }
  PopReleasePolicyLock(v9, v8, v10, v11, v52);
  PopBatteryCheckCompositeCapacity(a1, v6, &v57);
  if ( (((unsigned __int8)xmmword_140F0FEA0 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140F0FE78 )
  {
    PopSetNotificationWork(8u);
    byte_140F0FE78 = 0;
  }
  xmmword_140F0FEA0 = *(_OWORD *)a1;
  unk_140F0FEB0 = *(_OWORD *)(a1 + 16);
  v15 = *(_DWORD *)(a1 + 32);
  dword_140F0FEC4 = v5;
  v16 = v57;
  HIDWORD(qword_140F0FEBC) = v15;
  if ( v57 )
  {
    v56 = (dword_140F10044 + 500) / 0x3E8u;
    PopSetPowerSettingValue(&GUID_BATTERY_PERCENTAGE_REMAINING, 0xFFFFFFFFLL, 0LL, 4LL, &v56);
    PopSetPowerSettingValue(&GUID_BATTERY_PERCENTAGE_REMAINING, 0xFFFFFFFFLL, 1LL, 4LL, &v56);
    v32 = v56;
    PopRecordBatteryPercentage(v56, v33, v34, v35);
    LODWORD(v36) = 0;
    v37 = MEMORY[0xFFFFF78000000008];
    if ( dword_140F10044 != -1 )
      v36 = (MEMORY[0xFFFFF78000000008] - qword_140F10048 + 5000) / 0x2710uLL;
    PopSqmBatteryUpdate();
    PopBatteryTracePercentageRemaining(v32, v16, v6, v36);
    qword_140F10048 = v37;
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10070, v12, v13, v14);
  v17 = dword_140F0FEC4;
  if ( dword_140F0FEC4 == -1 )
    v17 = 0;
  LODWORD(v53) = DWORD1(xmmword_140F0FEA0);
  DbgPrintEx(
    0x92u,
    3u,
    "\n"
    "Composite Status\n"
    "|-- PowerState = 0x%08x\n"
    "|-- Capacity   = %u\n"
    "|-- Voltage    = %u\n"
    "|-- Rate       = %d\n"
    "|-- Est Time   = %u\n",
    (unsigned int)xmmword_140F0FEA0,
    v53,
    DWORD2(xmmword_140F0FEA0),
    HIDWORD(xmmword_140F0FEA0),
    v17);
  *(_OWORD *)&stru_140F10070.Header.WaitListHead.Blink = 0LL;
  HIBYTE(stru_140F10070.Header.WaitListHead.Blink) = dword_140F0FEEC;
  stru_140F10070.StackLimit = (void *volatile)-1LL;
  *(_OWORD *)&stru_140F10070.QuantumTarget = 0LL;
  stru_140F10070.StackBase = (void *)-1LL;
  stru_140F10070.ThreadLock = -1LL;
  LODWORD(stru_140F10070.CycleTime) = -1;
  LOBYTE(stru_140F10070.Header.WaitListHead.Blink) = xmmword_140F0FEA0 & 1;
  if ( dword_140F0FE74 )
  {
    BYTE1(stru_140F10070.Header.WaitListHead.Blink) = 1;
    BYTE2(stru_140F10070.Header.WaitListHead.Blink) = (xmmword_140F0FEA0 & 4) != 0;
    LODWORD(stru_140F10070.SListFaultAddress) = HIDWORD(qword_140F0FED4);
    HIDWORD(stru_140F10070.SListFaultAddress) = DWORD1(xmmword_140F0FEA0);
    LODWORD(stru_140F10070.QuantumTarget) = HIDWORD(xmmword_140F0FEA0);
    HIDWORD(stru_140F10070.QuantumTarget) = dword_140F0FEC4;
    stru_140F10070.InitialStack = (void *)unk_140F0FEDC;
    BYTE3(stru_140F10070.Header.WaitListHead.Blink) = byte_140F10040 != 0 || (xmmword_140F0FEA0 & 2) != 0;
    if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      stru_140F10070.StackLimit = (void *volatile)unk_140F0FEB4;
      stru_140F10070.StackBase = (void *)qword_140F0FEBC;
      stru_140F10070.CurrentRunTime = DWORD2(xmmword_140F0FEA0);
      HIDWORD(stru_140F10070.CycleTime) = a3;
    }
  }
  if ( stru_140F10070.ApcState.ApcListHead[0].Blink
    && (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline()
    && LODWORD(stru_140F10070.ApcState.ApcListHead[0].Blink[8].Flink) == 1 )
  {
    stru_140F10070.ThreadLock = (unsigned __int64)stru_140F10070.ApcState.ApcListHead[0].Blink[11].Blink;
    LODWORD(stru_140F10070.CycleTime) = stru_140F10070.ApcState.ApcListHead[0].Blink[12].Flink;
  }
  if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
    PopCheckCachedPowerSourceStateUpdates();
  PopAccountCbEnergyChange();
  PopBatteryTraceSystemBatteryStatus(0);
  PopReleaseRwLock(&stru_140F10070);
  if ( HIDWORD(qword_140F0FED4) )
    PopRecalculateCBTriggerLevels();
  if ( qword_140F0FED4
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140F0FFC0, 1LL)
    && (dword_140F0FFC4[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v19, v18);
  v56 = 0;
  v20 = 0;
  v21 = 0;
  v22 = dword_140F0FE74 != 0 ? 3 : 0;
  LODWORD(v23) = 0;
  do
  {
    if ( ((_DWORD)qword_140F0FED4 || (v21 = v23, HIDWORD(qword_140F0FED4)))
      && (v24 = 32LL * v21,
          v25 = v21,
          (unsigned __int8)PopBatteryCheckTriggerAllBatteries((char *)&unk_140F0FFC0 + v24, 0LL)) )
    {
      v44 = dword_140F0FFC4[v24 / 4];
      if ( PopBatteryCachedFlags[v25] != v44 )
      {
        PopBatteryCachedFlags[v25] = v44;
        PopDiagTraceBatteryAlarmStatus((__int64)&unk_140F0FFC0 + v24, (__int64)qword_140F105C0 + 24 * v25 + 96, &v56);
        v20 = v56;
        v27 = 32LL * v56;
        if ( dword_140F0FFC4[v27 / 4] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(
            (__int64)&unk_140F0FFC0 + v27,
            (__int64)qword_140F105C0 + 24 * v56 + 96,
            (int *)&v56);
          v20 = v56;
        }
      }
      if ( !byte_140F0FFB8 )
        PopExecutePowerAction(
          (unsigned int)&unk_140F0FFC0 + 32 * v20,
          8,
          (_DWORD)qword_140F105C0 + 104 + 24 * v20,
          *((_DWORD *)qword_140F105C0 + 6 * v20 + 29),
          1);
      if ( v22 == 3 )
      {
        if ( v20 )
        {
          if ( v20 == 1 )
            v22 = 2;
        }
        else
        {
          v22 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v20] = -1;
      v29 = 8LL * v20;
      dword_140F0FFC4[v29] &= 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v56, (char *)&unk_140F0FFC0 + v29 * 4);
      v20 = v56;
    }
    v56 = ++v20;
    v21 = v20;
    v23 = v20;
  }
  while ( v20 < 4 );
  if ( dword_140F0FEF0 != v22 )
  {
    v54 = 0LL;
    v60[0] = v22;
    updated = ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LEVEL, (__int64)v60);
    v48 = dword_140E07598;
    v49 = updated;
    if ( (unsigned int)dword_140E07598 > 5 )
    {
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v50 = "PoBatteryLevelCritical";
        }
        else if ( v22 == 2 )
        {
          v50 = "PoBatteryLevelLow";
        }
        else
        {
          v50 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v50 = "PoBatteryLevelUnknown";
      }
      tlgCreate1Sz_char((__int64)v62, v50);
      v57 = v51;
      v63 = &v57;
      v64 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07598,
        (unsigned __int8 *)&byte_14004E267,
        0LL,
        0LL,
        4u,
        v61);
      v48 = dword_140E07598;
    }
    LOBYTE(v49) = (unsigned int)(v22 - 1) <= 1;
    if ( (_BYTE)v49 != (unsigned int)(dword_140F0FEF0 - 1) <= 1
      && v48 > 5
      && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
    {
      v57 = (unsigned __int8)v49;
      v62[1] = 4LL;
      v62[0] = &v57;
      v58 = v22;
      v63 = &v58;
      v64 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)byte_14004E38D, 0LL, 0LL, 4u, v61);
    }
    dword_140F0FEF0 = v22;
    PopRecordBatteryLevel(v22, v46, v49, v47);
  }
  if ( v55 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v23, v26, v27, v28, v54);
  LOBYTE(v30) = v55;
  PopEsQueueStateEvaluation(v30);
  return v55;
}
