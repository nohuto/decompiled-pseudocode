/*
 * XREFs of ?CreateDisplayMonitorInfoCollectionAsync@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180237E58
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180238378 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x180237D20 (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2)
{
  void (__fastcall **v5)(__int64); // [rsp+40h] [rbp+8h]

  v5 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v5[9] = a1;
  *v5 = CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 64) = 0;
  CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__ResumeCoro_1((__int64)v5);
  return a2;
}
