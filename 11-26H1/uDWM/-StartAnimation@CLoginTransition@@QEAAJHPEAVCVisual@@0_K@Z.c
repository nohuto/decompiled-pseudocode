/*
 * XREFs of ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800373A0
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180035E88 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180035ECC (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180037ECC (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180037EF8 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180038194 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18003CE98 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x18003E0D4 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ??$wnf_publish_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@AEBK@Z @ 0x1800742B8 (--$wnf_publish_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@AEBK@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800780F8 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18008234C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800824B8 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLoginTransition::StartAnimation(
        CLoginTransition *this,
        int a2,
        struct CVisual *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  int started; // edi
  int v10; // esi
  CAnimatedTransitionVisual **v11; // rbx
  __int64 v12; // rcx
  CAnimatedTransitionVisual **v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct CVisual **v16; // r12
  CBaseObject *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  LONG v20; // r8d
  LONG v21; // edx
  LONG v22; // r8d
  LONG v23; // edx
  int v24; // r13d
  int v25; // edx
  int v26; // eax
  int v27; // eax
  CVisual *v28; // rax
  CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  __int64 v30; // r9
  int v31; // eax
  int v32; // r8d
  _QWORD *v33; // r9
  __int64 v34; // r8
  CAnimatedTransitionVisual *v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  CAnimationEngine *v38; // r15
  int v40; // r8d
  __int64 v41; // rcx
  int v42; // eax
  int v43; // [rsp+20h] [rbp-61h]
  struct CAnimationEngine *v44; // [rsp+30h] [rbp-51h]
  CVisual *v45; // [rsp+38h] [rbp-49h] BYREF
  int v46; // [rsp+40h] [rbp-41h] BYREF
  void *lpMem[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v48; // [rsp+58h] [rbp-29h]
  int v49; // [rsp+60h] [rbp-21h]
  struct tagRECT v50; // [rsp+68h] [rbp-19h] BYREF
  struct tagPOINT v51; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v45 = a4;
  v46 = a2;
  *(_OWORD *)lpMem = 0LL;
  v48 = 0LL;
  v49 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoginTransition_Start,
      (_DWORD)a3,
      1,
      (__int64)&v51);
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 18) = a2;
  v44 = CDesktopManager::AcquireAnimationEngine();
  if ( !v44 )
  {
    started = -2147024882;
    v10 = -2147024882;
    v37 = 45;
    v38 = 0LL;
    goto LABEL_46;
  }
  started = CLoginTransition::StopAnimation(this);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 48;
    goto LABEL_45;
  }
  *((_QWORD *)this + 4) = a3;
  if ( a3 )
    CBaseObject::AddRef(a3);
  *((_QWORD *)this + 5) = a4;
  if ( a4 )
    CBaseObject::AddRef(a4);
  v11 = (CAnimatedTransitionVisual **)((char *)this + 8);
  v12 = *((_QWORD *)this + 1);
  if ( v12 )
  {
    CBaseObject::Release((CBaseObject *)(v12 + 8));
    *v11 = 0LL;
  }
  v13 = (CAnimatedTransitionVisual **)((char *)this + 16);
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
  {
    CBaseObject::Release((CBaseObject *)(v14 + 8));
    *v13 = 0LL;
  }
  v15 = *((_QWORD *)this + 3);
  if ( v15 )
  {
    CBaseObject::Release((CBaseObject *)(v15 + 8));
    *((_QWORD *)this + 3) = 0LL;
  }
  v16 = (struct CVisual **)((char *)this + 48);
  v17 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *v16 = 0LL;
  }
  started = CContainerVisual::Create((struct CContainerVisual **)this + 6);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 66;
    goto LABEL_45;
  }
  started = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 1);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 67;
    goto LABEL_45;
  }
  started = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 2);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 68;
    goto LABEL_45;
  }
  v51.x = -32000;
  v51.y = -32000;
  CVisual::SetOffset((struct tagPOINT *)a3, &v51, v18);
  CVisual::SetOffset((struct tagPOINT *)v45, &v51, v19);
  v50 = 0LL;
  v50 = *(struct tagRECT *)((char *)CDesktopManager::s_pDesktopManagerInstance + 396);
  started = CAnimatedTransitionVisual::SetVisual(*v11, a3, 1, &v50);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 82;
    goto LABEL_75;
  }
  started = CAnimatedTransitionVisual::SetVisual(*v13, v45, 0, &v50);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 83;
LABEL_45:
    v38 = v44;
    goto LABEL_46;
  }
  started = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*v11, a3);
  v10 = started;
  v20 = 0;
  if ( started < 0 )
  {
    v37 = 90;
LABEL_75:
    v38 = v44;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v37, 0LL);
    CLoginTransition::_CleanupAnimation(this);
    if ( !v38 )
      goto LABEL_47;
    goto LABEL_59;
  }
  if ( v50.bottom - v50.top >= 0 )
    v20 = v50.bottom - v50.top;
  v21 = 0;
  if ( v50.right - v50.left >= 0 )
    v21 = v50.right - v50.left;
  CVisual::SetSize((CAnimatedTransitionVisual *)((char *)*v11 + 8), v21, v20);
  v22 = 0;
  if ( v50.bottom - v50.top >= 0 )
    v22 = v50.bottom - v50.top;
  v23 = 0;
  if ( v50.right - v50.left >= 0 )
    v23 = v50.right - v50.left;
  CVisual::SetSize((CAnimatedTransitionVisual *)((char *)*v13 + 8), v23, v22);
  v24 = v46;
  CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(*v11, v46, 2);
  CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(*v13, v25, 1);
  CAnimatedTransitionVisual::SetBeginRect(*v11, &v50);
  CAnimatedTransitionVisual::SetBeginRect(*v13, &v50);
  CAnimatedTransitionVisual::SetEndRect(*v11, &v50);
  CAnimatedTransitionVisual::SetEndRect(*v13, &v50);
  CAnimatedTransitionVisual::SetBeginAlpha(*v13, 0.0);
  v26 = 0;
  if ( v50.right - v50.left >= 0 )
    v26 = v50.right - v50.left;
  LODWORD(v45) = v26;
  v27 = 0;
  if ( v50.bottom - v50.top >= 0 )
    v27 = v50.bottom - v50.top;
  HIDWORD(v45) = v27;
  v28 = v45;
  *((_QWORD *)*v13 + 111) = v45;
  *((_QWORD *)*v11 + 111) = v28;
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 53));
  started = CContainerVisual::AddChild(RenderTargetRootVisualForDesktop, *v16);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 111;
    goto LABEL_45;
  }
  started = CContainerVisual::AddChild(
              *v16,
              (struct CVisual *)(((unsigned __int64)*v11 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v11 >> 64)));
  v10 = started;
  if ( started < 0 )
  {
    v37 = 112;
    goto LABEL_45;
  }
  started = CContainerVisual::AddChild(
              *v16,
              (struct CVisual *)(((unsigned __int64)*v13 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v13 >> 64)));
  v10 = started;
  if ( started < 0 )
  {
    v37 = 113;
    goto LABEL_45;
  }
  started = CVisual::MoveToFront(*v16, 0);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 116;
    goto LABEL_45;
  }
  v51 = (struct tagPOINT)*v11;
  v45 = (CVisual *)&v51;
  v31 = DynArrayImpl<0>::Grow((__int64)lpMem, 8u, 1, v30, (unsigned __int64 *)&v45);
  started = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xC2u, 0LL);
    v10 = started;
    v37 = 118;
    goto LABEL_43;
  }
  v32 = v49;
  v33 = lpMem[0];
  *(_QWORD *)((char *)lpMem[0] + (unsigned int)(8 * v49)) = *(_QWORD *)v45;
  v34 = (unsigned int)(v32 + 1);
  v49 = v34;
  v35 = *v13;
  v51 = (struct tagPOINT)*v13;
  if ( (int)v34 + 1 < (unsigned int)v34 )
  {
    started = -2147024362;
    v36 = 183;
LABEL_42:
    v10 = started;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v36, 0LL);
    v37 = 119;
LABEL_43:
    v38 = v44;
    goto LABEL_46;
  }
  if ( (unsigned int)(v34 + 1) <= HIDWORD(v48) )
  {
    v33[v34] = v35;
    v49 = v34 + 1;
  }
  else
  {
    v45 = (CVisual *)&v51;
    started = DynArrayImpl<0>::Grow((__int64)lpMem, 8u, 1, (__int64)v33, (unsigned __int64 *)&v45);
    if ( started < 0 )
    {
      v36 = 194;
      goto LABEL_42;
    }
    v40 = v49;
    *(_QWORD *)((char *)lpMem[0] + (unsigned int)(8 * v49)) = *(_QWORD *)v45;
    v49 = v40 + 1;
  }
  v38 = v44;
  started = CAnimationEngine::RegisterForAnimationCompleteNotification(v44, this);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 123;
    goto LABEL_46;
  }
  started = CAnimationEngine::ScheduleStartAnimation(v44, v24);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 126;
    goto LABEL_46;
  }
  started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
  v10 = started;
  if ( started < 0 )
  {
    v37 = 130;
    goto LABEL_46;
  }
  v46 = (v24 != 55) + 1;
  v42 = wil::wnf_publish_nothrow<unsigned long>(v41, &v46);
  if ( v42 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x84,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\logintransition.cpp",
      (const char *)(unsigned int)v42,
      v43);
  *((_BYTE *)this + 68) = 1;
LABEL_59:
  CAnimationEngine::Release(v38);
LABEL_47:
  if ( lpMem[0] != lpMem[1] )
    DefaultHeap::Free(lpMem[0]);
  return (unsigned int)started;
}
