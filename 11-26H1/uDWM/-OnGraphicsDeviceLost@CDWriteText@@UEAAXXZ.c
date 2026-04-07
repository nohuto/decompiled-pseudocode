/*
 * XREFs of ?OnGraphicsDeviceLost@CDWriteText@@UEAAXXZ @ 0x1800B4C20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4 (--$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z.c)
 */

void __fastcall CDWriteText::OnGraphicsDeviceLost(CDWriteText *this)
{
  CVisual *v1; // rbx
  int *v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CDWriteText *)((char *)this - 192);
  CSpriteVisual::SetBrush<std::nullptr_t>((__int64)this - 192);
  v2 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v3);
  CVisual::SetDirtyFlags(v1, *v2);
}
