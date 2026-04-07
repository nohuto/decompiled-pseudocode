/*
 * XREFs of CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerSize_::_4_::_lambda_1___ @ 0x18009CE98
 * Callers:
 *     ?_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A6310 (-_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A55EC (-_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureContro.c)
 */

__int64 __fastcall CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerSize_::_4_::_lambda_1___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _BYTE *a4)
{
  CCaptureManager *v8; // rcx
  __int64 ***v9; // rdi
  __int64 **i; // rbx
  int v11; // eax
  unsigned int v12; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a4 = 0;
  v9 = *(__int64 ****)(a1 + 80);
  for ( i = *v9; i != (__int64 **)v9; i = (__int64 **)*i )
  {
    if ( i[5] == a2 )
    {
      *a4 = 1;
      v11 = CCaptureManager::_SendBoundsToCaptureControllerFromWindow(
              v8,
              *(HWND *)(a3 + 8),
              0,
              (struct CCaptureControllerProxy *)i[4]);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x288,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)v11);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59D,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)v12);
        goto LABEL_8;
      }
    }
  }
  v12 = 0;
LABEL_8:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v12;
}
