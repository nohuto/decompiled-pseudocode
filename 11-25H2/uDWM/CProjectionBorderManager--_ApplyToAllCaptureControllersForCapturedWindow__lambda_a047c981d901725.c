/*
 * XREFs of CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_a047c981d901725fbcc49e7dada48a99___ @ 0x1800BDA3C
 * Callers:
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800C4B10 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800A8C64 (-SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_a047c981d901725fbcc49e7dada48a99___(
        struct _RTL_GENERIC_TABLE *a1,
        CCaptureControllerProxy *a2,
        int a3)
{
  char v6; // di
  CCaptureControllerProxy **v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v6 = 0;
  v7 = (CCaptureControllerProxy **)RtlEnumerateGenericTableWithoutSplaying(a1 + 6, &RestartKey);
  if ( v7 )
  {
    do
    {
      if ( v7[2] == a2 )
      {
        v6 = 1;
        v8 = CCaptureControllerProxy::SetDefaultSDRBoost(v7[1], *(float *)&a3);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x32F,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v8);
          v11 = 1522LL;
          goto LABEL_9;
        }
      }
      v7 = (CCaptureControllerProxy **)RtlEnumerateGenericTableWithoutSplaying(a1 + 6, &RestartKey);
    }
    while ( v7 );
    if ( !v6 )
      goto LABEL_8;
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
    return 0LL;
  }
  else
  {
LABEL_8:
    v9 = -2147024809;
    v11 = 1526LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)v9);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
    return v9;
  }
}
