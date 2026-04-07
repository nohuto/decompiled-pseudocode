/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x180077110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ??4?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@Z @ 0x18001BA84 (--4-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180035D04 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18008DB74 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B4350 (-ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  LONG v2; // edi
  int v3; // esi
  struct CAnimatedTransitionVisual **v4; // r15
  struct CVisual *v5; // rbx
  HWND ShellWindowForDesktop; // rax
  struct CWindowData *WindowDataByHwnd; // rax
  CBaseObject *v8; // rdx
  int v9; // edx
  int v10; // eax
  struct CAnimatedTransitionVisual *v11; // rcx
  int v12; // eax
  int v13; // eax
  LONG v14; // esi
  __int64 v15; // r8
  int v16; // eax
  CAnimatedTransitionVisual **v17; // r15
  int v18; // eax
  LONG v19; // ebx
  CTimelineBase *v20; // rcx
  int v21; // eax
  struct CVisual *v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h]
  unsigned __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT v26; // [rsp+48h] [rbp-18h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = (struct CAnimatedTransitionVisual **)((char *)this + 368);
  if ( !*((_QWORD *)this + 46) || !*((_QWORD *)this + 47) )
  {
    v25 = 0LL;
    GetDesktopID(1LL, &v25);
    if ( !*v4 )
    {
      v5 = 0LL;
      v23 = 0LL;
      ShellWindowForDesktop = (HWND)CWindowList::GetShellWindowForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                      v25);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           ShellWindowForDesktop);
      if ( WindowDataByHwnd )
      {
        v8 = (CBaseObject *)*((_QWORD *)WindowDataByHwnd + 55);
        if ( v8 )
        {
          wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>::operator=(&v23, v8);
          v9 = 0;
          if ( *((_DWORD *)this + 57) - *((_DWORD *)this + 55) >= 0 )
            v9 = *((_DWORD *)this + 57) - *((_DWORD *)this + 55);
          v10 = 0;
          if ( *((_DWORD *)this + 56) - *((_DWORD *)this + 54) >= 0 )
            v10 = *((_DWORD *)this + 56) - *((_DWORD *)this + 54);
          v5 = v23;
          if ( *((_DWORD *)v23 + 16) == v10 && *((_DWORD *)v23 + 17) == v9 )
          {
            v26.left = *((_DWORD *)this + 101) - *((_DWORD *)v23 + 14);
            v26.top = *((_DWORD *)this + 102) - *((_DWORD *)v23 + 15);
            v26.right = *((_DWORD *)this + 103) - *((_DWORD *)v23 + 14);
            v26.bottom = *((_DWORD *)this + 104) - *((_DWORD *)v23 + 15);
            v11 = *v4;
            *v4 = 0LL;
            if ( v11 )
              CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v11 + 8));
            v12 = CAnimatedTransitionVisual::Create(v4);
            v3 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x113u, 0LL);
              goto LABEL_24;
            }
            v13 = CAnimatedTransitionVisual::SetVisual(*v4, v5, 1, &v26);
            v3 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x114u, 0LL);
              goto LABEL_24;
            }
            v14 = 0;
            if ( *((_DWORD *)this + 103) - *((_DWORD *)this + 101) >= 0 )
              v14 = *((_DWORD *)this + 103) - *((_DWORD *)this + 101);
            LODWORD(v24) = v14;
            if ( *((_DWORD *)this + 104) - *((_DWORD *)this + 102) >= 0 )
              v2 = *((_DWORD *)this + 104) - *((_DWORD *)this + 102);
            HIDWORD(v24) = v2;
            CAnimatedTransitionVisual::SetBeginRect(*v4, (const struct tagRECT *)((char *)this + 404));
            CAnimatedTransitionVisual::SetEndRect(*v4, (const struct tagRECT *)((char *)this + 404));
            CVisual::SetSize((struct CAnimatedTransitionVisual *)((char *)*v4 + 8), v14, v2);
            *((_QWORD *)*v4 + 111) = v24;
            CVisual::SetInterpolationMode((__int64)*v4 + 8, 1LL, v15);
            v16 = CContainerVisual::AddChild(
                    this,
                    (struct CVisual *)(((unsigned __int64)*v4 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v4 >> 64)));
            v3 = v16;
            v2 = 0;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x11Eu, 0LL);
LABEL_24:
              wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v23);
LABEL_41:
              CDisplayAnimatedVisual::Stop(this, 0LL);
              return (unsigned int)v3;
            }
          }
        }
      }
      if ( v5 )
        CBaseObject::Release(v5);
    }
    v17 = (CAnimatedTransitionVisual **)((char *)this + 376);
    if ( !*((_QWORD *)this + 47) )
    {
      *v17 = 0LL;
      v18 = CDisplayAnimatedVisual::CaptureAndAddVisual(
              this,
              v25,
              (const struct tagRECT *)((char *)this + 420),
              (struct CAnimatedTransitionVisual **)this + 47);
      v3 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x126u, 0LL);
        goto LABEL_41;
      }
      if ( *((_DWORD *)this + 107) - *((_DWORD *)this + 105) >= 0 )
        v2 = *((_DWORD *)this + 107) - *((_DWORD *)this + 105);
      LODWORD(v24) = v2;
      v19 = 0;
      if ( *((_DWORD *)this + 108) - *((_DWORD *)this + 106) >= 0 )
        v19 = *((_DWORD *)this + 108) - *((_DWORD *)this + 106);
      HIDWORD(v24) = v19;
      CAnimatedTransitionVisual::SetBeginRect(*v17, (const struct tagRECT *)((char *)this + 420));
      CAnimatedTransitionVisual::SetEndRect(*v17, (const struct tagRECT *)((char *)this + 420));
      CVisual::SetSize((CAnimatedTransitionVisual *)((char *)*v17 + 8), v2, v19);
      *((_QWORD *)*v17 + 111) = v24;
    }
  }
  v20 = (CTimelineBase *)*((_QWORD *)this + 48);
  if ( v20 && *((_BYTE *)v20 + 72) )
  {
    *((_QWORD *)this + 48) = 0LL;
    CTimelineBase::Release(v20);
    v21 = CDisplaySecondaryOnlyToExtendAnimatedVisual::ScheduleEntranceAnimation(this);
    v3 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x134u, 0LL);
      goto LABEL_41;
    }
  }
  else if ( v3 < 0 )
  {
    goto LABEL_41;
  }
  return (unsigned int)v3;
}
