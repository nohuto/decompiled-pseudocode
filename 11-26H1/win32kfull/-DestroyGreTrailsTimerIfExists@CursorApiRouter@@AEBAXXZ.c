/*
 * XREFs of ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x140287E1C
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x140287D7C (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     _lambda_49ba710cdad7805a04ef9893981131b8_::operator() @ 0x140287E9C (_lambda_49ba710cdad7805a04ef9893981131b8_--operator().c)
 */

void __fastcall CursorApiRouter::DestroyGreTrailsTimerIfExists(CursorApiRouter *this, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = 0;
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)this, a2) )
  {
    lambda_49ba710cdad7805a04ef9893981131b8_::operator()();
  }
  else
  {
    v4 = *((_BYTE *)PtiCurrent(v2) + 1708);
    UserSessionSwitchLeaveCrit(v5);
    EnterCrit(1LL, 0LL);
    lambda_49ba710cdad7805a04ef9893981131b8_::operator()();
    UserSessionSwitchLeaveCrit(v6);
    LOBYTE(v3) = v4 != 1;
    EnterSharedCrit(0LL, v3);
  }
}
