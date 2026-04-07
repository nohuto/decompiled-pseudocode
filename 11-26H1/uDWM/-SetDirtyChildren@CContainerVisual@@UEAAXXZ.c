/*
 * XREFs of ?SetDirtyChildren@CContainerVisual@@UEAAXXZ @ 0x180015EC0
 * Callers:
 *     ?SetDirtyChildren@CThumbnailVisual@@UEAAXXZ @ 0x180059360 (-SetDirtyChildren@CThumbnailVisual@@UEAAXXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA?AVDirtyFlags@@XZ @ 0x180016010 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA-AVDirtyFl.c)
 */

void __fastcall CContainerVisual::SetDirtyChildren(CContainerVisual *this)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(
                   &v3,
                   this);
  *(_DWORD *)(v2 + 32) |= *v1;
}
