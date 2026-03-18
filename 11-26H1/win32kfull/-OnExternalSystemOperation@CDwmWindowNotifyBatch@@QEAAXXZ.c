/*
 * XREFs of ?OnExternalSystemOperation@CDwmWindowNotifyBatch@@QEAAXXZ @ 0x1402E6B00
 * Callers:
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402E4AD0 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402E8874 (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402E690C (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 */

void __fastcall CDwmWindowNotifyBatch::OnExternalSystemOperation(CDwmWindowNotifyBatch *this)
{
  char v2; // di
  char v3; // si
  char v4; // bl
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rbx
  __int16 v16; // [rsp+30h] [rbp-38h]
  char v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_BYTE *)this )
  {
    v2 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v3 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v4 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v4 = 0;
    }
    if ( v3 || v4 )
    {
      UserSessionState = W32GetUserSessionState(this, WPP_GLOBAL_Control);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        14,
        (__int64)&WPP_47d00eedd5133ff35b5af033d5438e83_Traceguids);
    }
    v8 = HMValidateHandleNoSecure(*((_QWORD *)this + 4), 1);
    if ( v8 )
    {
      if ( *(char *)(*(_QWORD *)(v8 + 40) + 19LL) >= 0 )
      {
        v18 = 0LL;
        if ( CWindowProp::GetProp<CDwmWindowNotifyBatchProp>(v8, &v18) )
        {
          ++*(_DWORD *)(v18 + 36);
        }
        else
        {
          LODWORD(v18) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 242);
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v10 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v2 = 0;
        }
        if ( v10 || v2 )
        {
          v15 = *((_QWORD *)this + 4);
          v12 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
          v17 = v15;
          v16 = 16;
          goto LABEL_23;
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v10 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v2 = 0;
      }
      if ( v10 || v2 )
      {
        v11 = *((_QWORD *)this + 4);
        v12 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
        v17 = v11;
        v16 = 15;
LABEL_23:
        LOBYTE(v14) = v2;
        LOBYTE(v13) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v14,
          *(_QWORD *)(v12 + 69152),
          5,
          4,
          v16,
          (__int64)&WPP_47d00eedd5133ff35b5af033d5438e83_Traceguids,
          v17);
      }
    }
  }
}
