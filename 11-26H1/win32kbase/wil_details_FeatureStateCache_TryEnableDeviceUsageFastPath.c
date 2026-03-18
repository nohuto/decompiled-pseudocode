/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401C56C4
 * Callers:
 *     Feature_CddInSystemSpace__private_IsEnabledPreCheck @ 0x14000CA2C (Feature_CddInSystemSpace__private_IsEnabledPreCheck.c)
 *     Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x14002AA00 (Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck.c)
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x1400BE794 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     Feature_ID51538523__private_IsEnabledPreCheck @ 0x140162568 (Feature_ID51538523__private_IsEnabledPreCheck.c)
 *     Feature_Vail__private_IsEnabledPreCheck @ 0x1401BDD04 (Feature_Vail__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck @ 0x1401BDD74 (Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck.c)
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x1401C6258 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 *     ?LoadAndConnectRustCode@@YAJXZ @ 0x1402F34D4 (-LoadAndConnectRustCode@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v5; // edx
  unsigned int v6; // r8d
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  v3 = *(volatile signed __int32 **)a3;
  v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 != 1 )
      return;
    v6 = 32;
  }
  else
  {
    v6 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v6);
  }
  else
  {
    v7 = *v3;
    do
    {
      if ( (v7 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v7) & 1) != 0 )
        break;
      v8 = v7;
      v7 = _InterlockedCompareExchange(v3, v7 | v6, v7);
    }
    while ( v8 != v7 );
  }
}
