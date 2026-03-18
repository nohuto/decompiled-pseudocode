/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1401E9B20
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1401EA134 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401AEA5C (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1401E9AD0 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1401EA73C (RIMIDEValidateInjectionQpcCount.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x1401EB004 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r13d
  int v6; // esi
  char v7; // bl
  bool v8; // di
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // r9d
  __int64 v17; // rdx
  unsigned int v18; // r12d
  bool v19; // bp
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  void *v24; // rcx
  char v25; // al
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  unsigned int v29; // ebx
  int v30; // eax
  unsigned int v31; // ecx
  char v32; // r14
  bool v33; // r15
  int v34; // edx
  int v35; // r8d
  __int64 v36; // r9
  __int64 v37; // rdx
  char v38; // bl
  bool v39; // di
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int16 v45; // [rsp+30h] [rbp-98h]
  int v46; // [rsp+60h] [rbp-68h]
  unsigned __int64 v47; // [rsp+68h] [rbp-60h]
  __int64 v48; // [rsp+70h] [rbp-58h]
  __int64 v49; // [rsp+78h] [rbp-50h]
  char v50; // [rsp+D0h] [rbp+8h]
  bool v51; // [rsp+D8h] [rbp+10h]
  int v53; // [rsp+E8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 80);
  v4 = a1 + 256;
  v5 = *(_DWORD *)(a2 + 64);
  v47 = v3;
  v6 = 1;
  if ( !a1 )
    v4 = 184LL;
  if ( (*(_DWORD *)v4 & 0x80u) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 440);
    v14 = a1 + 528;
    if ( !a1 )
      v14 = 456LL;
    v15 = *(_QWORD *)(v13 + 48);
    v16 = *(_DWORD *)(v13 + 28);
    v46 = v16;
    v17 = *(_QWORD *)v14;
    v48 = *(_QWORD *)v14;
    v49 = v15;
    if ( !*(_DWORD *)(*(_QWORD *)v14 + 1016LL) )
    {
      *(_QWORD *)(v13 + 20) = 0LL;
      *(_DWORD *)(v13 + 28) = 0;
      *(_DWORD *)(v13 + 36) = 0;
      *(_QWORD *)(v13 + 40) = 0LL;
      *(_QWORD *)(v13 + 48) = 0LL;
      *(_DWORD *)(v13 + 56) = 0;
    }
    if ( v5 && v3 || *(_DWORD *)(v13 + 20) && v3 || *(_QWORD *)(v13 + 40) && v5 )
    {
      v18 = 0;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v6) = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v6;
        WPP_RECORDER_AND_TRACE_SF_didi(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(UserSessionState + 19336));
      }
      return v18;
    }
    v18 = 1;
    if ( v3 || *(_QWORD *)(v13 + 40) )
    {
      v53 = 0;
      if ( !(unsigned int)RIMIDEValidateInjectionQpcCount(
                            v3,
                            v15,
                            v17,
                            *(_DWORD *)(v17 + 1016) == 0,
                            *(_DWORD *)(v13 + 56)) )
      {
        v18 = 0;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v38 = 0;
        }
        v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v37);
          LOBYTE(v41) = v39;
          LOBYTE(v42) = v38;
          WPP_RECORDER_AND_TRACE_SF_ii(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v42,
            v41,
            *(_QWORD *)(v40 + 19336),
            2,
            1,
            63,
            (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
            v47,
            v49);
        }
        return v18;
      }
      if ( v3 <= *(_QWORD *)(v13 + 40) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2832);
      v43 = 10000 * (v3 - *(_QWORD *)(v13 + 40)) / gliQpcFreq.QuadPart;
      v29 = v43;
      if ( !*(_DWORD *)(v48 + 1016) )
      {
        v44 = v47;
        v29 = 0;
        *(_QWORD *)(v13 + 40) = v47;
LABEL_86:
        *(_DWORD *)(v13 + 32) = v29;
        if ( v53 )
        {
          if ( !v46 || v5 )
            v6 = 0;
          *(_DWORD *)(v13 + 36) = v6;
          *(_DWORD *)(v13 + 28) = v5;
        }
        else
        {
          if ( !v49 || v44 )
            v6 = 0;
          *(_DWORD *)(v13 + 56) = v6;
          *(_QWORD *)(v13 + 48) = v44;
        }
        *a3 = v29;
        return v18;
      }
      if ( (_DWORD)v43 != *(_DWORD *)(v13 + 32) )
        goto LABEL_85;
      v18 = 0;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v32 = 0;
      }
      v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v32 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_85:
        v44 = v47;
        goto LABEL_86;
      }
      v36 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, 0LL) + 19336);
      v45 = 65;
LABEL_84:
      LOBYTE(v35) = v33;
      LOBYTE(v34) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v35,
        v36,
        2,
        1,
        v45,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
      goto LABEL_85;
    }
    v53 = 1;
    if ( *(_DWORD *)(v17 + 1016) )
    {
      v23 = 0;
    }
    else
    {
      v23 = 1;
      if ( !v5 )
      {
        v53 = 1;
LABEL_50:
        if ( !v18 )
          return v18;
        v29 = 10 * (v5 - *(_DWORD *)(v13 + 20));
        v30 = RIMIDEGetQpcBasedTouchStackTime();
        if ( !*(_DWORD *)(v48 + 1016) )
        {
          *(_DWORD *)(v13 + 20) = v5;
          v29 = 0;
          *(_DWORD *)(v13 + 24) = v30;
          goto LABEL_85;
        }
        if ( v29 )
          goto LABEL_85;
        v31 = *(_DWORD *)(v13 + 32);
        v29 = v30 - *(_DWORD *)(v13 + 24);
        if ( v29 > v31 )
          goto LABEL_85;
        if ( v31 - v29 < 5 )
        {
          v29 = v31 + 1;
          goto LABEL_85;
        }
        v18 = 0;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v32 = 0;
        }
        v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v32 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_85;
        v36 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, 0LL) + 19336);
        v45 = 64;
        goto LABEL_84;
      }
    }
    if ( (v16 || v5)
      && !v23
      && (!v16 && v5 && !*(_DWORD *)(v13 + 36) || v5 == v16 || (unsigned int)(v5 - v16) > *(_DWORD *)(v17 + 800)) )
    {
      v18 = 0;
      v24 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v25 = 0;
      }
      v50 = v25;
      v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v26 = W32GetUserSessionState(v24, v17);
        LOBYTE(v27) = v51;
        LOBYTE(v28) = v50;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 19336),
          2,
          1,
          62,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
          v5,
          v46);
      }
    }
    goto LABEL_50;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(WPP_GLOBAL_Control, 184LL);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(v9 + 19336),
      2,
      1,
      60,
      (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
  }
  return 0LL;
}
