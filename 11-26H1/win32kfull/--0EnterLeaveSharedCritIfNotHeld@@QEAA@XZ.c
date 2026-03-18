/*
 * XREFs of ??0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ @ 0x140253418
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

EnterLeaveSharedCritIfNotHeld *__fastcall EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld(
        EnterLeaveSharedCritIfNotHeld *this)
{
  if ( (unsigned int)GET_USERCRIT_DISPOSITION((__int64)this) )
  {
    *(_BYTE *)this = 0;
  }
  else
  {
    *(_BYTE *)this = 1;
    EnterSharedCrit(0LL, 1LL);
  }
  return this;
}
