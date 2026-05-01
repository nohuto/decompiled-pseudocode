/*
 * XREFs of ?Initialize@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UIVirtualDesktopManagerInternal@@@6@AEBU?$com_ptr@UIApplicationViewCollection@@@6@@Z @ 0x180648654
 * Callers:
 *     ?Initialize@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180285020 (-Initialize@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::Initialize(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rbx

  v5 = *a2;
  if ( *a1 != *a2 )
  {
    if ( *a1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return winrt::com_ptr<IUnknown>::copy_ref(a1 + 3, *a3);
}
