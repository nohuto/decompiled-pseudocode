/*
 * XREFs of ?SetCallback@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIPenMenuSystemTrayManagerCallback@@@Z @ 0x1801FAA40
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x1801FAAB8 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::SetCallback(
        struct IPenMenuSystemTrayManagerCallback **this,
        struct IPenMenuSystemTrayManagerCallback *a2)
{
  _QWORD *v3; // rdi
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = this + 17;
  if ( this[17] != a2 )
  {
    if ( *v3 )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(this + 17);
    *v3 = a2;
    if ( a2 )
    {
      try
      {
        (*(void (__fastcall **)(struct IPenMenuSystemTrayManagerCallback *))(*(_QWORD *)a2 + 8LL))(a2);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x69,
                               (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\penmenusystemtraymanager.cpp",
                               v4);
      }
    }
  }
  return 0LL;
}
