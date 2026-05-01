/*
 * XREFs of ?add_WindowStateChange@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180221DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowStateChange@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@67@@Z @ 0x180221E24 (-WindowStateChange@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::add_WindowStateChange(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h]

  v5 = a2;
  try
  {
    *a3 = *(_QWORD *)winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::WindowStateChange();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
