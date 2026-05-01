/*
 * XREFs of ?WindowTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x1801D31D4
 * Callers:
 *     ?WindowTabsChanged2@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1801D31A0 (-WindowTabsChanged2@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWind.c)
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801D3244 (-remove@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWind.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabsChanged(
        RTL_SRWLOCK *this,
        const struct winrt::event_token *a2)
{
  RTL_SRWLOCK *v4; // rbx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this + 100;
  AcquireSRWLockExclusive(this + 100);
  try
  {
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::remove(
      &this[101],
      *(_QWORD *)a2);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xBC,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      v5);
  }
}
