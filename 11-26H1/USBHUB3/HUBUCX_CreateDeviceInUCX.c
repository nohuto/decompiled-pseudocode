/*
 * XREFs of HUBUCX_CreateDeviceInUCX @ 0x1400266C8
 * Callers:
 *     HUBDSM_CreatingUCXDevice30 @ 0x140021750 (HUBDSM_CreatingUCXDevice30.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140010074 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140010624 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_CreateDeviceInUCX(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 *v2; // rdi
  __int64 v3; // rsi
  int v5; // eax
  int v6; // edi
  __int64 DeviceObjectExtension_low; // [rsp+40h] [rbp+8h]

  v1 = *a1;
  v2 = a1 + 21;
  v3 = a1[1];
  *((_DWORD *)a1 + 42) = 32;
  DeviceObjectExtension_low = LODWORD(WPP_MAIN_CB.DeviceObjectExtension);
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x10) == 0 )
  {
    LODWORD(DeviceObjectExtension_low) = LODWORD(WPP_MAIN_CB.DeviceObjectExtension) | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UISCSF__private_descriptor,
      DeviceObjectExtension_low,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      DeviceObjectExtension_low,
      3,
      (__int64)&Feature_UISCSF__private_descriptor);
  }
  v5 = *((_DWORD *)a1 + 366);
  if ( (v5 & 0x800) != 0 )
  {
    *((_DWORD *)a1 + 43) = 3;
    *((_DWORD *)a1 + 40) = 512;
    goto LABEL_11;
  }
  if ( (v5 & 0x100) != 0 )
  {
    *((_DWORD *)a1 + 43) = 2;
    *((_DWORD *)a1 + 48) = 2;
  }
  else
  {
    if ( (v5 & 0x400) != 0 )
    {
      *((_DWORD *)a1 + 43) = 0;
      *((_DWORD *)a1 + 48) = 0;
      *((_DWORD *)a1 + 40) = 8;
      goto LABEL_11;
    }
    *((_DWORD *)a1 + 43) = 1;
    *((_DWORD *)a1 + 48) = 1;
  }
  *((_DWORD *)a1 + 40) = 64;
LABEL_11:
  *((_DWORD *)a1 + 44) = *(unsigned __int16 *)(v3 + 200);
  a1[23] = (__int64)a1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *))(v1 + 408))(*(_QWORD *)(v1 + 248), v2, a1 + 3);
  if ( v6 >= 0 )
  {
    a1[193] = a1[3];
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x26u,
        (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
        v6);
    *((_DWORD *)a1 + 393) = -1073737728;
    *((_DWORD *)a1 + 392) = -1073741670;
  }
  return ((v6 >> 31) & 0xFFFFFFF4) + 4077;
}
