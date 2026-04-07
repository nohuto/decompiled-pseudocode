/*
 * XREFs of ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18005E18C
 * Callers:
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18005DD70 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x18005DE90 (-OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18005E048 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?ClampValue@CAcrylicSheet@@AEAAJJJJ@Z @ 0x18005E3C0 (-ClampValue@CAcrylicSheet@@AEAAJJJJ@Z.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x18005E3E8 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18005E508 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAlphaUpdated@CAcrylicSheet@@AEAAXM@Z @ 0x1800959D8 (-OnAlphaUpdated@CAcrylicSheet@@AEAAXM@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateTransition(CAcrylicSheet *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  const struct tagRECT *v4; // rdx
  double v5; // xmm3_8
  int left; // eax
  int v7; // edx
  float v8; // xmm3_4
  float v9; // xmm2_4
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int updated; // edi
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // ebx
  float v21; // xmm1_4
  CTimelineBase *v22; // rcx
  struct tagRECT v23; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 55);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 72) )
    {
      v21 = *((float *)this + 109);
      CTimelineBase::Release((CTimelineBase *)v2);
      *((_QWORD *)this + 55) = 0LL;
    }
    else
    {
      v21 = *(double *)(v2 + 48);
    }
    CAcrylicSheet::OnAlphaUpdated(this, v21);
  }
  v3 = *((_QWORD *)this + 53);
  if ( !v3 )
    goto LABEL_13;
  v4 = (const struct tagRECT *)((char *)this + 400);
  if ( *(_BYTE *)(v3 + 72) )
  {
    updated = CAcrylicSheet::UpdateRectInternal(this, v4);
    if ( updated >= 0 )
    {
      v22 = (CTimelineBase *)*((_QWORD *)this + 53);
      if ( v22 )
      {
        CTimelineBase::Release(v22);
        *((_QWORD *)this + 53) = 0LL;
      }
      goto LABEL_13;
    }
    v18 = 462LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)updated,
      v23.left);
    return (unsigned int)updated;
  }
  v5 = *(double *)(v3 + 48);
  left = v4->left;
  v7 = *((_DWORD *)this + 96);
  v8 = v5;
  v9 = 1.0 - v8;
  if ( v7 != left )
    left = CAcrylicSheet::ClampValue(
             (CAcrylicSheet *)v2,
             v7,
             left,
             (int)(float)((float)((float)v7 * v9) + (float)((float)left * v8)));
  v10 = *((_DWORD *)this + 97);
  v23.left = left;
  v11 = *((_DWORD *)this + 101);
  if ( v10 != v11 )
    v11 = CAcrylicSheet::ClampValue(
            (CAcrylicSheet *)v2,
            v10,
            v11,
            (int)(float)((float)((float)v10 * v9) + (float)((float)v11 * v8)));
  v12 = *((_DWORD *)this + 98);
  v23.top = v11;
  v13 = *((_DWORD *)this + 102);
  if ( v12 != v13 )
    v13 = CAcrylicSheet::ClampValue(
            (CAcrylicSheet *)v2,
            v12,
            v13,
            (int)(float)((float)((float)v12 * v9) + (float)((float)v13 * v8)));
  v14 = *((_DWORD *)this + 99);
  v23.right = v13;
  v15 = *((_DWORD *)this + 103);
  if ( v14 != v15 )
    v15 = CAcrylicSheet::ClampValue(
            (CAcrylicSheet *)v2,
            v14,
            v15,
            (int)(float)((float)((float)v14 * v9) + (float)((float)v15 * v8)));
  v23.bottom = v15;
  updated = CAcrylicSheet::UpdateRectInternal(this, &v23);
  if ( updated < 0 )
  {
    v18 = 458LL;
    goto LABEL_17;
  }
LABEL_13:
  if ( *((_QWORD *)this + 53) )
    return 0LL;
  if ( *((_QWORD *)this + 55) )
    return 0LL;
  v19 = CAcrylicSheet::StopAnimations(this);
  v20 = v19;
  if ( v19 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v19,
    v23.left);
  return v20;
}
