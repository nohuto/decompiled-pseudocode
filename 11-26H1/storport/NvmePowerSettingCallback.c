/*
 * XREFs of NvmePowerSettingCallback @ 0x14012A580
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterGetSystemPowerHint @ 0x1400D8ED0 (NvmeAdapterGetSystemPowerHint.c)
 *     NvmeAdapterGetSystemPowerResumeLatency @ 0x1400D8F00 (NvmeAdapterGetSystemPowerResumeLatency.c)
 *     NvmeAdapterSystemPowerHintsEnabled @ 0x1400E0C14 (NvmeAdapterSystemPowerHintsEnabled.c)
 *     NvmeAdapterSetMaxOperationalPower @ 0x1401264A8 (NvmeAdapterSetMaxOperationalPower.c)
 *     NvmeControllerPowerSettingChangeNotification @ 0x140127220 (NvmeControllerPowerSettingChangeNotification.c)
 *     NvmeControllerSystemPowerHint @ 0x14012754C (NvmeControllerSystemPowerHint.c)
 */

__int64 __fastcall NvmePowerSettingCallback(_OWORD *SettingGuid, _DWORD *Value, ULONG ValueLength, __int64 Context)
{
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // r9
  _QWORD *v19; // r10
  int v20; // r11d
  __int64 v22; // rax
  __int128 v23; // xmm0
  int v24; // [rsp+20h] [rbp-30h] BYREF
  int v25; // [rsp+24h] [rbp-2Ch]
  __int64 v26; // [rsp+28h] [rbp-28h]
  __int128 v27; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v28; // [rsp+40h] [rbp-10h]
  ULONG v29; // [rsp+48h] [rbp-8h]
  int v30; // [rsp+4Ch] [rbp-4h]
  unsigned __int64 v31; // [rsp+78h] [rbp+28h] BYREF

  v5 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  v4 = *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  v27 = 0uLL;
  v30 = 0;
  v26 = 0LL;
  if ( v4 )
    v5 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v5 )
  {
    v14 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_DISK_MAX_POWER.Data1;
    if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1 )
      v14 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_DISK_MAX_POWER.Data4;
    if ( v14 )
    {
      v15 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1;
      if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 )
        v15 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4;
      if ( v15 )
      {
        v22 = *(_QWORD *)(Context + 400);
        v23 = *SettingGuid;
        v28 = Value;
        v29 = ValueLength;
        v4 = (*(_DWORD *)(v22 + 184) & 0x40000000) == 0;
        v27 = v23;
        if ( !v4 )
          NvmeControllerPowerSettingChangeNotification(*(union _SLIST_HEADER **)(Context + 1152), (__int64)&v27);
        return 0LL;
      }
      if ( ValueLength == 4 && Value )
      {
        LOBYTE(v15) = *Value != 0;
        if ( ((*(_DWORD *)(*(_QWORD *)(Context + 160) + 176LL) >> 15) & 1) == (_DWORD)v15
          || !NvmeAdapterSystemPowerHintsEnabled(Context) )
        {
          return 0LL;
        }
        v24 = 1;
        v25 = 16;
        if ( v20 )
        {
          if ( (v17 & 0x8000) == 0 )
          {
            *(_DWORD *)(v18 + 176) = v17 | 0x8000;
            LODWORD(v26) = NvmeAdapterGetSystemPowerHint(v16);
            HIDWORD(v26) = NvmeAdapterGetSystemPowerResumeLatency(v26);
            ++*(_QWORD *)(*(_QWORD *)(v19[20] + 24LL) + 16LL);
          }
        }
        else if ( (v17 & 0x8000) != 0 )
        {
          *(_DWORD *)(v18 + 176) = v17 & 0xFFFF7FFF;
          LODWORD(v26) = NvmeAdapterGetSystemPowerHint(v16);
          HIDWORD(v26) = NvmeAdapterGetSystemPowerResumeLatency(v26);
        }
        if ( (*(_DWORD *)(v19[50] + 184LL) & 0x40000000) == 0 )
          return 0LL;
        v13 = v19[144];
        goto LABEL_35;
      }
    }
    else if ( ValueLength >= 4 && Value )
    {
      v31 = (unsigned int)*Value;
      if ( v31 <= 0x64 )
        NvmeAdapterSetMaxOperationalPower(Context, &v31, 1, 1);
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( ValueLength != 4 || !Value )
    return 3221225485LL;
  if ( NvmeAdapterSystemPowerHintsEnabled(Context) )
  {
    v10 = *(_QWORD *)(v8 + 160);
    v24 = 1;
    v25 = 16;
    v11 = *(_DWORD *)(v10 + 176);
    if ( v7 )
    {
      if ( (v11 & 0x2000) != 0 )
        return 0LL;
      *(_DWORD *)(v10 + 176) = v11 | 0x2000;
      ++**(_QWORD **)(*(_QWORD *)(v8 + 160) + 24LL);
      v6 = v9;
    }
    else
    {
      if ( (v11 & 0x2000) == 0 )
        return 0LL;
      *(_DWORD *)(v10 + 176) = v11 & 0xFFFFDFFF;
    }
    LODWORD(v26) = NvmeAdapterGetSystemPowerHint(v6);
    HIDWORD(v26) = NvmeAdapterGetSystemPowerResumeLatency(v26);
    if ( (*(_DWORD *)(*(_QWORD *)(v12 + 400) + 184LL) & 0x40000000) != 0 )
    {
      v13 = *(_QWORD *)(v12 + 1152);
LABEL_35:
      NvmeControllerSystemPowerHint(v13, &v24);
    }
  }
  return 0LL;
}
