/*
 * XREFs of ?SetParentMarginOffset@CButtonGlyph@@QEAAXAEBUtagPOINT@@@Z @ 0x1800090D0
 * Callers:
 *     ?SetGlyphImage@CButtonVisual@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008F84 (-SetGlyphImage@CButtonVisual@@QEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CButtonGlyph::SetParentMarginOffset(struct tagPOINT *this, const struct tagPOINT *a2)
{
  unsigned int *v2; // rax
  __int64 v3; // r9
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( this[30].x != a2->x || this[30].y != a2->y )
  {
    this[30] = *a2;
    v2 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(
                           &v4,
                           a2);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, *v2);
  }
}
