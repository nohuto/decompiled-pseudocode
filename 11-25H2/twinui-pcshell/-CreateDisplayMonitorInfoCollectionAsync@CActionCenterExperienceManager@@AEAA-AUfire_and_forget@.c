/*
 * XREFs of ?CreateDisplayMonitorInfoCollectionAsync@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180153644
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801529A0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2 @ 0x180246E00 (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync(__int64 a1, __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v4 = operator new(0x50uLL);
  v6 = 0;
  CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
