/*
 * XREFs of ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x140188C34
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140104E48 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1401055B8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x140105728 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z @ 0x140106460 (-SendPositionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_POSITION@@UtagPOINT@@@Z.c)
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1401064AC (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 */

void __fastcall CPTPEngine::SendRightDownFromPhysical(CPTPEngine *a1, __int64 a2, __int64 *a3, int a4)
{
  struct tagPOINT v7; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)a1 + 768) |= 0x100u;
  if ( (*((_DWORD *)a1 + 768) & 0x10) == 0 )
  {
    CBasePTPEngine::SendLastActionTelemetry((__int64)a1, a4);
    if ( a3 )
      CBasePTPEngine::SendPositionTelemetry((__int64)a1, 1, *a3);
    v7 = *(struct tagPOINT *)(a2 + 28);
    if ( (*((_DWORD *)a1 + 821) & 0x200) != 0 )
      v7 = **(struct tagPOINT **)&CPTPEngine::DoTPButtonWarpBack(a1, (struct PTPInput *)&v8, a2);
    CPTPEngine::SendMouseDownAtPoint((struct tagPOINT *)a1, 8, v7, 0);
  }
}
