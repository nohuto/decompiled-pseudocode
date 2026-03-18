/*
 * XREFs of ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D5058
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140217DC8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?CoalesceWindowAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D4130 (-CoalesceWindowAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 */

void __fastcall AdvancedWindowPos::PostAsyncWindowAction(
        AdvancedWindowPos *this,
        PETHREAD **a2,
        const struct AdvancedWindowPos::WindowAction *a3)
{
  AdvancedWindowPos *v4; // rsi
  __int64 v5; // rdx
  bool v6; // bp
  bool v7; // di
  LARGE_INTEGER v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // bp
  bool v13; // al
  char ThreadId; // si
  char v15; // bl
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdx
  volatile signed __int32 **v24; // rbx
  bool v25; // bl
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rdx
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  struct tagTHREADINFO **v34; // [rsp+60h] [rbp-48h]
  bool v36; // [rsp+C0h] [rbp+18h]
  bool v37; // [rsp+C8h] [rbp+20h]

  v4 = this;
  if ( AdvancedWindowPos::CoalesceWindowAction(this, (struct tagWND *)a2, a3) )
  {
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = *(LARGE_INTEGER *)v4;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        4,
        115,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v8.QuadPart);
    }
  }
  else
  {
    v12 = 1;
    v13 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v36 = v13;
    v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(**((PETHREAD **)v4 + 2));
      v34 = (struct tagTHREADINFO **)(a2 + 18);
      v15 = (unsigned __int8)PsGetThreadId(*a2[18]);
      v16 = *(_QWORD *)this;
      v19 = W32GetUserSessionState(v18, v17);
      LOBYTE(v20) = v37;
      LOBYTE(v21) = v36;
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v20,
        *(_QWORD *)(v19 + 69160),
        4,
        4,
        116,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v16,
        v15,
        ThreadId);
      v4 = this;
    }
    else
    {
      v34 = (struct tagTHREADINFO **)(a2 + 18);
    }
    v22 = Win32AllocPoolZInit(168LL, 1886871893LL);
    v24 = (volatile signed __int32 **)v22;
    if ( v22 )
    {
      *(_OWORD *)v22 = *(_OWORD *)a2;
      *(_OWORD *)(v22 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v22 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v22 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v22 + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(v22 + 80) = *((_OWORD *)a2 + 5);
      *(_OWORD *)(v22 + 96) = *((_OWORD *)a2 + 6);
      *(_OWORD *)(v22 + 112) = *((_OWORD *)a2 + 7);
      *(_OWORD *)(v22 + 128) = *((_OWORD *)a2 + 8);
      *(_OWORD *)(v22 + 144) = *((_OWORD *)a2 + 9);
      *(_QWORD *)(v22 + 160) = a2[20];
      if ( (unsigned int)PostEventMessageEx(
                           *v34,
                           *((struct tagQ **)*v34 + 59),
                           0x1Cu,
                           (LARGE_INTEGER *)v4,
                           0,
                           0LL,
                           v22,
                           0LL) )
      {
        _InterlockedAdd(v24[19], 1u);
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v12 = 0;
        }
        v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
          LOBYTE(v32) = v30;
          LOBYTE(v33) = v12;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v33,
            v32,
            *(_QWORD *)(v31 + 69160),
            2,
            4,
            118,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
        }
        Win32FreePool(v24);
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v12 = 0;
      }
      v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v28,
          v27,
          *(_QWORD *)(v26 + 69160),
          2,
          4,
          117,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
    }
  }
}
