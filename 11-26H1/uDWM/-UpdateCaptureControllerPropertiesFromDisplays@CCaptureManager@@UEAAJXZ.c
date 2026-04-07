/*
 * XREFs of ?UpdateCaptureControllerPropertiesFromDisplays@CCaptureManager@@UEAAJXZ @ 0x180078240
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A66B4 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::UpdateCaptureControllerPropertiesFromDisplays(CCaptureManager *this)
{
  CCaptureManager *v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  int updated; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *j; // rbx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = (_QWORD *)*((_QWORD *)this + 18);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    updated = CCaptureManager::_UpdateDisplayCaptureControllerProperties(
                v2,
                (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)(i + 3));
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = 747LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)updated,
        v11);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
      return v6;
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 26);
  for ( j = (_QWORD *)*v8; j != v8; j = (_QWORD *)*j )
  {
    updated = CCaptureManager::_UpdateDisplayCaptureControllerProperties(
                v2,
                (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)(j + 3));
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = 753LL;
      goto LABEL_11;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
