/*
 * XREFs of ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x140105728
 * Callers:
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401044F8 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x1401059A0 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x140188C34 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B1764 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x14010565C (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1401062D4 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 */

void __fastcall CPTPEngine::SendMouseDownAtPoint(struct tagPOINT *this, int a2, struct tagPOINT a3, char a4)
{
  int v4; // esi
  LONG x; // eax
  CPTPEngine *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  LONG v13; // eax
  __int128 v14; // [rsp+20h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v4 = 0;
  if ( a4 )
    CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)&this[348].y);
  if ( a2 == 2 )
  {
    x = this[384].x;
    v10 = (CPTPEngine *)this;
    if ( (x & 8) == 0 )
    {
      v4 = 4;
      v11 = x | 8;
      v12 = 1LL;
LABEL_11:
      this[384].x = v11;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(v10, v12, a3);
      goto LABEL_5;
    }
  }
  else
  {
    if ( a2 != 8 )
      goto LABEL_5;
    v13 = this[384].x;
    v10 = (CPTPEngine *)this;
    if ( (v13 & 0x10) == 0 )
    {
      v4 = 16;
      v11 = v13 | 0x10;
      v12 = 3LL;
      goto LABEL_11;
    }
  }
  v14 = 0LL;
  LODWORD(v14) = 3;
  v15 = v14;
  v16 = 0LL;
  CBasePTPEngine::SendTelemetryOutput((__int64)v10, 11, (__int64)&v15);
LABEL_5:
  if ( a4 )
  {
    if ( v4 )
      this[348].y = v4;
  }
}
