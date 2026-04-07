/*
 * XREFs of ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800E0188
 * Callers:
 *     ??$create_and_initialize@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@impl@winrt@@YAPEAUUserResizeVisual@implementation@Transitions@Udwm@1@AEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x1800DD0DC (--$create_and_initialize@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLev.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800248D0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18007E0B0 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$producers_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@V?$tuple@UUserResizeVisual@Transitions@Udwm@winrt@@UIUserResizeVisualNative@@@std@@@impl@winrt@@QEAA@XZ @ 0x1800E015C (--0-$producers_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@V-$tuple@UUserResiz.c)
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800E07BC (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 */

// Hidden C++ exception states: #wind=8
winrt::Udwm::Transitions::implementation::UserResizeVisual *__fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::UserResizeVisual(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        struct CTopLevelWindow3D *a2)
{
  CMILRefCountBase *v3; // r10
  char v4; // r9
  __int64 **v5; // rsi
  int v6; // edi
  __int64 *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  float v13[4]; // [rsp+30h] [rbp-38h] BYREF
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v14; // [rsp+40h] [rbp-28h]
  struct tagRECT v15; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v14 = this;
  winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>>::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>>();
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>'};
  *((_BYTE *)this + 32) = v4;
  v5 = (__int64 **)((char *)this + 40);
  v6 = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = v3;
  if ( v3 )
    CMILRefCountBase::AddRef(v3);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v7 = *v5;
  *v5 = 0LL;
  if ( v7 )
    CBaseObject::Release((CBaseObject *)v7);
  v8 = CAcrylicSheet::Create(
         *(struct CWindowData **)(*((_QWORD *)this + 9) + 288LL),
         *((_BYTE *)this + 32),
         (struct CAcrylicSheet **)this + 5);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      22LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v8,
      v12);
  v9 = *((_QWORD *)this + 9);
  *((_DWORD *)this + 22) = *(_DWORD *)(*(_QWORD *)(v9 + 288) + 680LL) & 0xFFF;
  CTopLevelWindow::GetActualWindowRect(*(CTopLevelWindow **)(*(_QWORD *)(v9 + 288) + 440LL), &v15, 0, 1, 1);
  v10 = 0;
  if ( v15.right - v15.left >= 0 )
    v10 = v15.right - v15.left;
  if ( v15.bottom - v15.top >= 0 )
    v6 = v15.bottom - v15.top;
  v13[0] = (float)v15.left;
  v13[1] = (float)v15.top;
  v13[2] = (float)v10;
  v13[3] = (float)v6;
  winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect(
    this,
    (const struct winrt::Windows::Foundation::Rect *)v13);
  CVisual::SetInterpolationMode(*v5, 1);
  return this;
}
