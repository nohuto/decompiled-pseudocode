/*
 * XREFs of ?SetColor@CDWriteText@@UEAAXK@Z @ 0x180075B20
 * Callers:
 *     ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038458 (-InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

void __fastcall CDWriteText::SetColor(CDWriteText *this, int a2)
{
  int *v2; // rax
  CVisual *v3; // r8
  char v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 != *((_DWORD *)this + 66) )
  {
    *((_DWORD *)this + 66) = a2;
    v2 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v4);
    CVisual::SetDirtyFlags(v3, *v2);
  }
}
