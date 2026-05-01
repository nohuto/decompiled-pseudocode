/*
 * XREFs of _lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const_&_ @ 0x1805953E0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke @ 0x1805964E0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_e0b0b8eaa13.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801CCA48 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18028A570 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ?DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18059613C (-DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180596C78 (-StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const___(
        __int64 *a1,
        __int64 a2)
{
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 v3; // r8
  struct IUnknown v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = a2;
  winrt::weak_ref<SnapFlyoutHost>::get(a1, &v5);
  lpVtbl = v5.lpVtbl;
  if ( v5.lpVtbl )
  {
    wil::AcquireSRWLockExclusive(&v7, (RTL_SRWLOCK *)&v5.lpVtbl[9].Release);
    TouchEdgeGripperHost::StopDismissTimer(lpVtbl);
    HIDWORD(lpVtbl[1].QueryInterface) = 0;
    v6 = 0LL;
    winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)&lpVtbl[2], &v6);
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v6);
    LOBYTE(v3) = 1;
    TouchEdgeGripperHost::DismissGripperWindowAsync(lpVtbl, &v6, v3);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  }
  return winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(&v5);
}
