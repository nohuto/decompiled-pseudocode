/*
 * XREFs of _CmValidateDeviceContainerName @ 0x140A29DF4
 * Callers:
 *     _CmContainerListGenericObjectCallback @ 0x1408975E0 (_CmContainerListGenericObjectCallback.c)
 *     _PnpDispatchDeviceContainer @ 0x140A28E70 (_PnpDispatchDeviceContainer.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A298F0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140A29D40 (_CmGetDeviceContainerRegKeyPath.c)
 * Callees:
 *     wcscmp @ 0x140537FF0 (wcscmp.c)
 *     PnpIsValidGuidString @ 0x1409A25C0 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
