/*
 * XREFs of ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1806AB48C
 * Callers:
 *     _lambda_0448dd6b07ee8d154ed22029eec6a770_::operator() @ 0x1806AC5B4 (_lambda_0448dd6b07ee8d154ed22029eec6a770_--operator().c)
 *     _lambda_070e192e9fba98d43315428c14debf7b_::operator() @ 0x1806AC638 (_lambda_070e192e9fba98d43315428c14debf7b_--operator().c)
 *     _lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator() @ 0x1806AC6C4 (_lambda_28e2deb1c60008eafa8d487ea9ad6bb5_--operator().c)
 *     _lambda_72e1dcf1d191a1fe628d31ef24d41038_::operator() @ 0x1806AC83C (_lambda_72e1dcf1d191a1fe628d31ef24d41038_--operator().c)
 *     _lambda_828944ce103634e2e050a423f7a4c10d_::operator() @ 0x1806AC8D0 (_lambda_828944ce103634e2e050a423f7a4c10d_--operator().c)
 *     _lambda_941eca72fc43b2c4835a5fc6680f0a4a_::operator() @ 0x1806AC95C (_lambda_941eca72fc43b2c4835a5fc6680f0a4a_--operator().c)
 *     _lambda_95528747bebe02d956eab525d53e8eb3_::operator() @ 0x1806ACA28 (_lambda_95528747bebe02d956eab525d53e8eb3_--operator().c)
 *     _lambda_ec805711c79670d05ccf93f6b458b0f9_::operator() @ 0x1806ACB94 (_lambda_ec805711c79670d05ccf93f6b458b0f9_--operator().c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_eba64241e9b90ff96c214d869f8d7087___::Invoke @ 0x1806AE730 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_eba64241e9b.c)
 *     ?VirtualDesktopSwitcherHostHookProc@VirtualDesktopSwitcherHook@@CA_JH_K_J@Z @ 0x1806AFC30 (-VirtualDesktopSwitcherHostHookProc@VirtualDesktopSwitcherHook@@CA_JH_K_J@Z.c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18017A914 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

void **__fastcall wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(
        struct IWeakReference **a1,
        void **a2)
{
  struct IWeakReference *v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  wil::details::weak_query_policy::query(v3, &GUID_1be71764_e771_4442_b78f_eda2c7f067f3, a2);
  return a2;
}
