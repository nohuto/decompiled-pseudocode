/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x180008A14
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180008940 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180005818 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?DrawStateW@CButton@@AEAAXPEAVCButtonVisual@@W4ButtonStates@1@@Z @ 0x180008C74 (-DrawStateW@CButton@@AEAAXPEAVCButtonVisual@@W4ButtonStates@1@@Z.c)
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAA_NXZ @ 0x180008CE8 (-UpdateCurrentGlyphOpacity@CButton@@AEAA_NXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180008D28 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ??$SetDirtyFlag@$00@CVisual@@QEAAXXZ @ 0x180017474 (--$SetDirtyFlag@$00@CVisual@@QEAAXXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180068390 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  char v2; // di
  unsigned int v3; // esi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  CButton **v8; // rdx
  __int64 v10; // rax
  float v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // ebx
  int inserted; // eax
  float v15; // xmm5_4
  int v16; // eax
  unsigned int v17; // edi
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float v21; // [rsp+50h] [rbp+8h] BYREF
  float v22; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 184);
  v2 = 1;
  v3 = *((_DWORD *)this + 68);
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      v5 = ((v1 & 4) != 0) + 1;
    else
      v5 = 0;
  }
  else
  {
    v5 = 3;
  }
  *((_DWORD *)this + 68) = v5;
  CButton::UpdateCurrentGlyphOpacity(this);
  CButton::DrawStateW(v6, *(_QWORD *)(v6 + 192), *(unsigned int *)(v6 + 272));
  v7 = *((_DWORD *)this + 68);
  if ( (v7 || v3 != 1) && (v7 != 1 || v3) )
    v2 = 0;
  v8 = (CButton **)*((_QWORD *)this + 25);
  if ( v2 )
  {
    if ( v8[3] != this )
    {
      inserted = CContainerVisual::InsertChildBefore(this, (struct CVisual *)v8, 0LL);
      if ( inserted < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF2,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
          (const char *)(unsigned int)inserted,
          v18);
      CVisual::SetDirtyFlag<1>(*((_QWORD *)this + 25));
    }
    CButton::DrawStateW(this, *((_QWORD *)this + 25), v3);
    v10 = *((_QWORD *)this + 36);
    if ( !v10 || *(_BYTE *)(v10 + 72) )
    {
      v11 = 0.0;
      *((_DWORD *)this + 70) = *((_DWORD *)this + 74);
      *((_DWORD *)this + 69) = 0;
    }
    else
    {
      v21 = 0.0;
      v22 = 0.0;
      CButton::ComputeFadeValues(this, &v21, &v22);
      v11 = v22;
      v15 = v21;
      *((float *)this + 69) = v22;
      *((float *)this + 70) = v15;
    }
    CVisual::SetOpacity(*((CVisual **)this + 24), v11);
    CVisual::SetOpacity(*((CVisual **)this + 25), *((float *)this + 70));
    v19 = *((_DWORD *)this + 74);
    v12 = CButton::ActivateTimeline(this, (CTimelineBase **)this + 36, 0.1599999964237213);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x108,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
        (const char *)(unsigned int)v12,
        v19);
      return v13;
    }
    return 0LL;
  }
  if ( v8[3] != this || (v16 = CContainerVisual::RemoveChild(this, (struct CVisual *)v8), v17 = v16, v16 >= 0) )
  {
    CVisual::SetOpacity(*((CVisual **)this + 24), *((float *)this + 74));
    CButton::DeactivateTimeline(this);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x113,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
    (const char *)(unsigned int)v16,
    v18);
  return v17;
}
