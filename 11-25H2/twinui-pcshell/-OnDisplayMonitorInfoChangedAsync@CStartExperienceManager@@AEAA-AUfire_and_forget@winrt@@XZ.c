/*
 * XREFs of ?OnDisplayMonitorInfoChangedAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180205830
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs___lambda_01b8ae2d9cbe4889d05ea36904e58758___::Invoke @ 0x1803821C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1803821C0.c)
 * Callees:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x180247B48 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnDisplayMonitorInfoChangedAsync(__int64 a1, __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v4 = operator new(0x50uLL);
  v6 = 0;
  CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
