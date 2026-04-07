/*
 * XREFs of ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B17B4
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800868E0 (-OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180021818 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180022CD4 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::CaptureForExtendedDisplay(CDisplayExtendAnimatedVisual *this)
{
  const struct tagRECT *v1; // rsi
  int v3; // edx
  int v4; // r15d
  int v5; // ecx
  int v6; // eax
  int v7; // r12d
  int v8; // ecx
  int v9; // eax
  struct CBaseImageProxy ***v10; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CBaseImageProxy **v12; // rcx
  struct CVisual *v13; // rbp
  int v14; // edi
  __int64 v15; // rdx
  int v17; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CBaseImageProxy *v20; // [rsp+68h] [rbp+10h]

  v1 = (const struct tagRECT *)((char *)this + 464);
  v3 = *((_DWORD *)this + 118) - *((_DWORD *)this + 116);
  v4 = 0;
  v5 = *((_DWORD *)this + 119);
  v6 = v3;
  if ( v3 < 0 )
    v6 = 0;
  LODWORD(v20) = v6;
  v7 = 0;
  if ( v3 >= 0 )
    v4 = v3;
  v8 = v5 - *((_DWORD *)this + 117);
  v9 = v8;
  if ( v8 < 0 )
    v9 = 0;
  HIDWORD(v20) = v9;
  if ( v8 >= 0 )
    v7 = v8;
  GetDesktopID(1LL);
  v10 = (struct CBaseImageProxy ***)((char *)this + 424);
  if ( !*((_QWORD *)this + 53) )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             0LL);
    v12 = *v10;
    v13 = RootVisualForDesktop;
    *v10 = 0LL;
    if ( v12 )
      CBaseObject::Release((CBaseObject *)(v12 + 1));
    v14 = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 53);
    if ( v14 < 0 )
    {
      v15 = 185LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
    v14 = CAnimatedTransitionVisual::SetVisual(*v10, v13, 1, v1);
    if ( v14 < 0 )
    {
      v15 = 189LL;
      goto LABEL_14;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v10, v1);
    CAnimatedTransitionVisual::SetEndRect((CAnimatedTransitionVisual *)*v10, v1);
    CVisual::SetSize((CVisual *)(*v10 + 1), v4, v7);
    (*v10)[113] = v20;
    CVisual::SetInterpolationMode((__int64 *)*v10 + 1, 1);
  }
  v17 = CContainerVisual::AddChild(
          this,
          (struct CVisual *)((unsigned __int64)(*v10 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v10 >> 64)));
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}
