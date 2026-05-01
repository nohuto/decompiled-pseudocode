/*
 * XREFs of ?DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ @ 0x180619FFC
 * Callers:
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18061DE70 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x180348660 (-IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ.c)
 *     ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x180348838 (-IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?IsPhysicalDeviceAccessed@CloudPCHelpers@@YA_NXZ @ 0x18061B7A0 (-IsPhysicalDeviceAccessed@CloudPCHelpers@@YA_NXZ.c)
 */

void __fastcall CloudPCHelpers::DeletePDAKeyIfPhysicalDeviceAccessed(CloudPCHelpers *this, __int64 a2)
{
  CloudPCHelpers *v2; // rcx
  CloudPCHelpers *v3; // rcx
  unsigned int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( CloudPCHelpers::IsBootToCloudModeRegistryCheck(this, a2)
    && CloudPCHelpers::IsPhysicalDeviceAccessPolicyEnabled(v2)
    && CloudPCHelpers::IsPhysicalDeviceAccessed(v3) )
  {
    v4 = RegDeleteKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess", 0, 0);
    if ( v4 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        171LL,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\CloudPCCommon.h",
        (const char *)v4);
  }
}
