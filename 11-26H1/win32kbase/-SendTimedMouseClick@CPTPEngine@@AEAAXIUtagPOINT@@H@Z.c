/*
 * XREFs of ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x1401059A0
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140104E48 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140226DF4 (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x140105728 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x14010581C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x140105884 (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 */

void __fastcall CPTPEngine::SendTimedMouseClick(struct tagPOINT *this, int a2, struct tagPOINT a3, LONG a4)
{
  LONG y; // eax
  int v9; // r8d
  __int128 v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  if ( this[381].x )
  {
    v10 = 0LL;
    LODWORD(v10) = 2;
    v11 = v10;
    v12 = 0LL;
    CBasePTPEngine::SendTelemetryOutput((__int64)this, 11, (__int64)&v11);
    CPTPEngine::CancelMouseUpTimer(this, 1);
  }
  CPTPEngine::SendMouseDownAtPoint(this, a2, a3, 1);
  y = this[348].y;
  v9 = *(LONG *)((char *)&this[410].x + (-(__int64)(a4 != 0) & 0xFFFFFFFFFFFFFF78uLL));
  this[381].x = 1;
  this[381].y = a4;
  this[382].x = y;
  this[348].y = 0;
  this[383] = a3;
  this[382].y = v9;
  CBasePTPEngine::SendTimerOutput((__int64)this, 0, v9);
}
