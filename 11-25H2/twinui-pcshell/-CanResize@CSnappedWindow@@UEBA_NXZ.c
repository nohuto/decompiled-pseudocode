/*
 * XREFs of ?CanResize@CSnappedWindow@@UEBA_NXZ @ 0x180598230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSnappedWindow::CanResize(CSnappedWindow *this)
{
  return *((_BYTE *)this + 16);
}
