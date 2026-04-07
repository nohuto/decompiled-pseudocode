/*
 * XREFs of ?SetupWindowedSwapChainCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCaptureManager::SetupWindowedSwapChainCapture(
        CCaptureManager *this,
        HWND a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
  return 2147500033LL;
}
