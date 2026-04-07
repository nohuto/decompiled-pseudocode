/*
 * XREFs of ??$GetBrush@UICompositionSurfaceBrush2@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionSurfaceBrush2@Composition@UI@Windows@@@Z @ 0x18000A9DC
 * Callers:
 *     ?UpdateAlignment@CButtonGlyph@@AEAAJXZ @ 0x18000A374 (-UpdateAlignment@CButtonGlyph@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionSurfaceBrush2>(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64); // r9
  int v11; // eax
  __int64 v12; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v16; // [rsp+30h] [rbp+10h] BYREF
  __int64 v17; // [rsp+40h] [rbp+20h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v3 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 40LL);
  v4 = *v3;
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 48))(v3, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\SpriteVisual.h",
      (const char *)(unsigned int)v5,
      savedregs);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return v6;
  }
  v7 = v16;
  if ( v16 )
  {
    v8 = v17;
    v17 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v17);
    v11 = (**v10)(v10, &GUID_d27174d5_64f5_4692_9dc7_71b61d7e5880, v9);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v7 = v16;
      goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\SpriteVisual.h",
      (const char *)(unsigned int)v11,
      savedregs);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return v6;
  }
LABEL_7:
  v12 = v17;
  v17 = 0LL;
  *a2 = v12;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
