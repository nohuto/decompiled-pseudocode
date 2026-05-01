/*
 * XREFs of ?CanMinimize@CSnappedWindow@@UEBA_NXZ @ 0x180598220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSnappedWindow::CanMinimize(CSnappedWindow *this)
{
  return *((_BYTE *)this + 17);
}
