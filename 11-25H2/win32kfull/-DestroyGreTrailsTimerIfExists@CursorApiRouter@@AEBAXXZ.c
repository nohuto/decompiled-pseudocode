/*
 * XREFs of ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x1402DB688
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x14025CB6C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x1402DC7BC (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??0LeaveEnterCritShared@@QEAA@XZ @ 0x1402927A0 (--0LeaveEnterCritShared@@QEAA@XZ.c)
 *     _lambda_49ba710cdad7805a04ef9893981131b8_::operator() @ 0x1402DB5EC (_lambda_49ba710cdad7805a04ef9893981131b8_--operator().c)
 */

void __fastcall CursorApiRouter::DestroyGreTrailsTimerIfExists(CursorApiRouter *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CursorApiRouter *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    lambda_49ba710cdad7805a04ef9893981131b8_::operator()(v2, v1);
  }
  else
  {
    LeaveEnterCritShared::LeaveEnterCritShared((LeaveEnterCritShared *)&v6, v1);
    EnterCrit(1LL, 0LL);
    lambda_49ba710cdad7805a04ef9893981131b8_::operator()(v4, v3);
    UserSessionSwitchLeaveCrit(v5);
    EnterSharedCrit(0LL, (unsigned int)v6);
  }
}
