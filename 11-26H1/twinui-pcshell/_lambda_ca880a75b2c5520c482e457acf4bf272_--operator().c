/*
 * XREFs of _lambda_ca880a75b2c5520c482e457acf4bf272_::operator() @ 0x1806ACB08
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_ca880a75b2c5520c482e457acf4bf272___::Invoke @ 0x1806AE6D0 (winrt--impl--delegate_winrt--Windows--UI--Xaml--RoutedEventHandler__lambda_ca880a75b2c5520c482e4.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherViewHostInternal@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1806AB4C0 (--$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@-$com_ptr_t@UIWeakReference@@Uerr_failfa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_ca880a75b2c5520c482e457acf4bf272_::operator()(struct IWeakReference **a1)
{
  __int64 v1; // rdx
  char *v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  int v4; // [rsp+30h] [rbp-18h]

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherViewHostInternal>(
    a1,
    (void **)&v2);
  if ( v2 )
  {
    v1 = (unsigned __int64)(v2 - 136) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64);
    v3 = (v1 + 32) & -(__int64)(v1 != 0);
    v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v3, 1);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 24LL))(v2);
    CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v3);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v2);
}
