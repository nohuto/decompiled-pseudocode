/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x140208DE0
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1401BB6B8 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401D0B18 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x140209818 (RIMIDEValidateInjectionQpcCount.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x140209A90 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v3; // r14d
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  int v6; // esi
  char v7; // di
  bool v8; // bp
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rax
  bool v19; // bp
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  unsigned int v24; // ebp
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v26; // r8
  unsigned __int64 v27; // rdx
  int v28; // eax
  char v29; // di
  bool v30; // bp
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  unsigned int v34; // ecx
  bool v35; // r12
  bool v36; // r13
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // r12d
  int v41; // edx
  int v42; // r8d
  char v43; // di
  char v44; // bp
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  bool v47; // r13
  __int64 v48; // rax
  int v49; // edx
  int v50; // r8d
  __int64 v51; // [rsp+60h] [rbp-58h]
  bool v52; // [rsp+C0h] [rbp+8h]
  unsigned int v53; // [rsp+C8h] [rbp+10h]
  int v55; // [rsp+D8h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 64);
  v4 = a1 + 256;
  v5 = *(_QWORD *)(a2 + 80);
  v6 = 1;
  if ( !a1 )
    v4 = 184LL;
  v53 = 1;
  if ( (*(_DWORD *)v4 & 0x80u) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 440);
    v14 = a1 + 528;
    if ( !a1 )
      v14 = 456LL;
    v15 = *(_QWORD *)(v13 + 48);
    v16 = *(_DWORD *)(v13 + 28);
    v55 = v16;
    v17 = *(_QWORD *)v14;
    v51 = v15;
    if ( !*(_DWORD *)(*(_QWORD *)v14 + 1016LL) )
    {
      *(_QWORD *)(v13 + 20) = 0LL;
      *(_DWORD *)(v13 + 28) = 0;
      *(_DWORD *)(v13 + 36) = 0;
      *(_QWORD *)(v13 + 40) = 0LL;
      *(_QWORD *)(v13 + 48) = 0LL;
      *(_DWORD *)(v13 + 56) = 0;
    }
    if ( v3 && v5 || *(_DWORD *)(v13 + 20) && v5 || (v18 = *(_QWORD *)(v13 + 40)) != 0 && v3 )
    {
      v53 = 0;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v6) = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, 0);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v6;
        WPP_RECORDER_AND_TRACE_SF_didi(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(UserSessionState + 19368));
      }
      return v53;
    }
    if ( v5 || v18 )
    {
      v40 = 0;
      if ( !(unsigned int)RIMIDEValidateInjectionQpcCount(
                            v5,
                            v15,
                            v17,
                            *(_DWORD *)(v17 + 1016) == 0,
                            *(_DWORD *)(v13 + 56)) )
      {
        v53 = 0;
        v43 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v45 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v41, v42);
          WPP_RECORDER_AND_TRACE_SF_ii(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v43,
            v44,
            *(_QWORD *)(v45 + 19368),
            2u,
            1u,
            0x3Fu,
            (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
            v5,
            v51);
        }
        return v53;
      }
      if ( v5 <= *(_QWORD *)(v13 + 40) )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2821);
      v46 = 10000 * (v5 - *(_QWORD *)(v13 + 40)) / gliQpcFreq.QuadPart;
      v24 = v46;
      if ( *(_DWORD *)(v17 + 1016) )
      {
        if ( (_DWORD)v46 == *(_DWORD *)(v13 + 32) )
        {
          v53 = 0;
          v47 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v48 = W32GetUserSessionState(0, 10000 * (v5 - *(_QWORD *)(v13 + 40)) % gliQpcFreq.QuadPart, v42);
            LOBYTE(v49) = v47;
            LOBYTE(v50) = v52;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v49,
              v50,
              *(_QWORD *)(v48 + 19368),
              2,
              1,
              65,
              (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
          }
        }
      }
      else
      {
        *(_QWORD *)(v13 + 40) = v5;
        v24 = 0;
      }
      goto LABEL_86;
    }
    if ( *(_DWORD *)(v17 + 1016) )
    {
      v23 = 0;
    }
    else
    {
      v23 = 1;
      if ( !v3 )
      {
LABEL_33:
        v24 = 10 * (v3 - *(_DWORD *)(v13 + 20));
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v26 = PerformanceCounter.QuadPart % gliQpcFreq.QuadPart;
        v27 = (unsigned __int64)(10000 * (PerformanceCounter.QuadPart % gliQpcFreq.QuadPart)) % gliQpcFreq.QuadPart;
        v28 = 10000 * (PerformanceCounter.QuadPart / gliQpcFreq.QuadPart)
            + (unsigned __int64)(10000 * (PerformanceCounter.QuadPart % gliQpcFreq.QuadPart)) / gliQpcFreq.QuadPart;
        if ( *(_DWORD *)(v17 + 1016) )
        {
          if ( !v24 )
          {
            v34 = *(_DWORD *)(v13 + 32);
            v24 = v28 - *(_DWORD *)(v13 + 24);
            if ( v24 <= v34 )
            {
              if ( v34 - v24 >= 5 )
              {
                v53 = 0;
                v35 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
                v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v26);
                  LOBYTE(v38) = v36;
                  LOBYTE(v39) = v35;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v39,
                    v38,
                    *(_QWORD *)(v37 + 19368),
                    2,
                    1,
                    64,
                    (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
                }
              }
              else
              {
                v24 = v34 + 1;
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(v13 + 20) = v3;
          v24 = 0;
          *(_DWORD *)(v13 + 24) = v28;
        }
        v40 = 1;
LABEL_86:
        *(_DWORD *)(v13 + 32) = v24;
        if ( v40 )
        {
          if ( !v55 || v3 )
            v6 = 0;
          *(_DWORD *)(v13 + 36) = v6;
          *(_DWORD *)(v13 + 28) = v3;
        }
        else
        {
          if ( !v51 || v5 )
            v6 = 0;
          *(_DWORD *)(v13 + 56) = v6;
          *(_QWORD *)(v13 + 48) = v5;
        }
        *a3 = v24;
        return v53;
      }
    }
    if ( (v16 || v3)
      && !v23
      && (!v16 && v3 && !*(_DWORD *)(v13 + 36) || v3 == v16 || (unsigned int)(v3 - v16) > *(_DWORD *)(v17 + 800)) )
    {
      v53 = 0;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v29 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, 0);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 19368),
          2,
          1,
          62,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
          v3,
          v16);
      }
      return v53;
    }
    goto LABEL_33;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 184, 0);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(v9 + 19368),
      2,
      1,
      60,
      (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
  }
  return 0LL;
}
