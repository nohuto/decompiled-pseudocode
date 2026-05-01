/*
 * XREFs of ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x18010A63C
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180108F20 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800A9908 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@I@Z @ 0x1801077DC (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UIXamlMetadataProvide.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x18010AAD8 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?_Get_buffer_view@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AU_Buffer_view@12@XZ @ 0x1802A1060 (-_Get_buffer_view@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AU_Buf.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x1802A7700 (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x1802B7EF8 (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 *     ??$_Construct@$00PEB_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXQEB_W_K@Z @ 0x180677948 (--$_Construct@$00PEB_W@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXQEB_.c)
 *     ?ActivationTimestamp@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180681C4C (-ActivationTimestamp@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitc.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180682F30 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall GenerateCandidateListForTelemetry(_QWORD *a1, __int64 *a2)
{
  int v4; // r15d
  const char *v5; // r9
  _QWORD *result; // rax
  __int64 v7; // r12
  const WCHAR *FileNameW; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r14d
  int NetworkConnectivityLevel; // eax
  _OWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 *v16; // [rsp+20h] [rbp-168h] BYREF
  int v17; // [rsp+28h] [rbp-160h]
  int v18; // [rsp+2Ch] [rbp-15Ch]
  volatile signed __int32 *v19; // [rsp+30h] [rbp-158h] BYREF
  __int64 v20; // [rsp+38h] [rbp-150h] BYREF
  _OWORD *v21; // [rsp+40h] [rbp-148h]
  __int64 v22; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v24[128]; // [rsp+78h] [rbp-110h] BYREF
  _BYTE v25[104]; // [rsp+F8h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v21 = a1;
  v4 = 0;
  v17 = 0;
  try
  {
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>();
    v12 = 0;
    NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(a2);
    v18 = NetworkConnectivityLevel;
    while ( v12 != NetworkConnectivityLevel )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetAt(
        a2,
        (winrt *)&v16,
        v12);
      v4 |= 2u;
      winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
        &v16,
        &v19);
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::ActivationTimestamp(
        &v16,
        &v20);
      v7 = v20;
      if ( v19 )
        FileNameW = (const WCHAR *)*((_QWORD *)v19 + 2);
      else
        FileNameW = &LocaleName;
      if ( !PathIsFileSpecW(FileNameW) )
        FileNameW = PathFindFileNameW(FileNameW);
      v9 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v23, FileNameW);
      v10 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v9, L":");
      v11 = std::wostream::operator<<(v10, v7);
      std::operator<<<wchar_t,std::char_traits<wchar_t>>(v11, L";");
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
      if ( v16 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v16);
      ++v12;
      NetworkConnectivityLevel = v18;
    }
    *(_OWORD *)a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    v17 = v4 | 0x20;
    std::wstringbuf::_Get_buffer_view(v24, &v22);
    if ( v22 )
      std::wstring::assign(a1);
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(v25);
    std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v25);
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
    std::wstring::_Construct<1,wchar_t const *>(v14, v15, 0LL);
    return v14;
  }
  return result;
}
