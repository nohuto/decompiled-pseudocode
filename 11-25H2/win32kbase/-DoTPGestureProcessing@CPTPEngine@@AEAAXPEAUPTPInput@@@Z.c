/*
 * XREFs of ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA388
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400C9F70 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400C92CC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400C9380 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400C9490 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400C94D8 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x140105D34 (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140129474 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z @ 0x1401404B4 (-FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x140148E58 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1401940E0 (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140194444 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CPTPEngine::DoTPGestureProcessing(struct tagPOINT *this, struct PTPInput *a2)
{
  LONG x; // eax
  const struct CContactState *v3; // r13
  char v6; // si
  int v7; // r12d
  _DWORD *v8; // r14
  __int64 v9; // r15
  bool v10; // dl
  LONG v11; // ecx
  int v12; // eax
  LONG v13; // ecx
  LONG v14; // eax
  BOOL v15; // r15d
  unsigned int v16; // esi
  unsigned int v17; // r12d
  _DWORD *v18; // r15
  __int64 v19; // r14
  LONG v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // r14d
  CPTPEngine *v24; // rcx
  struct CContactState *v25; // r12
  __int64 v26; // rdx
  int v27; // edx
  __int128 v28; // [rsp+20h] [rbp-40h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  int v31; // [rsp+90h] [rbp+30h] BYREF

  x = this[353].x;
  v3 = 0LL;
  if ( x == 3 || (v6 = 0, x == 6) )
    v6 = 1;
  if ( x != 1 || this[351].x < 2u || this[352].y )
  {
    if ( !v6 )
      return;
  }
  else
  {
    v7 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v8 = (_DWORD *)((char *)a2 + 68);
      while ( 1 )
      {
        v9 = 41LL * (unsigned int)(*(v8 - 2) % this[2].x);
        if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline() )
        {
          v11 = this[385].x;
          v12 = v11;
          if ( (v11 & 0x800000) == 0 && (v11 & 0x200000) != 0 )
          {
            this[373] = *(struct tagPOINT *)a2;
            v12 = v11 | 0x800000;
            this[385].x = v11 | 0x800000;
          }
          v10 = (v12 & 0x200000) == 0
             || *(_QWORD *)a2 - *(_QWORD *)&this[373] >= *(_QWORD *)&this[12]
                                                       * (unsigned __int64)(unsigned int)this[407].y
                                                       / 0x3E8;
        }
        else
        {
          v10 = *(_QWORD *)&this[361] < *(_QWORD *)&this[v9 + 110];
        }
        v13 = this[v9 + 102].x;
        if ( (v13 & 1) != 0
          && (*v8 & 0x40000) == 0
          && (v13 & 0x100) == 0
          && (v13 & 0x100000) != 0
          && v10
          && (*((_DWORD *)a2 + 10) || (v13 & 4) != 0 || (v13 & 0x10) != 0) )
        {
          break;
        }
        v8 += 24;
        if ( (unsigned int)++v7 >= *((_DWORD *)a2 + 12) )
          goto LABEL_27;
      }
      v3 = (const struct CContactState *)&this[v9 + 102];
    }
    else
    {
LABEL_27:
      if ( !v6 )
        return;
    }
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, a2, v3);
  }
  v14 = this[385].x;
  v15 = this[353].x == 6;
  v31 = 0;
  if ( (v14 & 0x800000) != 0 )
    this[385].x = v14 & 0xFF5FFFFF;
  if ( v6 )
    goto LABEL_60;
  v16 = 0;
  v17 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_47;
  v18 = (_DWORD *)((char *)a2 + 68);
  do
  {
    v19 = 41LL * (unsigned int)(*(v18 - 2) % this[2].x);
    v20 = this[v19 + 102].x;
    if ( (v20 & 1) != 0 )
    {
      if ( (v20 & 0x100) != 0 || (v21 = 0, (*v18 & 0x40000) != 0) )
        v21 = 2048;
      v22 = v21 | v20 & 0xFFFFF7FF;
      this[v19 + 102].x = v22;
      if ( (v22 & 0x800) != 0 )
      {
        if ( (unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline()
          && (this[v19 + 102].x & 0x800) != 0 )
        {
          this[v19 + 102].y &= 0xFFFFFFF9;
        }
      }
      else
      {
        ++v16;
      }
    }
    ++v17;
    v18 += 24;
  }
  while ( v17 < *((_DWORD *)a2 + 12) );
  v23 = 3;
  if ( v16 != 2 )
LABEL_47:
    v23 = 6;
  v24 = (CPTPEngine *)this;
  v15 = v23 == 6;
  if ( v16 < 2 )
  {
    v28 = 0LL;
    LODWORD(v28) = 1;
LABEL_50:
    v29 = v28;
    v30 = 0LL;
    CBasePTPEngine::SendTelemetryOutput((__int64)v24, 11, (__int64)&v29);
    return;
  }
  v25 = CPTPEngine::FindOrAssignPrimary((CPTPEngine *)this, a2);
  v24 = (CPTPEngine *)this;
  if ( !v25 )
  {
    v28 = 0LL;
    LODWORD(v28) = 1;
    goto LABEL_50;
  }
  CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)&this[348].y);
  CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, 1);
  this[374] = *(struct tagPOINT *)a2;
  this[353].x = v23;
  if ( *((_DWORD *)a2 + 10) )
  {
    v26 = 3LL;
    if ( v23 != 6 )
      v26 = 1LL;
    CBasePTPEngine::SendInertiaOutput(this, v26);
  }
  v27 = v23 == 6 ? (v16 != 3) + 11 : 9;
  CBasePTPEngine::SendLastActionTelemetry((__int64)this, v27);
  if ( !(unsigned int)CPTPEngine::SendInitialGestureFrame((CPTPEngine *)this, a2, v25, v15) )
  {
LABEL_60:
    CPTPEngine::ProcessGestureFrame((CPTPEngine *)this, a2, v15, &v31);
    if ( v31 )
    {
      this[353].x = 1;
      CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
      this[385].x &= 0xFFF9FFFF;
      this[375] = *(struct tagPOINT *)a2;
    }
  }
}
