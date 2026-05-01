/*
 * XREFs of CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804982C0
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_InitCoro$2 @ 0x180498240 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?AppWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CDA74 (-AppWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapCom.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801FB3CC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032BAD8 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180331830 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@experimental@std@@@Z @ 0x180488614 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindo.c)
 *     ?TryStartAnimationAsync@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUCompositor@Composition@UI@Windows@3@@Z @ 0x18048CD3C (-TryStartAnimationAsync@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestur.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x180491EBC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     ?AnimationData@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18049200C (-AnimationData@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperatio.c)
 *     ?CreateOpacityAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@_N@Z @ 0x1804936D4 (-CreateOpacityAnimation@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Composition@UI@Windows@w.c)
 *     ?CreateScaleAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@AEBUhstring@6@@Z @ 0x18049395C (-CreateScaleAnimation@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Composition@UI@Windows@win.c)
 *     ?GetInputAnimationObject@InputAnimationTarget@Input@Internal@UI@Windows@winrt@@SA@AEBUCompositor@Composition@456@AEBUGestureAnimationData@23456@@Z @ 0x180495148 (-GetInputAnimationObject@InputAnimationTarget@Input@Internal@UI@Windows@winrt@@SA@AEBUCompositor.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x1804951C0 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     ?InitializeCustomPropertiesForSwitch@CAppThumbnailWindow@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@@Z @ 0x180495610 (-InitializeCustomPropertiesForSwitch@CAppThumbnailWindow@@AEAAXAEBUInputGestureOperation@Input@I.c)
 *     ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x180496ACC (-SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x180496C80 (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x1804971BC (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804973E4 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804990F8 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall CAppThumbnailWindow::StartSwitchGestureOperationAsync__ResumeCoro_1(char *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *started; // rax
  std::_Ref_count_base *v13; // rcx
  char v14; // r15
  char *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r12
  _QWORD *v18; // rax
  __int64 *InputAnimationObject; // rax
  void (__fastcall ***v20)(_QWORD, void *, char *); // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  void (__fastcall ***v23)(_QWORD, void *, char *); // rcx
  __int64 v24; // rax
  __int64 v25; // r14
  char *v26; // r12
  void (__fastcall ***v27)(_QWORD, void *, char *); // rcx
  __int64 v28; // rax
  __int64 v29; // r14
  void (__fastcall ***v30)(_QWORD, void *, char *); // rcx
  __int64 v31; // rax
  __int64 v32; // r14
  void (__fastcall ***v33)(_QWORD, void *, char *); // rcx
  __int64 v34; // rax
  std::_Ref_count_base *v35; // rcx
  _QWORD *v36; // r11
  std::_Ref_count_base *v37; // rcx

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_41;
      case 2:
        *((_QWORD *)a1 + 54) = a1 + 9;
        if ( winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)(a1 + 457)) != 6 )
          MicrosoftTelemetryAssertTriggeredNoArgs(v3, v2, v4, v5);
        v6 = *(_DWORD *)(a1 + 473);
        if ( v6 != 4 && v6 != 3 )
          MicrosoftTelemetryAssertTriggeredNoArgs(v3, v2, v4, v5);
        v7 = *(__int64 **)(a1 + 449);
        if ( !CAppThumbnailWindow::HasSwitchAnimationVisuals((CAppThumbnailWindow *)v7) )
          MicrosoftTelemetryAssertTriggeredNoArgs(v9, v8, v10, v11);
        std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>((_QWORD *)a1 + 2, v7);
        started = winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::TryStartAnimationAsync(
                    (__int64 **)(a1 + 457),
                    (_QWORD *)a1 + 4,
                    v7 + 48);
        *((_QWORD *)a1 + 5) = 0LL;
        *((_QWORD *)a1 + 6) = started;
        *((_QWORD *)a1 + 7) = 0LL;
        a1[64] = 1;
        *((_WORD *)a1 + 4) = 4;
        if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
               (__int64)(a1 + 40),
               (__int64)a1) )
        {
          return;
        }
        goto LABEL_15;
      case 4:
LABEL_15:
        v14 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume((__int64)(a1 + 40));
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 5);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
        v15 = a1 + 16;
        if ( v14 )
        {
          std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(v15, a1 + 72);
          if ( *((_QWORD *)a1 + 9) )
          {
            v16 = *(_QWORD *)(a1 + 449);
            *(_BYTE *)(v16 + 184) = 1;
            v17 = *((_QWORD *)a1 + 54);
            v18 = winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::AnimationData(
                    (__int64 *)(v17 + 448),
                    (_QWORD *)a1 + 11);
            InputAnimationObject = (__int64 *)winrt::Windows::UI::Internal::Input::InputAnimationTarget::GetInputAnimationObject(
                                                (const struct winrt::Windows::UI::Composition::Compositor *)(a1 + 104),
                                                (const struct winrt::Windows::UI::Internal::Input::GestureAnimationData *)(v16 + 384),
                                                (__int64)v18);
            winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v16 + 464), InputAnimationObject);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 104));
            *(_BYTE *)(v16 + 171) = *(_DWORD *)(a1 + 473) == 4;
            CAppThumbnailWindow::InitializeCustomPropertiesForSwitch(
              (CAppThumbnailWindow *)v16,
              (const struct winrt::Windows::UI::Internal::Input::InputGestureOperation *)(v17 + 448));
            CAppThumbnailWindow::SetupTriggersForDragDirectionChange((CAppThumbnailWindow *)v16);
            CAppThumbnailWindow::SetupFlickScaleFactorAnimations((CAppThumbnailWindow *)v16, *(_DWORD *)(a1 + 473) == 4);
            CAppThumbnailWindow::SetupDragScaleFactorAnimations((CAppThumbnailWindow *)v16, *(_DWORD *)(a1 + 473) == 4);
            CAppThumbnailWindow::CreateOpacityAnimation(v16, (_QWORD *)a1 + 14, *(_DWORD *)(a1 + 473) == 4);
            v20 = (void (__fastcall ***)(_QWORD, void *, char *))*((_QWORD *)a1 + 14);
            if ( v20 )
            {
              *((_QWORD *)a1 + 48) = 0LL;
              (**v20)(v20, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, a1 + 384);
              v21 = *((_QWORD *)a1 + 48);
            }
            else
            {
              v21 = 0LL;
            }
            *((_QWORD *)a1 + 15) = v21;
            winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 128), L"Opacity");
            winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
              (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(v16 + 424),
              (_QWORD *)a1 + 16,
              (_QWORD *)a1 + 15);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
            v22 = *(_QWORD *)(a1 + 449);
            winrt::hstring::hstring(
              (winrt::hstring *)(a1 + 160),
              L"this.StartingValue * (    (operation.Ended && (m_compPropertySet.flickScaleFactorSecondApp != 0.0f))    ? "
               "m_compPropertySet.flickScaleFactorSecondApp    : m_compPropertySet.scaleFactorSecondApp)");
            CAppThumbnailWindow::CreateScaleAnimation(v22, (_QWORD *)a1 + 21, (__int64 *)a1 + 20);
            winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 20);
            v23 = (void (__fastcall ***)(_QWORD, void *, char *))*((_QWORD *)a1 + 21);
            if ( v23 )
            {
              *((_QWORD *)a1 + 49) = 0LL;
              (**v23)(v23, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, a1 + 392);
              v24 = *((_QWORD *)a1 + 49);
            }
            else
            {
              v24 = 0LL;
            }
            *((_QWORD *)a1 + 22) = v24;
            winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 184), L"Scale");
            winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
              (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(v22 + 456),
              (_QWORD *)a1 + 23,
              (_QWORD *)a1 + 22);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 176));
            v25 = *(_QWORD *)(a1 + 449);
            winrt::hstring::hstring(
              (winrt::hstring *)(a1 + 216),
              L"this.StartingValue * (    (operation.Ended && (m_compPropertySet.flickScaleFactorFirstApp != 0.0f))    ? m"
               "_compPropertySet.flickScaleFactorFirstApp    : m_compPropertySet.scaleFactorFirstApp)");
            v26 = a1 + 224;
            CAppThumbnailWindow::CreateScaleAnimation(v25, (_QWORD *)a1 + 28, (__int64 *)a1 + 27);
            winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 27);
            v27 = (void (__fastcall ***)(_QWORD, void *, char *))*((_QWORD *)a1 + 28);
            if ( v27 )
            {
              *((_QWORD *)a1 + 50) = 0LL;
              (**v27)(v27, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, a1 + 400);
              v28 = *((_QWORD *)a1 + 50);
            }
            else
            {
              v28 = 0LL;
            }
            *((_QWORD *)a1 + 29) = v28;
            winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 240), L"Scale");
            winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
              (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(v25 + 424),
              (_QWORD *)a1 + 30,
              (_QWORD *)a1 + 29);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 232));
            v29 = *(_QWORD *)(a1 + 449);
            v30 = *(void (__fastcall ****)(_QWORD, void *, char *))v26;
            if ( *(_QWORD *)v26 )
            {
              *((_QWORD *)a1 + 51) = 0LL;
              (**v30)(v30, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, a1 + 408);
              v31 = *((_QWORD *)a1 + 51);
            }
            else
            {
              v31 = 0LL;
            }
            *((_QWORD *)a1 + 34) = v31;
            winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 280), L"Scale");
            winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
              (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(v29 + 440),
              (_QWORD *)a1 + 35,
              (_QWORD *)a1 + 34);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 272));
            v32 = *(_QWORD *)(a1 + 449);
            winrt::hstring::hstring(
              (winrt::hstring *)(a1 + 312),
              L"this.StartingValue * (operation.Ended ? m_compPropertySet.flickScaleFactorRemainingApps : 1.0f)");
            CAppThumbnailWindow::CreateScaleAnimation(v32, (_QWORD *)a1 + 40, (__int64 *)a1 + 39);
            winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 39);
            v33 = (void (__fastcall ***)(_QWORD, void *, char *))*((_QWORD *)a1 + 40);
            if ( v33 )
            {
              *((_QWORD *)a1 + 52) = 0LL;
              (**v33)(v33, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, a1 + 416);
              v34 = *((_QWORD *)a1 + 52);
            }
            else
            {
              v34 = 0LL;
            }
            *((_QWORD *)a1 + 41) = v34;
            winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 336), L"Scale");
            winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
              (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(v32 + 408),
              (_QWORD *)a1 + 42,
              (_QWORD *)a1 + 41);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 328));
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 320));
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 224));
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 168));
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112));
          }
          v35 = (std::_Ref_count_base *)*((_QWORD *)a1 + 10);
        }
        else
        {
          std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(v15, a1 + 368);
          if ( *v36 )
            std::_Func_class<void,>::operator()(*(_QWORD *)(a1 + 449) + 320LL);
          v35 = (std::_Ref_count_base *)*((_QWORD *)a1 + 47);
        }
        if ( v35 )
          std::_Ref_count_base::_Decref(v35);
        v37 = (std::_Ref_count_base *)*((_QWORD *)a1 + 3);
        if ( v37 )
          std::_Ref_count_base::_Decwref(v37);
        goto LABEL_41;
      case 5:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)a1 + 5);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
        v13 = (std::_Ref_count_base *)*((_QWORD *)a1 + 3);
        if ( v13 )
          std::_Ref_count_base::_Decwref(v13);
LABEL_41:
        *((_QWORD *)a1 + 54) = a1 + 9;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 457));
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x1F0);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
