/*
 * XREFs of ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180077688
 * Callers:
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180014060 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x1800774F0 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x180079AA8 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@05$00@@YA?AVDirtyFlags@@XZ @ 0x1800166C4 (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@05$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::ClearInterpolationMode(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v2; // r9
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 31) != -1 )
  {
    *((_DWORD *)this + 31) = -1;
    v1 = ___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__05_00__YA_AVDirtyFlags__XZ(&v3);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, (unsigned int)*v1);
  }
}
