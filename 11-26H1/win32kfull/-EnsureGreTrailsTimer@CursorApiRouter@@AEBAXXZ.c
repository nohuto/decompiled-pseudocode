/*
 * XREFs of ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x140287F08
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x140287D7C (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 */

void __fastcall CursorApiRouter::EnsureGreTrailsTimer(CursorApiRouter *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  if ( !*(_QWORD *)(W32GetUserSessionState(this, a2) + 16296) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    PostMessage(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 68472) + 496LL) + 24LL), 1025, 0, 0);
  }
}
