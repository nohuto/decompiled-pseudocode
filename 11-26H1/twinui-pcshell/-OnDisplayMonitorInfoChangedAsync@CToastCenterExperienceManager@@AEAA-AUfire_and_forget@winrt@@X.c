/*
 * XREFs of ?OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180239630
 * Callers:
 *     ?OnDisplayMonitorInfoChanged@CToastCenterExperienceManager@@AEAAXUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@3456@@Z @ 0x18037D1C0 (-OnDisplayMonitorInfoChanged@CToastCenterExperienceManager@@AEAAXUDisplayMonitorInfoCollection@S.c)
 * Callees:
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180239510 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2)
{
  void (__fastcall **v5)(__int64); // [rsp+40h] [rbp+8h]

  v5 = (void (__fastcall **)(__int64))operator new(0x40uLL);
  v5[7] = a1;
  *v5 = CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 48) = 0;
  CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1((__int64)v5);
  return a2;
}
