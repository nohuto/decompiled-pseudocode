/*
 * XREFs of ?SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z @ 0x1800700E0
 * Callers:
 *     ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038458 (-InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 */

void __fastcall CDWriteText::SetFont(CDWriteText *this, const struct tagLOGFONTW *a2)
{
  int *v4; // rax
  CVisual *v5; // r8
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( memcmp_0((char *)this + 80, a2, 0x5CuLL) )
  {
    *((_OWORD *)this + 5) = *(_OWORD *)&a2->lfHeight;
    *((_OWORD *)this + 6) = *(_OWORD *)&a2->lfWeight;
    *((_OWORD *)this + 7) = *(_OWORD *)&a2->lfFaceName[2];
    *((_OWORD *)this + 8) = *(_OWORD *)&a2->lfFaceName[10];
    *((_OWORD *)this + 9) = *(_OWORD *)&a2->lfFaceName[18];
    *((_QWORD *)this + 20) = *(_QWORD *)&a2->lfFaceName[26];
    *((_DWORD *)this + 42) = *(_DWORD *)&a2->lfFaceName[30];
    v4 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v6);
    CVisual::SetDirtyFlags(v5, *v4);
  }
}
