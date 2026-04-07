/*
 * XREFs of ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800361CC
 * Callers:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x180035DA8 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x180035EE0 (-OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800360B0 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?ClampValue@CAcrylicSheet@@AEAAJJJJ@Z @ 0x180036430 (-ClampValue@CAcrylicSheet@@AEAAJJJJ@Z.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x180036458 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x180037B2C (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAlphaUpdated@CAcrylicSheet@@AEAAXM@Z @ 0x1800A1318 (-OnAlphaUpdated@CAcrylicSheet@@AEAAXM@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateTransition(CAcrylicSheet *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  const struct tagRECT *v4; // rdx
  LONG left; // r8d
  int v6; // edx
  float v7; // xmm3_4
  float v8; // xmm2_4
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int updated; // edi
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  float v20; // xmm1_4
  CTimelineBase *v21; // rcx
  struct tagRECT v22; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 63);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 72) )
    {
      v20 = *((float *)this + 125);
      CTimelineBase::Release((CTimelineBase *)v2);
      *((_QWORD *)this + 63) = 0LL;
    }
    else
    {
      v20 = *(double *)(v2 + 48);
    }
    CAcrylicSheet::OnAlphaUpdated(this, v20);
  }
  v3 = *((_QWORD *)this + 61);
  if ( !v3 )
    goto LABEL_13;
  v4 = (const struct tagRECT *)((char *)this + 464);
  if ( *(_BYTE *)(v3 + 72) )
  {
    updated = CAcrylicSheet::UpdateRectInternal(this, v4);
    if ( updated >= 0 )
    {
      v21 = (CTimelineBase *)*((_QWORD *)this + 61);
      if ( v21 )
      {
        CTimelineBase::Release(v21);
        *((_QWORD *)this + 61) = 0LL;
      }
      goto LABEL_13;
    }
    v17 = 488LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)updated,
      v22.left);
    return (unsigned int)updated;
  }
  left = v4->left;
  v6 = *((_DWORD *)this + 112);
  v7 = *(double *)(v3 + 48);
  v8 = 1.0 - v7;
  if ( v6 == left )
    v22.left = left;
  else
    v22.left = CAcrylicSheet::ClampValue(
                 (CAcrylicSheet *)v2,
                 v6,
                 left,
                 (int)(float)((float)((float)v6 * v8) + (float)((float)left * v7)));
  v9 = *((_DWORD *)this + 117);
  v10 = *((_DWORD *)this + 113);
  if ( v10 == v9 )
    v22.top = *((_DWORD *)this + 117);
  else
    v22.top = CAcrylicSheet::ClampValue(
                (CAcrylicSheet *)v2,
                v10,
                v9,
                (int)(float)((float)((float)v10 * v8) + (float)((float)v9 * v7)));
  v11 = *((_DWORD *)this + 118);
  v12 = *((_DWORD *)this + 114);
  if ( v12 == v11 )
    v22.right = *((_DWORD *)this + 118);
  else
    v22.right = CAcrylicSheet::ClampValue(
                  (CAcrylicSheet *)v2,
                  v12,
                  v11,
                  (int)(float)((float)((float)v12 * v8) + (float)((float)v11 * v7)));
  v13 = *((_DWORD *)this + 119);
  v14 = *((_DWORD *)this + 115);
  if ( v14 == v13 )
    v22.bottom = *((_DWORD *)this + 119);
  else
    v22.bottom = CAcrylicSheet::ClampValue(
                   (CAcrylicSheet *)v2,
                   v14,
                   v13,
                   (int)(float)((float)((float)v14 * v8) + (float)((float)v13 * v7)));
  updated = CAcrylicSheet::UpdateRectInternal(this, &v22);
  if ( updated < 0 )
  {
    v17 = 484LL;
    goto LABEL_21;
  }
LABEL_13:
  if ( *((_QWORD *)this + 61) )
    return 0LL;
  if ( *((_QWORD *)this + 63) )
    return 0LL;
  v18 = CAcrylicSheet::StopAnimations(this);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F2,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v18,
    v22.left);
  return v19;
}
