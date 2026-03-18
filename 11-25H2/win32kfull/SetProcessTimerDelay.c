/*
 * XREFs of SetProcessTimerDelay @ 0x14028BF70
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ @ 0x14018687C (-SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetProcessTimerDelay(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v7; // rdx
  __int64 **v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 ***v20; // rdi
  __int64 *v21; // rax

  if ( a2 > 0x1B7740 )
    return 3221225712LL;
  if ( a3 > 0x927C0 )
    return 3221225713LL;
  v8 = *(__int64 ***)(W32GetUserGdiSessionState(a1) + 40);
  if ( *(__int64 ***)a1 == v8 )
    return 3221225659LL;
  v9 = a2 - *(_DWORD *)(a1 + 1020);
  v10 = *(_DWORD *)(a1 + 1028);
  *(_DWORD *)(a1 + 1024) = a3;
  *(_DWORD *)(a1 + 1028) = v9;
  if ( v10 )
  {
    if ( v9 )
      goto LABEL_11;
    v20 = (__int64 ***)(a1 + 1040);
    v8 = *v20;
    if ( (*v20)[1] == (__int64 *)v20 )
    {
      v21 = (__int64 *)v20[1];
      if ( (__int64 ***)*v21 == v20 )
      {
        *v21 = (__int64)v8;
        v8[1] = v21;
        goto LABEL_11;
      }
    }
    goto LABEL_19;
  }
  if ( v9 )
  {
    v11 = (__int64 *)(a1 + 1040);
    v12 = W32GetUserSessionState(v8, v7) + 57560;
    v8 = *(__int64 ***)(v12 + 8);
    if ( *v8 == (__int64 *)v12 )
    {
      *v11 = v12;
      v11[1] = (__int64)v8;
      *v8 = v11;
      *(_QWORD *)(v12 + 8) = v11;
      goto LABEL_11;
    }
LABEL_19:
    __fastfail(3u);
  }
LABEL_11:
  if ( !*(_BYTE *)(W32GetUserSessionState(v8, v7) + 62720) )
  {
    v15 = CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent(v14, v13);
    *(_BYTE *)(W32GetUserSessionState(v17, v16) + 18664) = v15;
    if ( *(_BYTE *)(W32GetUserSessionState(v19, v18) + 18664) != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2065);
  }
  return 0LL;
}
