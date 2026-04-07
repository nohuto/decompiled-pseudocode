/*
 * XREFs of ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800593B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ThumbnailVisualDirtyFlags@CThumbnailVisual@@0P@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E50 (--$ConvertDirtyEnumToFlag@$MW4ThumbnailVisualDirtyFlags@CThumbnailVisual@@0P@$00@@YA-AVDirtyFlag.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CThumbnailVisual::OnSWRInvalidated(
        CThumbnailVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = ___ConvertDirtyEnumToFlag__MW4ThumbnailVisualDirtyFlags_CThumbnailVisual__0P__00__YA_AVDirtyFlags__XZ(&v4);
  CThumbnailVisual::SetDirtyFlags(v3 - 344, (unsigned int)*v2);
}
