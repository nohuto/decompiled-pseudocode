/*
 * XREFs of ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1400295EC
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14002860C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140029818 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     DesktopWindowFromDesktop @ 0x140029CF8 (DesktopWindowFromDesktop.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C6140 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

__int64 __fastcall DesktopRecalc::StartRecalcForDesktop(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  bool v7; // di
  bool v8; // si
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  _QWORD *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD *v16; // r15
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  const struct tagWND *v24; // rax
  struct CRecalcProp *RecalcProperty; // rax

  v6 = 1;
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v18) = v8;
    LOBYTE(v19) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v19,
      v18,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      7,
      142,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      a1);
  }
  v9 = DesktopWindowFromDesktop(a1, a2);
  result = BuildHwndList(*(struct tagWND **)(v9 + 112), *(_DWORD *)(a1 + 336) & 0x20 | 2u);
  v12 = result;
  if ( result )
  {
    v13 = (_QWORD *)(result + 32);
    v14 = 0LL;
    v15 = *(_QWORD *)(result + 32);
    v16 = (_QWORD *)(result + 32);
    if ( v15 != 1 )
    {
      do
      {
        if ( (unsigned __int8)CRecalcProp::CreateForTopologyChange(v15, a2, a3) )
        {
          *(_QWORD *)(v12 + 8 * v14 + 32) = v15;
          v14 = (unsigned int)(v14 + 1);
        }
        v15 = *++v16;
      }
      while ( *v16 != 1LL );
      if ( (_DWORD)v14 )
      {
        do
        {
          if ( *v13 )
          {
            LOBYTE(v11) = 1;
            v24 = (const struct tagWND *)HMValidateHandleNoSecure(*v13, v11);
            RecalcProperty = CRecalcProp::GetRecalcProperty(v24);
            CRecalcProp::SignalRecalcWork(RecalcProperty, 1LL);
          }
          ++v13;
          --v14;
        }
        while ( v14 );
      }
    }
    return FreeHwndList(v12, v11);
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (result & 0x40) == 0)
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v6 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v6;
      return WPP_RECORDER_AND_TRACE_SF_(
               *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
               v23,
               v22,
               *(_QWORD *)(v21 + 69160),
               2,
               7,
               143,
               (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
    }
  }
  return result;
}
