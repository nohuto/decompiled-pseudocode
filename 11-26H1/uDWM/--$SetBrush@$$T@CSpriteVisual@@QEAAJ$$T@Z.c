/*
 * XREFs of ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4
 * Callers:
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 *     ?UpdateBorderBrush@CBorderSprite@@QEAAJ$$QEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000BC70 (-UpdateBorderBrush@CBorderSprite@@QEAAJ$$QEAV-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@st.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18008C5D8 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?OnGraphicsDeviceLost@CAccentAcrylicBlurBehind@@UEAAXXZ @ 0x180094580 (-OnGraphicsDeviceLost@CAccentAcrylicBlurBehind@@UEAAXXZ.c)
 *     ?OnGraphicsDeviceLost@CButtonGlyph@@UEAAXXZ @ 0x18009BD20 (-OnGraphicsDeviceLost@CButtonGlyph@@UEAAXXZ.c)
 *     ?OnGraphicsDeviceLost@CDWriteText@@UEAAXXZ @ 0x1800B4C20 (-OnGraphicsDeviceLost@CDWriteText@@UEAAXXZ.c)
 *     ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800B61AC (-OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800BF8D8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800CD780 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::SetBrush<std::nullptr_t>(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 40LL) + 56LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL),
         0LL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\SpriteVisual.h",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
