/*
 * XREFs of ??0HANDLELOCK@@QEAA@XZ @ 0x1400C8424
 * Callers:
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 * Callees:
 *     <none>
 */

HANDLELOCK *__fastcall HANDLELOCK::HANDLELOCK(HANDLELOCK *this)
{
  __int64 v2; // rdx
  HANDLELOCK *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  result = this;
  *((_QWORD *)this + 2) = v2;
  return result;
}
