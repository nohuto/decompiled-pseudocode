/*
 * XREFs of ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x18034BE04
 * Callers:
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180235658 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator() @ 0x18063F280 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator().c)
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180640D20 (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x18034BD60 (-IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ.c)
 *     ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x18034BF10 (-IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool __fastcall CloudPCHelpers::IsPhysicalDeviceAccessConfigured(CloudPCHelpers *this, __int64 a2)
{
  CloudPCHelpers *v2; // rcx
  bool v3; // bl
  HKEY *v4; // rax
  LSTATUS v5; // eax
  bool v6; // sf
  unsigned int ValueW; // eax
  unsigned int pdwType; // [rsp+20h] [rbp-48h]
  int pvData; // [rsp+40h] [rbp-28h] BYREF
  HKEY hkey; // [rsp+48h] [rbp-20h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = 0;
  if ( !CloudPCHelpers::IsBootToCloudModeRegistryCheck(this, a2)
    || !CloudPCHelpers::IsPhysicalDeviceAccessPolicyEnabled(v2) )
  {
    return 0;
  }
  pvData = 0;
  pcbData = 4;
  hkey = 0LL;
  v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hkey);
  v5 = RegOpenCurrentUser(0x20019u, v4);
  v6 = v5 < 0;
  if ( v5 > 0 )
    v6 = 1;
  if ( v6 )
  {
LABEL_9:
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
    return 0;
  }
  ValueW = RegGetValueW(
             hkey,
             L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
             L"PhysicalDeviceAccessConfigured",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW != 2 )
  {
    if ( ValueW )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x82,
        (unsigned int)"OnecoreUAP\\Internal\\Shell\\Inc\\private\\cloudpccommon.h",
        (const char *)ValueW,
        pdwType);
      goto LABEL_9;
    }
    v3 = pvData != 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
  return v3;
}
