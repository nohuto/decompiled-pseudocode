/*
 * XREFs of ??0CInputManager@@QEAA@XZ @ 0x14023D8B0
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x14014CD10 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 * Callees:
 *     <none>
 */

CInputManager *__fastcall CInputManager::CInputManager(CInputManager *this)
{
  *(_QWORD *)this = &CIgnoreInputQueue::`vftable';
  *((_QWORD *)this + 1) = &CDiscardInputQueue::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
