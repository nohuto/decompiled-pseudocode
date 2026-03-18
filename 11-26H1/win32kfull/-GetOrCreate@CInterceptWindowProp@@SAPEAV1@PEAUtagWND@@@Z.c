/*
 * XREFs of ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x140289258
 * Callers:
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x140264104 (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402E1C74 (-ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?ReserveSystemOperationDataSlot@WindowActions@@YA_NPEAUtagWND@@@Z @ 0x1402E2E58 (-ReserveSystemOperationDataSlot@WindowActions@@YA_NPEAUtagWND@@@Z.c)
 *     ?RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@4@@Z @ 0x1402E3454 (-RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@Adva.c)
 *     ?SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402E392C (-SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402E54FC (-xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x140289418 (--$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z.c)
 *     ??$CreateWindowProp@VCInterceptWindowProp@@@CWindowProp@@SAJPEAPEAVCInterceptWindowProp@@@Z @ 0x1402E1A28 (--$CreateWindowProp@VCInterceptWindowProp@@@CWindowProp@@SAJPEAPEAVCInterceptWindowProp@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

struct CInterceptWindowProp *__fastcall CInterceptWindowProp::GetOrCreate(struct tagWND *a1)
{
  int v2; // eax
  char v3; // si
  struct MOVESIZEDATA **v4; // rcx
  bool v5; // di
  bool v6; // bl
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  CWindowProp *v11; // rsi
  bool v12; // di
  bool v13; // bp
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  CWindowProp *v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CInterceptWindowProp>(a1, &v18) )
    return v18;
  v2 = CWindowProp::CreateWindowProp<CInterceptWindowProp>(&v18);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = &WPP_GLOBAL_Control;
    v5 = 0;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
    {
      v4 = (struct MOVESIZEDATA **)*((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( ((unsigned __int8)v4 & 8) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v5 = 1;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v4, WPP_GLOBAL_Control);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        4,
        16,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v3);
    }
    return 0LL;
  }
  v11 = v18;
  if ( !(unsigned int)CWindowProp::SetProp(v18, (unsigned __int64)a1) )
  {
    v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_QWORD *)a1;
      v15 = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
      LOBYTE(v16) = v13;
      LOBYTE(v17) = v12;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69152),
        2,
        4,
        17,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v14);
    }
    (**(void (__fastcall ***)(CWindowProp *))v11)(v11);
    return 0LL;
  }
  return v11;
}
