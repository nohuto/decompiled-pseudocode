/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinWidth__ @ 0x1801DA850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinWidth__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  result = GetPersistedRegistryValueW(
             L"DWMSceneSwitches",
             L"Software\\Microsoft\\Windows\\Dwm\\Scene",
             L"ImageProcessingMinWidth",
             16LL,
             0LL,
             &v2,
             4,
             0LL);
  v1 = 200;
  if ( !(_DWORD)result )
    v1 = v2;
  CCommonRegistryData::Scene::ImageProcessingMinWidth = v1;
  return result;
}
