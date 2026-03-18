/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x140144620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ @ 0x14014507C (-ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1401450CC (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x140145140 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x140145320 (APISetEditionGetMouseWheelRoutingMode.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        int a3)
{
  __int64 v4; // rdx
  int MouseWheelRoutingMode; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  bool v10; // di
  bool v11; // bl
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  _QWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  unsigned int v18; // [rsp+5Ch] [rbp-2Ch]
  unsigned __int16 v19; // [rsp+60h] [rbp-28h]

  v4 = *((_QWORD *)a2 + 1);
  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(v4 + 120) & 8) != 0 )
  {
LABEL_6:
    if ( ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xC00) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4738LL);
    v7 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2);
    v15[1] = *((_QWORD *)a2 + 1);
    v15[0] = &CMouseProcessor::CWheelEvent::`vftable';
    v16 = 0;
    v17 = MouseWheelRoutingMode;
    v18 = ((unsigned int)~v7 >> 10) & 1;
    v19 = CMouseProcessor::CWheelEvent::ComputeWheelData((CMouseProcessor::CWheelEvent *)v15);
    v16 = 3;
    CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)v15);
    return;
  }
  if ( *(_DWORD *)(v4 + 112) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this) )
  {
    MouseWheelRoutingMode = 0;
  }
  else
  {
    if ( CMouseProcessor::HittestWheelRoutingRequested(this) )
      goto LABEL_6;
    MouseWheelRoutingMode = APISetEditionGetMouseWheelRoutingMode();
    if ( MouseWheelRoutingMode )
      goto LABEL_6;
  }
  if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)this, v4, a3) + 18928) )
    goto LABEL_6;
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69136),
      3,
      6,
      43,
      (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
  }
}
