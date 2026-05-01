/*
 * XREFs of _lambda_070e192e9fba98d43315428c14debf7b_::operator() @ 0x180685224
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_070e192e9fba98d43315428c14debf7b___::Invoke @ 0x1806872F0 (winrt--impl--delegate_winrt--Windows--UI--Xaml--Input--PointerEventHandler__lambda_070e192e9fba9.c)
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180684054 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ?StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18068843C (-StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_070e192e9fba98d43315428c14debf7b_::operator()(struct IWeakReference **a1)
{
  VirtualDesktopSwitcherHost *v1; // rbx
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  int v4; // [rsp+30h] [rbp-18h]

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, (void **)&v2);
  if ( v2 )
  {
    v1 = (VirtualDesktopSwitcherHost *)((v2 - 8) & -(__int64)(v2 != 0));
    v3 = ((unsigned __int64)v1 + 32) & -(__int64)(v1 != 0LL);
    v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v3, 1);
    *((_WORD *)v1 + 228) = 256;
    VirtualDesktopSwitcherHost::StopPointerExitedTimer(v1);
    CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v3);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v2);
}
