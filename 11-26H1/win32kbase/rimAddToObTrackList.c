/*
 * XREFs of rimAddToObTrackList @ 0x140060364
 * Callers:
 *     RawInputManagerObjectCreate @ 0x14005DD34 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x14006003C (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1401BC538 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
  int v9; // ecx
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 **v12; // rdx
  int v13; // r8d
  __int64 **v14; // rcx
  __int64 v15; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  v8 = *(_DWORD *)(a1 + 4);
  if ( v8 == 1 )
  {
    v10 = (__int64 *)(a1 + 16);
    v11 = W32GetUserSessionState(v6, v5, v7) + 120;
    goto LABEL_4;
  }
  v9 = 2;
  if ( v8 == 2 )
  {
    v10 = (__int64 *)(a1 + 16);
    v11 = W32GetUserSessionState(2, v5, v7) + 136;
LABEL_4:
    v14 = *(__int64 ***)(v11 + 8);
    if ( *v14 != (__int64 *)v11 )
      goto LABEL_5;
    *v10 = v11;
    v10[1] = (__int64)v14;
    *v14 = v10;
    goto LABEL_8;
  }
  if ( v8 != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 296LL);
  v10 = (__int64 *)(a1 + 16);
  v11 = W32GetUserSessionState(v9, v5, v7) + 152;
  v12 = *(__int64 ***)(v11 + 8);
  if ( *v12 != (__int64 *)v11 )
LABEL_5:
    __fastfail(3u);
  *v10 = v11;
  *(_QWORD *)(a1 + 24) = v12;
  *v12 = v10;
LABEL_8:
  *(_QWORD *)(v11 + 8) = v10;
  *(_BYTE *)(a1 + 8) = 1;
  v15 = W32GetUserSessionState((_DWORD)v14, (_DWORD)v12, v13);
  RIMUnlockExclusive(v15 + 56);
}
