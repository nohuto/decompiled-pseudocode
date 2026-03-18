/*
 * XREFs of ?OnExternalSystemOperation@CDwmWindowNotifyBatch@@QEAAXXZ @ 0x1402D35D0
 * Callers:
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402CE344 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402D560C (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402D33DC (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 */

void __fastcall CDwmWindowNotifyBatch::OnExternalSystemOperation(CDwmWindowNotifyBatch *this)
{
  __int64 v2; // rdx
  char v3; // di
  char v4; // si
  char v5; // bl
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rbx
  __int16 v17; // [rsp+30h] [rbp-38h]
  char v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_BYTE *)this )
  {
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
    v3 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v4 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v5 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v5 = 0;
    }
    if ( v4 || v5 )
    {
      UserSessionState = W32GetUserSessionState(this, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        14,
        (__int64)&WPP_47d00eedd5133ff35b5af033d5438e83_Traceguids);
    }
    LOBYTE(v2) = 1;
    v9 = HMValidateHandleNoSecure(*((_QWORD *)this + 4), v2);
    if ( v9 )
    {
      if ( *(char *)(*(_QWORD *)(v9 + 40) + 19LL) >= 0 )
      {
        v19 = 0LL;
        if ( CWindowProp::GetProp<CDwmWindowNotifyBatchProp>(v9, &v19) )
        {
          ++*(_DWORD *)(v19 + 36);
        }
        else
        {
          LODWORD(v19) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 242);
        }
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v11 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v3 = 0;
        }
        if ( v11 || v3 )
        {
          v16 = *((_QWORD *)this + 4);
          v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
          v18 = v16;
          v17 = 16;
          goto LABEL_23;
        }
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v11 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v3 = 0;
      }
      if ( v11 || v3 )
      {
        v12 = *((_QWORD *)this + 4);
        v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
        v18 = v12;
        v17 = 15;
LABEL_23:
        LOBYTE(v15) = v3;
        LOBYTE(v14) = v11;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v14,
          v15,
          *(_QWORD *)(v13 + 69160),
          5,
          4,
          v17,
          (__int64)&WPP_47d00eedd5133ff35b5af033d5438e83_Traceguids,
          v18);
      }
    }
  }
}
