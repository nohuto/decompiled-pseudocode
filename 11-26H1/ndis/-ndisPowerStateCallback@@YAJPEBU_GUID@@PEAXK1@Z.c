/*
 * XREFs of ?ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x14006F040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1401790B0 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 */

__int64 __fastcall ndisPowerStateCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  unsigned int v4; // esi
  __int64 v7; // rax
  enum _NDIS_DEVICE_PNP_EVENT v8; // edx
  __int64 v10; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v11 = 0;
  if ( !Value || ValueLength < 4 )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xA2u,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      *Value);
  v7 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
    v7 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
  if ( !v7 )
  {
    v8 = (_BYTE)ndisAcOnLine == 1;
    if ( !*Value || (unsigned int)(*Value - 1) >= 2 )
      v4 = 1;
    ndisAcOnLine = v4;
    v11 = v4;
    if ( v4 != v8 )
      ndisNotifyMiniports(0LL, v8, &v11, (unsigned int)Context);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = *Value;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xA3u,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      v10);
  }
  return 0LL;
}
