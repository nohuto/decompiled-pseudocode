/*
 * XREFs of ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180074360
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

void __fastcall CTopLevelWindow3D::OnSWRInvalidated(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  int *v2; // rax
  __int64 v3; // rdx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags((CVisual *)(v3 - 184), *v2);
}
