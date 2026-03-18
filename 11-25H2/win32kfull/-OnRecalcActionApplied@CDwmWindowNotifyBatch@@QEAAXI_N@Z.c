/*
 * XREFs of ?OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z @ 0x1402D381C
 * Callers:
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402CE344 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402D33DC (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 *     DwmAsyncApplyRecalcActionFailed @ 0x1403243DC (DwmAsyncApplyRecalcActionFailed.c)
 */

void __fastcall CDwmWindowNotifyBatch::OnRecalcActionApplied(CDwmWindowNotifyBatch *this, int a2, char a3)
{
  __int64 v5; // rdx
  char v7; // di
  char v8; // r15
  char v9; // bl
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // si
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  void *v25; // rax
  __int16 v26; // [rsp+30h] [rbp-48h]
  __int16 v27; // [rsp+30h] [rbp-48h]
  char v28; // [rsp+40h] [rbp-38h]
  char v29; // [rsp+40h] [rbp-38h]
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( !*(_BYTE *)this )
    return;
  if ( a3 )
  {
    v7 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v8 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v9 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v9 = 0;
    }
    if ( v8 || v9 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      v28 = a2;
      v26 = 10;
LABEL_23:
      LOBYTE(v12) = v9;
      LOBYTE(v11) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v12,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        v26,
        (__int64)&WPP_47d00eedd5133ff35b5af033d5438e83_Traceguids,
        v28);
    }
  }
  else
  {
    v7 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v8 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v9 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v9 = 0;
    }
    if ( v8 || v9 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      v28 = a2;
      v26 = 11;
      goto LABEL_23;
    }
  }
  LOBYTE(v5) = 1;
  v13 = HMValidateHandleNoSecure(*((_QWORD *)this + 4), v5);
  if ( v13 )
  {
    if ( *(char *)(*(_QWORD *)(v13 + 40) + 19LL) >= 0 )
    {
      v30 = 0LL;
      if ( CWindowProp::GetProp<CDwmWindowNotifyBatchProp>(v13, &v30) )
      {
        if ( a3 )
        {
          v23 = v30;
          v24 = *(_DWORD *)(v30 + 32);
          if ( v24 != a2 && v24 )
          {
            LODWORD(v30) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 54);
          }
          *(_DWORD *)(v23 + 32) = a2;
        }
        else
        {
          v25 = (void *)ReferenceDwmApiPort(v22, v21);
          DwmAsyncApplyRecalcActionFailed(v25);
        }
      }
      else
      {
        LODWORD(v30) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 206);
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v15 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v7 = 0;
      }
      if ( v15 || v7 )
      {
        v20 = *((_QWORD *)this + 4);
        v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        v29 = v20;
        v27 = 13;
        goto LABEL_35;
      }
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v15 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v7 = 0;
    }
    if ( v15 || v7 )
    {
      v16 = *((_QWORD *)this + 4);
      v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      v29 = v16;
      v27 = 12;
LABEL_35:
      LOBYTE(v19) = v7;
      LOBYTE(v18) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v19,
        *(_QWORD *)(v17 + 69160),
        5,
        4,
        v27,
        (__int64)&WPP_47d00eedd5133ff35b5af033d5438e83_Traceguids,
        v29);
    }
  }
}
