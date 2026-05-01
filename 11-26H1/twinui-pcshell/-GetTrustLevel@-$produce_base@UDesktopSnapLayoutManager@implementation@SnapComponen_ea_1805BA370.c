/*
 * XREFs of ?GetTrustLevel@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1805BA370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::impl::INonDelegatingInspectable,void>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  v3 = *(_QWORD *)(v2 + 24);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 40LL))(*(_QWORD *)(v2 + 24));
  else
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::static_lifetime>::NonDelegatingGetTrustLevel(
             v2,
             a2);
}
