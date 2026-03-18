/*
 * XREFs of ??0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ @ 0x140219EE8
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

EnterLeaveSharedCritIfNotHeld *__fastcall EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld(
        EnterLeaveSharedCritIfNotHeld *this)
{
  int v2; // eax

  v2 = GET_USERCRIT_DISPOSITION();
  *(_BYTE *)this = v2 == 0;
  if ( !v2 )
    EnterSharedCrit(0LL, 1LL);
  return this;
}
