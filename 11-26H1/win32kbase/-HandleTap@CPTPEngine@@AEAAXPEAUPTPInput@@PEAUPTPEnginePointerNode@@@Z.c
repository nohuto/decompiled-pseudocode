/*
 * XREFs of ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140226DF4
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401047BC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x14010556C (-SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1401055B8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x14010565C (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x14010581C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140105958 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z @ 0x1401059A0 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@H@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x140135B6C (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 *     ?IsNearbyContactPresent@CPTPEngine@@AEAA_NPEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z @ 0x140184290 (-IsNearbyContactPresent@CPTPEngine@@AEAA_NPEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z.c)
 *     ?GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z @ 0x140189E90 (-GetButtonForSimulatedPresses@CPTPEngine@@AEAAIPEAUPTPEnginePointerNode@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401B1FA8 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140227270 (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall CPTPEngine::HandleTap(CPTPEngine *this, struct PTPInput *a2, struct tagPOINT *a3)
{
  char *v6; // rbp
  int v7; // edx
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  int ButtonForSimulatedPresses; // edx
  LONG v12; // r9d
  bool v13; // zf

  v6 = (char *)this + 328 * (unsigned int)(a3->y % *((_DWORD *)this + 4));
  if ( *((_DWORD *)this + 700) != *((_DWORD *)this + 699) )
    return;
  if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
  {
    CBasePTPEngine::SendInertiaOutput((__int64)this, 3);
    if ( *((_DWORD *)a2 + 10) )
    {
      *((_DWORD *)a2 + 10) = 0;
      return;
    }
  }
  CPTPEngine::SendMouseUpIfPending((struct tagPOINT *)this, (unsigned int *)this + 697);
  CPTPEngine::CancelMouseUpTimer((struct tagPOINT *)this, 1);
  CPTPEngine::ResetDragThresholds(this, a2);
  if ( *((_DWORD *)this + 699) == 1 )
  {
    if ( !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 10, 1) )
      return;
    if ( CPTPEngine::IsNearbyContactPresent(
           this,
           a2,
           (struct CContactState *)(v6 + 816),
           a3[5],
           *((_DWORD *)this + 819)) )
    {
      return;
    }
    v9 = *((_QWORD *)this + 374);
    v10 = *((_QWORD *)v6 + 110);
    if ( v10 > v9 && v10 - v9 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 818) / 0x3E8 )
      return;
    ButtonForSimulatedPresses = CPTPEngine::GetButtonForSimulatedPresses(this, (struct PTPEnginePointerNode *)a3);
    v12 = 1;
    if ( !ButtonForSimulatedPresses )
    {
      ButtonForSimulatedPresses = 2;
      v12 = *((_DWORD *)this + 41) != 0;
      if ( !*((_DWORD *)this + 39) )
        return;
    }
    if ( ButtonForSimulatedPresses == 2 )
    {
      v13 = (*((_DWORD *)this + 768) & 8) == 0;
    }
    else
    {
      if ( ButtonForSimulatedPresses != 8 )
      {
LABEL_31:
        *((_QWORD *)this + 380) = *(_QWORD *)a2;
        *(_QWORD *)((char *)this + 2836) = *((_QWORD *)v6 + 104);
        CPTPEngine::SendTimedMouseClick(
          (struct tagPOINT *)this,
          ButtonForSimulatedPresses,
          *(struct tagPOINT *)((char *)a2 + 28),
          v12);
        CBasePTPEngine::SendLastActionTelemetry((__int64)this, 1);
        CBasePTPEngine::SendTotalTimeTelemetry((__int64)this, 0, *(_QWORD *)a2 - *((_QWORD *)v6 + 111));
        return;
      }
      v13 = (*((_DWORD *)this + 768) & 0x10) == 0;
    }
    if ( !v13 )
      return;
    goto LABEL_31;
  }
  if ( *((_DWORD *)this + 699) != 2 )
  {
    switch ( *((_DWORD *)this + 699) )
    {
      case 3:
        CBasePTPEngine::SendShellOutput(this, 0LL);
        v7 = 3;
        break;
      case 4:
        CBasePTPEngine::SendShellOutput(this, 1LL);
        v7 = 4;
        break;
      case 5:
        CBasePTPEngine::SendShellOutput(this, 2LL);
        v7 = 27;
        break;
      default:
        return;
    }
    goto LABEL_19;
  }
  if ( *((_DWORD *)this + 40) )
  {
    if ( (unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 10, 1) )
    {
      if ( (*((_DWORD *)this + 768) & 0x10) == 0 )
      {
        v8 = *(_QWORD *)((char *)this + 2876);
        if ( (int)((*((_QWORD *)v6 + 103) - v8) * (*((_QWORD *)v6 + 103) - v8)
                 + (HIDWORD(*((_QWORD *)v6 + 103)) - HIDWORD(v8)) * (HIDWORD(*((_QWORD *)v6 + 103)) - HIDWORD(v8))) <= (unsigned __int64)*((unsigned int *)this + 802) )
        {
          *((_QWORD *)this + 380) = *(_QWORD *)a2;
          CPTPEngine::SendTimedMouseClick((struct tagPOINT *)this, 8, *(struct tagPOINT *)((char *)a2 + 28), 0);
          v7 = 2;
LABEL_19:
          CBasePTPEngine::SendLastActionTelemetry((__int64)this, v7);
        }
      }
    }
  }
}
