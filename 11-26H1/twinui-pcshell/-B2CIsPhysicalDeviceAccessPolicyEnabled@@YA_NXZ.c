/*
 * XREFs of ?B2CIsPhysicalDeviceAccessPolicyEnabled@@YA_NXZ @ 0x180459EB0
 * Callers:
 *     ?B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ @ 0x180459D8C (-B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

char B2CIsPhysicalDeviceAccessPolicyEnabled(void)
{
  char v0; // bl
  HKEY *v1; // rax
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned int ValueW; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int pvData; // [rsp+50h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+18h] BYREF
  HKEY hkey; // [rsp+60h] [rbp+20h] BYREF

  v0 = 0;
  hkey = 0LL;
  v1 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hkey);
  v2 = RegOpenCurrentUser(0x20019u, v1);
  if ( !v2 )
  {
    pvData = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               hkey,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\CloudDesktop\\NodeValues",
               L"EnablePhysicalDeviceAccessOnCtrlAltDel",
               0x10u,
               0LL,
               &pvData,
               &pcbData);
    if ( ValueW )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        128LL,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ShellProgramConfiguration.h",
        (const char *)ValueW);
    }
    else if ( pvData == 1 )
    {
      goto LABEL_10;
    }
    v2 = RegGetValueW(
           hkey,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\CloudDesktop\\NodeValues",
           L"EnablePhysicalDeviceAccessOnErrorScreens",
           0x10u,
           0LL,
           &pvData,
           &pcbData);
    if ( v2 )
    {
      v3 = 135LL;
      goto LABEL_3;
    }
    if ( pvData != 1 )
      goto LABEL_11;
LABEL_10:
    v0 = 1;
    goto LABEL_11;
  }
  v3 = 122LL;
LABEL_3:
  wil::details::in1diag3::_Log_Win32(
    retaddr,
    v3,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ShellProgramConfiguration.h",
    (const char *)v2);
LABEL_11:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
  return v0;
}
