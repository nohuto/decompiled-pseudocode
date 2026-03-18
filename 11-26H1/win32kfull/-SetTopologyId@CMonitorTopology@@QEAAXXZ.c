/*
 * XREFs of ?SetTopologyId@CMonitorTopology@@QEAAXXZ @ 0x140254360
 * Callers:
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x140292D08 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMonitorTopology::SetTopologyId(CMonitorTopology *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  bool v6; // zf
  int v7; // ebx

  if ( *((_DWORD *)this + 3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 202LL);
  v4 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 19904);
  v5 = *(_DWORD *)(v4 + 7500);
  v6 = v5 == -1;
  v7 = v5 + 1;
  *((_DWORD *)this + 3) = v7;
  if ( v6 )
  {
    v7 = 1;
    *((_DWORD *)this + 3) = 1;
  }
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19904) + 7500LL) = v7;
}
