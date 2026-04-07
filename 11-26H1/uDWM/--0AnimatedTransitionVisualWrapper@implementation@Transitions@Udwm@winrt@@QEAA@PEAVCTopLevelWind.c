/*
 * XREFs of ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002F98C
 * Callers:
 *     ??$create_and_initialize@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@impl@winrt@@YAPEAUAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@1@$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x180085B84 (--$create_and_initialize@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180022944 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18002FB94 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@V?$tuple@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@std@@@impl@winrt@@QEAA@XZ @ 0x18002FBBC (--0-$producers_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@V-$t.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800824B8 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *__fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this,
        struct CTopLevelWindow3D *a2,
        __int64 a3)
{
  CBaseObject *v4; // r9
  CAnimatedTransitionVisual **v5; // rsi
  LONG v6; // edi
  CAnimatedTransitionVisual *v7; // rcx
  int v8; // eax
  struct CVisual *RootVisualNoAddRef; // rax
  int v10; // eax
  struct CVisual *v11; // rax
  int v12; // eax
  LONG v13; // edx
  CAnimatedTransitionVisual *v14; // r8
  int v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  struct tagRECT v19; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>(
    this,
    a2,
    a3,
    a2);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((char *)this + 24);
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>'};
  *((_QWORD *)this + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable';
  v5 = (CAnimatedTransitionVisual **)((char *)this + 40);
  v6 = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = v4;
  if ( v4 )
    CBaseObject::AddRef(v4);
  *((_DWORD *)this + 14) = -1;
  *((_BYTE *)this + 60) = 0;
  v7 = *v5;
  *v5 = 0LL;
  if ( v7 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v7 + 8));
  v8 = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 5);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v8,
      v16);
  CTopLevelWindow::GetActualWindowRect(
    *(CTopLevelWindow **)(*(_QWORD *)(*((_QWORD *)this + 6) + 232LL) + 440LL),
    &v19,
    1,
    1,
    1);
  RootVisualNoAddRef = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(
                                           *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 6) + 232LL) + 440LL),
                                           0);
  v10 = CAnimatedTransitionVisual::SetVisual(*v5, RootVisualNoAddRef, 1, &v19);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v10,
      v17);
  v11 = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(
                            *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 6) + 232LL) + 440LL),
                            0);
  v12 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*v5, v11);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v12,
      v17);
  v13 = 0;
  if ( v19.right - v19.left >= 0 )
    v13 = v19.right - v19.left;
  LODWORD(v18) = v13;
  if ( v19.bottom - v19.top >= 0 )
    v6 = v19.bottom - v19.top;
  HIDWORD(v18) = v6;
  CVisual::SetSize((CAnimatedTransitionVisual *)((char *)*v5 + 8), v13, v6);
  v14 = *v5;
  *((_QWORD *)v14 + 111) = v18;
  CVisual::SetInterpolationMode((__int64)*v5 + 8, 1LL, (__int64)v14);
  return this;
}
