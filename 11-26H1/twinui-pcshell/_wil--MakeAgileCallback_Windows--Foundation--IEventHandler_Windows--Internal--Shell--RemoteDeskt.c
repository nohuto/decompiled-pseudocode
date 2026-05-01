/*
 * XREFs of _wil::MakeAgileCallback_Windows::Foundation::IEventHandler_Windows::Internal::Shell::RemoteDesktopConnectedEventArgs____CVirtualDesktopManager___long_(__cdecl_CVirtualDesktopManager::_)(IInspectable___Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs__)__::_1_::dtor$0 @ 0x1806F4009
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D5DA8 (--1-$ComPtr@U-$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Founda.c)
 */

_QWORD *__fastcall wil::MakeAgileCallback_Windows::Foundation::IEventHandler_Windows::Internal::Shell::RemoteDesktopConnectedEventArgs____CVirtualDesktopManager___long____cdecl_CVirtualDesktopManager::___IInspectable___Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs_____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>>::~ComPtr<Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>>(*(_QWORD **)(a2 + 112));
  }
  return result;
}
