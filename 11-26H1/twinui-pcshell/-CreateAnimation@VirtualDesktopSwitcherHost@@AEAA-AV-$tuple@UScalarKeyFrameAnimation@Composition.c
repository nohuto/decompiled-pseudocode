/*
 * XREFs of ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x1802184F4
 * Callers:
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180226F08 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806AF50C (-StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x1800A11B8 (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802187CC (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?TryAddTag@?$consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@AEBUguid@3@@Z @ 0x1802A189C (-TryAddTag@-$consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics@UICompositionAnimati.c)
 *     ?SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@_N@Z @ 0x1802A4074 (-SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIEleme.c)
 *     ?GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@@Z @ 0x1802B5924 (-GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CreateCubicBezierEasingFunction@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat2@Numerics@Foundation@Windows@3@0@Z @ 0x1804A4494 (-CreateCubicBezierEasingFunction@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Compo.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A47A0 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1804A5EDC (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertKeyFrame@?$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MMAEBUCompositionEasingFunction@Composition@UI@Windows@3@@Z @ 0x1804A686C (-InsertKeyFrame@-$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimat.c)
 *     ?Compositor@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180598C1C (-Compositor@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@w.c)
 *     ?Target@?$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18059AFD8 (-Target@-$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composi.c)
 *     ??$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@?$factory_cache_entry@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x1806AB060 (--$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@-$factory_cache_entry@UCompositionAnimat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 *__fastcall VirtualDesktopSwitcherHost::CreateAnimation(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rbx
  winrt *v14; // rax
  bool v15; // dl
  __int64 v16; // rcx
  char v17; // dl
  void (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v19; // rdi
  __int64 *v21; // [rsp+20h] [rbp-71h] BYREF
  void (__fastcall ***v22)(_QWORD, void *, __int64 **); // [rsp+28h] [rbp-69h] BYREF
  __int64 v23; // [rsp+30h] [rbp-61h] BYREF
  __int64 v24; // [rsp+38h] [rbp-59h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-51h] BYREF
  __int64 v26[2]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v27[4]; // [rsp+58h] [rbp-39h] BYREF
  int v28; // [rsp+78h] [rbp-19h] BYREF
  __int16 v29; // [rsp+7Ch] [rbp-15h]
  __int16 v30; // [rsp+7Eh] [rbp-13h]
  char v31; // [rsp+80h] [rbp-11h]
  char v32; // [rsp+81h] [rbp-10h]
  char v33; // [rsp+82h] [rbp-Fh]
  char v34; // [rsp+83h] [rbp-Eh]
  char v35; // [rsp+84h] [rbp-Dh]
  char v36; // [rsp+85h] [rbp-Ch]
  char v37; // [rsp+86h] [rbp-Bh]
  char v38; // [rsp+87h] [rbp-Ah]

  v26[0] = (__int64)a2;
  from_cx<winrt::Windows::UI::Xaml::UIElement>((winrt *)&v21, *(struct IUnknown **)(a1 + 168));
  winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview::GetElementVisual((const struct winrt::Windows::UI::Xaml::UIElement *)&v24);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v21);
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::Compositor(
    &v24,
    &v23);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateCubicBezierEasingFunction(
    &v23,
    v26,
    a7,
    a8);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    &v23,
    &v22);
  winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run(&v22);
  v12 = v26[0];
  v21 = 0LL;
  if ( v26[0] )
  {
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v26[0])(
      v26[0],
      &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionEasingFunction>,
      (__int64 *)&v21);
    v13 = (__int64)v21;
  }
  else
  {
    v13 = 0LL;
  }
  winrt::impl::consume_Windows_UI_Composition_IScalarKeyFrameAnimation<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation>::InsertKeyFrame(
    &v22,
    v10,
    v11,
    &v21);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v21);
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    &v22,
    a5);
  v27[0] = qword_1808DA9E8;
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation2<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Target(
    &v22,
    v27);
  v14 = from_cx<winrt::Windows::UI::Xaml::UIElement>((winrt *)&v21, *(struct IUnknown **)(a1 + 168));
  winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview::SetIsTranslationEnabled(v14, v15);
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v21);
  LOBYTE(v16) = *((_BYTE *)a6 + 8);
  v17 = *((_BYTE *)a6 + 9);
  v28 = *a6;
  v29 = *((_WORD *)a6 + 2);
  v30 = *((_WORD *)a6 + 3);
  v31 = v16;
  v32 = v17;
  v33 = *((_BYTE *)a6 + 10);
  v34 = *((_BYTE *)a6 + 11);
  v35 = *((_BYTE *)a6 + 12);
  v36 = *((_BYTE *)a6 + 13);
  v37 = *((_BYTE *)a6 + 14);
  v38 = *((_BYTE *)a6 + 15);
  v18 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
  if ( v22 )
  {
    v25 = 0LL;
    (**v22)(v22, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v25);
    v21 = v25;
  }
  else
  {
    v21 = 0LL;
  }
  v27[0] = &v21;
  v27[1] = &v28;
  v25 = &qword_1808DCD58;
  _InterlockedIncrement64(&qword_1808DCD58);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::TryAddTag(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
      &v21,
      &v28);
    _InterlockedDecrement64(&qword_1808DCD58);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DCD58);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::call<_lambda_c893b0be85f95fa79319d83703904477_ &>(
      v16,
      v27);
  }
  if ( v21 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v21);
  v19 = v23;
  *a2 = v23;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  a2[1] = (__int64)v18;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2 + 1);
  if ( v18 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v22);
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v26);
  if ( v19 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  if ( v24 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
  return a2;
}
