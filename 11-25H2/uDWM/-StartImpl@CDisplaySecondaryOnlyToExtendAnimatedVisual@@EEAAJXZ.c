/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B4A30
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x180066578 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800666C0 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18006837C (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18006DD50 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18009A1F0 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18009A564 (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  struct tagPOINT **v4; // rsi
  int PrimaryDisplay; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  int v9; // eax
  int v10; // eax
  int updated; // eax
  struct CDWMDisplay *v13; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-28h]
  struct tagRECT v15; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  if ( *((_QWORD *)this + 36) != *((_QWORD *)this + 35) )
  {
    v14 = 0LL;
    GetDesktopID(1LL);
    v15.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
    v15.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97) + v15.left;
    v15.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v15.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98) + v15.top;
    v4 = (struct tagPOINT **)((char *)this + 392);
    if ( !*((_QWORD *)this + 49) )
    {
      *v4 = 0LL;
      v2 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, v14, &v15, (struct CAnimatedTransitionVisual **)this + 49);
      if ( (v2 & 0x80000000) != 0 )
      {
        v3 = 55LL;
        goto LABEL_3;
      }
    }
    v13 = 0LL;
    PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(*((CDWMDisplaySet **)this + 34), &v13);
    v2 = PrimaryDisplay;
    if ( PrimaryDisplay >= 0 )
    {
      MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
                                      *((CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
                                      v13);
      if ( MatchedPhysicalDisplayNoRef )
      {
        *(_OWORD *)((char *)this + 452) = *(_OWORD *)((char *)MatchedPhysicalDisplayNoRef + 56);
        CAnimatedTransitionVisual::SetBeginRect(*v4, (const struct tagRECT *)((char *)this + 452));
        CAnimatedTransitionVisual::SetEndRect(
          (CAnimatedTransitionVisual *)*v4,
          (const struct tagRECT *)((char *)this + 452));
        v9 = CDisplayAnimatedVisual::ScheduleAnimation(
               (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 240),
               (struct CAnimatedTransitionVisual *)*v4,
               (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
               *((_DWORD *)this + 76),
               *((_DWORD *)this + 78),
               (unsigned int *)this + 106);
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
              *(_OWORD *)((char *)this + 436) = *(_OWORD *)(**((_QWORD **)this + 35) + 56LL);
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
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
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
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
    (const char *)v2);
  return v2;
}
