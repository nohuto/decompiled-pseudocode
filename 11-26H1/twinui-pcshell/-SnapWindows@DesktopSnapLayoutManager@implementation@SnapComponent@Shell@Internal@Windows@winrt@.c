/*
 * XREFs of ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BB51C
 * Callers:
 *     ?SnapWindows@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@IPEAURect@Foundation@Windows@3@@Z @ 0x1805BB4B0 (-SnapWindows@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x180233DD0 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@1@QEAU21@AEB_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x1805B7BCC (--$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@-$vector@U-$pair@_KURect@Foundat.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1805B84D4 (--$_Reallocate@$0A@@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pai.c)
 *     winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___ @ 0x1805B8A38 (winrt--impl--create_and_initialize_winrt--Windows--Internal--Shell--SnapComponent--implementatio.c)
 *     _lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_ @ 0x1805B9874 (_lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_--__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_.c)
 *     ?IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA_NAEBURect@Foundation@67@@Z @ 0x1805BA3D0 (-IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@w.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindows(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        __int64 a2,
        __int64 a3)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v5; // r8
  __int64 v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rbx
  const struct winrt::Windows::Foundation::Rect *v10; // r14
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v5 = this;
  v6 = *(unsigned int *)(a2 + 8);
  if ( *(_DWORD *)(a3 + 8) != (_DWORD)v6 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10E,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)0x80070057LL,
      v15);
  v15 = 0LL;
  v16 = 0LL;
  v21 = v6;
  if ( (_DWORD)v6 )
  {
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Reallocate<0>(
      (void **)&v15,
      (unsigned __int64 *)&v21);
    v5 = this;
  }
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    v8 = *(_QWORD *)a3;
    v21 = *(_QWORD *)a3;
    v9 = *((_QWORD *)&v15 + 1);
    do
    {
      v10 = (const struct winrt::Windows::Foundation::Rect *)(v8 + 16LL * v7);
      if ( !winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::IsWithinWorkArea(
              v5,
              v10) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x117,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
          (const char *)0x80070057LL,
          v15);
      v11 = (_QWORD *)(*(_QWORD *)a2 + 8LL * v7);
      if ( v9 == v16 )
      {
        std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Emplace_reallocate<unsigned __int64 const &,winrt::Windows::Foundation::Rect const &>(
          (void **)&v15,
          v9,
          v11,
          v10);
        v9 = *((_QWORD *)&v15 + 1);
      }
      else
      {
        *(_QWORD *)v9 = *v11;
        *(_OWORD *)(v9 + 8) = *(_OWORD *)v10;
        v9 = *((_QWORD *)&v15 + 1) + 24LL;
        *((_QWORD *)&v15 + 1) += 24LL;
      }
      ++v7;
      v5 = this;
      v8 = v21;
    }
    while ( v7 < (unsigned int)v6 );
  }
  else
  {
    v9 = *((_QWORD *)&v15 + 1);
  }
  v12 = v16;
  v16 = 0LL;
  v13 = v15;
  v15 = 0uLL;
  v17[0] = v13;
  v17[1] = v9;
  v17[2] = v12;
  v18 = *((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  v14 = winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___(v17);
  v21 = (unsigned __int64)(v14 + 2) & -(__int64)(v14 != 0LL);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    (__int64 *)this + 11,
    &v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_((__int64)v17);
  if ( (_QWORD)v15 )
    std::_Deallocate<16>((void *)v15, (struct std::nothrow_t *)(8 * ((v16 - (__int64)v15) >> 3)));
}
