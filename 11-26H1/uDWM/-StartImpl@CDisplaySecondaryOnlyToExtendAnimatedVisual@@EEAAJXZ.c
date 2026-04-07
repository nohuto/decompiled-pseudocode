/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B4540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x1800070F0 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x1800582BC (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180070FDC (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800770D8 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18008DB74 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  CAnimatedTransitionVisual **v4; // rsi
  int PrimaryDisplay; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  int v9; // eax
  int v10; // eax
  int updated; // eax
  struct CDWMDisplay *v13; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  if ( *((_QWORD *)this + 32) != *((_QWORD *)this + 31) )
  {
    v14 = 0LL;
    GetDesktopID(1LL, &v14);
    v15.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
    v15.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97) + v15.left;
    v15.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v15.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98) + v15.top;
    v4 = (CAnimatedTransitionVisual **)((char *)this + 360);
    if ( !*((_QWORD *)this + 45) )
    {
      *v4 = 0LL;
      v2 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, v14, &v15, (struct CAnimatedTransitionVisual **)this + 45);
      if ( (v2 & 0x80000000) != 0 )
      {
        v3 = 55LL;
        goto LABEL_3;
      }
    }
    v13 = 0LL;
    PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(*((CDWMDisplaySet **)this + 30), &v13);
    v2 = PrimaryDisplay;
    if ( PrimaryDisplay >= 0 )
    {
      MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
                                      *((CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
                                      v13);
      if ( MatchedPhysicalDisplayNoRef )
      {
        *(_OWORD *)((char *)this + 420) = *(_OWORD *)((char *)MatchedPhysicalDisplayNoRef + 56);
        CAnimatedTransitionVisual::SetBeginRect(*v4, (const struct tagRECT *)((char *)this + 420));
        CAnimatedTransitionVisual::SetEndRect(*v4, (const struct tagRECT *)((char *)this + 420));
        v9 = CDisplayAnimatedVisual::ScheduleAnimation(
               (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 208),
               *v4,
               (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
               *((_DWORD *)this + 68),
               *((_DWORD *)this + 70),
               (unsigned int *)this + 98);
        v2 = v9;
        if ( v9 >= 0 )
        {
          v10 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(this);
          v2 = v10;
          if ( v10 >= 0 )
          {
            updated = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
            v2 = updated;
            if ( updated >= 0 )
            {
              *(_OWORD *)((char *)this + 404) = *(_OWORD *)(**((_QWORD **)this + 31) + 56LL);
              v2 = 0;
              goto LABEL_19;
            }
            v6 = (unsigned int)updated;
            v7 = 89LL;
          }
          else
          {
            v6 = (unsigned int)v10;
            v7 = 86LL;
          }
        }
        else
        {
          v6 = (unsigned int)v9;
          v7 = 84LL;
        }
      }
      else
      {
        v2 = -2147467259;
        v6 = 2147500037LL;
        v7 = 70LL;
      }
    }
    else
    {
      v6 = (unsigned int)PrimaryDisplay;
      v7 = 62LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)v6);
LABEL_19:
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v13);
    return v2;
  }
  v2 = -2147418113;
  v3 = 45LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
    (const char *)v2);
  return v2;
}
