/*
 * XREFs of ?s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x140160F98
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x140210060 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 */

void __fastcall CRecalcProp::s_OnWindowBecomingChild(struct tagWND *a1, __int64 a2)
{
  struct CRecalcProp *RecalcProperty; // rax
  __int64 v4; // rdx
  bool v5; // di
  bool v6; // bp
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  bool v11; // di
  bool v12; // bp
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx

  RecalcProperty = CRecalcProp::GetRecalcProperty(a1, a2);
  if ( RecalcProperty )
  {
    if ( *((_DWORD *)RecalcProperty + 6) == 2 )
    {
      v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v7 = *(_QWORD *)a1;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
        LOBYTE(v9) = v6;
        LOBYTE(v10) = v5;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v9,
          *(_QWORD *)(UserSessionState + 69152),
          4,
          7,
          82,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v7);
      }
    }
    else
    {
      v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_QWORD *)a1;
        v14 = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
        LOBYTE(v15) = v12;
        LOBYTE(v16) = v11;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v15,
          *(_QWORD *)(v14 + 69152),
          4,
          7,
          83,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v13);
      }
      CRecalcProp::RemoveRecalcProperty(a1);
    }
  }
}
