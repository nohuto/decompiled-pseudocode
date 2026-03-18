/*
 * XREFs of ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401039F8
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1401031F0 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1401055B8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x14010565C (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x14010581C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140105958 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x140143A40 (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 *     ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z @ 0x140178F10 (-FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x14017EBE0 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1401B1C64 (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401B1FA8 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 */

void __fastcall CPTPEngine::DoTPGestureProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // eax
  bool v5; // r14
  const struct CContactState *v6; // r11
  int v7; // r10d
  unsigned int v8; // r15d
  _DWORD *v9; // r9
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // eax
  bool v13; // dl
  int v14; // ecx
  unsigned int *v15; // rsi
  int v16; // eax
  BOOL v17; // r15d
  unsigned int v18; // esi
  unsigned int v19; // r9d
  _DWORD *v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // r14d
  CPTPEngine *v26; // rcx
  struct CContactState *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int128 v30; // [rsp+20h] [rbp-40h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]
  int v33; // [rsp+90h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 706);
  v5 = v2 == 3 || v2 == 6;
  if ( v2 != 1 || *((_DWORD *)this + 702) < 2u || *((_DWORD *)this + 705) )
  {
    if ( !v5 )
      return;
  }
  else
  {
    v6 = 0LL;
    v7 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v8 = *((_DWORD *)this + 4);
      v9 = (_DWORD *)((char *)a2 + 68);
      while ( 1 )
      {
        v10 = 328LL * (*(v9 - 2) % v8);
        v11 = *((_DWORD *)this + 768);
        v12 = v11;
        if ( (v11 & 0x800000) == 0 && (v11 & 0x200000) != 0 )
        {
          *((_QWORD *)this + 372) = *(_QWORD *)a2;
          v12 = v11 | 0x800000;
          *((_DWORD *)this + 768) = v11 | 0x800000;
        }
        v13 = (v12 & 0x200000) == 0
           || *(_QWORD *)a2 - *((_QWORD *)this + 372) >= *((_QWORD *)this + 12)
                                                       * (unsigned __int64)*((unsigned int *)this + 812)
                                                       / 0x3E8;
        v14 = *(_DWORD *)((char *)this + v10 + 816);
        if ( (v14 & 1) != 0
          && (*v9 & 0x40000) == 0
          && (v14 & 0x100) == 0
          && (v14 & 0x100000) != 0
          && v13
          && (*((_DWORD *)a2 + 10) || (v14 & 4) != 0 || (v14 & 0x10) != 0) )
        {
          break;
        }
        v9 += 24;
        if ( (unsigned int)++v7 >= *((_DWORD *)a2 + 12) )
          goto LABEL_26;
      }
      v6 = (CPTPEngine *)((char *)this + v10 + 816);
    }
    else
    {
LABEL_26:
      if ( !v5 )
        return;
    }
    CPTPEngine::MarkRecentlyTrackedContactsAsNonResting(this, a2, v6);
  }
  v33 = 0;
  v15 = (unsigned int *)((char *)this + 3072);
  v16 = *((_DWORD *)this + 768);
  v17 = *((_DWORD *)this + 706) == 6;
  if ( (v16 & 0x800000) != 0 )
    *v15 = v16 & 0xFF5FFFFF;
  if ( v5 )
    goto LABEL_59;
  v18 = 0;
  v19 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_45;
  v20 = (_DWORD *)((char *)a2 + 68);
  do
  {
    v21 = 328LL * (unsigned int)(*(v20 - 2) % *((_DWORD *)this + 4));
    v22 = *(_DWORD *)((char *)this + v21 + 816);
    if ( (v22 & 1) != 0 )
    {
      if ( (v22 & 0x100) != 0 || (*v20 & 0x40000) != 0 )
        v23 = 2048;
      else
        v23 = 0;
      v24 = v23 | v22 & 0xFFFFF7FF;
      *(_DWORD *)((char *)this + v21 + 816) = v24;
      if ( (v24 & 0x800) != 0 )
        *(_DWORD *)((char *)this + v21 + 820) &= 0xFFFFFFFC;
      else
        ++v18;
    }
    ++v19;
    v20 += 24;
  }
  while ( v19 < *((_DWORD *)a2 + 12) );
  v25 = 3;
  if ( v18 != 2 )
LABEL_45:
    v25 = 6;
  v26 = this;
  v17 = v25 == 6;
  if ( v18 < 2 )
  {
    v30 = 0LL;
    LODWORD(v30) = 1;
LABEL_48:
    v31 = v30;
    v32 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(v26, 11LL, &v31);
    return;
  }
  v27 = CPTPEngine::FindOrAssignPrimary(this, a2);
  v26 = this;
  if ( !v27 )
  {
    v30 = 0LL;
    LODWORD(v30) = 1;
    goto LABEL_48;
  }
  CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 697);
  CPTPEngine::CancelMouseUpTimer(this, 1);
  *((_QWORD *)this + 373) = *(_QWORD *)a2;
  *((_DWORD *)this + 706) = v25;
  if ( *((_DWORD *)a2 + 10) )
  {
    v28 = 3LL;
    if ( v25 != 6 )
      v28 = 1LL;
    CBasePTPEngine::SendInertiaOutput(this, v28);
  }
  if ( v25 == 6 )
    v29 = (unsigned int)(v18 != 3) + 11;
  else
    v29 = 9LL;
  CBasePTPEngine::SendLastActionTelemetry(this, v29);
  if ( !(unsigned int)CPTPEngine::SendInitialGestureFrame(this, a2, v27, v25 == 6) )
  {
    v15 = (unsigned int *)((char *)this + 3072);
LABEL_59:
    CPTPEngine::ProcessGestureFrame(this, a2, v17, &v33);
    if ( v33 )
    {
      *((_DWORD *)this + 706) = 1;
      CPTPEngine::ResetDragThresholds(this, a2);
      *v15 &= ~0x20000u;
      *v15 &= ~0x40000u;
      *((_QWORD *)this + 374) = *(_QWORD *)a2;
    }
  }
}
