/*
 * XREFs of ?CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@U76@@Z @ 0x180624F5C
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180626FA4 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800C1AA8 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1802A392C (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=5
volatile signed __int32 *__fastcall winrt::Windows::Internal::Shell::implementation::Utils::CreateCorrelationIdForSwitch(
        volatile signed __int32 *a1,
        __int64 *a2)
{
  HRESULT v4; // eax
  int v6; // eax
  __int64 *v7; // rax
  winrt::hstring *v8; // rax
  const WCHAR *v9; // rax
  LSTATUS v10; // ebx
  __int64 v11; // rax
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v13; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  HKEY *p_hKey; // [rsp+70h] [rbp-90h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-88h] BYREF
  char v17; // [rsp+80h] [rbp-80h]
  __int64 *v18; // [rsp+88h] [rbp-78h]
  GUID pguid; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 Data[40]; // [rsp+A0h] [rbp-60h] BYREF
  OLECHAR sz; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v22[39]; // [rsp+F2h] [rbp-Eh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v14[0] = a1;
  v18 = a2;
  pguid = 0LL;
  hKey = 0LL;
  v4 = CoCreateGuid(&pguid);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (int)"pcshell\\twinui\\cloudpc\\lib\\Utils.h",
      (const char *)(unsigned int)v4);
LABEL_3:
    winrt::hstring::hstring((winrt::hstring *)a1, &LocaleName);
    goto LABEL_4;
  }
  memset_0(&sz, 0, 0x4EuLL);
  memset_0(Data, 0, 0x4AuLL);
  if ( StringFromGUID2(&pguid, &sz, 39) != 39 )
    goto LABEL_3;
  v22[36] = 0;
  v6 = StringCchCopyW((char *)Data, 37LL, (char *)v22);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x67,
      (int)"pcshell\\twinui\\cloudpc\\lib\\Utils.h",
      (const char *)(unsigned int)v6);
    Data[0] = 0;
  }
  p_hKey = &hKey;
  phkResult = 0LL;
  v17 = 1;
  v7 = (__int64 *)winrt::hstring::hstring(
                    (winrt::hstring *)v14,
                    L"Software\\Microsoft\\Windows\\RemoteSystemIntegration\\");
  v8 = (winrt::hstring *)winrt::operator+((volatile signed __int32 *)&v13, v7, a2);
  v9 = winrt::hstring::c_str(v8);
  v10 = RegCreateKeyExW(HKEY_CURRENT_USER, v9, 0, 0LL, 1u, 0x20006u, 0LL, &phkResult, 0LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v14);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>((__int64)&p_hKey);
  if ( !v10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( Data[v11] );
    RegSetValueExW(hKey, L"CorrelationId", 0, 1u, (const BYTE *)Data, 2 * v11 + 2);
  }
  winrt::hstring::hstring((winrt::hstring *)&v13, Data);
  winrt::hstring::hstring((winrt::hstring *)a1, (const struct winrt::hstring *)&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
LABEL_4:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
  return a1;
}
