/*
 * XREFs of ?TryGetTileIdForApplicationView@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUIApplicationView@@@Z @ 0x1805180B4
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x1805176A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1800F1F24 (--R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@Window.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x18033533C (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 *     ??$call@AEAV_lambda_8c93f79d967566fb00a2a4bc6e814545_@@@?$factory_cache_entry@UTileId@StartScreen@UI@WindowsUdk@winrt@@UITileIdStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_8c93f79d967566fb00a2a4bc6e814545_@@@Z @ 0x18051441C (--$call@AEAV_lambda_8c93f79d967566fb00a2a4bc6e814545_@@@-$factory_cache_entry@UTileId@StartScree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall JointResize::TryGetTileIdForApplicationView(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // rsi
  char **v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 *v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-70h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-60h]
  __int64 *v15; // [rsp+50h] [rbp-58h]
  _BYTE v16[32]; // [rsp+58h] [rbp-50h] BYREF
  void *v17[4]; // [rsp+78h] [rbp-30h] BYREF

  v3 = a2;
  v14 = a2;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)a3 + 136LL))(a3, &v11) < 0 || !v11 )
    goto LABEL_12;
  v4 = std::wstring::wstring((char **)v17, v11);
  v5 = (unsigned __int64)v4[2];
  if ( (unsigned __int64)v4[3] > 7 )
    v4 = (char **)*v4;
  v6 = std::_Traits_find_ch<std::char_traits<unsigned short>>((__int64)v4, v5, 0LL, 33);
  std::wstring::_Tidy_deallocate(v17);
  if ( v6 == -1 )
  {
LABEL_12:
    *v3 = 0LL;
  }
  else
  {
    v10 = 0LL;
    try
    {
      winrt::param::hstring::hstring((winrt::param::hstring *)v16, v11);
      v13[0] = v16;
      v15 = &qword_18089BB68;
      _InterlockedIncrement64(&qword_18089BB68);
      if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics> )
      {
        _lambda_706f938a80e432de8be00e3d53e53638_::operator()(
          v13,
          (__int64)&v12,
          (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>);
        _InterlockedDecrement64(&qword_18089BB68);
      }
      else
      {
        _InterlockedDecrement64(&qword_18089BB68);
        winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::call<_lambda_8c93f79d967566fb00a2a4bc6e814545_ &>(
          v7,
          (__int64)&v12,
          v13);
      }
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v10, &v12);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
    }
    catch ( ... )
    {
      v3 = v14;
    }
    v8 = v10;
    v10 = 0LL;
    *v3 = v8;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  return v3;
}
