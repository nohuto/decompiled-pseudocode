/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401D6C20
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     HMDestroyUnlockedObject @ 0x1401DF3D0 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = *(_QWORD *)(UserSessionState + 19864);
  v6 = (unsigned int)(((__int64)a1 - *(_QWORD *)(UserSessionState + 19920)) >> 5);
  v7 = 5 * v6;
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 40 * v6) + 8LL) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTellMeIf", 0x20000, 1011);
    *(_DWORD *)(*(_QWORD *)(v5 + 8 * v7) + 8LL) = 0;
  }
  HMDestroyUnlockedObject(a1);
}
