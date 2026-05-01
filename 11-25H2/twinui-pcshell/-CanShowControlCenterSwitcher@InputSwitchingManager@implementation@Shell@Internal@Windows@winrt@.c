/*
 * XREFs of ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18061367C
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x1806133DC (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 *     ?CanShow@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAH@Z @ 0x180613630 (-CanShow@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAH@Z.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x180613A18 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180613F98 (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1800EBAA0 (-IsAnyOOBE@@YA_NXZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?IsComplete@?$consume_Windows_ApplicationModel_IPackageUpdatingEventArgs@UIPackageUpdatingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805D32D8 (-IsComplete@-$consume_Windows_ApplicationModel_IPackageUpdatingEventArgs@UIPackageUpdatingEventA.c)
 *     ??$call@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z@?$factory_cache_entry@UGameBar@UI@Gaming@Windows@winrt@@UIGameBarStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A_NAEBUIGameBarStatics@UI@Gaming@Windows@2@@Z@Z @ 0x180612B20 (--$call@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z@-$factory_cache_entry@UGameBar@UI@G.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  char v2; // bl
  char IsComplete; // di
  char (__fastcall *v5)(__int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+38h] [rbp+10h]

  v6 = &qword_18089D438;
  v2 = 1;
  _InterlockedAdd64(&qword_18089D438, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics> )
  {
    IsComplete = winrt::impl::consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs>::IsComplete(&winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>);
    _InterlockedDecrement64(&qword_18089D438);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089D438);
    v5 = _lambda_c5531eb30e442e1349f82459eb3a7316_::_lambda_invoker_cdecl_;
    IsComplete = winrt::impl::factory_cache_entry<winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics>::call<bool (*)(winrt::Windows::Gaming::UI::IGameBarStatics const &)>(
                   (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
                   (__int64 (__fastcall **)(__int64 *))&v5);
  }
  if ( std::_Atomic_storage<bool,1>::load((__int64)this + 248) || IsAnyOOBE() || IsComplete )
    return 0;
  return v2;
}
