/*
 * XREFs of ?ErrorCode@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@QEAA?AUhresult@3@XZ @ 0x1805F4D84
 * Callers:
 *     ?get_ErrorCode@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAUhresult@3@@Z @ 0x1805F8360 (-get_ErrorCode@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperationWithProgress@UMeetAn.c)
 * Callees:
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18028D81C (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::ErrorCode(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  int v6; // edx
  _DWORD *result; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 72);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  v5 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)(a1 + 96));
  try
  {
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      v8[0] = 0LL;
      __ExceptionPtrCopy(v8, (const void *)(a1 + 56));
      std::rethrow_exception(v8);
    }
    *a2 = v6;
    ReleaseSRWLockExclusive_0(v4);
    result = a2;
  }
  catch ( ... )
  {
    winrt::to_hresult(a2);
    return a2;
  }
  return result;
}
