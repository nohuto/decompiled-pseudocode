/*
 * XREFs of ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18003C220
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B180 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18003BE10 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003C0D0 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18001AAC0 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180059204 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x1800603B0 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnWindowCloakChange(
        CAnimationScheduler *this,
        const struct CWindowData *a2,
        unsigned __int8 a3,
        bool a4,
        bool *a5)
{
  int v5; // r15d
  unsigned int v8; // r14d
  CAnimationScheduler *v10; // rcx
  int v11; // r8d
  __int64 i; // rbx
  const struct CStoryboard *v13; // r13
  int v15; // [rsp+38h] [rbp-59h] BYREF
  BOOL v16; // [rsp+40h] [rbp-51h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v19[16]; // [rsp+60h] [rbp-31h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-21h]
  __int64 v21; // [rsp+78h] [rbp-19h]
  int *v22; // [rsp+80h] [rbp-11h]
  __int64 v23; // [rsp+88h] [rbp-9h]
  BOOL *v24; // [rsp+90h] [rbp-1h]
  __int64 v25; // [rsp+98h] [rbp+7h]

  v5 = a3;
  v8 = 0;
  *a5 = 0;
  if ( !*((_QWORD *)a2 + 5) )
    return 0LL;
  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v13 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
    if ( CAnimationScheduler::_ShouldTrack(v10, a2, v13, 1) )
    {
      v8 = CWindowPropertyTracker::OnWindowCloakChange((CAnimationScheduler *)((char *)this + 48), v13, a2, v5, a4);
      *a5 |= (v8 & 0x80000000) == 0;
    }
    else if ( (_BYTE)v5 )
    {
      CTransitionVisualController::RemoveTLWClone(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        *((const struct CTopLevelWindow **)a2 + 55),
        0,
        0);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v16 = *a5;
    v15 = v5;
    v17 = *((_QWORD *)a2 + 5);
    v20 = &v17;
    v21 = 8LL;
    v22 = &v15;
    v23 = 4LL;
    v24 = &v16;
    v25 = 4LL;
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmSystemAnimation_WindowCloak,
      v11,
      4,
      (__int64)v19);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v8;
}
