/*
 * XREFs of ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B1118
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x180074BF0 (-OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::CaptureForExtendedDisplay(CDisplayExtendAnimatedVisual *this)
{
  const struct tagRECT *v1; // rsi
  LONG v3; // r15d
  LONG v4; // r12d
  int v5; // eax
  CAnimatedTransitionVisual **v6; // rbx
  struct CContainerVisual *RootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v8; // rcx
  struct CVisual *v9; // r14
  int v10; // edi
  __int64 v11; // rdx
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h]

  v1 = (const struct tagRECT *)((char *)this + 432);
  v17 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( *((_DWORD *)this + 110) - *((_DWORD *)this + 108) >= 0 )
    v3 = *((_DWORD *)this + 110) - *((_DWORD *)this + 108);
  v5 = *((_DWORD *)this + 111) - *((_DWORD *)this + 109);
  LODWORD(v18) = v3;
  if ( v5 >= 0 )
    v4 = v5;
  HIDWORD(v18) = v4;
  GetDesktopID(1LL, &v17);
  v6 = (CAnimatedTransitionVisual **)((char *)this + 392);
  if ( !*((_QWORD *)this + 49) )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             v17);
    v8 = *v6;
    v9 = RootVisualForDesktop;
    *v6 = 0LL;
    if ( v8 )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
    v10 = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 49);
    if ( v10 < 0 )
    {
      v11 = 185LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    v10 = CAnimatedTransitionVisual::SetVisual(*v6, v9, 1, v1);
    if ( v10 < 0 )
    {
      v11 = 189LL;
      goto LABEL_10;
    }
    CAnimatedTransitionVisual::SetBeginRect(*v6, v1);
    CAnimatedTransitionVisual::SetEndRect(*v6, v1);
    CVisual::SetSize((CAnimatedTransitionVisual *)((char *)*v6 + 8), v3, v4);
    *((_QWORD *)*v6 + 111) = v18;
    CVisual::SetInterpolationMode((__int64)*v6 + 8, 1LL, v13);
  }
  v14 = CContainerVisual::AddChild(
          this,
          (struct CVisual *)(((unsigned __int64)*v6 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v6 >> 64)));
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC6,
    (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
