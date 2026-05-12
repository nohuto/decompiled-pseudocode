/*
 * XREFs of RaidPowerSettingCallback @ 0x14006D720
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidAdapterGetSystemPowerHint @ 0x140010BF8 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x140010C1C (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSystemPowerHintsEnabled @ 0x140010DD8 (RaidAdapterSystemPowerHintsEnabled.c)
 *     StorpCSExitTelemetry @ 0x140048DA4 (StorpCSExitTelemetry.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14005EF08 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     RaidLogPower @ 0x14006CF04 (RaidLogPower.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x14007F758 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1400B7140 (StorpCSEntryTelemetry.c)
 *     StorProcessDripsCallbackForDlrm @ 0x14012ECF0 (StorProcessDripsCallbackForDlrm.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  bool v5; // zf
  __int64 v6; // rax
  char v7; // si
  char *v8; // r14
  __int64 v9; // rcx
  int SystemPowerHint; // eax
  char v11; // cl
  int SystemPowerResumeLatency; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // r9
  char v17; // al
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // r9
  char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // esi
  __int64 v27; // rcx
  int v28; // eax
  char v29; // r15
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // r8
  char v33; // cl
  char v34; // r12
  char v35; // cl
  __int64 v36; // rcx
  __int128 v38; // xmm0
  unsigned __int64 v39; // [rsp+40h] [rbp-19h] BYREF
  __int128 v40; // [rsp+48h] [rbp-11h]
  unsigned int *v41; // [rsp+58h] [rbp-1h]
  int v42; // [rsp+60h] [rbp+7h]
  int v43; // [rsp+64h] [rbp+Bh]
  int v44; // [rsp+68h] [rbp+Fh]
  int v45; // [rsp+6Ch] [rbp+13h]
  __int64 v46; // [rsp+70h] [rbp+17h]

  v6 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  v5 = *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  v40 = 0uLL;
  v43 = 0;
  v46 = 0LL;
  if ( v5 )
    v6 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( !v6 )
  {
    if ( (_DWORD)ValueLength == 4 && Value )
    {
      v7 = *(_BYTE *)Value;
      v8 = (char *)(Context + 47);
      if ( !RaidIsAdapterControlSupported((__int64)(Context + 47), 12) || !RaidAdapterSystemPowerHintsEnabled(Context) )
        return 0LL;
      SystemPowerHint = RaidAdapterGetSystemPowerHint(v9);
      RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
      v44 = 1;
      v45 = 16;
      if ( v7 == 1 )
      {
        v11 = *((_BYTE *)Context + 108);
        if ( (v11 & 1) == 0 )
        {
          *((_BYTE *)Context + 108) = v11 | 1;
          LODWORD(v46) = RaidAdapterGetSystemPowerHint((__int64)Context);
          SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v46);
          HIDWORD(v46) = SystemPowerResumeLatency;
          if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
            McTemplateK0qqqqq_EtwWriteTransfer(
              v14,
              v13,
              v15,
              *((_DWORD *)Context + 14),
              v13,
              v16,
              v15,
              SystemPowerResumeLatency);
          StorpCSEntryTelemetry(Context);
        }
      }
      else if ( !v7 )
      {
        v17 = *((_BYTE *)Context + 108);
        if ( (v17 & 1) != 0 )
        {
          *((_BYTE *)Context + 108) = v17 & 0xFE;
          LODWORD(v46) = RaidAdapterGetSystemPowerHint((__int64)Context);
          v18 = RaidAdapterGetSystemPowerResumeLatency(v46);
          HIDWORD(v46) = v18;
          if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
            McTemplateK0qqqqq_EtwWriteTransfer(v20, v19, v21, *((_DWORD *)Context + 14), v19, v22, v21, v18);
          StorpCSExitTelemetry((__int64)Context);
        }
      }
      if ( (qword_140172448 & 0x100) != 0 )
        RaidLogPower(
          (__int64)Context,
          51,
          (int)v46,
          HIDWORD(v46),
          *((unsigned int *)Context + 1523),
          *((unsigned int *)Context + 1260));
      goto LABEL_22;
    }
    return 3221225485LL;
  }
  v24 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_DISK_MAX_POWER.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1 )
    v24 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_DISK_MAX_POWER.Data4;
  if ( !v24 )
  {
    if ( (unsigned int)ValueLength >= 4 && Value )
    {
      v39 = *Value;
      if ( v39 <= 0x64 )
      {
        LOBYTE(ValueLength) = 1;
        RaidAdapterSetMaxOperationalPower(Context, &v39, ValueLength, 1LL);
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  v25 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 )
    v25 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4;
  if ( !v25 )
  {
    if ( (_DWORD)ValueLength != 4 || !Value )
      return 3221225485LL;
    v26 = *Value;
    if ( ((*((_BYTE *)Context + 111) & 8) != 0) == (*Value != 0) )
      return 0LL;
    v8 = (char *)(Context + 47);
    if ( !RaidIsAdapterControlSupported((__int64)(Context + 47), 12) || !RaidAdapterSystemPowerHintsEnabled(Context) )
      return 0LL;
    v28 = RaidAdapterGetSystemPowerHint(v27);
    v29 = v28;
    v30 = RaidAdapterGetSystemPowerResumeLatency(v28);
    v33 = *((_BYTE *)Context + 111);
    v34 = v30;
    v44 = 1;
    v45 = 16;
    if ( v26 )
    {
      if ( (v33 & 8) == 0 )
      {
        v35 = v33 | 8;
LABEL_43:
        *((_BYTE *)Context + 111) = v35;
        LODWORD(v46) = RaidAdapterGetSystemPowerHint((__int64)Context);
        HIDWORD(v46) = RaidAdapterGetSystemPowerResumeLatency(v46);
      }
    }
    else if ( (v33 & 8) != 0 )
    {
      v35 = v33 & 0xF7;
      goto LABEL_43;
    }
    if ( (qword_140172448 & 0x100) != 0 )
      RaidLogPower(
        (__int64)Context,
        52,
        (int)v46,
        HIDWORD(v46),
        *((unsigned int *)Context + 1523),
        *((unsigned int *)Context + 1260));
    v36 = Context[786];
    if ( v36 )
      StorProcessDripsCallbackForDlrm();
    if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
      McTemplateK0qqqqq_EtwWriteTransfer(v36, v31, v32, *((_DWORD *)Context + 14), v29, v34, v46, SBYTE4(v46));
LABEL_22:
    v23 = v8;
LABEL_54:
    RaCallMiniportAdapterControl((__int64)v23);
    return 0LL;
  }
  v38 = *SettingGuid;
  v41 = Value;
  v42 = ValueLength;
  v40 = v38;
  if ( RaidIsAdapterControlSupported((__int64)(Context + 47), 5) )
  {
    v23 = (char *)(Context + 47);
    goto LABEL_54;
  }
  return 0LL;
}
