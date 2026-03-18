/*
 * XREFs of ?SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x1400C93B0
 * Callers:
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400C9380 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CAEBC (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB7E8 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400C94D8 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400C9D9C (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 */

void __fastcall CPTPEngine::SendMouseUpAtPoint(CPTPEngine *this, int a2, struct tagPOINT a3)
{
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-40h]
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-10h]

  if ( a2 != 4 )
  {
    if ( a2 != 16 )
      goto LABEL_5;
    v7 = *((_DWORD *)this + 770);
    if ( (v7 & 0x10) != 0 )
    {
      v5 = v7 & 0xFFFFFFEF;
      v6 = 4LL;
      goto LABEL_4;
    }
LABEL_9:
    v8 = 0LL;
    LODWORD(v8) = 4;
    v9 = v8;
    v10 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v9);
    goto LABEL_5;
  }
  v4 = *((_DWORD *)this + 770);
  if ( (v4 & 8) == 0 )
    goto LABEL_9;
  v5 = v4 & 0xFFFFFFF7;
  v6 = 2LL;
LABEL_4:
  *((_DWORD *)this + 770) = v5;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(this, v6, a3);
LABEL_5:
  *((_DWORD *)this + 706) = 1;
}
