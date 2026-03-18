/*
 * XREFs of ?GetWindow@CInputQueue@@UEBAJPEAPEAUHWND__@@@Z @ 0x14010AAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputQueue::GetWindow(CInputQueue *this, HWND *a2)
{
  *a2 = (HWND)*((_QWORD *)this + 2);
  return 0LL;
}
