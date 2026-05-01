/*
 * XREFs of CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x180247B48
 * Callers:
 *     ?OnDisplayMonitorInfoChangedAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180205830 (-OnDisplayMonitorInfoChangedAsync@CStartExperienceManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180247BA0 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 65) = a4;
  *(_QWORD *)a2 = CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 64) = 0;
  return CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1(a2);
}
