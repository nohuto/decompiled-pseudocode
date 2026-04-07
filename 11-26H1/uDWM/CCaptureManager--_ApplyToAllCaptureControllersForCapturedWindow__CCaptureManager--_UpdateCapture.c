/*
 * XREFs of CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerCaptureState_::_11_::_lambda_2___ @ 0x18009C9A0
 * Callers:
 *     ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5E48 (-_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x18008A6BC (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerCaptureState_::_11_::_lambda_2___(
        __int64 a1,
        __int64 a2,
        char a3,
        _BYTE *a4)
{
  __int64 v8; // r8
  __int64 **v9; // rdi
  __int64 *i; // rbx
  int v11; // eax
  unsigned int v12; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a4 = 0;
  v9 = *(__int64 ***)(a1 + 16);
  for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    if ( i[5] == a2 )
    {
      *a4 = 1;
      if ( *((_BYTE *)i + 57) )
      {
        v11 = CCaptureControllerProxy::SetCaptureState((CCaptureControllerProxy *)i[4], a3, v8);
        v12 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2BA,
            (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v11);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58B,
            (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)v12);
          goto LABEL_9;
        }
      }
    }
  }
  v12 = 0;
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v12;
}
