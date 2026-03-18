/*
 * XREFs of ?TmpGetLock@CBaseInput@@QEAAAEAVW32_PUSH_LOCK@@XZ @ 0x14019C860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct W32_PUSH_LOCK *__fastcall CBaseInput::TmpGetLock(CBaseInput *this)
{
  return (struct W32_PUSH_LOCK *)*((_QWORD *)this + 154);
}
