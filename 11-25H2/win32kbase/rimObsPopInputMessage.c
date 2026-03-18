/*
 * XREFs of rimObsPopInputMessage @ 0x14013C0D8
 * Callers:
 *     rimObsObserveNextInput @ 0x14013BE38 (rimObsObserveNextInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCalculateObserverMessageSize @ 0x1401F3384 (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1401F3768 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  char **v13; // rdi
  int v14; // r14d
  unsigned int v15; // ebx
  char v16; // di
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char *v22; // rdi
  int v23; // eax
  bool v24; // di
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // r14
  bool v30; // r15
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rcx
  char **v35; // rax
  char v36; // bl
  bool v37; // di
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  int v41; // eax
  __int64 v42; // [rsp+50h] [rbp-30h] BYREF
  int v43; // [rsp+58h] [rbp-28h]
  int v44; // [rsp+5Ch] [rbp-24h]
  __int128 v45; // [rsp+60h] [rbp-20h]
  __int128 v46; // [rsp+70h] [rbp-10h]

  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      1,
      15,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1);
  }
  v13 = (char **)(a1 + 144);
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 296LL);
  v14 = *(_DWORD *)(a1 + 164);
  if ( v14 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v36 = 0;
    }
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v36;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v39,
        *(_QWORD *)(v38 + 69144),
        3,
        1,
        18,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        v14);
    }
    v41 = *(_DWORD *)(a1 + 164);
    v42 = 1LL;
    v43 = 2;
    v44 = v41;
    v45 = 0LL;
    v46 = 0LL;
    v15 = rimObsCopyMessage(&v42, a2, a3, a4);
    *(_DWORD *)(a1 + 164) = 0;
  }
  else if ( *(_DWORD *)(a1 + 160) )
  {
    if ( *v13 == (char *)v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 307LL);
    v22 = *v13;
    v23 = rimObsCopyMessage(v22 + 16, a2, a3, a4);
    v15 = v23;
    if ( v23 == -1073741789 )
    {
      v42 = 1LL;
      v43 = 0;
      v45 = 0LL;
      v46 = 0LL;
      v44 = rimObsCalculateObserverMessageSize(v22 + 16);
      v15 = rimObsCopyMessage(&v42, a2, a3, a4);
      v24 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69144),
          4,
          1,
          16,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          a4,
          v44);
      }
    }
    else if ( v23 >= 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v29 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 69144),
          4,
          1,
          17,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      v34 = *(_QWORD *)v22;
      if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 || (v35 = (char **)*((_QWORD *)v22 + 1), *v35 != v22) )
        __fastfail(3u);
      *v35 = (char *)v34;
      *(_QWORD *)(v34 + 8) = v35;
      GreDeleteFastMutex(v22);
      --*(_DWORD *)(a1 + 160);
    }
  }
  else
  {
    v15 = -2147483622;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v16 = 0;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v16;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(v18 + 69144),
      4,
      1,
      19,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v15);
  }
  return v15;
}
