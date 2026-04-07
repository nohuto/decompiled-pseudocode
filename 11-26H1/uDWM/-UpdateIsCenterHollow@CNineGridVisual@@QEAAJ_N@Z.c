/*
 * XREFs of ?UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z @ 0x18000834C
 * Callers:
 *     ?_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineGridVisual@@@Z @ 0x18004BEFC (-_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineG.c)
 *     ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0 (-EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z @ 0x180094D04 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCNineGridVisual@@KAEBUtagRECT@@M@Z.c)
 *     ?SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6308 (-SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800CD0E4 (-EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Win.c)
 * Callees:
 *     ?EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windows@@@Z @ 0x180009D24 (-EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windo.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CNineGridVisual::UpdateIsCenterHollow(CNineGridVisual *this, char a2)
{
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  struct Windows::UI::Composition::ICompositionNineGridBrush *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionNineGridBrush *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = CNineGridVisual::EnsureNinegridBrush(this, &v12);
  v5 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\ninegridvisual.cpp",
      (const char *)(unsigned int)v3,
      v10);
    if ( v12 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v12 + 16LL))(v12);
    return v5;
  }
  else
  {
    v6 = v12;
    LOBYTE(v4) = a2;
    v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *, __int64))(*(_QWORD *)v12 + 88LL))(
           v12,
           v4);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\ninegridvisual.cpp",
        (const char *)(unsigned int)v7,
        v10);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
      return v8;
    }
    else
    {
      if ( v6 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v6 + 16LL))(v6);
      return 0LL;
    }
  }
}
