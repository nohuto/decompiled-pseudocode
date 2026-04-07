/*
 * XREFs of ??$UpdateInnerBrush@PEAUICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x180009B74
 * Callers:
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windows@@@Z @ 0x180009D24 (-EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CNineGridVisual::UpdateInnerBrush<Windows::UI::Composition::ICompositionSurfaceBrush *>(
        CNineGridVisual *this,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct Windows::UI::Composition::ICompositionNineGridBrush *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, GUID *, __int64); // r9
  __int64 v11; // r10
  int v12; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v15; // [rsp+38h] [rbp+18h] BYREF
  struct Windows::UI::Composition::ICompositionNineGridBrush *v16; // [rsp+40h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    v15 = 0LL;
    v9 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v15);
    v12 = v10(v11, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, v9);
    v4 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
        (const char *)(unsigned int)v12,
        savedregs);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      return v4;
    }
  }
  v16 = 0LL;
  v3 = CNineGridVisual::EnsureNinegridBrush(this, &v16);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
      (const char *)(unsigned int)v3,
      savedregs);
    if ( v16 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return v4;
  }
  v5 = v16;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *, __int64))(*(_QWORD *)v16 + 168LL))(
         v16,
         v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
      (const char *)(unsigned int)v6,
      savedregs);
    if ( v5 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return v7;
  }
  else
  {
    if ( v5 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return 0LL;
  }
}
