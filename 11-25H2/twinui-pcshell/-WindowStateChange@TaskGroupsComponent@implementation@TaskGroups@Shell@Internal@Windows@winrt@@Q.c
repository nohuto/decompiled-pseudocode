/*
 * XREFs of ?WindowStateChange@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@67@@Z @ 0x180221E24
 * Callers:
 *     ?add_WindowStateChange@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180221DE0 (-add_WindowStateChange@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ?add@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@2@@Z @ 0x180221EA4 (-add@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWind.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::WindowStateChange(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi

  v6 = a1 + 16;
  AcquireSRWLockExclusive(a1 + 16);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>::add(
    &a1[62],
    a2,
    a3);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return a2;
}
