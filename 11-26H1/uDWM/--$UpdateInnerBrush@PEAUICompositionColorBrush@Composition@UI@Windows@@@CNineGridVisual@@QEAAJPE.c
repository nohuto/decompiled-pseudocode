/*
 * XREFs of ??$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x180008DF0
 * Callers:
 *     ?_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineGridVisual@@@Z @ 0x18004BEFC (-_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineG.c)
 *     ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0 (-EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z @ 0x180094D04 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z.c)
 *     ?SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6308 (-SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800CD0E4 (-EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Win.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windows@@@Z @ 0x180009D24 (-EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windo.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CNineGridVisual::UpdateInnerBrush<Windows::UI::Composition::ICompositionColorBrush *>(
        CNineGridVisual *this,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, GUID *, __int64); // r9
  __int64 v5; // r10
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct Windows::UI::Composition::ICompositionNineGridBrush *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v15; // [rsp+38h] [rbp+18h] BYREF
  struct Windows::UI::Composition::ICompositionNineGridBrush *v16; // [rsp+40h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    v15 = 0LL;
    v3 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v15);
    v6 = v4(v5, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, v3);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
        (const char *)(unsigned int)v6,
        savedregs);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      return v7;
    }
  }
  v16 = 0LL;
  v8 = CNineGridVisual::EnsureNinegridBrush(this, &v16);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
      (const char *)(unsigned int)v8,
      savedregs);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v15);
    return v7;
  }
  v9 = v16;
  v10 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *, __int64))(*(_QWORD *)v16 + 168LL))(
          v16,
          v15);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
      (const char *)(unsigned int)v10,
      savedregs);
    if ( v9 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return v11;
  }
  else
  {
    if ( v9 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return 0LL;
  }
}
