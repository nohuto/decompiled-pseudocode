/*
 * XREFs of ?SignalStartNowEvent@CGlobalSurfaceManager@@UEBA_NXZ @ 0x1801D8590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalSurfaceManager::SignalStartNowEvent(HANDLE *this)
{
  return SetEvent(this[62]);
}
