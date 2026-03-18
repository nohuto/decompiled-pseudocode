/*
 * XREFs of ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C6140
 * Callers:
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1400295EC (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     ?s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401CAADC (-s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?BeginApplyWindowActionOld@CRecalcProp@@QEAA_NPEAUtagWND@@I@Z @ 0x1402C3D48 (-BeginApplyWindowActionOld@CRecalcProp@@QEAA_NPEAUtagWND@@I@Z.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C4160 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?OnApplyWindowActionReRunRequest@CRecalcProp@@QEAA_NPEAUtagWND@@@Z @ 0x1402C4A94 (-OnApplyWindowActionReRunRequest@CRecalcProp@@QEAA_NPEAUtagWND@@@Z.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1402C5BD0 (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C68FC (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C7288 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CAD74 (-ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qds @ 0x1402C9324 (WPP_RECORDER_AND_TRACE_SF_qds.c)
 */

__int64 __fastcall CRecalcProp::SignalRecalcWork(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  LARGE_INTEGER v4; // r15
  __int64 v5; // r14
  char v6; // si
  char v7; // r13
  char v8; // r12
  __int64 v9; // rdx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // r13
  char v14; // di
  char ThreadId; // bl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char v21; // r12
  char v22; // di
  char v23; // bl
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // di
  char v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  LARGE_INTEGER *v37; // [rsp+90h] [rbp+8h]

  result = *(_QWORD *)(a1 + 16);
  v3 = a1;
  v4.QuadPart = a2;
  v5 = *(_QWORD *)(result + 16);
  v6 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (result & 0x40) == 0)
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v7 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v8 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v8 = 0;
  }
  if ( v7 || v8 )
  {
    PsGetThreadId(*(PETHREAD *)v5);
    UserSessionState = W32GetUserSessionState(*(_QWORD *)(v3 + 16), v9);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v7;
    result = WPP_RECORDER_AND_TRACE_SF_qds(
               *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
               v12,
               v11,
               *(_QWORD *)(UserSessionState + 69160),
               5);
    v3 = a1;
  }
  v37 = 0LL;
  v13 = 0;
  if ( v4.LowPart )
  {
    if ( v4.LowPart - 1 <= 1 )
    {
      if ( _bittest64((const signed __int64 *)(v5 + 1360), 0x26u) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (result & 0x40) == 0)
          || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v14 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v6 = 0;
        }
        if ( v14 || v6 )
        {
          ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v5);
          v18 = W32GetUserSessionState(v17, v16);
          LOBYTE(v19) = v6;
          LOBYTE(v20) = v14;
          return WPP_RECORDER_AND_TRACE_SF_d(
                   *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                   v20,
                   v19,
                   *(_QWORD *)(v18 + 69160),
                   5,
                   7,
                   67,
                   (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
                   ThreadId);
        }
        return result;
      }
      v13 = 1;
    }
  }
  else
  {
    v37 = *(LARGE_INTEGER **)(v3 + 16);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v21 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v22 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v22 = 0;
  }
  if ( v21 || v22 )
  {
    v23 = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v5);
    v26 = W32GetUserSessionState(v25, v24);
    LOBYTE(v27) = v22;
    LOBYTE(v28) = v21;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v28,
      v27,
      *(_QWORD *)(v26 + 69160),
      5,
      7,
      68,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v23);
  }
  result = PostEventMessageEx((struct tagTHREADINFO *)v5, *(struct tagQ **)(v5 + 472), 0x16u, v37, 0, v4, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( v13 )
    {
      result = 0x4000000000LL;
      *(_QWORD *)(v5 + 1360) |= 0x4000000000uLL;
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v6 = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v30 = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v5);
      v33 = W32GetUserSessionState(v32, v31);
      LOBYTE(v34) = v29;
      LOBYTE(v35) = v6;
      return WPP_RECORDER_AND_TRACE_SF_d(
               *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
               v35,
               v34,
               *(_QWORD *)(v33 + 69160),
               2,
               7,
               69,
               (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
               v30);
    }
  }
  return result;
}
