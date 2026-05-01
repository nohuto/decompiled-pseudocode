/*
 * XREFs of ?B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ @ 0x18044D70C
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180250190 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ @ 0x180352A7C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ.c)
 *     ?B2CIsPhysicalDeviceAccessPolicyEnabled@@YA_NXZ @ 0x18044D86C (-B2CIsPhysicalDeviceAccessPolicyEnabled@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool B2CIsPhysicalDeviceAccessConfigured(void)
{
  bool v0; // bl
  HKEY *v1; // rax
  unsigned int ValueW; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  HKEY hkey[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+10h]
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int pvData; // [rsp+78h] [rbp+20h] BYREF
  DWORD v10; // [rsp+80h] [rbp+28h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp+30h] BYREF

  v0 = 0;
  pvData = 0;
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\PolicyManager\\current\\Device\\CloudDesktop",
         L"BootToCloudMode",
         0x10u,
         0LL,
         &pvData,
         &pcbData)
    || pvData != 1
    || !B2CIsPhysicalDeviceAccessPolicyEnabled() )
  {
    return 0;
  }
  v8 = 0;
  v10 = 4;
  hkey[0] = 0LL;
  v1 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(hkey);
  ValueW = RegOpenCurrentUser(0x20019u, v1);
  v3 = retaddr;
  if ( ValueW )
  {
    v4 = 156LL;
LABEL_6:
    wil::details::in1diag3::_Log_Win32(
      v3,
      v4,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ShellProgramConfiguration.h",
      (const char *)ValueW);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hkey);
    return 0;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_BASBF>::GetImpl'::`2'::impl) )
  {
    ValueW = RegGetValueW(
               hkey[0],
               L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
               L"PhysicalDeviceAccessConfigured",
               0x10u,
               0LL,
               &v8,
               &v10);
    v3 = retaddr;
    if ( ValueW )
    {
      v4 = 174LL;
      goto LABEL_6;
    }
LABEL_14:
    v0 = v8 == 1;
    goto LABEL_15;
  }
  ValueW = RegGetValueW(
             hkey[0],
             L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
             L"PhysicalDeviceAccessConfigured",
             0x10u,
             0LL,
             &v8,
             &v10);
  if ( ValueW != 2 )
  {
    v3 = retaddr;
    if ( ValueW )
    {
      v4 = 167LL;
      goto LABEL_6;
    }
    goto LABEL_14;
  }
LABEL_15:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hkey);
  return v0;
}
