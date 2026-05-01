/*
 * XREFs of ?TryGetTileIdForWindow@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@Z @ 0x18053ACC8
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x18053A1A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C1C60 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7710 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017BAF4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18027C6DC (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??$call@AEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@?$factory_cache_entry@UTileId@StartScreen@UI@WindowsUdk@winrt@@UITileIdStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@Z @ 0x180536C18 (--$call@AEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@-$factory_cache_entry@UTileId@StartScree.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 *__fastcall JointResize::TryGetTileIdForWindow(__int64 a1, __int64 *a2, CallerIdentity *a3)
{
  __int64 *v4; // rsi
  char *v5; // rax
  void *v6; // rbx
  void **v7; // rdx
  unsigned __int16 **v8; // r8
  void **v9; // rax
  unsigned __int16 **v10; // r8
  char *FileNameW; // rax
  const char *v12; // r9
  void (__fastcall ***v13)(_QWORD, __int64 *, __int64 **); // rcx
  __int64 v14; // rax
  LPCWSTR pszPath; // [rsp+28h] [rbp-50h] BYREF
  _BYTE *v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v18; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v19[56]; // [rsp+40h] [rbp-38h] BYREF
  __int64 dwProcessId; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v21; // [rsp+88h] [rbp+10h]
  unsigned __int16 *v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = a2;
  HIDWORD(dwProcessId) = HIDWORD(a1);
  v4 = a2;
  v22 = 0LL;
  LODWORD(dwProcessId) = 0;
  pszPath = 0LL;
  GetWindowThreadProcessId((HWND)a3, (LPDWORD)&dwProcessId);
  v5 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  try
  {
    v6 = v5;
    v18 = (__int64 *)v5;
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v22);
      if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(a3, (HWND)v7, v8) < 0 )
      {
        v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&pszPath);
        if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v6, v9, v10) >= 0 )
        {
          if ( pszPath )
          {
            FileNameW = (char *)PathFindFileNameW(pszPath);
            if ( FileNameW )
            {
              wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                &v17,
                FileNameW,
                0xFFFFFFFFFFFFFFFFuLL,
                v12);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
                (void **)&v22,
                (void **)&v17);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v17);
            }
          }
        }
      }
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v18);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
  }
  catch ( ... )
  {
    v4 = v21;
  }
  if ( v22 )
  {
    dwProcessId = 0LL;
    winrt::param::hstring::hstring((winrt::param::hstring *)v19, v22);
    v17 = v19;
    v18 = &qword_1808DC298;
    _InterlockedIncrement64(&qword_1808DC298);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics> )
    {
      _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
        &v17,
        (__int64)&pszPath,
        (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>);
      _InterlockedDecrement64(&qword_1808DC298);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DC298);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::call<_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_ &>(
        v13,
        (__int64)&pszPath,
        &v17);
    }
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&dwProcessId, (__int64 *)&pszPath);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&pszPath);
    v14 = dwProcessId;
    dwProcessId = 0LL;
    *v4 = v14;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&dwProcessId);
  }
  else
  {
    *v4 = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v22);
  return v4;
}
