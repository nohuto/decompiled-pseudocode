/*
 * XREFs of rimAddToObTrackList @ 0x1401D7108
 * Callers:
 *     RawInputManagerDeviceObjectCreate @ 0x1400621F0 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerObjectCreate @ 0x14013785C (RawInputManagerObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x14019DDFC (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 **v9; // rdx
  __int64 **v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 == 1 )
  {
    v7 = (__int64 *)(a1 + 16);
    v8 = W32GetUserSessionState(v5, v4) + 120;
  }
  else
  {
    v11 = 2LL;
    if ( v6 != 2 )
    {
      if ( v6 != 3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 296);
      v7 = (__int64 *)(a1 + 16);
      v8 = W32GetUserSessionState(v11, v4) + 152;
      v9 = *(__int64 ***)(v8 + 8);
      if ( *v9 == (__int64 *)v8 )
      {
        *v7 = v8;
        *(_QWORD *)(a1 + 24) = v9;
        *v9 = v7;
        goto LABEL_12;
      }
LABEL_10:
      __fastfail(3u);
    }
    v7 = (__int64 *)(a1 + 16);
    v8 = W32GetUserSessionState(2LL, v4) + 136;
  }
  v10 = *(__int64 ***)(v8 + 8);
  if ( *v10 != (__int64 *)v8 )
    goto LABEL_10;
  *v7 = v8;
  v7[1] = (__int64)v10;
  *v10 = v7;
LABEL_12:
  *(_QWORD *)(v8 + 8) = v7;
  *(_BYTE *)(a1 + 8) = 1;
  v12 = W32GetUserSessionState(v10, v9);
  RIMUnlockExclusive(v12 + 56);
}
