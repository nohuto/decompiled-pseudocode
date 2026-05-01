/*
 * XREFs of ?CloseWindows@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHIPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@@Z @ 0x180563F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::CloseWindows(
        __int64 a1,
        int a2,
        unsigned int *a3)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rdi

  v3 = a3;
  v4 = &a3[a2];
  while ( v3 != v4 )
    PostMessageW((HWND)*v3++, 0x112u, 0xF060uLL, 0LL);
  return 0LL;
}
