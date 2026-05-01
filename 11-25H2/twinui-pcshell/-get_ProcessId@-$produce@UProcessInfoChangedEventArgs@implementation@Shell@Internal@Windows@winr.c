/*
 * XREFs of ?get_ProcessId@?$produce@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIProcessInfoChangedEventArgs@3456@@impl@winrt@@UEAAHPEAI@Z @ 0x180641E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::Windows::Internal::Shell::IProcessInfoChangedEventArgs>::get_ProcessId(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 32LL;
  *a2 = *(_DWORD *)v2;
  return 0LL;
}
