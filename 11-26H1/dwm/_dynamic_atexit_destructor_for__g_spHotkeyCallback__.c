/*
 * XREFs of _dynamic_atexit_destructor_for__g_spHotkeyCallback__ @ 0x14000F8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000CAD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwne.c)
 */

__int64 __fastcall dynamic_atexit_destructor_for__g_spHotkeyCallback__(__int64 a1, volatile int *a2)
{
  __int64 result; // rax

  if ( g_spHotkeyCallback )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release(
             g_spHotkeyCallback,
             a2);
  return result;
}
