/*
 * XREFs of ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800DD118
 * Callers:
 *     ??$create_and_initialize@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@impl@winrt@@YAPEAUUserResizeVisual@implementation@Transitions@Udwm@1@AEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x1800D9E94 (--$create_and_initialize@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLev.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18002FB94 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18006FA80 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$producers_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@V?$tuple@UUserResizeVisual@Transitions@Udwm@winrt@@UIUserResizeVisualNative@@@std@@@impl@winrt@@QEAA@XZ @ 0x1800DD0EC (--0-$producers_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@V-$tuple@UUserResiz.c)
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800DD78C (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 */

// Hidden C++ exception states: #wind=7
winrt::Udwm::Transitions::implementation::UserResizeVisual *__fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::UserResizeVisual(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        struct CTopLevelWindow3D *a2)
{
  CBaseObject *v3; // r10
  char v4; // r9
  __int64 *v5; // rsi
  int v6; // edi
  CBaseObject *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-48h]
  float v14[4]; // [rsp+30h] [rbp-38h] BYREF
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v15; // [rsp+40h] [rbp-28h]
  struct tagRECT v16; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v15 = this;
  winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>>::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>>();
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)this + 24);
  *(_QWORD *)this = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>'};
  *((_BYTE *)this + 32) = v4;
  v5 = (__int64 *)((char *)this + 40);
  v6 = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = v3;
  if ( v3 )
    CBaseObject::AddRef(v3);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  v7 = (CBaseObject *)*v5;
  *v5 = 0LL;
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = CAcrylicSheet::Create(
         *(struct CWindowData **)(*((_QWORD *)this + 8) + 232LL),
         *((_BYTE *)this + 32),
         (struct CAcrylicSheet **)this + 5);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      22LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v8,
      v13);
  v9 = *((_QWORD *)this + 8);
  *((_DWORD *)this + 20) = *(_DWORD *)(*(_QWORD *)(v9 + 232) + 744LL) & 0xFFF;
  CTopLevelWindow::GetActualWindowRect(*(CTopLevelWindow **)(*(_QWORD *)(v9 + 232) + 440LL), &v16, 0, 1, 1);
  v14[0] = (float)v16.left;
  v14[1] = (float)v16.top;
  v10 = 0;
  if ( v16.right - v16.left >= 0 )
    v10 = v16.right - v16.left;
  v14[2] = (float)v10;
  if ( v16.bottom - v16.top >= 0 )
    v6 = v16.bottom - v16.top;
  v14[3] = (float)v6;
  winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect(
    this,
    (const struct winrt::Windows::Foundation::Rect *)v14);
  CVisual::SetInterpolationMode(*v5, 1LL, v11);
  return this;
}
