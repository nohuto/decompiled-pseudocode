/*
 * XREFs of ??$GetBrush@UICompositionBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18005013C
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023778 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CNineGridVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18004F058 (-InitializeVisualTreeClone@CNineGridVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CSolidRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18004FF68 (-InitializeVisualTreeClone@CSolidRectangleVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionBrush>(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 40LL) + 48LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\SpriteVisual.h",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
