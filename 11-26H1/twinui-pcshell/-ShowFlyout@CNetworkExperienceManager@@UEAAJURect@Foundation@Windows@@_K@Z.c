/*
 * XREFs of ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x1803BE5C0
 * Callers:
 *     _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x1803BE000 (_lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180161DE8 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18017290C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1802AF2D4 (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x1803C57E8 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CNetworkExperienceManager::ShowFlyout(
        __int64 a1,
        const struct Windows::Foundation::Rect *a2,
        int a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // esi
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  int v17[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = SingleViewExperienceLogging::Provider(a1);
  if ( *(_DWORD *)v6 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v6,
      byte_1807FCF6B,
      0LL);
  v7 = 4;
  *(_QWORD *)v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         v17,
         (__int64)L"Windows.Internal.ShellExperience.NetworkFlyout",
         0x2EuLL);
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 104) )
    {
      v7 = 18;
      v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
             v17,
             (__int64)L" ",
             1uLL);
      v10 = v8;
      if ( v8 < 0 )
      {
        v11 = 133LL;
        goto LABEL_8;
      }
      v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
             v17,
             (__int64)L"LogonWebHost",
             0xCuLL);
      v10 = v8;
      if ( v8 < 0 )
      {
        v11 = 134LL;
        goto LABEL_8;
      }
      *(_BYTE *)(a1 + 104) = 0;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 132LL) = v7;
    v13 = *(_QWORD *)(a1 + 48);
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)v17, v9);
    v15 = CSingleViewShellExperience::SetArgs((HSTRING *)(v13 + 72), (HSTRING)v14[1].Reserved.Reserved1);
    v10 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x408,
        (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v15);
      v12 = v10;
      v11 = 140LL;
      goto LABEL_9;
    }
    v8 = CBaseTrayFlyoutExperienceManager::ShowFlyout(*(CBaseTrayFlyoutExperienceManager **)(a1 + 48), a2, (HWND)a3);
    v10 = v8;
    if ( v8 >= 0 )
    {
      v10 = 0;
      goto LABEL_18;
    }
    v11 = 141LL;
  }
  else
  {
    v11 = 127LL;
  }
LABEL_8:
  v12 = (unsigned int)v8;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\networkexperiencemanager.cpp",
    (const char *)v12);
LABEL_18:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v17);
  return v10;
}
