/*
 * XREFs of ?IsEqual@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x1802A9000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsEqual(
        __int64 a1,
        __int64 a2,
        bool *a3)
{
  __int64 v3; // rax

  v3 = a1 + 32;
  if ( !a1 )
    v3 = 40LL;
  *a3 = a2 == *(_QWORD *)v3;
  return 0LL;
}
