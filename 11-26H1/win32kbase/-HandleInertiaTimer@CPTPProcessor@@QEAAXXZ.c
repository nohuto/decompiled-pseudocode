/*
 * XREFs of ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x14016DBC4
 * Callers:
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140186F40 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::HandleInertiaTimer(CPTPProcessor *this, int a2, int a3)
{
  CInertiaManager *v4; // rcx

  if ( *((_BYTE *)this + 392) && (*((_DWORD *)this + 97) & 1) != 0 )
  {
    W32GetUserSessionState((_DWORD)this, a2, a3);
    CInertiaManager::PostInertiaMessage(
      v4,
      0x23Bu,
      (CPTPProcessor *)((char *)this + 176),
      *(struct tagPOINT *)((char *)this + 368),
      *(struct tagPOINT *)((char *)this + 376));
  }
  *((_BYTE *)this + 392) = 0;
}
