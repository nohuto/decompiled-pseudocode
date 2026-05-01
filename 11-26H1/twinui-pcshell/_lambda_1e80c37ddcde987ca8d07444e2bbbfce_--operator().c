/*
 * XREFs of _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x1801CC994
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::Invoke @ 0x1801CC920 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_1e80c37ddcd.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801CCA48 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801CCACC (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator()(__int64 a1, RTL_SRWLOCK *a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rsi
  char v5; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  winrt::weak_ref<SnapFlyoutHost>::get(a1, &v6);
  v3 = v6;
  if ( v6 )
  {
    AcquireSRWLockExclusive(v6 + 22);
    v4 = v3 + 7;
    if ( v3[7].Ptr )
    {
      if ( v4 != (RTL_SRWLOCK *)&v5 )
      {
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v3[7]);
        v4->Ptr = 0LL;
      }
      SnapFlyoutHost::InternalShowFlyout(v3, *(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16));
    }
    if ( v3 != (RTL_SRWLOCK *)-176LL )
      ReleaseSRWLockExclusive(v3 + 22);
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v6);
}
