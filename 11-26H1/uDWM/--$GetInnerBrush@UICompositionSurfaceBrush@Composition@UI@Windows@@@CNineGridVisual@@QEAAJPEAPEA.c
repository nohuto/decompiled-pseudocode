/*
 * XREFs of ??$GetInnerBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x180009898
 * Callers:
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windows@@@Z @ 0x180009D24 (-EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windo.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CNineGridVisual::GetInnerBrush<Windows::UI::Composition::ICompositionSurfaceBrush>(
        CNineGridVisual *a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct Windows::UI::Composition::ICompositionNineGridBrush *v5; // rbx
  __int64 (__fastcall *v6)(struct Windows::UI::Composition::ICompositionNineGridBrush *, __int64 *); // rdi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64); // r9
  int v14; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v17; // [rsp+50h] [rbp+30h] BYREF
  struct Windows::UI::Composition::ICompositionNineGridBrush *v18; // [rsp+58h] [rbp+38h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v3 = CNineGridVisual::EnsureNinegridBrush(a1, &v18);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v18;
    v6 = *(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *, __int64 *))(*(_QWORD *)v18 + 160LL);
    v7 = v17;
    v17 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v6(v5, &v17);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
        (const char *)(unsigned int)v8,
        savedregs);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v17);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
    }
    else
    {
      v10 = v17;
      if ( !v17 )
      {
        *a2 = 0LL;
LABEL_7:
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        if ( v5 )
          (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v5 + 16LL))(v5);
        return 0LL;
      }
      v12 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
      v14 = (**v13)(v13, &GUID_ad016d79_1e4c_4c0d_9c29_83338c87c162, v12);
      v9 = v14;
      if ( v14 >= 0 )
      {
        v10 = v17;
        goto LABEL_7;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
        (const char *)(unsigned int)v14,
        savedregs);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      if ( v5 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x45,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\NineGridVisual.h",
    (const char *)(unsigned int)v3,
    savedregs);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v18 + 16LL))(v18);
  return v4;
}
