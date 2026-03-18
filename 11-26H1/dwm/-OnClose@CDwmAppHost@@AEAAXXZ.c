/*
 * XREFs of ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x140004290
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003500 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140003804 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     IsRegisterHotKeyPresent @ 0x140005ADC (IsRegisterHotKeyPresent.c)
 */

void __fastcall CDwmAppHost::OnClose(CDwmAppHost *this)
{
  if ( (unsigned __int8)IsRegisterHotKeyPresent(this) )
    UnregisterHotKey(hWnd, 0);
  DestroyWindow(hWnd);
  hWnd = 0LL;
}
