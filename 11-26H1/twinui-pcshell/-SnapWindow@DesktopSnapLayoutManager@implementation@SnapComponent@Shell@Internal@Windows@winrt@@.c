/*
 * XREFs of ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BB31C
 * Callers:
 *     ?SnapWindow@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAH_KURect@Foundation@Windows@3@IPEAU4563@@Z @ 0x1805BB2D0 (-SnapWindow@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Wind.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z @ 0x1802195CC (--8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x180233DD0 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ??$emplace_back@AEAURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAURect@Foundation@Windows@@AEAU234@@Z @ 0x180466390 (--$emplace_back@AEAURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocator@UR.c)
 *     winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___ @ 0x1805B8AC8 (winrt--impl--create_and_initialize_winrt--Windows--Internal--Shell--SnapComponent--_ea_1805B8AC8.c)
 *     _lambda_ac2a839fec59629fce3443c282716c2d_::__lambda_ac2a839fec59629fce3443c282716c2d_ @ 0x1805B98E0 (_lambda_ac2a839fec59629fce3443c282716c2d_--__lambda_ac2a839fec59629fce3443c282716c2d_.c)
 *     ?IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA_NAEBURect@Foundation@67@@Z @ 0x1805BA3D0 (-IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@w.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        __int64 a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        __int64 a4)
{
  __int64 v8; // rdx
  const struct winrt::Windows::Foundation::Rect *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+28h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+48h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( !winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::IsWithinWorkArea(
          this,
          a3) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xEC,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)0x80070057LL,
      v15);
  v16 = 0LL;
  v8 = 0LL;
  v17 = 0LL;
  v9 = *(const struct winrt::Windows::Foundation::Rect **)a4;
  v10 = *(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8);
  if ( v9 != (const struct winrt::Windows::Foundation::Rect *)v10 )
  {
    do
    {
      if ( !winrt::Windows::Foundation::operator==((float *)v9, (float *)a3) )
      {
        if ( !winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::IsWithinWorkArea(
                this,
                v9) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xF5,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
            (const char *)0x80070057LL,
            v15);
        std::vector<Windows::Foundation::Rect>::emplace_back<Windows::Foundation::Rect &>(&v16, (__int128 *)v9);
      }
      v9 = (const struct winrt::Windows::Foundation::Rect *)((char *)v9 + 16);
    }
    while ( v9 != (const struct winrt::Windows::Foundation::Rect *)v10 );
    v8 = v17;
  }
  v18 = a2;
  v19 = *(_OWORD *)a3;
  v17 = 0LL;
  v11 = *((_QWORD *)&v16 + 1);
  v12 = v16;
  v16 = 0uLL;
  v20 = v12;
  v21 = v11;
  v22 = v8;
  v23 = *((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
  v13 = winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___((__int64)&v18);
  v15 = (v13 + 16) & -(__int64)(v13 != 0);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    (__int64 *)this + 11,
    &v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  lambda_ac2a839fec59629fce3443c282716c2d_::__lambda_ac2a839fec59629fce3443c282716c2d_((__int64)&v18);
  return std::vector<Geometry::CRect>::_Tidy((__int64 *)&v16);
}
