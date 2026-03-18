/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401B31C0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     HMDestroyUnlockedObject @ 0x1401A5770 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(UserSessionState + 19832);
  v5 = (unsigned int)(((__int64)a1 - *(_QWORD *)(UserSessionState + 19888)) >> 5);
  v6 = 5 * v5;
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 40 * v5) + 8LL) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 976);
    *(_DWORD *)(*(_QWORD *)(v4 + 8 * v6) + 8LL) = 0;
  }
  HMDestroyUnlockedObject(a1, v5);
}
