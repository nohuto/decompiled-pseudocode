/*
 * XREFs of ?open_unique_key_nothrow@reg@wil@@YAJPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@W4key_access@12@@Z @ 0x180570210
 * Callers:
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x18064E3D4 (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 *     ?UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180676E2C (-UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Interna.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z @ 0x1803B3D24 (-get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z.c)
 */

LSTATUS __fastcall wil::reg::open_unique_key_nothrow(HKEY hKey, LPCWSTR lpSubKey, HKEY *a3)
{
  HKEY *phkResult; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  REGSAM access_flags; // eax
  LSTATUS result; // eax

  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(a3);
  access_flags = wil::reg::reg_view_details::get_access_flags(0, v6, v7, v8);
  result = RegOpenKeyExW(hKey, lpSubKey, 0, access_flags, phkResult);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
