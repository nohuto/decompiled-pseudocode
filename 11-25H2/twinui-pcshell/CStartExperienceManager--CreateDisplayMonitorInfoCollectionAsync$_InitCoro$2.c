/*
 * XREFs of CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2 @ 0x18037FF30
 * Callers:
 *     ?CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1802BAA78 (-CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA-AUfire_and_forget@winrt@@.c)
 * Callees:
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18037FF90 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 225) = a4;
  *(_QWORD *)a2 = CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 224) = 0;
  return CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync__ResumeCoro_1(a2);
}
