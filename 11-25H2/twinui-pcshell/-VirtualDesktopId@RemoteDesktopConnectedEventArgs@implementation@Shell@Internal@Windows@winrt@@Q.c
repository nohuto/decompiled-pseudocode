/*
 * XREFs of ?VirtualDesktopId@RemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x180649E18
 * Callers:
 *     ?get_VirtualDesktopId@?$produce@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteDesktopConnectedEventArgs@3456@@impl@winrt@@UEAAHPEAUguid@3@@Z @ 0x180649E30 (-get_VirtualDesktopId@-$produce@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@W.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs::VirtualDesktopId(
        __int64 a1,
        _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 24);
  return result;
}
