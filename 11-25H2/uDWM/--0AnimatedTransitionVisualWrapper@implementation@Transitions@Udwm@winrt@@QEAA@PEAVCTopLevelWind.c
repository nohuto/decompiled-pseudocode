/*
 * XREFs of ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002397C
 * Callers:
 *     ??$create_and_initialize@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@impl@winrt@@YAPEAUAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@1@$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x180084D1C (--$create_and_initialize@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180018990 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180021818 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180022CD4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180023514 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ??0?$producers_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@V?$tuple@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@std@@@impl@winrt@@QEAA@XZ @ 0x180023B98 (--0-$producers_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@V-$t.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800248D0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *__fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this,
        struct CTopLevelWindow3D *a2,
        __int64 a3)
{
  CMILRefCountBase *v4; // r9
  struct CBaseImageProxy ***v5; // rsi
  int v6; // edi
  struct CBaseImageProxy **v7; // rcx
  int v8; // eax
  struct CVisual *RootVisualNoAddRef; // rax
  int v10; // eax
  struct CVisual *v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]
  struct CBaseImageProxy *v19; // [rsp+30h] [rbp-38h]
  struct tagRECT v20; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>(
    this,
    a2,
    a3,
    a2);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>'};
  *((_QWORD *)this + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable';
  v5 = (struct CBaseImageProxy ***)((char *)this + 40);
  v6 = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = v4;
  if ( v4 )
    CMILRefCountBase::AddRef(v4);
  *((_DWORD *)this + 14) = -1;
  *((_BYTE *)this + 60) = 0;
  v7 = *v5;
  *v5 = 0LL;
  if ( v7 )
    CBaseObject::Release((CBaseObject *)(v7 + 1));
  v8 = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 5);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v8,
      v17);
  CTopLevelWindow::GetActualWindowRect(
    *(CTopLevelWindow **)(*(_QWORD *)(*((_QWORD *)this + 6) + 288LL) + 440LL),
    &v20,
    1,
    1,
    1);
  RootVisualNoAddRef = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(
                                           *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 6) + 288LL) + 440LL),
                                           0);
  v10 = CAnimatedTransitionVisual::SetVisual(*v5, RootVisualNoAddRef, 1, &v20);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v10,
      v18);
  v11 = (struct CVisual *)CTopLevelWindow::GetRootVisualNoAddRef(
                            *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 6) + 288LL) + 440LL),
                            0);
  v12 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*v5, v11, &v20);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v12,
      v18);
  v13 = v20.right - v20.left;
  if ( v20.right - v20.left < 0 )
    v13 = 0;
  LODWORD(v19) = v13;
  v14 = 0;
  if ( v20.right - v20.left >= 0 )
    v14 = v20.right - v20.left;
  v15 = v20.bottom - v20.top;
  if ( v20.bottom - v20.top < 0 )
    v15 = 0;
  HIDWORD(v19) = v15;
  if ( v20.bottom - v20.top >= 0 )
    v6 = v20.bottom - v20.top;
  CVisual::SetSize((CVisual *)(*v5 + 1), v14, v6);
  (*v5)[113] = v19;
  CVisual::SetInterpolationMode((__int64 *)*v5 + 1, 1);
  return this;
}
