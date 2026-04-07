/*
 * XREFs of ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x1800682F0
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180008940 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180008D28 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180068390 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

void __fastcall CButton::UpdateCrossfade(CButton *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  int *v5; // rax
  float v6; // [rsp+30h] [rbp+8h] BYREF
  float v7; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 36) + 72LL) || (*((_BYTE *)this + 184) & 0x40) != 0 )
  {
    *((_BYTE *)this + 184) &= ~0x40u;
    CButton::DeactivateTimeline(this, (CTimelineBase **)this + 36);
    v5 = (int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v6);
    CVisual::SetDirtyFlags(this, *v5);
  }
  else
  {
    v6 = 0.0;
    v7 = 0.0;
    CButton::ComputeFadeValues(this, &v6, &v7);
    CVisual::SetOpacity(*(CVisual **)(v2 + 192), v6, v3);
    CVisual::SetOpacity(*((CVisual **)this + 25), v7, v4);
  }
}
