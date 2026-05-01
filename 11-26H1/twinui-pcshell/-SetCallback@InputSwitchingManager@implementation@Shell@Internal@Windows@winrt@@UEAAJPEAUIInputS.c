/*
 * XREFs of ?SetCallback@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIInputSwitchExperienceManagerCallback@@@Z @ 0x180639D10
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::SetCallback(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        struct IInputSwitchExperienceManagerCallback *a2)
{
  _QWORD *v3; // rdi

  v3 = (_QWORD *)((char *)this + 200);
  if ( *((struct IInputSwitchExperienceManagerCallback **)this + 25) != a2 )
  {
    if ( *v3 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 25);
    *v3 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IInputSwitchExperienceManagerCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return 0LL;
}
