/*
 * XREFs of ?HasRetryDeviceBitmaps@CGlobalSurfaceManager@@UEBA_NXZ @ 0x18019C140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalSurfaceManager::HasRetryDeviceBitmaps(CGlobalSurfaceManager *this)
{
  return *((_QWORD *)this + 48) != *((_QWORD *)this + 49);
}
