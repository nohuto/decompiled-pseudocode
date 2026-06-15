/*
 * XREFs of __tailMerge_mmdevapi_dll @ 0x1800B3800
 * Callers:
 *     __imp_load_GenerateMediaEvent @ 0x1800B387F (__imp_load_GenerateMediaEvent.c)
 *     __imp_load_MMDeviceCreateRegistryPropertyStore @ 0x1800B3AE4 (__imp_load_MMDeviceCreateRegistryPropertyStore.c)
 *     __imp_load_mmdDevGetMMDeviceIdFromInterfaceId @ 0x1800B3D99 (__imp_load_mmdDevGetMMDeviceIdFromInterfaceId.c)
 *     __imp_load_FlushDeviceTopologyCache @ 0x1800B3F70 (__imp_load_FlushDeviceTopologyCache.c)
 *     __imp_load_RegisterForMediaCallback @ 0x1800B4224 (__imp_load_RegisterForMediaCallback.c)
 *     __imp_load_UnregisterMediaCallback @ 0x1800B4236 (__imp_load_UnregisterMediaCallback.c)
 *     __imp_load_mmdDevGetMMDeviceFromInterfaceId @ 0x1800B4248 (__imp_load_mmdDevGetMMDeviceFromInterfaceId.c)
 *     __imp_load_mmdDevGetInstanceIdFromMMDeviceId @ 0x1800B430E (__imp_load_mmdDevGetInstanceIdFromMMDeviceId.c)
 *     __imp_load_GetSessionIdFromEndpointId @ 0x1800B4344 (__imp_load_GetSessionIdFromEndpointId.c)
 *     __imp_load_GetNeverSetAsDefaultProperty @ 0x1800B438C (__imp_load_GetNeverSetAsDefaultProperty.c)
 *     __imp_load_MMDeviceCreateRegistryPropertyStore2 @ 0x1800B4404 (__imp_load_MMDeviceCreateRegistryPropertyStore2.c)
 *     __imp_load_GetClassFromEndpointId @ 0x1800B4416 (__imp_load_GetClassFromEndpointId.c)
 *     __imp_load_MMDeviceCreateAudioSystemEffectsPropertyStore @ 0x1800B44D7 (__imp_load_MMDeviceCreateAudioSystemEffectsPropertyStore.c)
 *     __imp_load_CleanupDeviceAPI @ 0x1800B4659 (__imp_load_CleanupDeviceAPI.c)
 *     __imp_load_mmdDevGetInterfaceIdFromMMDeviceId @ 0x1800B6327 (__imp_load_mmdDevGetInterfaceIdFromMMDeviceId.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088030 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_mmdevapi_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_mmdevapi_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
