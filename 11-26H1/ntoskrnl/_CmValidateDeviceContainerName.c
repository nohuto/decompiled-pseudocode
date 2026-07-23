/*
 * XREFs of _CmValidateDeviceContainerName @ 0x140A3CE94
 * Callers:
 *     _CmContainerListGenericObjectCallback @ 0x14089D9E0 (_CmContainerListGenericObjectCallback.c)
 *     _PnpDispatchDeviceContainer @ 0x140A3BF10 (_PnpDispatchDeviceContainer.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A3C990 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140A3CDE0 (_CmGetDeviceContainerRegKeyPath.c)
 * Callees:
 *     wcscmp @ 0x14053A470 (wcscmp.c)
 *     PnpIsValidGuidString @ 0x140963020 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
