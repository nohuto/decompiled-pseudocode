/*
 * XREFs of ??$GetBrush@UICompositionLinearGradientBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionLinearGradientBrush@Composition@UI@Windows@@@Z @ 0x180082ED0
 * Callers:
 *     ?Show@CIconicSprite@@QEAAJ_N@Z @ 0x18004C224 (-Show@CIconicSprite@@QEAAJ_N@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionLinearGradientBrush>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64); // r9
  int v10; // eax
  __int64 v11; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v15; // [rsp+30h] [rbp+10h] BYREF
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v3 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 40LL);
  v4 = *v3;
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 48))(v3, &v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !v16 )
      goto LABEL_12;
    v7 = v15;
    v15 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v15);
    v10 = (**v9)(v9, &GUID_983bc519_a9db_413c_a2d8_2a9056fc525e, v8);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\SpriteVisual.h",
        (const char *)(unsigned int)v10,
        savedregs);
    }
    else
    {
LABEL_12:
      v11 = v15;
      v15 = 0LL;
      *a2 = v11;
      v6 = 0;
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v15);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\SpriteVisual.h",
      (const char *)(unsigned int)v5,
      savedregs);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v6;
}
