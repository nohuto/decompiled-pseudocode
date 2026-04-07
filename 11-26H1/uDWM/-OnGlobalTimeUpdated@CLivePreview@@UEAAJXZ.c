/*
 * XREFs of ?OnGlobalTimeUpdated@CLivePreview@@UEAAJXZ @ 0x180078700
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CLivePreview::OnGlobalTimeUpdated(CLivePreview *this)
{
  int *v1; // rax
  CVisual *v2; // r8
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags(v2, *v1);
  return 0LL;
}
