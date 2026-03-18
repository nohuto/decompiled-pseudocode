/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1401FDF14
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005A710 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  __int64 *v11; // rdx
  _QWORD *v12; // r15
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rbx
  _QWORD *result; // rax
  _QWORD *v23; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v24; // [rsp+28h] [rbp-8h]

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  v8 = W32GetUserSessionState(v6, v5, v7);
  v11 = (__int64 *)&v23;
  v12 = (_QWORD *)(v8 + 136);
  v13 = *(_QWORD **)(v8 + 136);
  v24 = (__int64 *)&v23;
  v23 = &v23;
  if ( v13 != (_QWORD *)(v8 + 136) )
  {
    do
    {
      v9 = (_DWORD)v13 - 16;
      v14 = (__int64)(v13 + 53);
      if ( v13 == (_QWORD *)16 )
        v14 = 368LL;
      if ( *(_QWORD *)v14 && *(_QWORD *)(*(_QWORD *)v14 + 88LL) == a1 )
      {
        v15 = (__int64)(v13 + 30);
        v10 = 184;
        if ( v13 == (_QWORD *)16 )
          v15 = 184LL;
        if ( (*(_DWORD *)v15 & 4) == 0 )
        {
          v16 = (__int64)(v13 + 22);
          if ( v13 == (_QWORD *)16 )
            v16 = 120LL;
          if ( *(_QWORD *)v16 != v16 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 776);
            v11 = v24;
          }
          if ( (_QWORD **)*v11 != &v23 )
LABEL_23:
            __fastfail(3u);
          *(_QWORD *)(v16 + 8) = v11;
          *(_QWORD *)v16 = &v23;
          *v11 = v16;
          v24 = (__int64 *)v16;
        }
        *(_QWORD *)(*(_QWORD *)v14 + 88LL) = 0LL;
        v11 = v24;
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v12 );
  }
  v17 = W32GetUserSessionState(v9, (_DWORD)v11, v10);
  RIMUnlockExclusive(v17 + 56);
  v18 = v23;
  while ( 1 )
  {
    result = &v23;
    if ( v18 == &v23 )
      break;
    v19 = v18;
    v18 = (_QWORD *)*v18;
    if ( (_QWORD *)v18[1] != v19 )
      goto LABEL_23;
    v20 = (_QWORD *)v19[1];
    if ( (_QWORD *)*v20 != v19 )
      goto LABEL_23;
    *v20 = v18;
    v18[1] = v20;
    v19[1] = v19;
    *v19 = v19;
    v21 = *(_QWORD *)(*(v19 - 11) + 392LL);
    RIMLockExclusive(v21 + 104);
    RIMIDERemoveInjectionDevice(*(v19 - 11));
    RIMUnlockExclusive(v21 + 104);
  }
  *(_QWORD *)(a1 + 808) &= ~0x200000uLL;
  return result;
}
