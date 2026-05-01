/*
 * XREFs of ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806415E0
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180643160 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x18029CB34 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802A7974 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x18064137C (-IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEB.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180660F20 (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 */

// Hidden C++ exception states: #wind=30
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRegistrationData(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  int v1; // edi
  const WCHAR *v2; // rax
  PHKEY phkResult; // rdx
  DWORD v4; // r14d
  unsigned int v5; // r8d
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent *v6; // rcx
  char IsValidRegistrationData; // bl
  DWORD v8; // r15d
  HKEY *v9; // rbx
  unsigned int v10; // r8d
  winrt::hstring *v11; // rax
  const WCHAR *v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  volatile signed __int32 *v15; // rax
  __int64 *v16; // rax
  winrt::hstring *v17; // rax
  const WCHAR *v18; // rax
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  volatile signed __int32 *v22; // rbx
  unsigned int v23; // r8d
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  const char *v26; // r9
  bool v27; // [rsp+40h] [rbp-708h] BYREF
  DWORD v28; // [rsp+44h] [rbp-704h] BYREF
  DWORD cchName; // [rsp+48h] [rbp-700h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-6FCh] BYREF
  HKEY v31; // [rsp+50h] [rbp-6F8h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-6F0h] BYREF
  volatile signed __int32 *v33; // [rsp+60h] [rbp-6E8h] BYREF
  volatile signed __int32 *v34; // [rsp+68h] [rbp-6E0h] BYREF
  volatile signed __int32 *v35; // [rsp+70h] [rbp-6D8h] BYREF
  volatile signed __int32 *v36; // [rsp+78h] [rbp-6D0h] BYREF
  volatile signed __int32 *v37; // [rsp+80h] [rbp-6C8h] BYREF
  volatile signed __int32 *v38; // [rsp+88h] [rbp-6C0h] BYREF
  volatile signed __int32 *v39; // [rsp+90h] [rbp-6B8h] BYREF
  volatile signed __int32 *v40; // [rsp+98h] [rbp-6B0h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-6A8h] BYREF
  volatile signed __int32 *v42; // [rsp+A8h] [rbp-6A0h] BYREF
  volatile signed __int32 *v43; // [rsp+B0h] [rbp-698h] BYREF
  volatile signed __int32 *v44; // [rsp+B8h] [rbp-690h] BYREF
  volatile signed __int32 *v45; // [rsp+C0h] [rbp-688h] BYREF
  volatile signed __int32 *v46; // [rsp+C8h] [rbp-680h] BYREF
  volatile signed __int32 *v47; // [rsp+D0h] [rbp-678h] BYREF
  volatile signed __int32 *v48; // [rsp+D8h] [rbp-670h] BYREF
  volatile signed __int32 *v49; // [rsp+E0h] [rbp-668h] BYREF
  volatile signed __int32 *v50; // [rsp+E8h] [rbp-660h] BYREF
  volatile signed __int32 *v51[2]; // [rsp+F0h] [rbp-658h] BYREF
  WCHAR Name[264]; // [rsp+100h] [rbp-648h] BYREF
  WCHAR v53[264]; // [rsp+310h] [rbp-438h] BYREF
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
      winrt::hstring::hstring((winrt::hstring *)&v34, Name);
      winrt::hstring::hstring((winrt::hstring *)&v33, (const struct winrt::hstring *)&v34, v5);
      IsValidRegistrationData = winrt::Windows::Internal::Shell::implementation::CloudPCComponent::IsValidRegistrationData(
                                  v6,
                                  (const struct winrt::hstring *)&v33);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v33);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
      if ( IsValidRegistrationData )
      {
        v31 = 0LL;
        v28 = 260;
        v8 = 0;
        v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v31);
        winrt::hstring::hstring((winrt::hstring *)&v36, Name);
        winrt::hstring::hstring((winrt::hstring *)&v35, (const struct winrt::hstring *)&v36, v10);
        v11 = (winrt::hstring *)winrt::operator+(
                                  (volatile signed __int32 *)&v48,
                                  &c_remoteSystemAvailabilityRegPath,
                                  (__int64 *)&v35);
        v12 = winrt::hstring::c_str(v11);
        RegOpenKeyExW(HKEY_CURRENT_USER, v12, 0, 0x20019u, v9);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v48);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v35);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v36);
        while ( !RegEnumKeyExW(v31, v8, v53, &v28, 0LL, 0LL, 0LL, 0LL) )
        {
          pcbData = 520;
          winrt::hstring::hstring((winrt::hstring *)&v40, v53);
          winrt::hstring::hstring((winrt::hstring *)&v39, (const struct winrt::hstring *)&v40, v13);
          winrt::hstring::hstring((winrt::hstring *)&v38, Name);
          winrt::hstring::hstring((winrt::hstring *)&v37, (const struct winrt::hstring *)&v38, v14);
          v15 = winrt::operator+((volatile signed __int32 *)v51, &c_remoteSystemAvailabilityRegPath, (__int64 *)&v37);
          v16 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v50, (__int64)v15, (__int64)L"\\");
          v17 = (winrt::hstring *)winrt::operator+((volatile signed __int32 *)&v49, v16, (__int64 *)&v39);
          v18 = winrt::hstring::c_str(v17);
          RegGetValueW(HKEY_CURRENT_USER, v18, L"displayName", 2u, 0LL, pvData, &pcbData);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v49);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v50);
          winrt::handle_type<winrt::impl::hstring_traits>::close(v51);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v38);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v40);
          v27 = 1;
          winrt::hstring::hstring((winrt::hstring *)&v47, pvData);
          winrt::hstring::hstring((winrt::hstring *)&v46, (const struct winrt::hstring *)&v47, v19);
          winrt::hstring::hstring((winrt::hstring *)&v45, Name);
          winrt::hstring::hstring((winrt::hstring *)&v44, (const struct winrt::hstring *)&v45, v20);
          winrt::hstring::hstring((winrt::hstring *)&v43, v53);
          winrt::hstring::hstring((winrt::hstring *)&v42, (const struct winrt::hstring *)&v43, v21);
          v22 = (volatile signed __int32 *)operator new(0x30uLL);
          v51[1] = v22;
          *((_QWORD *)v22 + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::Windows::Internal::Shell::IRegistrationData>::`vftable';
          _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
          *((_QWORD *)v22 + 1) = 1LL;
          *(_QWORD *)v22 = &winrt::Windows::Internal::Shell::implementation::RegistrationData::`vftable';
          winrt::hstring::hstring((winrt::hstring *)(v22 + 6), (const struct winrt::hstring *)&v42, v23);
          winrt::hstring::hstring((winrt::hstring *)(v22 + 8), (const struct winrt::hstring *)&v44, v24);
          winrt::hstring::hstring((winrt::hstring *)(v22 + 10), (const struct winrt::hstring *)&v46, v25);
          *(_QWORD *)v22 = &winrt::Windows::Internal::Shell::implementation::RegistrationData::`vftable';
          v41 = (unsigned __int64)(v22 + 4) & -(__int64)(v22 != 0LL);
          v1 |= 1u;
          winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(
            (const struct winrt::Windows::Internal::Shell::RegistrationData *)&v41,
            &v27);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v41);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v42);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v44);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v45);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v46);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v47);
          ++v8;
          v28 = 260;
        }
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v31);
      }
      ++v4;
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x12D,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v26);
  }
}
