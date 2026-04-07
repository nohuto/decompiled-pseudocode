/*
 * XREFs of ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z @ 0x1800787D8
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x1800BA5A4 (--1CMagnifierControl@@EEAA@XZ.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800BA8EC (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     CWindowList::ForEachSoftwareCursorListener__CWindowList::UnregisterForSoftwareCursorChangeNotification_::_2_::_lambda_1___ @ 0x18008C068 (CWindowList--ForEachSoftwareCursorListener__CWindowList--UnregisterForSoftwareCursorChangeNotifi.c)
 */

void __fastcall CWindowList::UnregisterForSoftwareCursorChangeNotification(
        CWindowList *this,
        struct ISoftwareCursorChangeListener *a2)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  struct ISoftwareCursorChangeListener *v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  v2[1] = this;
  v2[0] = &v3;
  CWindowList::ForEachSoftwareCursorListener__CWindowList::UnregisterForSoftwareCursorChangeNotification_::_2_::_lambda_1___(
    this,
    v2);
}
