/*
 * XREFs of ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1401064AC
 * Callers:
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x14010637C (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x140188C34 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1401062D4 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x140226D90 (-CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1402272B8 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 */

struct tagPOINT __fastcall CPTPEngine::DoTPButtonWarpBack(CPTPEngine *this, struct PTPInput *a2, __int64 a3)
{
  bool v3; // zf
  unsigned __int64 v7; // r15
  char *v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // r11

  v3 = *((_DWORD *)this + 706) == 2;
  *(_QWORD *)a2 = *(_QWORD *)(a3 + 28);
  if ( v3 )
  {
    v7 = *((_QWORD *)this + 12);
    v8 = (char *)this + 328 * *((unsigned int *)this + 696) + 816;
    v9 = *(_QWORD *)a3 - *((_QWORD *)v8 + 15);
    if ( v9 < v7 * *((unsigned int *)this + 803) / 0x3E8
      && !(unsigned int)CPTPEngine::CrossedTPButtonWarpBackThreshold(
                          this,
                          (struct CContactState *)v8,
                          *(struct tagPOINT *)(v8 + 8))
      && (*(_DWORD *)(a3 + 28) != *((_DWORD *)v8 + 14) || *(_DWORD *)(a3 + 32) != *((_DWORD *)v8 + 15)) )
    {
      CBasePTPEngine::SendWarpbackTelemetry(this, 13LL, v10, *((_QWORD *)v8 + 7), 1000 * v9 / v7);
      CBasePTPEngine::SendMouseOutput((__int64)this, 5, *((_QWORD *)v8 + 7));
      *(_QWORD *)a2 = *((_QWORD *)v8 + 7);
    }
  }
  return (struct tagPOINT)a2;
}
