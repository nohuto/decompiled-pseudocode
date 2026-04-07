/*
 * XREFs of ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18008BC68
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x180086D50 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
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
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  struct CAnimatedTransitionVisual **v1; // rsi
  struct CAnimatedTransitionVisual *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  struct CVisual *RootVisualForDesktop; // rax
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // r8d
  __int64 v13; // [rsp+28h] [rbp-28h]
  struct tagRECT v14; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v1 = (struct CAnimatedTransitionVisual **)((char *)this + 392);
  if ( !*((_QWORD *)this + 49) )
  {
    GetDesktopID(1LL);
    v14.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
    v14.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97) + v14.left;
    v14.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v14.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98) + v14.top;
    v3 = *v1;
    *v1 = 0LL;
    if ( v3 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v3 + 8));
    v4 = CAnimatedTransitionVisual::Create(v1);
    if ( v4 < 0 )
    {
      v5 = 172LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
        (const char *)(unsigned int)v4,
        0);
      return (unsigned int)v4;
    }
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             0LL);
    v4 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v1, RootVisualForDesktop, 1, &v14);
    if ( v4 < 0 )
    {
      v5 = 180LL;
      goto LABEL_6;
    }
    v8 = 0;
    v9 = v14.right - v14.left;
    if ( v14.right - v14.left < 0 )
      v9 = 0;
    LODWORD(v13) = v9;
    if ( v14.right - v14.left >= 0 )
      v8 = v14.right - v14.left;
    v10 = v14.bottom - v14.top;
    v11 = v14.bottom - v14.top;
    if ( v14.bottom - v14.top < 0 )
      v11 = 0;
    HIDWORD(v13) = v11;
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v1, &v14);
    CAnimatedTransitionVisual::SetEndRect(*v1, &v14);
    v12 = 0;
    if ( v10 >= 0 )
      v12 = v10;
    CVisual::SetSize((struct CAnimatedTransitionVisual *)((char *)*v1 + 8), v8, v12);
    *((_QWORD *)*v1 + 113) = v13;
    CVisual::SetInterpolationMode((__int64 *)*v1 + 1, 1);
    v4 = CContainerVisual::AddChild(
           this,
           (struct CVisual *)(((unsigned __int64)*v1 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v1 >> 64)));
    if ( v4 < 0 )
    {
      v5 = 190LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
