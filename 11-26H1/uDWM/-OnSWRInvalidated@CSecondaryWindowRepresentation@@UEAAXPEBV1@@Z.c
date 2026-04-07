/*
 * XREFs of ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x18004AD70
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA?AVDirtyFlags@@XZ @ 0x180016010 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA-AVDirtyFl.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z @ 0x180029674 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnSWRInvalidated(
        CSecondaryWindowRepresentation *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  unsigned int *v2; // rax
  __int64 v3; // rdx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(&v4);
  CSecondaryWindowRepresentation::SetDirtyFlags(v3 - 16, *v2);
}
