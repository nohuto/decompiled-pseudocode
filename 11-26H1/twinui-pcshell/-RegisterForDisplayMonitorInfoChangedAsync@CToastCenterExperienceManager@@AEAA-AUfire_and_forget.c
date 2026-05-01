/*
 * XREFs of ?RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180055A2C
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x180054F14 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180239C50 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync(__int64 a1, _BYTE *a2)
{
  _QWORD *v5; // [rsp+40h] [rbp+8h]

  v5 = operator new(0x90uLL);
  v5[17] = a1;
  *v5 = CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 128) = 0;
  CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__ResumeCoro_1();
  return a2;
}
