/*
 * XREFs of FreezeThawProcessTimers @ 0x14028BC50
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ @ 0x14018687C (-SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FreezeThawProcessTimers(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  char v5; // r9
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx

  v2 = (_QWORD *)(a1 + 1096);
  v3 = *(_QWORD **)(a1 + 1096);
  v5 = 0;
  if ( v3 == v2 )
    return;
  do
  {
    v6 = *((_DWORD *)v3 - 10);
    v7 = v6 & 0x400;
    if ( a2 )
    {
      if ( (v6 & 0x400) != 0 )
        goto LABEL_13;
      if ( (v6 & 0x800) == 0 )
      {
        v8 = v6 | 0xC00;
LABEL_11:
        v5 = 1;
        goto LABEL_12;
      }
      v8 = v6 & 0xFFFFF3FF | 0x400;
    }
    else
    {
      if ( (v6 & 0x400) == 0 )
        goto LABEL_13;
      if ( (v6 & 0x800) == 0 )
      {
        v8 = v6 & 0xFFFFF3FF | 0x800;
        goto LABEL_11;
      }
      v8 = v6 & 0xFFFFF3FF;
    }
LABEL_12:
    *((_DWORD *)v3 - 10) = v8;
LABEL_13:
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != v2 );
  if ( v5 && !*(_BYTE *)(W32GetUserSessionState(v3, v7) + 18664) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v10, v9) + 62720) )
    {
      *(_BYTE *)(W32GetUserSessionState(v12, v11) + 18665) = 1;
    }
    else
    {
      v13 = CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent(v12, v11);
      *(_BYTE *)(W32GetUserSessionState(v15, v14) + 18664) = v13;
      if ( *(_BYTE *)(W32GetUserSessionState(v17, v16) + 18664) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1983);
    }
  }
}
