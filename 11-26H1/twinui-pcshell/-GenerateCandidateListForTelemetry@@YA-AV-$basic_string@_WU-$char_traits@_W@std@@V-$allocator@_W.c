/*
 * XREFs of ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x1801AFA90
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1801AEED0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800286C8 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@I@Z @ 0x18009AE5C (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UIXamlMetadataProvide.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1801AFC68 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?_Get_buffer_view@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AU_Buffer_view@12@XZ @ 0x18029CA44 (-_Get_buffer_view@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AU_Buf.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18029FF30 (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x1802AE828 (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 *     ??$_Construct@$00PEB_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXQEB_W_K@Z @ 0x18069E3D4 (--$_Construct@$00PEB_W@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXQEB_.c)
 *     ?ActivationTimestamp@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806A900C (-ActivationTimestamp@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitc.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1806AA2A0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall GenerateCandidateListForTelemetry(_OWORD *a1, __int64 *a2)
{
  int NetworkConnectivityLevel; // r13d
  const char *v5; // r9
  _OWORD *result; // rax
  int v7; // ebx
  __int64 v8; // r12
  const WCHAR *FileNameW; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r14d
  _OWORD *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 *v17; // [rsp+20h] [rbp-168h] BYREF
  int v18; // [rsp+28h] [rbp-160h]
  volatile signed __int32 *v19; // [rsp+30h] [rbp-158h] BYREF
  __int64 v20; // [rsp+38h] [rbp-150h] BYREF
  _OWORD *v21; // [rsp+40h] [rbp-148h]
  __int64 v22; // [rsp+48h] [rbp-140h] BYREF
  char v23[16]; // [rsp+60h] [rbp-128h] BYREF
  char v24[8]; // [rsp+70h] [rbp-118h] BYREF
  char v25[128]; // [rsp+78h] [rbp-110h] BYREF
  _BYTE v26[104]; // [rsp+F8h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  try
  {
    v21 = a1;
    v7 = 0;
    v18 = 0;
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(v23);
    v13 = 0;
    NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(a2);
    while ( v13 != NetworkConnectivityLevel )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetAt(
        a2,
        (winrt *)&v17,
        v13);
      v7 |= 2u;
      winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
        &v17,
        &v19);
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::ActivationTimestamp(
        &v17,
        &v20);
      v8 = v20;
      if ( v19 )
        FileNameW = (const WCHAR *)*((_QWORD *)v19 + 2);
      else
        FileNameW = &pvData;
      if ( !PathIsFileSpecW(FileNameW) )
        FileNameW = PathFindFileNameW(FileNameW);
      v10 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v24, FileNameW);
      v11 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v10, L":");
      v12 = std::wostream::operator<<(v11, v8);
      std::operator<<<wchar_t,std::char_traits<wchar_t>>(v12, L";");
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
      if ( v17 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v17);
      ++v13;
    }
    std::wstring::wstring((__int64)a1);
    v18 = v7 | 0x20;
    std::wstringbuf::_Get_buffer_view(v25, &v22);
    if ( v22 )
      std::wstring::assign(a1);
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(v26);
    std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v26);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xF3,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      v5);
    v14 = v21;
    *v21 = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    v15 = std::_WChar_traits<wchar_t>::length((__int64)&pvData);
    std::wstring::_Construct<1,wchar_t const *>(v14, v16, v15);
    return v14;
  }
  return result;
}
