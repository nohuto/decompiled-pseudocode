/*
 * XREFs of ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x180164A20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x180164A7C (-IsDesktopInputContext@@YA_NXZ.c)
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180164BE0 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler::OnMessage(
        CMultitaskingViewHotKeyHandler *this,
        __int64 a2,
        unsigned int a3)
{
  if ( (a3 == 40 || a3 == 41 || a3 == 42 || a3 == 43 || a3 - 44 <= 1) && IsDesktopInputContext() )
    CMultitaskingViewHotKeyHandler::_OnAltTab((char *)this - 8, a3);
  return 0LL;
}
