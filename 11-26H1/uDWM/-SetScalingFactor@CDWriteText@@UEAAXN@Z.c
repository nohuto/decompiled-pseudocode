/*
 * XREFs of ?SetScalingFactor@CDWriteText@@UEAAXN@Z @ 0x180075BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

void __fastcall CDWriteText::SetScalingFactor(CDWriteText *this, double a2)
{
  int *v2; // rax
  CVisual *v3; // r8
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((double *)this + 34) != a2 )
  {
    *((double *)this + 34) = a2;
    v2 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v4);
    CVisual::SetDirtyFlags(v3, *v2);
  }
}
