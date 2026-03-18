/*
 * XREFs of ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x140193994
 * Callers:
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1400C8F58 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB7E8 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400C9D9C (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1402251C0 (-CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x140225494 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 */

struct tagPOINT __fastcall CPTPEngine::DoTPButtonWarpBack(CPTPEngine *this, struct PTPInput *a2, __int64 a3)
{
  bool v3; // zf
  char *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r10
  unsigned __int64 v11; // r11

  v3 = *((_DWORD *)this + 706) == 2;
  *(_QWORD *)a2 = *(_QWORD *)(a3 + 28);
  if ( v3 )
  {
    v7 = (char *)this + 328 * *((unsigned int *)this + 696) + 816;
    v8 = *((_QWORD *)v7 + 8);
    v9 = *((_QWORD *)v7 + 13);
    if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline(this) )
    {
      v8 = *((_QWORD *)v7 + 15);
      v9 = v8;
    }
    if ( *(_QWORD *)a3 - v8 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 806) / 0x3E8
      && !(unsigned int)CPTPEngine::CrossedTPButtonWarpBackThreshold(
                          this,
                          (struct CContactState *)v7,
                          *(struct tagPOINT *)(v7 + 8))
      && (*(_DWORD *)(a3 + 28) != *((_DWORD *)v7 + 14) || *(_DWORD *)(a3 + 32) != *((_DWORD *)v7 + 15)) )
    {
      CBasePTPEngine::SendWarpbackTelemetry(
        this,
        13LL,
        *(_QWORD *)(a3 + 28),
        *((_QWORD *)v7 + 7),
        1000 * (v10 - v9) / v11);
      CBasePTPEngine::SendMouseOutput((__int64)this, 5, *((_QWORD *)v7 + 7));
      *(_QWORD *)a2 = *((_QWORD *)v7 + 7);
    }
  }
  return (struct tagPOINT)a2;
}
