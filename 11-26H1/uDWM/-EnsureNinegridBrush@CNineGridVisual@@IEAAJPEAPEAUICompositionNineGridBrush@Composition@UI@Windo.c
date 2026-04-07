/*
 * XREFs of ?EnsureNinegridBrush@CNineGridVisual@@IEAAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windows@@@Z @ 0x180009D24
 * Callers:
 *     ?UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z @ 0x18000834C (-UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z.c)
 *     ??$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x180008DF0 (--$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPE.c)
 *     ??$GetInnerBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x180009898 (--$GetInnerBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEA.c)
 *     ?UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z @ 0x180009A58 (-UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z.c)
 *     ??$UpdateInnerBrush@PEAUICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x180009B74 (--$UpdateInnerBrush@PEAUICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJ.c)
 *     ??$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800845B8 (--$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUI.c)
 *     ??$UpdateInnerBrush@$$T@CNineGridVisual@@QEAAJ$$T@Z @ 0x1800BEB14 (--$UpdateInnerBrush@$$T@CNineGridVisual@@QEAAJ$$T@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$GetBrush@UICompositionNineGridBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionNineGridBrush@Composition@UI@Windows@@@Z @ 0x180009EC4 (--$GetBrush@UICompositionNineGridBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUIComp.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CNineGridVisual::EnsureNinegridBrush(
        CNineGridVisual *this,
        struct Windows::UI::Composition::ICompositionNineGridBrush **a2)
{
  struct Windows::UI::Composition::ICompositionNineGridBrush *v4; // rax
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, GUID *, __int64); // r9
  __int64 v8; // r10
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, struct Windows::UI::Composition::ICompositionNineGridBrush **); // r14
  struct Windows::UI::Composition::ICompositionNineGridBrush *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct Windows::UI::Composition::ICompositionNineGridBrush *v18; // [rsp+50h] [rbp+30h] BYREF
  __int64 v19; // [rsp+58h] [rbp+38h] BYREF

  v18 = 0LL;
  CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionNineGridBrush>(this, &v18);
  v4 = v18;
  if ( v18 )
  {
LABEL_2:
    *a2 = v4;
    return 0LL;
  }
  v19 = 0LL;
  v6 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v19);
  v9 = v7(v8, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\ninegridvisual.cpp",
      (const char *)(unsigned int)v9,
      savedregs);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v18 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  else
  {
    v11 = v19;
    v12 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionNineGridBrush **))(*(_QWORD *)v19 + 112LL);
    v13 = v18;
    v18 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNineGridBrush *))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v12(v11, &v18);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = 70LL;
    }
    else
    {
      v14 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(this, v18);
      v10 = v14;
      if ( v14 >= 0 )
      {
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v4 = v18;
        goto LABEL_2;
      }
      v15 = 71LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\ninegridvisual.cpp",
      (const char *)(unsigned int)v14,
      savedregs);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
  }
  return v10;
}
