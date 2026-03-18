/*
 * XREFs of ?s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401CA958
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1402C5680 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 */

void __fastcall CRecalcProp::s_OnWindowBecomingChild(struct tagWND *a1)
{
  struct CRecalcProp *RecalcProperty; // rax
  __int64 v3; // rdx
  bool v4; // di
  bool v5; // bp
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // di
  bool v11; // bp
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx

  RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
  if ( RecalcProperty )
  {
    if ( *((_DWORD *)RecalcProperty + 6) == 2 )
    {
      v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v6 = *(_QWORD *)a1;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
        LOBYTE(v8) = v5;
        LOBYTE(v9) = v4;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v9,
          v8,
          *(_QWORD *)(UserSessionState + 69160),
          4,
          7,
          82,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v6);
      }
    }
    else
    {
      v10 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v12 = *(_QWORD *)a1;
        v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
        LOBYTE(v14) = v11;
        LOBYTE(v15) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v15,
          v14,
          *(_QWORD *)(v13 + 69160),
          4,
          7,
          83,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v12);
      }
      CRecalcProp::RemoveRecalcProperty(a1);
    }
  }
}
