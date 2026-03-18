/*
 * XREFs of ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x140287DE4
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x140287D7C (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 */

char __fastcall CursorApiRouter::IsGreTrailsTimerNeeded(CursorApiRouter *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl

  v4 = 0;
  if ( !IsRemoteConnection((__int64)this, a2) )
    return *(_DWORD *)(W32GetUserSessionState(v3, v2) + 16288) != 0;
  return v4;
}
