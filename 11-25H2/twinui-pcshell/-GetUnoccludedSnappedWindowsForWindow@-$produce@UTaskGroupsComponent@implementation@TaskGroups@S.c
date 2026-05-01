/*
 * XREFs of ?GetUnoccludedSnappedWindowsForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@IPEAIPEAPEAU423@@Z @ 0x180225690
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@YA?A_P$$QEAU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180225704 (--$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x18022571C (-GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::GetUnoccludedSnappedWindowsForWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  _QWORD *v6; // rdi
  __int64 UnoccludedSnappedWindowsForWindow; // rax
  __int64 v8; // rax
  __int64 result; // rax
  void *pv; // [rsp+20h] [rbp-28h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v6 = a5;
  *a5 = 0LL;
  try
  {
    UnoccludedSnappedWindowsForWindow = winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow();
    v8 = winrt::detach_abi<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>(
           v11,
           UnoccludedSnappedWindowsForWindow);
    *a4 = *(_DWORD *)v8;
    *v6 = *(_QWORD *)(v8 + 8);
    if ( pv )
      CoTaskMemFree_0(pv);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v12);
  }
  return result;
}
