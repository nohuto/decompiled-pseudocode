/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1401D6A24
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMIDERemoveInjectionDevice @ 0x1400339A4 (RIMIDERemoveInjectionDevice.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 *v8; // rdx
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rdx
  __int64 v20; // rbx
  _QWORD *result; // rax
  _QWORD *v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v23; // [rsp+28h] [rbp-8h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v6 = W32GetUserSessionState(v5, v4);
  v8 = (__int64 *)&v22;
  v9 = (_QWORD *)(v6 + 136);
  v10 = *(_QWORD **)(v6 + 136);
  v23 = (__int64 *)&v22;
  v22 = &v22;
  if ( v10 != (_QWORD *)(v6 + 136) )
  {
    do
    {
      v7 = v10 - 2;
      v11 = (__int64)(v10 + 53);
      if ( v10 == (_QWORD *)16 )
        v11 = 368LL;
      if ( *(_QWORD *)v11 && *(_QWORD *)(*(_QWORD *)v11 + 88LL) == a1 )
      {
        v12 = (__int64)(v10 + 30);
        if ( v10 == (_QWORD *)16 )
          v12 = 184LL;
        if ( (*(_DWORD *)v12 & 4) == 0 )
        {
          v13 = (__int64)(v10 + 22);
          if ( v10 == (_QWORD *)16 )
            v13 = 120LL;
          if ( *(_QWORD *)v13 != v13 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 776);
            v8 = v23;
          }
          if ( (_QWORD **)*v8 != &v22 )
LABEL_23:
            __fastfail(3u);
          *(_QWORD *)(v13 + 8) = v8;
          *(_QWORD *)v13 = &v22;
          *v8 = v13;
          v23 = (__int64 *)v13;
        }
        *(_QWORD *)(*(_QWORD *)v11 + 88LL) = 0LL;
        v8 = v23;
      }
      v10 = (_QWORD *)*v10;
    }
    while ( v10 != v9 );
  }
  v14 = W32GetUserSessionState(v7, v8);
  RIMUnlockExclusive(v14 + 56);
  v15 = v22;
  while ( 1 )
  {
    result = &v22;
    if ( v15 == &v22 )
      break;
    v16 = *v15;
    v17 = v15;
    v18 = v15;
    v15 = (_QWORD *)v16;
    if ( *(_QWORD **)(v16 + 8) != v17 )
      goto LABEL_23;
    v19 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v19 != v17 )
      goto LABEL_23;
    *v19 = v16;
    *(_QWORD *)(v16 + 8) = v19;
    v17[1] = v17;
    *v17 = v17;
    v20 = *(_QWORD *)(*(v18 - 11) + 392LL);
    RIMLockExclusive(v20 + 104);
    RIMIDERemoveInjectionDevice(*(v18 - 11));
    RIMUnlockExclusive(v20 + 104);
  }
  *(_QWORD *)(a1 + 808) &= ~0x200000uLL;
  return result;
}
