/*
 * XREFs of ?GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ @ 0x1801A9CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CWindowNode::GetHwnd(CWindowNode *this)
{
  return (HWND)*((_QWORD *)this + 99);
}
