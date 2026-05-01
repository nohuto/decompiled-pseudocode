/*
 * XREFs of ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1804A5CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??1?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x1802C6028 (--1-$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@p.c)
 *     ?FindPackagesForUser@?$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1803B1224 (-FindPackagesForUser@-$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@De.c)
 *     ??$?0U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1804A1F44 (--$-0U-$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@.c)
 *     ??$?0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Z@?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCAppThumbnailWindow@@P84@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@23@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@67823@@Z@Z @ 0x1804A2264 (--$-0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@U.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1804A2890 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@w.c)
 *     ?CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@XZ @ 0x1804A544C (-CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Compos.c)
 *     ?InsertBoolean@?$consume_Windows_UI_Composition_ICompositionPropertySet2@UCompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@_N@Z @ 0x1804A66E0 (-InsertBoolean@-$consume_Windows_UI_Composition_ICompositionPropertySet2@UCompositionPropertySet.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1804A96EC (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICo.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x1804A9748 (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTrigge_ea_1804A9748.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppThumbnailWindow::DirectionChangeThresholdTriggerFiredHandler(
        CAppThumbnailWindow *this,
        const struct winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *a2,
        const struct winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *a3)
{
  __int64 *v4; // rdi
  bool v5; // bl
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 *PackagesForUser; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10[5]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+88h] [rbp+38h] BYREF

  v4 = (__int64 *)((char *)this + 496);
  winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
    (char *)this + 496,
    (char *)this + 512);
  v5 = *((_BYTE *)this + 171) == 0;
  *((_BYTE *)this + 171) = v5;
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, L"isDraggingRight");
  LOBYTE(v6) = v5;
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet2<winrt::Windows::UI::Composition::CompositionPropertySet>::InsertBoolean(
    (char *)this + 392,
    v10,
    v6);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal>(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 48,
    &v12);
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>(
    (__int64)v10,
    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 63);
  v7 = CAppThumbnailWindow::CreateTriggerConditionForDirectionChange((__int64)this, &v9);
  PackagesForUser = winrt::impl::consume_Windows_Management_Deployment_IPackageManager<winrt::Windows::Management::Deployment::IPackageManager>::FindPackagesForUser(
                      &v12,
                      &v11,
                      v7,
                      v10);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v4, PackagesForUser);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::~iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>((__int64)v10);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>(
    &v11,
    (__int64)this,
    (__int64)CAppThumbnailWindow::DirectionChangeTriggerFiredHandler);
  *((_QWORD *)this + 61) = *(_QWORD *)winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
                                        v4,
                                        &v9,
                                        &v11);
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
}
