/*
 * XREFs of ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402DEFD8
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ @ 0x1402DE5F0 (-SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ.c)
 */

bool __fastcall CRecalcProp::s_xxxOnWindowRestoreFromMinimizedOld(
        struct tagWND *a1,
        __int64 a2,
        bool *a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  __int64 v5; // rax
  char v8; // bl
  struct CRecalcProp *RecalcProperty; // rax
  CRecalcProp *v11; // r14
  char v12; // si
  bool v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // ebx
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  char v21; // r14
  bool v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 Prop; // rax
  int v33; // ecx
  struct tagRECT *v34; // rax
  int v35; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v36; // [rsp+5Ch] [rbp-25h]
  char v37; // [rsp+60h] [rbp-21h]
  __int64 v38; // [rsp+64h] [rbp-1Dh]
  __int64 v39; // [rsp+70h] [rbp-11h]
  int v40; // [rsp+78h] [rbp-9h]
  __int128 v41; // [rsp+80h] [rbp-1h] BYREF
  __int128 v42; // [rsp+90h] [rbp+Fh] BYREF

  v5 = *((_QWORD *)a1 + 5);
  *(_QWORD *)&v41 = a3;
  v8 = a2;
  if ( (*(_BYTE *)(v5 + 31) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2923);
  *a3 = 0;
  *a5 = 0LL;
  RecalcProperty = CRecalcProp::GetRecalcProperty(a1, a2);
  v11 = RecalcProperty;
  if ( !RecalcProperty )
    return 0;
  v12 = 1;
  if ( *((_DWORD *)RecalcProperty + 6) != 1 || (*((_DWORD *)a1 + 96) & 0x10) != 0 || (*((_DWORD *)a1 + 95) & 0x10) != 0 )
    return 0;
  if ( v8 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_QWORD *)a1;
      v15 = *(_QWORD *)(*((_QWORD *)RecalcProperty + 4) + 16LL);
      v16 = *(_DWORD *)(v15 + 12);
      UserSessionState = W32GetUserSessionState(v15, 0LL);
      LOBYTE(v18) = v13;
      LOBYTE(v19) = v12;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        7,
        88,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v14,
        v16);
    }
    CRecalcProp::SetPendingStateToProcessed(v11);
    return 0;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v21 = 0;
  }
  v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v23 = *(_QWORD *)a1;
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v25) = v22;
    LOBYTE(v26) = v21;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 69152),
      4,
      7,
      89,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v23);
  }
  v27 = *a4;
  v28 = *(_QWORD *)a1;
  v35 = 0;
  v37 = 0;
  v39 = 0LL;
  v36 = v27;
  v38 = 0LL;
  v40 = 3;
  CRecalcProp::s_xxxProcessTopologyChange(v28, (struct CRecalcContext *)&v35);
  if ( v37 )
  {
    v30 = v41;
    *(_BYTE *)v41 = v37;
    *a4 = v36;
    v31 = W32GetUserSessionState(v30, v29);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v31 + 41374), 1u);
    if ( Prop )
    {
      v33 = *(_DWORD *)(Prop + 16) & 8;
      if ( v33 )
        v42 = *(_OWORD *)(Prop + 36);
      else
        v41 = *(_OWORD *)(Prop + 20);
      v34 = (struct tagRECT *)&v41;
      if ( v33 )
        v34 = (struct tagRECT *)&v42;
      *a5 = *v34;
    }
  }
  return v35 == 4;
}
