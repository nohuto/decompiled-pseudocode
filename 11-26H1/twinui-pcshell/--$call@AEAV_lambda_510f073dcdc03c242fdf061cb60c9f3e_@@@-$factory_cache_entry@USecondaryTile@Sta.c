/*
 * XREFs of ??$call@AEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@?$factory_cache_entry@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@impl@winrt@@QEAA?A_PAEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@Z @ 0x1805E12F4
 * Callers:
 *     ??$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@winrt@@YA?A_PXZ @ 0x1805E1CDC (--$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPri.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$?RAEBUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@QEBA?A_PAEBUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@Z @ 0x1805DE2B4 (--$-RAEBUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@_lambda_510f073dcd.c)
 *     ??$get_activation_factory@UISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@winrt@@YA?AUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1805E1C5C (--$get_activation_factory@UISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>::call<_lambda_510f073dcdc03c242fdf061cb60c9f3e_ &>(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  __int64 v4; // rcx
  signed __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // si
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+90h] [rbp+30h] BYREF

  v12 = a3;
  v11 = a1;
  v9[1] = 36LL;
  v9[0] = (__int64)L"Windows.UI.StartScreen.SecondaryTile";
  winrt::param::hstring::hstring((__int64)v10, v9);
  winrt::get_activation_factory<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>(&v12, v10);
  v5 = (signed __int64)v12;
  v11 = 0LL;
  if ( !v12 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
  v6 = v11;
  if ( !v11 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  if ( v7 )
  {
    _InterlockedIncrement64(&qword_1808DD7D8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>,
            v5,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DD7E0);
    }
    _lambda_510f073dcdc03c242fdf061cb60c9f3e_::operator()<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate const &>(
      v4,
      a2);
    _InterlockedDecrement64(&qword_1808DD7D8);
  }
  else
  {
    *a2 = v5;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  return a2;
}
