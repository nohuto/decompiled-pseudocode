/*
 * XREFs of PopBatteryApplyCompositeState @ 0x1409C2820
 * Callers:
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopInitilizeAcDcSettings @ 0x140427138 (PopInitilizeAcDcSettings.c)
 *     PopSetNotificationWork @ 0x1404274C0 (PopSetNotificationWork.c)
 *     PopCheckForWork @ 0x1404274F4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404DA8A4 (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     PopUpdateAcDcState @ 0x1404E3404 (PopUpdateAcDcState.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1404E9624 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopTracePowerReconfig @ 0x1404EB07C (PopTracePowerReconfig.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopRecordBatteryLevel @ 0x1407CC014 (PopRecordBatteryLevel.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1407D5BA0 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x1407D5EF0 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x1407D6010 (PopDiagTraceBatteryTriggerMet.c)
 *     PopBatteryUpdateAlarms @ 0x1409BEBA0 (PopBatteryUpdateAlarms.c)
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 *     PpmProfileAcDcUpdate @ 0x1409C12F4 (PpmProfileAcDcUpdate.c)
 *     PopRecordAcDcState @ 0x1409C1BCC (PopRecordAcDcState.c)
 *     PopBatteryTracePercentageRemaining @ 0x1409C1D6C (PopBatteryTracePercentageRemaining.c)
 *     PopSqmBatteryUpdate @ 0x1409C1F4C (PopSqmBatteryUpdate.c)
 *     PopRecordBatteryPercentage @ 0x1409C1FD0 (PopRecordBatteryPercentage.c)
 *     PopCheckCachedPowerSourceStateUpdates @ 0x1409C2300 (PopCheckCachedPowerSourceStateUpdates.c)
 *     PopBatteryCheckCompositeCapacity @ 0x1409C25D4 (PopBatteryCheckCompositeCapacity.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x1409C2E50 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1409C2EDC (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x1409C2F9C (PopAccountCbEnergyChange.c)
 *     PopRecalculateCBTriggerLevels @ 0x1409C3354 (PopRecalculateCBTriggerLevels.c)
 *     PopEsQueueStateEvaluation @ 0x1409C34B4 (PopEsQueueStateEvaluation.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     CalculateBatteryCount @ 0x140B38264 (CalculateBatteryCount.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
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
  void *ExplicitScope; // [rsp+20h] [rbp-69h]
  void *ExplicitScopea; // [rsp+20h] [rbp-69h]
  void *ExplicitScopeb; // [rsp+20h] [rbp-69h]
  char v55; // [rsp+40h] [rbp-49h]
  unsigned int v56; // [rsp+44h] [rbp-45h] BYREF
  int v57; // [rsp+48h] [rbp-41h] BYREF
  int v58; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v59; // [rsp+50h] [rbp-39h] BYREF
  int Buffer[3]; // [rsp+54h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61[2]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v62[2]; // [rsp+80h] [rbp-9h] BYREF
  int *v63; // [rsp+90h] [rbp+7h]
  __int64 v64; // [rsp+98h] [rbp+Fh]

  v3 = ~*(_DWORD *)a1;
  v59 = 0;
  v58 = 0;
  v5 = a2;
  v57 = 0;
  Buffer[0] = 0;
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
  if ( byte_140F10638 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4LL, &dword_140F10634);
    CalculateBatteryCount(&v56, &v58, &v59);
    v9 = v56;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != v56 )
    {
      PopCachedValidBatteryCount = v56;
      PopDiagTraceBatteryCountChange(v56, v58, v59);
    }
    v55 = 1;
  }
  PopReleasePolicyLock(v9, v8, v10, v11, ExplicitScope);
  PopBatteryCheckCompositeCapacity(a1, v6, &v57);
  if ( (((unsigned __int8)xmmword_140F10660 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140F10638 )
  {
    PopSetNotificationWork(8u);
    byte_140F10638 = 0;
  }
  xmmword_140F10660 = *(_OWORD *)a1;
  unk_140F10670 = *(_OWORD *)(a1 + 16);
  v15 = *(_DWORD *)(a1 + 32);
  dword_140F10684 = v5;
  v16 = v57;
  HIDWORD(xmmword_140F10674) = v15;
  if ( v57 )
  {
    v56 = (dword_140F10804 + 500) / 0x3E8u;
    PopSetPowerSettingValue(&GUID_BATTERY_PERCENTAGE_REMAINING, 0xFFFFFFFFLL, 0LL, 4LL, &v56);
    PopSetPowerSettingValue(&GUID_BATTERY_PERCENTAGE_REMAINING, 0xFFFFFFFFLL, 1LL, 4LL, &v56);
    v32 = v56;
    PopRecordBatteryPercentage(v56, v33, v34, v35);
    LODWORD(v36) = 0;
    v37 = MEMORY[0xFFFFF78000000008];
    if ( dword_140F10804 != -1 )
      v36 = (MEMORY[0xFFFFF78000000008] - qword_140F10808 + 5000) / 0x2710uLL;
    PopSqmBatteryUpdate();
    PopBatteryTracePercentageRemaining(v32, v16, v6, v36);
    qword_140F10808 = v37;
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F10830, v12, v13, v14);
  v17 = dword_140F10684;
  if ( dword_140F10684 == -1 )
    v17 = 0;
  LODWORD(ExplicitScopea) = DWORD1(xmmword_140F10660);
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
    (unsigned int)xmmword_140F10660,
    ExplicitScopea,
    DWORD2(xmmword_140F10660),
    HIDWORD(xmmword_140F10660),
    v17);
  xmmword_140F10840 = 0LL;
  BYTE7(xmmword_140F10840) = dword_140F106AC;
  *(_QWORD *)&xmmword_140F10860 = -1LL;
  xmmword_140F10850 = 0LL;
  *((_QWORD *)&xmmword_140F10860 + 1) = -1LL;
  *(_QWORD *)&xmmword_140F10870 = -1LL;
  DWORD2(xmmword_140F10870) = -1;
  LOBYTE(xmmword_140F10840) = xmmword_140F10660 & 1;
  if ( dword_140F10634 )
  {
    BYTE1(xmmword_140F10840) = 1;
    BYTE2(xmmword_140F10840) = (xmmword_140F10660 & 4) != 0;
    DWORD2(xmmword_140F10840) = HIDWORD(qword_140F10694);
    HIDWORD(xmmword_140F10840) = DWORD1(xmmword_140F10660);
    LODWORD(xmmword_140F10850) = HIDWORD(xmmword_140F10660);
    DWORD1(xmmword_140F10850) = dword_140F10684;
    *((_QWORD *)&xmmword_140F10850 + 1) = unk_140F1069C;
    BYTE3(xmmword_140F10840) = byte_140F10800 != 0 || (xmmword_140F10660 & 2) != 0;
    if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      xmmword_140F10860 = xmmword_140F10674;
      dword_140F10880 = DWORD2(xmmword_140F10660);
      HIDWORD(xmmword_140F10870) = a3;
    }
  }
  if ( qword_140F108D0
    && (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline()
    && *(_DWORD *)(qword_140F108D0 + 128) == 1 )
  {
    *(_QWORD *)&xmmword_140F10870 = *(_QWORD *)(qword_140F108D0 + 184);
    DWORD2(xmmword_140F10870) = *(_DWORD *)(qword_140F108D0 + 192);
  }
  if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
    PopCheckCachedPowerSourceStateUpdates();
  PopAccountCbEnergyChange();
  PopBatteryTraceSystemBatteryStatus(0);
  PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
  if ( HIDWORD(qword_140F10694) )
    PopRecalculateCBTriggerLevels();
  if ( qword_140F10694
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140F10780, 1LL)
    && (dword_140F10784[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v19, v18);
  v56 = 0;
  v20 = 0;
  v21 = 0;
  v22 = dword_140F10634 != 0 ? 3 : 0;
  LODWORD(v23) = 0;
  do
  {
    if ( ((_DWORD)qword_140F10694 || (v21 = v23, HIDWORD(qword_140F10694)))
      && (v24 = 32LL * v21,
          v25 = v21,
          (unsigned __int8)PopBatteryCheckTriggerAllBatteries((char *)&unk_140F10780 + v24, 0LL)) )
    {
      v44 = dword_140F10784[v24 / 4];
      if ( PopBatteryCachedFlags[v25] != v44 )
      {
        PopBatteryCachedFlags[v25] = v44;
        PopDiagTraceBatteryAlarmStatus(
          (__int64)&unk_140F10780 + v24,
          PpmIdlePolicyLock.WriteOperationCount + 24 * (v25 + 4),
          &v56);
        v20 = v56;
        v27 = 32LL * v56;
        if ( dword_140F10784[v27 / 4] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(
            (__int64)&unk_140F10780 + v27,
            PpmIdlePolicyLock.WriteOperationCount + 24 * (v56 + 4LL),
            (int *)&v56);
          v20 = v56;
        }
      }
      if ( !byte_140F10778 )
        PopExecutePowerAction(
          (unsigned int)&unk_140F10780 + 32 * v20,
          8,
          LODWORD(PpmIdlePolicyLock.WriteOperationCount) + 104 + 24 * v20,
          *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 24LL * v20 + 116),
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
      dword_140F10784[v29] &= 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v56, (char *)&unk_140F10780 + v29 * 4);
      v20 = v56;
    }
    v56 = ++v20;
    v21 = v20;
    v23 = v20;
  }
  while ( v20 < 4 );
  if ( dword_140F106B0 != v22 )
  {
    Buffer[0] = v22;
    updated = ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LEVEL, Buffer, 4u, 0LL, 0LL, 0, 0);
    v48 = dword_140E07560;
    v49 = updated;
    if ( (unsigned int)dword_140E07560 > 5 )
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
        (__int64)&dword_140E07560,
        (unsigned __int8 *)&dword_14004EC24,
        0LL,
        0LL,
        4u,
        v61);
      v48 = dword_140E07560;
    }
    LOBYTE(v49) = (unsigned int)(v22 - 1) <= 1;
    if ( (_BYTE)v49 != (unsigned int)(dword_140F106B0 - 1) <= 1
      && v48 > 5
      && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
    {
      v57 = (unsigned __int8)v49;
      v62[1] = 4LL;
      v62[0] = &v57;
      v58 = v22;
      v63 = &v58;
      v64 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004EBE1, 0LL, 0LL, 4u, v61);
    }
    dword_140F106B0 = v22;
    PopRecordBatteryLevel(v22, v46, v49, v47);
  }
  if ( v55 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v23, v26, v27, v28, ExplicitScopeb);
  LOBYTE(v30) = v55;
  PopEsQueueStateEvaluation(v30);
  return v55;
}
