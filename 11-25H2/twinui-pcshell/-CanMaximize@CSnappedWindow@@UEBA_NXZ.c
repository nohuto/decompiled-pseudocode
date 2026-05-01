/*
 * XREFs of ?CanMaximize@CSnappedWindow@@UEBA_NXZ @ 0x180598210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSnappedWindow::CanMaximize(CSnappedWindow *this)
{
  return *((_BYTE *)this + 18);
}
