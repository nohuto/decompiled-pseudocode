/*
 * XREFs of ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x140117A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseMove(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  int v4; // r8d
  bool v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  _QWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-18h]

  v4 = (int)WPP_GLOBAL_Control;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      6,
      48,
      (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
  }
  v10[1] = *((_QWORD *)a2 + 1);
  v11 = 1;
  v10[0] = &CMouseProcessor::CMoveEvent::`vftable';
  CMouseProcessor::ProcessMouseMove(this, (const struct CMouseProcessor::CMoveEvent *)v10, v4);
}
