/*
 * XREFs of ?PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ @ 0x18009AABC
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18024EE7C (--0XamlLauncher@@QEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x18009ADFC (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009B7B8 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803372F4 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall StartDocked::PrecreateStartMenuConfigRegKey(StartDocked *this)
{
  HKEY *v1; // rax
  HKEY *v2; // rax
  unsigned int v3; // eax
  struct _ACL *v4; // rax
  DWORD v5; // eax
  const char *v6; // r9
  unsigned int phkResult; // [rsp+20h] [rbp-58h]
  unsigned int phkResulta; // [rsp+20h] [rbp-58h]
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+50h] [rbp-28h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  WINBOOL bDaclDefaulted; // [rsp+80h] [rbp+8h] BYREF
  WINBOOL bDaclPresent; // [rsp+88h] [rbp+10h] BYREF
  HANDLE handle; // [rsp+90h] [rbp+18h] BYREF
  PACL pDacl; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    CapabilityHelper::CreateSecurityAttributesForUWPCapability();
    handle = 0LL;
    v1 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&handle);
    if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Start", 0, 1u, v1) == 2 )
    {
      v2 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&handle);
      v3 = RegCreateKeyExW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Start",
             0,
             0LL,
             0,
             0xF003Fu,
             &SecurityAttributes,
             v2,
             0LL);
      if ( v3 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          (void *)0x18,
          (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\StartDockedHelpers.h",
          (const char *)v3,
          phkResult);
    }
    else
    {
      pDacl = 0LL;
      bDaclPresent = 0;
      bDaclDefaulted = 0;
      if ( GetSecurityDescriptorDacl(pSecurityDescriptor, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      {
        v4 = pDacl;
        if ( !pDacl )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x25,
            (int)"shellcommon\\internal\\shell\\inc\\Private\\StartDockedHelpers.h",
            (const char *)0x8000FFFFLL);
          v4 = pDacl;
        }
        v5 = SetSecurityInfo(handle, SE_REGISTRY_KEY, 4u, 0LL, 0LL, v4, 0LL);
        if ( v5 )
          wil::details::in1diag3::_Throw_Win32(
            retaddr,
            (void *)0x2C,
            (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\StartDockedHelpers.h",
            (const char *)v5,
            phkResulta);
      }
    }
    if ( handle )
      RegCloseKey((HKEY)handle);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pSecurityDescriptor);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2F,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\StartDockedHelpers.h",
      v6);
  }
}
