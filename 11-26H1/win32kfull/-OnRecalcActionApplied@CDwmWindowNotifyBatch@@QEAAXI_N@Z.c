/*
 * XREFs of ?OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z @ 0x1402E6D4C
 * Callers:
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402E4AD0 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402E690C (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 */

void __fastcall CDwmWindowNotifyBatch::OnRecalcActionApplied(CDwmWindowNotifyBatch *this, int a2, char a3)
{
  char v5; // di
  char v6; // r12
  char v7; // bl
  __int64 UserSessionState; // rax
  int v9; // edx
  int v10; // r8d
  CDwmWindowNotifyBatch *v11; // r12
  __int64 v12; // rax
  __int64 *v13; // rbx
  char v14; // si
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  CDwmWindowNotifyBatch *v22; // rbx
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  void *v26; // rbx
  __int16 v27; // [rsp+38h] [rbp-29h]
  __int16 v28; // [rsp+38h] [rbp-29h]
  char v29; // [rsp+48h] [rbp-19h]
  char v30; // [rsp+48h] [rbp-19h]
  _OWORD v31[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v32; // [rsp+78h] [rbp+17h]
  int v33; // [rsp+80h] [rbp+1Fh]
  __int64 v34; // [rsp+84h] [rbp+23h]
  int v35; // [rsp+8Ch] [rbp+2Bh]
  CDwmWindowNotifyBatch *v36; // [rsp+C8h] [rbp+67h] BYREF

  v36 = this;
  if ( !*(_BYTE *)this )
    return;
  if ( a3 )
  {
    v5 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v6 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v7 = 0;
    }
    if ( v6 || v7 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      v29 = a2;
      v27 = 10;
LABEL_23:
      LOBYTE(v10) = v7;
      LOBYTE(v9) = v6;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v10,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        v27,
        (__int64)&WPP_47d00eedd5133ff35b5af033d5438e83_Traceguids,
        v29);
    }
  }
  else
  {
    v5 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v6 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v7 = 0;
    }
    if ( v6 || v7 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      v29 = a2;
      v27 = 11;
      goto LABEL_23;
    }
  }
  v11 = v36;
  v12 = HMValidateHandleNoSecure(*((_QWORD *)v36 + 4), 1);
  v13 = (__int64 *)v12;
  if ( v12 )
  {
    if ( *(char *)(*(_QWORD *)(v12 + 40) + 19LL) >= 0 )
    {
      v36 = 0LL;
      if ( CWindowProp::GetProp<CDwmWindowNotifyBatchProp>(v12, (__int64 *)&v36) )
      {
        if ( a3 )
        {
          v22 = v36;
          v23 = *((_DWORD *)v36 + 8);
          if ( v23 != a2 && v23 )
          {
            LODWORD(v36) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 54);
          }
          *((_DWORD *)v22 + 8) = a2;
        }
        else
        {
          v24 = *v13;
          v25 = ReferenceDwmApiPort(v21, v20);
          v26 = (void *)v25;
          if ( v25 )
          {
            memset(v31, 0, sizeof(v31));
            WORD2(v31[0]) = 0x8000;
            v32 = 0LL;
            LODWORD(v31[0]) = 3670032;
            v33 = 1073741922;
            v34 = v24;
            v35 = a2;
            LpcRequestPort(v25, v31);
            ObfDereferenceObject(v26);
          }
        }
      }
      else
      {
        LODWORD(v36) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 206);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v14 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v5 = 0;
      }
      if ( v14 || v5 )
      {
        v19 = *((_QWORD *)v11 + 4);
        v16 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        v30 = v19;
        v28 = 13;
        goto LABEL_35;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v14 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v5 = 0;
    }
    if ( v14 || v5 )
    {
      v15 = *((_QWORD *)v11 + 4);
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      v30 = v15;
      v28 = 12;
LABEL_35:
      LOBYTE(v18) = v5;
      LOBYTE(v17) = v14;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v18,
        *(_QWORD *)(v16 + 69152),
        5,
        4,
        v28,
        (__int64)&WPP_47d00eedd5133ff35b5af033d5438e83_Traceguids,
        v30);
    }
  }
}
