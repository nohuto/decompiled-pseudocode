/*
 * XREFs of ??$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherViewHostInternal@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1806AB4C0
 * Callers:
 *     _lambda_ca880a75b2c5520c482e457acf4bf272_::operator() @ 0x1806ACB08 (_lambda_ca880a75b2c5520c482e457acf4bf272_--operator().c)
 *     ?VirtualDesktopSwitcherHostHookProc@VirtualDesktopSwitcherHook@@CA_JH_K_J@Z @ 0x1806AFC30 (-VirtualDesktopSwitcherHostHookProc@VirtualDesktopSwitcherHook@@CA_JH_K_J@Z.c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18017A914 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

void **__fastcall wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherViewHostInternal>(
        struct IWeakReference **a1,
        void **a2)
{
  struct IWeakReference *v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  wil::details::weak_query_policy::query(v3, &GUID_1ed755e6_0150_4780_a937_c85c00302079, a2);
  return a2;
}
