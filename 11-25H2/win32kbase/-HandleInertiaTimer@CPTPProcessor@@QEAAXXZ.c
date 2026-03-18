/*
 * XREFs of ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x140151954
 * Callers:
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x14014AFE0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1401519B8 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::HandleInertiaTimer(struct tagPOINT *this, __int64 a2)
{
  CInertiaManager *v3; // rcx

  if ( LOBYTE(this[49].x) && (this[48].y & 1) != 0 )
  {
    W32GetUserSessionState(this, a2);
    CInertiaManager::PostInertiaMessage(v3, 0x23Bu, (const struct INERTIA_INFO_INTERNAL *)&this[22], this[46], this[47]);
  }
  LOBYTE(this[49].x) = 0;
}
