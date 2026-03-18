/*
 * XREFs of ?rpwnd@CHMRefHwndByHandle@@QEBAPEAUtagWND@@XZ @ 0x1400DDB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CHMRefHwndByHandle::rpwnd(CHMRefHwndByHandle *this)
{
  return (struct tagWND *)*((_QWORD *)this + 1);
}
