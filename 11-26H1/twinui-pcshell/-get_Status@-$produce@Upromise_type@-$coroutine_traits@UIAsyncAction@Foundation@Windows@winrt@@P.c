/*
 * XREFs of ?get_Status@?$produce@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAH@Z @ 0x180453C80
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::get_Status(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _DWORD *v4; // r8

  v2 = a1 + 72;
  if ( !a1 )
    v2 = 96LL;
  v3 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)v2);
  *v4 = v3;
  return 0LL;
}
