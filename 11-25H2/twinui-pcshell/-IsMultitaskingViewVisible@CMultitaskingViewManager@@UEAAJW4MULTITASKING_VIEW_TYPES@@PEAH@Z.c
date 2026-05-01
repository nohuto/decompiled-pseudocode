/*
 * XREFs of ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x180490140
 * Callers:
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18025AA30 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x18048F740 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18048FA40 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x180490660 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x180020748 (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewManager::IsMultitaskingViewVisible(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  v7 = (a1 + 40) & -(__int64)(a1 != 0);
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1);
  *a3 = (int)CMultitaskingViewManager::_FindMTVHost(a1, a2, 1, 0LL, 0LL) >= 0;
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v7);
  return 0LL;
}
