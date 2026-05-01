/*
 * XREFs of ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061BC40
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18061D700 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1802A392C (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802AB088 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x18061B9F4 (-IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEB.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x18063B49C (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 */

// Hidden C++ exception states: #wind=30
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRegistrationData(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  int v1; // edi
  const WCHAR *v2; // rax
  PHKEY phkResult; // rdx
  DWORD v4; // esi
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent *v5; // rcx
  char IsValidRegistrationData; // bl
  DWORD v7; // r15d
  HKEY *v8; // rbx
  winrt::hstring *v9; // rax
  const WCHAR *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  winrt::hstring *v13; // rax
  const WCHAR *v14; // rax
  _QWORD *v15; // rbx
  const char *v16; // r9
  bool v17; // [rsp+40h] [rbp-708h] BYREF
  DWORD v18; // [rsp+44h] [rbp-704h] BYREF
  DWORD cchName; // [rsp+48h] [rbp-700h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-6FCh] BYREF
  HKEY v21; // [rsp+50h] [rbp-6F8h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-6F0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-6E8h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-6E0h] BYREF
  volatile signed __int32 *v25; // [rsp+70h] [rbp-6D8h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-6D0h] BYREF
  volatile signed __int32 *v27; // [rsp+80h] [rbp-6C8h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp-6C0h] BYREF
  volatile signed __int32 *v29; // [rsp+90h] [rbp-6B8h] BYREF
  volatile signed __int32 *v30; // [rsp+98h] [rbp-6B0h] BYREF
  volatile signed __int32 *v31; // [rsp+A0h] [rbp-6A8h] BYREF
  volatile signed __int32 *v32; // [rsp+A8h] [rbp-6A0h] BYREF
  volatile signed __int32 *v33; // [rsp+B0h] [rbp-698h] BYREF
  volatile signed __int32 *v34; // [rsp+B8h] [rbp-690h] BYREF
  volatile signed __int32 *v35; // [rsp+C0h] [rbp-688h] BYREF
  volatile signed __int32 *v36; // [rsp+C8h] [rbp-680h] BYREF
  volatile signed __int32 *v37; // [rsp+D0h] [rbp-678h] BYREF
  volatile signed __int32 *v38; // [rsp+D8h] [rbp-670h] BYREF
  volatile signed __int32 *v39; // [rsp+E0h] [rbp-668h] BYREF
  volatile signed __int32 *v40; // [rsp+E8h] [rbp-660h] BYREF
  volatile signed __int32 *v41[2]; // [rsp+F0h] [rbp-658h] BYREF
  WCHAR Name[264]; // [rsp+100h] [rbp-648h] BYREF
  WCHAR v43[264]; // [rsp+310h] [rbp-438h] BYREF
  unsigned __int16 pvData[264]; // [rsp+520h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+748h] [rbp+0h]

  v1 = 0;
  pcbData = 0;
  hKey = 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v2 = winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemAvailabilityRegPath);
  RegOpenKeyExW(HKEY_CURRENT_USER, v2, 0, 0x20019u, phkResult);
  v4 = 0;
  try
  {
    while ( 1 )
    {
      cchName = 260;
      if ( RegEnumKeyExW(hKey, v4, Name, &cchName, 0LL, 0LL, 0LL, 0LL) )
        break;
      winrt::hstring::hstring((winrt::hstring *)&v25, Name);
      winrt::hstring::hstring((winrt::hstring *)&v24, (const struct winrt::hstring *)&v25);
      IsValidRegistrationData = winrt::Windows::Internal::Shell::implementation::CloudPCComponent::IsValidRegistrationData(
                                  v5,
                                  (const struct winrt::hstring *)&v24);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v24);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
      if ( IsValidRegistrationData )
      {
        v21 = 0LL;
        v18 = 260;
        v7 = 0;
        v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v21);
        winrt::hstring::hstring((winrt::hstring *)&v27, Name);
        winrt::hstring::hstring((winrt::hstring *)&v26, (const struct winrt::hstring *)&v27);
        v9 = (winrt::hstring *)winrt::operator+(
                                 (volatile signed __int32 *)&v38,
                                 &c_remoteSystemAvailabilityRegPath,
                                 (__int64 *)&v26);
        v10 = winrt::hstring::c_str(v9);
        RegOpenKeyExW(HKEY_CURRENT_USER, v10, 0, 0x20019u, v8);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v38);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v27);
        while ( !RegEnumKeyExW(v21, v7, v43, &v18, 0LL, 0LL, 0LL, 0LL) )
        {
          pcbData = 520;
          winrt::hstring::hstring((winrt::hstring *)&v31, v43);
          winrt::hstring::hstring((winrt::hstring *)&v30, (const struct winrt::hstring *)&v31);
          winrt::hstring::hstring((winrt::hstring *)&v29, Name);
          winrt::hstring::hstring((winrt::hstring *)&v28, (const struct winrt::hstring *)&v29);
          v11 = (__int64 *)winrt::operator+(
                             (volatile signed __int32 *)v41,
                             &c_remoteSystemAvailabilityRegPath,
                             (__int64 *)&v28);
          v12 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v40, v11, (__int64)L"\\");
          v13 = (winrt::hstring *)winrt::operator+((volatile signed __int32 *)&v39, v12, (__int64 *)&v30);
          v14 = winrt::hstring::c_str(v13);
          RegGetValueW(HKEY_CURRENT_USER, v14, L"displayName", 2u, 0LL, pvData, &pcbData);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v40);
          winrt::handle_type<winrt::impl::hstring_traits>::close(v41);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v28);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v29);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
          v17 = 1;
          winrt::hstring::hstring((winrt::hstring *)&v37, pvData);
          winrt::hstring::hstring((winrt::hstring *)&v36, (const struct winrt::hstring *)&v37);
          winrt::hstring::hstring((winrt::hstring *)&v35, Name);
          winrt::hstring::hstring((winrt::hstring *)&v34, (const struct winrt::hstring *)&v35);
          winrt::hstring::hstring((winrt::hstring *)&v33, v43);
          winrt::hstring::hstring((winrt::hstring *)&v32, (const struct winrt::hstring *)&v33);
          v15 = operator new(0x30uLL);
          v23 = (__int64)v15;
          v15[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::Windows::Internal::Shell::IRegistrationData>::`vftable';
          _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
          v15[1] = 1LL;
          *v15 = &winrt::Windows::Internal::Shell::implementation::RegistrationData::`vftable';
          winrt::hstring::hstring((winrt::hstring *)(v15 + 3), (const struct winrt::hstring *)&v32);
          winrt::hstring::hstring((winrt::hstring *)(v15 + 4), (const struct winrt::hstring *)&v34);
          winrt::hstring::hstring((winrt::hstring *)(v15 + 5), (const struct winrt::hstring *)&v36);
          *v15 = &winrt::Windows::Internal::Shell::implementation::RegistrationData::`vftable';
          v23 = (unsigned __int64)(v15 + 2) & -(__int64)(v15 != 0LL);
          v1 |= 1u;
          winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(
            (const struct winrt::Windows::Internal::Shell::RegistrationData *)&v23,
            &v17);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v33);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v35);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v36);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
          ++v7;
          v18 = 260;
        }
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v21);
      }
      ++v4;
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x12F,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v16);
  }
}
