/*
 * XREFs of ?GetOopCalloutSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180061E08
 * Callers:
 *     ?UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ @ 0x180061B50 (-UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ.c)
 *     ?ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z @ 0x180061BF0 (-ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ @ 0x18010CE40 (-ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *GetOopCalloutSerialWorkQueue(void)
{
  return (struct CSerialWorkQueue *)(*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
}
