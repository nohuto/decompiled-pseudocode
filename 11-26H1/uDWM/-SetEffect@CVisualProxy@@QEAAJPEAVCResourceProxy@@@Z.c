/*
 * XREFs of ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800055E8
 * Callers:
 *     ?SendSetOpacity@CVisual@@IEAAJN@Z @ 0x1800054B8 (-SendSetOpacity@CVisual@@IEAAJN@Z.c)
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18004F520 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800974E4 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVisualProxy::SetEffect(CVisualProxy *this, struct CResourceProxy *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64); // r10
  __int64 v6; // r11
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), 0LL);
  v12 = 0LL;
  v3 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(&v12);
  v7 = v5(v6, *(unsigned int *)(v4 + 24), &GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8, v3);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
      (const char *)(unsigned int)v7,
      v10);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), v12);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v8;
}
