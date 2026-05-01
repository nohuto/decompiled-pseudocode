/*
 * XREFs of ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x1803486FC
 * Callers:
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180244648 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     _lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1::operator() @ 0x180619440 (_lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1--operator().c)
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061B230 (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x180348660 (-IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ.c)
 *     ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x180348838 (-IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ @ 0x180352A7C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CloudPCHelpers::IsPhysicalDeviceAccessConfigured(CloudPCHelpers *this, __int64 a2)
{
  CloudPCHelpers *v2; // rcx
  bool v3; // bl
  HKEY *v4; // rax
  LSTATUS v5; // eax
  bool v6; // sf
  unsigned int ValueW; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  unsigned int pdwType; // [rsp+20h] [rbp-40h]
  int pvData; // [rsp+40h] [rbp-20h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-1Ch] BYREF
  HKEY hkey; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

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
LABEL_13:
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
    return 0;
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BASBF>::GetImpl'::`2'::impl) )
  {
    ValueW = RegGetValueW(
               hkey,
               L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
               L"PhysicalDeviceAccessConfigured",
               0x10u,
               0LL,
               &pvData,
               &pcbData);
    v8 = retaddr;
    if ( ValueW )
    {
      v9 = 139LL;
      goto LABEL_12;
    }
    goto LABEL_15;
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
    v8 = retaddr;
    if ( ValueW )
    {
      v9 = 132LL;
LABEL_12:
      wil::details::in1diag3::_Log_Win32(
        v8,
        (void *)v9,
        (unsigned int)"OnecoreUAP\\Internal\\Shell\\Inc\\private\\cloudpccommon.h",
        (const char *)ValueW,
        pdwType);
      goto LABEL_13;
    }
LABEL_15:
    v3 = pvData != 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
  return v3;
}
