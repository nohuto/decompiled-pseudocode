/*
 * XREFs of ?B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ @ 0x180459D8C
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?B2CIsPhysicalDeviceAccessPolicyEnabled@@YA_NXZ @ 0x180459EB0 (-B2CIsPhysicalDeviceAccessPolicyEnabled@@YA_NXZ.c)
 */

bool B2CIsPhysicalDeviceAccessConfigured(void)
{
  bool v0; // bl
  HKEY *v1; // rax
  unsigned int ValueW; // eax
  __int64 v3; // rdx
  HKEY hkey[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+10h]
  int pvData; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF
  DWORD pcbData; // [rsp+80h] [rbp+28h] BYREF
  DWORD v10; // [rsp+88h] [rbp+30h] BYREF

  v0 = 0;
  pcbData = 4;
  pvData = 0;
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
  if ( ValueW )
  {
    v3 = 156LL;
LABEL_6:
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      v3,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ShellProgramConfiguration.h",
      (const char *)ValueW);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hkey);
    return 0;
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
    if ( ValueW )
    {
      v3 = 165LL;
      goto LABEL_6;
    }
    v0 = v8 == 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hkey);
  return v0;
}
