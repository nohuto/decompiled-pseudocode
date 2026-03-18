/*
 * XREFs of ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1400C8F58
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB7E8 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z @ 0x1400C8F14 (-SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400C9490 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400C94D8 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400C9D9C (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x140193994 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 */

int __fastcall CPTPEngine::SendLeftDownFromPhysical(CPTPEngine *a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  int result; // eax
  __int64 v8; // r8
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  char v13; // [rsp+70h] [rbp+8h] BYREF

  result = *((_DWORD *)a1 + 770) | 0x80;
  *((_DWORD *)a1 + 770) = result;
  if ( (result & 8) == 0 )
  {
    CBasePTPEngine::SendLastActionTelemetry(a1, a4);
    if ( a3 )
      CBasePTPEngine::SendPositionTelemetry((__int64)a1, 0, *a3);
    v8 = *(_QWORD *)(a2 + 28);
    if ( (*((_DWORD *)a1 + 824) & 0x200) != 0 )
      v8 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack(a1, (struct PTPInput *)&v13);
    v9 = *((_DWORD *)a1 + 770);
    if ( (v9 & 8) != 0 )
    {
      v10 = 0LL;
      LODWORD(v10) = 3;
      v11 = v10;
      v12 = 0LL;
      return CBasePTPEngine::SendTelemetryOutput(a1, 11LL, &v11);
    }
    else
    {
      *((_DWORD *)a1 + 770) = v9 | 8;
      return CBasePTPEngine::SendMouseOutput(a1, 1LL, v8);
    }
  }
  return result;
}
