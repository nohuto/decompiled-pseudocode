/*
 * XREFs of ?TryGetLastActiveTimestampForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEA_J@Z @ 0x1805655B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetLastActiveTimestampForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x18021A2D8 (-TryGetLastActiveTimestampForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::TryGetLastActiveTimestampForWindow(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  try
  {
    *a3 = *winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetLastActiveTimestampForWindow(
             v3,
             &v5,
             a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
