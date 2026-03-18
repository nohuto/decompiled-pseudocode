/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::OverlayMinFPSToEnable__ @ 0x180006C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__CCommonRegistryData::OverlayMinFPSToEnable__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  result = GetPersistedRegistryValueW(
             L"DWMSwitches",
             L"Software\\Microsoft\\Windows\\Dwm",
             L"OverlayMinFPSToEnable",
             16LL,
             0LL,
             &v2,
             4,
             0LL);
  v1 = 20;
  if ( !(_DWORD)result )
    v1 = v2;
  CCommonRegistryData::OverlayMinFPSToEnable = v1;
  return result;
}
