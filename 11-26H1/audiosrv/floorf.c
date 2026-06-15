/*
 * XREFs of floorf @ 0x1800B3190
 * Callers:
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180070ED0 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x18007E4B0 (-VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 *     ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x180080880 (-VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
