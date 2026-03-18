/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400465B8
 * Callers:
 *     Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x14003DAC4 (Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage.c)
 *     Feature_FSSM__private_ReportDeviceUsage @ 0x140044CD8 (Feature_FSSM__private_ReportDeviceUsage.c)
 *     Feature_USBEXSVP1__private_IsEnabledPreCheck @ 0x140044EA0 (Feature_USBEXSVP1__private_IsEnabledPreCheck.c)
 *     wil_details_IsEnabledFallback @ 0x14004676C (wil_details_IsEnabledFallback.c)
 *     Feature_UISCSF__private_ReportDeviceUsage @ 0x140049340 (Feature_UISCSF__private_ReportDeviceUsage.c)
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
