/*
 * XREFs of ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18007AAEC
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x180076C80 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
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
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  struct CAnimatedTransitionVisual **v1; // rsi
  struct CAnimatedTransitionVisual *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  struct CVisual *RootVisualForDesktop; // rax
  LONG v8; // edi
  CAnimatedTransitionVisual *v9; // rcx
  LONG v10; // ebx
  struct CAnimatedTransitionVisual *v11; // r8
  unsigned __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  struct tagRECT v14; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v1 = (struct CAnimatedTransitionVisual **)((char *)this + 360);
  if ( !*((_QWORD *)this + 45) )
  {
    v12 = 0LL;
    GetDesktopID(1LL, &v12);
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
        v12);
      return (unsigned int)v4;
    }
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             v12);
    v4 = CAnimatedTransitionVisual::SetVisual(*v1, RootVisualForDesktop, 1, &v14);
    if ( v4 < 0 )
    {
      v5 = 180LL;
      goto LABEL_6;
    }
    v8 = 0;
    v9 = *v1;
    v10 = 0;
    if ( v14.right - v14.left >= 0 )
      v8 = v14.right - v14.left;
    LODWORD(v13) = v8;
    if ( v14.bottom - v14.top >= 0 )
      v10 = v14.bottom - v14.top;
    HIDWORD(v13) = v10;
    CAnimatedTransitionVisual::SetBeginRect(v9, &v14);
    CAnimatedTransitionVisual::SetEndRect(*v1, &v14);
    CVisual::SetSize((struct CAnimatedTransitionVisual *)((char *)*v1 + 8), v8, v10);
    v11 = *v1;
    *((_QWORD *)v11 + 111) = v13;
    CVisual::SetInterpolationMode((__int64)*v1 + 8, 1LL, (__int64)v11);
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
