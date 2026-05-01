/*
 * XREFs of ?CanMaximize@CSnappedWindow@@UEBA_NXZ @ 0x1805BC470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSnappedWindow::CanMaximize(CSnappedWindow *this)
{
  return *((_BYTE *)this + 18);
}
