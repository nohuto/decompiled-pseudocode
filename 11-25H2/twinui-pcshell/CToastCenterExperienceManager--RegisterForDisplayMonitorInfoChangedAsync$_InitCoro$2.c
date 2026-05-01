/*
 * XREFs of CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x180247488
 * Callers:
 *     ?RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801C2E74 (-RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA-AUfire_and_forget.c)
 * Callees:
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1802474E0 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 129) = a4;
  *(_QWORD *)a2 = CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 128) = 0;
  return CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__ResumeCoro_1(a2);
}
