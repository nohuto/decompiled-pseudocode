/*
 * XREFs of ?Execute@BootRecoveringState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066A380
 * Callers:
 *     <none>
 * Callees:
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806727F8 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::BootRecoveringState::Execute(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  if ( a3 != 100 )
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(a1, a3, 99LL);
  return result;
}
