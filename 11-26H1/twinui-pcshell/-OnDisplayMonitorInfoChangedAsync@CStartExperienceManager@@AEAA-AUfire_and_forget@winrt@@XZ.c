/*
 * XREFs of ?OnDisplayMonitorInfoChangedAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18023A48C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs___lambda_01b8ae2d9cbe4889d05ea36904e58758___::Invoke @ 0x180389550 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180389550.c)
 * Callees:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x18023A330 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall CStartExperienceManager::OnDisplayMonitorInfoChangedAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2)
{
  void (__fastcall **v5)(__int64); // [rsp+40h] [rbp+8h]

  v5 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v5[9] = a1;
  *v5 = CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 64) = 0;
  CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1((__int64)v5);
  return a2;
}
