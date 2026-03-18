/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14021FA30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1400B8984 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1400BA4C0 (APISetEditionGetMouseWheelRoutingMode.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x14021F75C (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ @ 0x14021FCB4 (-ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v3; // rdx
  int MouseWheelRoutingMode; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // di
  bool v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  unsigned int v18; // [rsp+5Ch] [rbp-2Ch]
  unsigned __int16 v19; // [rsp+60h] [rbp-28h]

  v3 = *((_QWORD *)a2 + 1);
  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(v3 + 120) & 8) != 0 )
    goto LABEL_16;
  if ( *(_DWORD *)(v3 + 112) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this, v3) )
  {
    MouseWheelRoutingMode = 0;
  }
  else
  {
    if ( CMouseProcessor::HittestWheelRoutingRequested(this) )
      goto LABEL_16;
    MouseWheelRoutingMode = APISetEditionGetMouseWheelRoutingMode(v7, v6);
    if ( MouseWheelRoutingMode )
      goto LABEL_16;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(this, v3) + 18888) )
  {
    v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69144),
        3,
        6,
        43,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
    return;
  }
LABEL_16:
  if ( ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xC00) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4728);
  v14 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2);
  v15[1] = *((_QWORD *)a2 + 1);
  v15[0] = &CMouseProcessor::CWheelEvent::`vftable';
  v16 = 0;
  v17 = MouseWheelRoutingMode;
  v18 = ((unsigned int)~v14 >> 10) & 1;
  v19 = CMouseProcessor::CWheelEvent::ComputeWheelData((CMouseProcessor::CWheelEvent *)v15);
  v16 = 3;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)v15);
}
