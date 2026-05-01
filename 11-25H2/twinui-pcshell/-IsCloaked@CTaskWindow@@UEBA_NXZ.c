/*
 * XREFs of ?IsCloaked@CTaskWindow@@UEBA_NXZ @ 0x18022EB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CTaskWindow::IsCloaked(CTaskWindow *this)
{
  return *((_BYTE *)this + 56);
}
