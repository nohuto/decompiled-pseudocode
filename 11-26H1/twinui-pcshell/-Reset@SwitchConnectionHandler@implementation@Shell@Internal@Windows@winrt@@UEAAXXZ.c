/*
 * XREFs of ?Reset@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18066E930
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?Reset@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18066E8C8 (-Reset@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::Reset(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)this + 19, &v2);
  if ( v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v2);
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::Reset((winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *)(*((_QWORD *)this + 11) + 8LL));
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::Reset((winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *)(*((_QWORD *)this + 13) + 8LL));
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::Reset((winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *)(*((_QWORD *)this + 15) + 8LL));
}
