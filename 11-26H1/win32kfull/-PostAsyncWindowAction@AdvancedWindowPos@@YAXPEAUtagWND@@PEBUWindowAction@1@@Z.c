/*
 * XREFs of ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402E82B8
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140251CD4 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?CoalesceWindowAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402E7658 (-CoalesceWindowAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 */

void __fastcall AdvancedWindowPos::PostAsyncWindowAction(
        PETHREAD **this,
        PETHREAD **a2,
        const struct AdvancedWindowPos::WindowAction *a3)
{
  PETHREAD **v4; // rsi
  __int64 v5; // rdx
  bool v6; // bp
  bool v7; // di
  PETHREAD *v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // bp
  bool v13; // al
  unsigned int ThreadId; // esi
  unsigned int v15; // ebx
  PETHREAD *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  volatile signed __int32 **v21; // rbx
  bool v22; // bl
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int128 v26; // xmm0
  char *v27; // r13
  __int64 v28; // rdx
  bool v29; // si
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  struct tagTHREADINFO **v33; // [rsp+60h] [rbp-48h]
  char v35; // [rsp+C0h] [rbp+18h]
  char v36; // [rsp+C8h] [rbp+20h]

  v4 = this;
  if ( AdvancedWindowPos::CoalesceWindowAction((AdvancedWindowPos *)this, (struct tagWND *)a2, a3) )
  {
    v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = *v4;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        4,
        115,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        (char)v8);
    }
  }
  else
  {
    v12 = 1;
    v13 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v35 = v13;
    v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned int)PsGetThreadId(*v4[2]);
      v33 = (struct tagTHREADINFO **)(a2 + 18);
      v15 = (unsigned int)PsGetThreadId(*a2[18]);
      v16 = *this;
      v19 = W32GetUserSessionState(v18, v17);
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v36,
        *(_QWORD *)(v19 + 69152),
        4u,
        4u,
        0x74u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v16,
        v15,
        ThreadId);
      v4 = this;
    }
    else
    {
      v33 = (struct tagTHREADINFO **)(a2 + 18);
    }
    v20 = Win32AllocPoolZInit(184LL, 1886871893LL);
    v21 = (volatile signed __int32 **)v20;
    if ( v20 )
    {
      *(_OWORD *)v20 = *(_OWORD *)a2;
      *(_OWORD *)(v20 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v20 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v20 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v20 + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(v20 + 80) = *((_OWORD *)a2 + 5);
      *(_OWORD *)(v20 + 96) = *((_OWORD *)a2 + 6);
      v26 = *((_OWORD *)a2 + 7);
      v27 = (char *)(a2 + 16);
      *(_OWORD *)(v20 + 112) = v26;
      *(_OWORD *)(v20 + 128) = *(_OWORD *)v27;
      *(_OWORD *)(v20 + 144) = *((_OWORD *)v27 + 1);
      *(_OWORD *)(v20 + 160) = *((_OWORD *)v27 + 2);
      *(_QWORD *)(v20 + 176) = *((_QWORD *)v27 + 6);
      if ( (unsigned int)PostEventMessageEx(
                           *v33,
                           *((struct tagQ **)*v33 + 58),
                           0x1Cu,
                           (struct tagWND *)v4,
                           0,
                           0LL,
                           v20,
                           0LL) )
      {
        _InterlockedAdd(v21[21], 1u);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v12 = 0;
        }
        v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v28);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v12;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(v30 + 69152),
            2,
            4,
            118,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
        Win32FreePool(v21);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 69152),
          2,
          4,
          117,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
  }
}
