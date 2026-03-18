/*
 * XREFs of rimObsPopInputMessage @ 0x140177EAC
 * Callers:
 *     rimObsObserveNextInput @ 0x140177C0C (rimObsObserveNextInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCalculateObserverMessageSize @ 0x14020EE54 (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x14020F238 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPopInputMessage(_DWORD *a1, int a2, int a3, char a4)
{
  char v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  _DWORD *v11; // rbx
  int v12; // r14d
  __int64 v13; // rdx
  unsigned int v14; // edi
  char v15; // bl
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  char *v21; // rsi
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // bl
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // r14
  bool v31; // r15
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rcx
  char **v36; // rax
  char v37; // di
  bool v38; // si
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // eax
  unsigned int v43; // eax
  __int64 Src; // [rsp+50h] [rbp-30h] BYREF
  int Src_8; // [rsp+58h] [rbp-28h]
  int Src_12; // [rsp+5Ch] [rbp-24h]
  __int128 v47; // [rsp+60h] [rbp-20h]
  __int128 v48; // [rsp+70h] [rbp-10h]

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(0, a2, a3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      1,
      15,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      (char)a1);
  }
  v11 = a1 + 36;
  if ( a1[40] == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 296LL);
  v12 = a1[41];
  LODWORD(v13) = 0;
  if ( v12 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v37 = 0;
    }
    v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, a3);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(v39 + 69136),
        3,
        1,
        18,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        v12);
    }
    v42 = v11[5];
    Src = 1LL;
    Src_8 = 2;
    Src_12 = v42;
    v47 = 0LL;
    v48 = 0LL;
    v43 = rimObsCopyMessage(&Src);
    LODWORD(v13) = 0;
    v14 = v43;
    v11[5] = 0;
  }
  else if ( a1[40] )
  {
    if ( *(_DWORD **)v11 == v11 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 307LL);
    v21 = *(char **)v11;
    v22 = rimObsCopyMessage((void *)(*(_QWORD *)v11 + 16LL));
    v14 = v22;
    if ( v22 == -1073741789 )
    {
      Src = 1LL;
      Src_8 = 0;
      v47 = 0LL;
      v48 = 0LL;
      Src_12 = rimObsCalculateObserverMessageSize(v21 + 16);
      v14 = rimObsCopyMessage(&Src);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        LODWORD(v13) = 0;
        v25 = 0;
      }
      else
      {
        v25 = 1;
        LODWORD(v13) = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, (unsigned int)&WPP_RECORDER_INITIALIZED);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 69136),
          4,
          1,
          16,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          a4,
          Src_12);
        LODWORD(v13) = 0;
      }
    }
    else
    {
      v13 = 0LL;
      if ( v22 >= 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v23);
          LOBYTE(v33) = v31;
          LOBYTE(v34) = v30;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v34,
            v33,
            *(_QWORD *)(v32 + 69136),
            4,
            1,
            17,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
        }
        v35 = *(_QWORD *)v21;
        if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 || (v36 = (char **)*((_QWORD *)v21 + 1), *v36 != v21) )
          __fastfail(3u);
        *v36 = (char *)v35;
        *(_QWORD *)(v35 + 8) = v36;
        GreDeleteFastMutex(v21, v13, v23, v24);
        --v11[4];
        LODWORD(v13) = 0;
      }
    }
  }
  else
  {
    v14 = -2147483622;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v15 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, (unsigned int)&WPP_RECORDER_INITIALIZED);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 69136),
      4,
      1,
      19,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v14);
  }
  return v14;
}
