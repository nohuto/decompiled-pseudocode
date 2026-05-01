/*
 * XREFs of ?get_IsRegistered@?$produce@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIProcessInfoChangedEventArgs@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180667B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::Windows::Internal::Shell::IProcessInfoChangedEventArgs>::get_IsRegistered(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rax

  v2 = a1 + 20;
  if ( !a1 )
    v2 = 36LL;
  *a2 = *(_BYTE *)v2;
  return 0LL;
}
