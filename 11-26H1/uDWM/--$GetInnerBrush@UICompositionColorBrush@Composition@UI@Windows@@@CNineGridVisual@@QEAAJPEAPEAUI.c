/*
 * XREFs of ??$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800845B8
 * Callers:
 *     ?_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineGridVisual@@@Z @ 0x18004BEFC (-_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineG.c)
 *     ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0 (-EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800CD0E4 (-EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Win.c)
 * Callees:
 *     ?EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windows@@@Z @ 0x180009D24 (-EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windo.c)
 *     ??$query_to@UICompositionColorBrush@Composition@UI@Windows@@@?$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18004D0B8 (--$query_to@UICompositionColorBrush@Composition@UI@Windows@@@-$com_ptr_t@UICompositionBrush@Comp.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CNineGridVisual::GetInnerBrush<Windows::UI::Composition::ICompositionColorBrush>(
        CNineGridVisual *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct Windows::UI::Composition::ICompositionNineGridBrush *v5; // rbx
  __int64 (__fastcall *v6)(struct Windows::UI::Composition::ICompositionNineGridBrush *, __int64 *); // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  struct Windows::UI::Composition::ICompositionNineGridBrush *v13; // [rsp+58h] [rbp+38h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v3 = CNineGridVisual::EnsureNinegridBrush(a1, &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v13;
    v6 = *(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *, __int64 *))(*(_QWORD *)v13 + 160LL);
    v7 = v12;
    v12 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v6(v5, &v12);
    v4 = v8;
    if ( v8 < 0 )
    {
      v9 = 70LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
        (const char *)(unsigned int)v8);
      goto LABEL_14;
    }
    if ( v12 )
    {
      v8 = wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::query_to<Windows::UI::Composition::ICompositionColorBrush>(
             (__int64)&v12,
             (__int64)a2);
      v4 = v8;
      if ( v8 < 0 )
      {
        v9 = 84LL;
        goto LABEL_18;
      }
    }
    else
    {
      *a2 = 0LL;
    }
    v4 = 0;
LABEL_14:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v13);
    return v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x45,
    (int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
    (const char *)(unsigned int)v3);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v13 + 16LL))(v13);
  return v4;
}
