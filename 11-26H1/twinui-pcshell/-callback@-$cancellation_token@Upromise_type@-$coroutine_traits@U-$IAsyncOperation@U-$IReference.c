/*
 * XREFs of ?callback@?$cancellation_token@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@impl@winrt@@QEBAX$$QEAU?$delegate@$$V@3@@Z @ 0x1805F0FBC
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805F0510 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::cancellation_token<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>::callback(
        RTL_SRWLOCK **a1,
        __int64 *a2)
{
  RTL_SRWLOCK *v3; // rsi
  RTL_SRWLOCK *v4; // rbx

  v3 = *a1;
  v4 = *a1 + 9;
  _Platform_AcquireSRWLockExclusive(v4);
  if ( (unsigned int)std::_Atomic_storage<unsigned int,4>::load((unsigned int *)&v3[12]) == 2 )
  {
    ReleaseSRWLockExclusive_0(v4);
    if ( *a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 24LL))(*a2);
  }
  else
  {
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v3[11], a2);
    ReleaseSRWLockExclusive_0(v4);
  }
}
