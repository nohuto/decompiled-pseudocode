/*
 * XREFs of ?DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x180494F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??1?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x1802CE9E0 (--1-$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@p.c)
 *     ??$?0U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x180491404 (--$-0U-$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@.c)
 *     ??$?0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Z@?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCAppThumbnailWindow@@P84@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@23@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@67823@@Z@Z @ 0x18049158C (--$-0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@U.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180491B70 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@w.c)
 *     ?CreateAnimationTriggerPartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUExpressionAnimation@Composition@UI@Windows@3@AEBU?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@3@@Z @ 0x180492454 (-CreateAnimationTriggerPartner@-$consume_Windows_UI_Composition_Internal_ICompositorInternal@UIC.c)
 *     ?CreateTriggerConditionForDirectionChangeThreshold@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@XZ @ 0x180494628 (-CreateTriggerConditionForDirectionChangeThreshold@CAppThumbnailWindow@@AEAA-AUExpressionAnimati.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180498A3C (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICo.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x180498A90 (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTrigge_ea_180498A90.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppThumbnailWindow::DirectionChangeTriggerFiredHandler(
        CAppThumbnailWindow *this,
        const struct winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *a2,
        const struct winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *a3)
{
  _QWORD *v4; // rax
  __int64 *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+28h] BYREF

  winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
    (char *)this + 496,
    (char *)this + 488);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal>(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 48,
    &v9);
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>(
    (__int64)v7,
    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 66);
  v4 = CAppThumbnailWindow::CreateTriggerConditionForDirectionChangeThreshold((__int64)this, &v6);
  v5 = winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerPartner(
         &v9,
         &v8,
         v4,
         v7);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 65, v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::~iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>((__int64)v7);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>(
    &v8,
    (__int64)this,
    (__int64)CAppThumbnailWindow::DirectionChangeThresholdTriggerFiredHandler);
  *((_QWORD *)this + 64) = *(_QWORD *)winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
                                        (char *)this + 520,
                                        &v6,
                                        &v8);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
}
