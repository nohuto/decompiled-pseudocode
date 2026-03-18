/*
 * XREFs of ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CB5C8
 * Callers:
 *     DxgkCheckDisplayState @ 0x1401CC150 (DxgkCheckDisplayState.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401CA340 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ @ 0x1401CA8A8 (-CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ.c)
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1401CB6EC (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CB8C8 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401CBB44 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4Dxg.c)
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CBFD4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v2; // eax
  unsigned int v4; // edi
  unsigned int v6; // edx
  __int64 v7; // r9
  unsigned int i; // esi
  unsigned __int64 v9; // [rsp+20h] [rbp-38h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h]

  v2 = *(_DWORD *)this;
  v4 = 512;
  v12 = 0;
  v11 = 512;
  if ( ((unsigned __int8)v2 == 8 || (unsigned __int8)v2 == 9) && (v2 & 0x100) != 0 )
  {
    v13 = (unsigned int)Feature_BlackScreenAutoRecoveryFramework__private_featureState;
    if ( (Feature_BlackScreenAutoRecoveryFramework__private_featureState & 0x10) == 0 )
    {
      LODWORD(v13) = Feature_BlackScreenAutoRecoveryFramework__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_BlackScreenAutoRecoveryFramework__private_descriptor,
        v13,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v13,
        3,
        (__int64)&Feature_BlackScreenAutoRecoveryFramework__private_descriptor);
    }
    DISPLAYSTATECHECKER::SendDisplayDiagnosticsToBroker(this);
    DISPLAYSTATECHECKER::LogDisplayBlackBoxData(this, &v12);
  }
  DISPLAYSTATECHECKER::LogDisplayBlackScreenDiagPacket(this);
  if ( (*(_DWORD *)this & 0x100) != 0 )
  {
    DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
      this,
      v6,
      (unsigned __int8)*(_DWORD *)this,
      v7,
      v9,
      v10,
      (enum DxgkrnlLiveDumpFailureReason *)&v11);
    v4 = v11;
    for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
    {
      if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::CreateMiniportBlackboxLiveDump((DISPLAYSTATECHECKER *)((char *)this + 3512 * i + 40)) < 0 )
        v4 |= 0x1000u;
    }
  }
  DISPLAYSTATECHECKER::LogDisplayTelemetryDiagData(this, a2, v4);
}
