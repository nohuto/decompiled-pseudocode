/*
 * XREFs of ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2AE8
 * Callers:
 *     ?HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3228 (-HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D3404 (-PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4Sh.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x1800306A4 (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ?Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x180042170 (-Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180042430 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UITransitionStateNative@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1800D1CD8 (--$as@UITransitionStateNative@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::CapturePreRotationVisuals(
        CBaseObject **this)
{
  char v2; // bp
  __int64 v3; // rcx
  __int64 v4; // rbx
  char v5; // r14
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 (__fastcall *v8)(__int64, CBaseObject **, CBaseObject **, _QWORD); // rbp
  CBaseObject *v9; // rcx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  LODWORD(v13) = 0;
  if ( winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Captured((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this) )
  {
    v4 = v13;
    goto LABEL_5;
  }
  v4 = 0LL;
  v13 = 0LL;
  v2 = 1;
  if ( !winrt::Windows::Foundation::operator!=((_QWORD *)(v3 + 48), &v13) )
  {
LABEL_5:
    v5 = 0;
    goto LABEL_6;
  }
  v5 = 1;
LABEL_6:
  if ( (v2 & 1) != 0 && v4 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v13);
  if ( v5 )
  {
    v6 = winrt::Windows::Foundation::IUnknown::as<ITransitionStateNative>(this + 6, (__int64)&v13);
    v7 = *(_QWORD *)v6;
    v8 = *(__int64 (__fastcall **)(__int64, CBaseObject **, CBaseObject **, _QWORD))(**(_QWORD **)v6 + 48LL);
    v9 = this[8];
    this[8] = 0LL;
    if ( v9 )
      CBaseObject::Release((CBaseObject *)((char *)v9 + 8));
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(this + 7);
    v10 = v8(v7, this + 7, this + 8, 0LL);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        151LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
        (const char *)(unsigned int)v10,
        v11);
    if ( v13 )
      winrt::com_ptr<IBitmapManager>::unconditional_release_ref(&v13);
  }
  CVisual::MoveToFront((CBaseObject *)((char *)this[8] + 8), 1);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DrawBackground((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this);
}
