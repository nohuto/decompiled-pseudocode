/*
 * XREFs of ?UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z @ 0x180009A58
 * Callers:
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 *     ?_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineGridVisual@@@Z @ 0x18004BEFC (-_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineG.c)
 *     ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0 (-EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z @ 0x180094D04 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z.c)
 *     ?SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6308 (-SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800CD870 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windows@@@Z @ 0x180009D24 (-EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CNineGridVisual::UpdateInsets(CNineGridVisual *this, float a2, float a3, float a4, int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct Windows::UI::Composition::ICompositionNineGridBrush *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+20h] [rbp-58h]
  struct Windows::UI::Composition::ICompositionNineGridBrush *v12; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v12 = 0LL;
  v5 = CNineGridVisual::EnsureNinegridBrush(this, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\ninegridvisual.cpp",
      (const char *)(unsigned int)v5,
      v11);
    if ( v12 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v12 + 16LL))(v12);
    return v6;
  }
  else
  {
    v7 = v12;
    v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v12 + 216LL))(v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\ninegridvisual.cpp",
        (const char *)(unsigned int)v8,
        a5);
      if ( v7 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v7 + 16LL))(v7);
      return v9;
    }
    else
    {
      if ( v7 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v7 + 16LL))(v7);
      return 0LL;
    }
  }
}
