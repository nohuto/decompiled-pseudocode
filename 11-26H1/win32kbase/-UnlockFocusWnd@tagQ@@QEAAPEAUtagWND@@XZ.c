/*
 * XREFs of ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x1400B94B0
 * Callers:
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 */

struct tagWND *__fastcall tagQ::UnlockFocusWnd(tagQ *this)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)this + 66); i; i = *(_QWORD *)(i + 1688) )
    *(_QWORD *)(*(_QWORD *)(i + 480) + 32LL) = 0LL;
  return (struct tagWND *)HMAssignmentUnlock((__int64 *)this + 15);
}
