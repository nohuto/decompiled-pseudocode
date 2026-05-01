/*
 * XREFs of ?IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ @ 0x1806411AC
 * Callers:
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180640D20 (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x18034BD60 (-IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

char __fastcall CloudPCHelpers::IsSignOutConfiguredForPhysicalDeviceAccess(CloudPCHelpers *this, __int64 a2)
{
  char result; // al
  bool v3; // bl
  HKEY *v4; // rax
  unsigned int ValueW; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  HKEY hkey; // [rsp+60h] [rbp+18h] BYREF

  result = CloudPCHelpers::IsBootToCloudModeRegistryCheck(this, a2);
  v3 = 0;
  if ( result )
  {
    hkey = 0LL;
    v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hkey);
    ValueW = RegOpenCurrentUser(0x20019u, v4);
    if ( ValueW )
    {
      v6 = 348LL;
    }
    else
    {
      pvData = 0;
      pcbData = 4;
      ValueW = RegGetValueW(
                 hkey,
                 L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
                 L"SignOutConfiguredForPhysicalDeviceAccess",
                 0x10u,
                 0LL,
                 &pvData,
                 &pcbData);
      if ( ValueW == 2 )
      {
LABEL_9:
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
        return v3;
      }
      if ( !ValueW )
      {
        v3 = pvData == 1;
        goto LABEL_9;
      }
      v6 = 365LL;
    }
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      v6,
      (__int64)"onecoreuap\\internal\\shell\\inc\\private\\CloudPCCommon.h",
      (const char *)ValueW);
    goto LABEL_9;
  }
  return result;
}
