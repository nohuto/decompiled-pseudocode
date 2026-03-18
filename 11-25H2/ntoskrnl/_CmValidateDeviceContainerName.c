/*
 * XREFs of _CmValidateDeviceContainerName @ 0x14095B284
 * Callers:
 *     _CmContainerListGenericObjectCallback @ 0x140809670 (_CmContainerListGenericObjectCallback.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14095B1CC (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpDispatchDeviceContainer @ 0x14095C2A0 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     wcscmp @ 0x1404FD6A0 (wcscmp.c)
 *     PnpIsValidGuidString @ 0x14095AE04 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
