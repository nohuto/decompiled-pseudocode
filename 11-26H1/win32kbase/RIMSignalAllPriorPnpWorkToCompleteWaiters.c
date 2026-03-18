/*
 * XREFs of RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x14005DFAC
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

int __fastcall RIMSignalAllPriorPnpWorkToCompleteWaiters(__int64 a1, __int64 a2, int a3)
{
  bool v4; // di
  _UNKNOWN **v5; // rax
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  LONG v10; // r8d

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = &WPP_RECORDER_INITIALIZED;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v4;
    LODWORD(v5) = WPP_RECORDER_AND_TRACE_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v9,
                    v8,
                    *(_QWORD *)(UserSessionState + 19368),
                    4,
                    1,
                    45,
                    (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
                    a1);
  }
  v10 = *(_DWORD *)(a1 + 1072);
  if ( v10 )
  {
    LODWORD(v5) = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 1064), 0, v10, 0);
    *(_DWORD *)(a1 + 1072) = 0;
  }
  return (int)v5;
}
