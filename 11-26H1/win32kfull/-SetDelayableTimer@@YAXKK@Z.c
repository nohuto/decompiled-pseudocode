/*
 * XREFs of ?SetDelayableTimer@@YAXKK@Z @ 0x14009AE70
 * Callers:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     xxxTimersProc_Old @ 0x14009A98C (xxxTimersProc_Old.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDelayableTimer(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax
  ULONG v4; // edi
  __int64 v5; // rax

  v2 = -10000LL * (int)a1;
  if ( (_DWORD)a1 == (_DWORD)a2 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    KeSetTimer(*(PKTIMER *)(UserSessionState + 57568), (LARGE_INTEGER)v2, 0LL);
  }
  else
  {
    v4 = a2 - a1;
    v5 = W32GetUserSessionState(a1, a2);
    KeSetCoalescableTimer(*(PKTIMER *)(v5 + 57568), (LARGE_INTEGER)v2, 0, v4, 0LL);
  }
}
