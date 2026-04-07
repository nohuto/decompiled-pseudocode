/*
 * XREFs of ?SetRTLReading@CDWriteText@@UEAAX_N@Z @ 0x180075B90
 * Callers:
 *     ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038458 (-InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

void __fastcall CDWriteText::SetRTLReading(CDWriteText *this, char a2)
{
  int *v2; // rax
  CVisual *v3; // r8
  char v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 280) != a2 )
  {
    *((_BYTE *)this + 280) = a2;
    v2 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v4);
    CVisual::SetDirtyFlags(v3, *v2);
  }
}
