/*
 * XREFs of ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C
 * Callers:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18000B550 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x18000D250 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18000F71C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000FA6C (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18000FAD4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180045488 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x18004EED0 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     wil::details::lambda_call__CWindowBorder::CreateBorderStructure_::_2_::_lambda_1___::_lambda_call__CWindowBorder::CreateBorderStructure_::_2_::_lambda_1___ @ 0x180079A54 (wil--details--lambda_call__CWindowBorder--CreateBorderStructure_--_2_--_lambda_1___--_lambda_cal.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180083EE0 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?UpdateClip@CRectangleVisual@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800BF2B4 (-UpdateClip@CRectangleVisual@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVisualProxy::SetClip(CVisualProxy *this, struct CBaseGeometryProxy *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64); // r10
  __int64 v7; // r11
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 104LL))(*((_QWORD *)this + 4));
  v12 = 0LL;
  v4 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v12);
  v8 = v6(v7, *(unsigned int *)(v5 + 24), &GUID_64ac3703_9d3f_45ec_a109_7cac0e7a13a7, v4);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
      (const char *)(unsigned int)v8,
      v10);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 104LL))(*((_QWORD *)this + 4), v12);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v9;
}
