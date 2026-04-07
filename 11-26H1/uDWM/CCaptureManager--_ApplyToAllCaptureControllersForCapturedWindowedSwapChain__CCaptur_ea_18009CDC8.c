/*
 * XREFs of CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost_::_4_::_lambda_1___ @ 0x18009CDC8
 * Callers:
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800A61E0 (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x18009BE24 (-SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z.c)
 */

__int64 __fastcall CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost_::_4_::_lambda_1___(
        __int64 a1,
        __int64 *a2,
        int a3,
        _BYTE *a4)
{
  __int64 ***v8; // rdi
  __int64 **i; // rbx
  int v10; // eax
  unsigned int v11; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a4 = 0;
  v8 = *(__int64 ****)(a1 + 80);
  for ( i = *v8; i != (__int64 **)v8; i = (__int64 **)*i )
  {
    if ( i[5] == a2 )
    {
      *a4 = 1;
      v10 = CCaptureControllerProxy::SetDefaultSDRBoost((CCaptureControllerProxy *)i[4], *(float *)&a3);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C6,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)v10);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59D,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)v11);
        goto LABEL_8;
      }
    }
  }
  v11 = 0;
LABEL_8:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v11;
}
