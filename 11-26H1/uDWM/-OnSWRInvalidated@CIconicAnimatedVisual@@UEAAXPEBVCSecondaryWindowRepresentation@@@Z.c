/*
 * XREFs of ?OnSWRInvalidated@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800B6210
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CIconicAnimatedVisual::OnSWRInvalidated(
        CIconicAnimatedVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  int *v2; // rax
  __int64 v3; // rdx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags((CVisual *)(v3 - 208), *v2);
}
