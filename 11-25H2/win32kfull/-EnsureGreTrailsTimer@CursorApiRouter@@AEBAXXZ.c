/*
 * XREFs of ?EnsureGreTrailsTimer@CursorApiRouter@@AEBAXXZ @ 0x1402DB7F4
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x14025CB6C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x1402DC7BC (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

void __fastcall CursorApiRouter::EnsureGreTrailsTimer(CursorApiRouter *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  if ( !*(_QWORD *)(W32GetUserSessionState(this, a2) + 16304) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    _PostTransformableMessageExtended(
      *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 68480) + 504LL) + 24LL),
      0x401u,
      0LL,
      0LL,
      0LL,
      1);
  }
}
