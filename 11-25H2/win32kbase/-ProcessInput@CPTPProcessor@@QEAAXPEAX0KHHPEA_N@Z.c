/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x14018B584
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x14018C130 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140060814 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1400629B4 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1400DA0E4 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1400E7D78 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x140107274 (-EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x14018742C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CPTPProcessor::ProcessInput(
        CPTPProcessor *this,
        void *a2,
        unsigned int *a3,
        unsigned int a4,
        int a5,
        int a6,
        bool *a7)
{
  bool *v7; // r12
  __int64 v9; // rdi
  unsigned int *v10; // r13
  __int64 v11; // rsi
  unsigned int *v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned int *v15; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  struct CPointerInputFrame *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct CPointerInputFrame *v21; // rbp
  char v22; // di
  bool v23; // si
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  unsigned int v27; // r15d
  __int64 v28; // rsi
  char v29; // di
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  _QWORD *v37; // rdi
  LARGE_INTEGER v38; // rax
  __int64 *v39; // r9
  LARGE_INTEGER v40; // r10
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  BOOL v54; // eax
  unsigned int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  char *v61; // rcx
  _OWORD *v62; // rax
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int64 v76; // rax
  __int64 v77; // [rsp+40h] [rbp-58h]

  v7 = a7;
  *((_BYTE *)this + 1984) = 0;
  *((_BYTE *)this + 40) = 0;
  v9 = a4;
  *a7 = 0;
  v10 = a3;
  v11 = HMValidateHandleNoSecure((int)a2, 19);
  v77 = v11;
  v12 = v10;
  v13 = (unsigned int)v9;
  if ( v10 + 60 <= (unsigned int *)((char *)v10 + v9) )
  {
    v14 = (unsigned __int64)v10 + v9;
    while ( 1 )
    {
      v15 = v12;
      v12 = (unsigned int *)((char *)v12 + *v12);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *((LARGE_INTEGER *)this + 257) = PerformanceCounter;
      *((_QWORD *)v15 + 8) = *(_QWORD *)(v11 + 2272);
      *((LARGE_INTEGER *)v15 + 9) = PerformanceCounter;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v15 + 12));
      v17 = CTouchProcessor::CommitRimCompleteFrame((PERESOURCE *)this, (struct RIMCOMPLETEFRAME *)v15, 1, 0);
      v21 = v17;
      if ( v17 )
        break;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          4,
          10,
          (__int64)&WPP_c9d17567e0a338e400654e2e8390aa2d_Traceguids);
      }
LABEL_54:
      v11 = v77;
      if ( (unsigned __int64)(v12 + 60) > v14 )
      {
        v13 = a4;
        v10 = a3;
        v7 = a7;
        goto LABEL_56;
      }
    }
    v27 = v15[49];
    InputTraceLogging::PTP::EngineInput(v17, v27 != 0, v19, v20);
    v28 = *(_QWORD *)(v11 + 456);
    v29 = 0;
    v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19872);
    if ( *((_DWORD *)this + 143) != (*(_DWORD *)(v33 + 1988) != 0) )
    {
      v29 = 1;
      v33 = *(_QWORD *)(W32GetUserSessionState(v33, v32) + 19872);
      *((_DWORD *)this + 143) = *(_DWORD *)(v33 + 1988) != 0;
    }
    v36 = *(_DWORD *)(v28 + 268)
       && (!*(_QWORD *)(W32GetUserSessionState(v33, v32) + 18904)
        || *(char *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v35, v34) + 18904) + 464LL) + 808LL) >= 0);
    if ( v36 == *((_DWORD *)this + 141) )
    {
      if ( !v29 )
      {
LABEL_22:
        v37 = (_QWORD *)((char *)this + 720);
        *((_DWORD *)this + 136) = a5;
        *((_DWORD *)this + 137) = a6;
        *((_QWORD *)this + 66) = a2;
        *((_QWORD *)this + 67) = v21;
        memset((char *)this + 720, 0, 0x278uLL);
        *((_QWORD *)this + 90) = *(_QWORD *)(*((_QWORD *)v21 + 30) + 248LL);
        v38 = KeQueryPerformanceCounter(0LL);
        v39 = (__int64 *)*((_QWORD *)this + 249);
        v40 = v38;
        v41 = *v39;
        if ( *v39 != *((_QWORD *)this + 250) )
        {
          *((_QWORD *)this + 250) = v41;
          if ( v41 )
          {
            v42 = v41 + *v37 - v38.QuadPart;
            v43 = *v37 - 1LL;
            v44 = v42;
            if ( v42 >= v43 )
              v44 = *v37 - 1LL;
            if ( v44 <= *((_QWORD *)this + 169) + 1LL )
            {
              v43 = *((_QWORD *)this + 169) + 1LL;
            }
            else if ( v42 < v43 )
            {
              v43 = v42;
            }
            *((_QWORD *)this + 252) = v43;
          }
          else
          {
            *((_QWORD *)this + 252) = 0LL;
          }
        }
        v45 = v39[1];
        if ( v45 != *((_QWORD *)this + 251) )
        {
          *((_QWORD *)this + 251) = v45;
          if ( v45 )
          {
            v46 = v45 + *v37 - v40.QuadPart;
            v47 = *v37 - 1LL;
            v45 = *((_QWORD *)this + 169) + 1LL;
            v48 = v46;
            if ( v46 >= v47 )
              v48 = *v37 - 1LL;
            if ( v48 <= v45 )
            {
              v47 = *((_QWORD *)this + 169) + 1LL;
            }
            else if ( v46 < v47 )
            {
              v47 = v46;
            }
            *((_QWORD *)this + 253) = v47;
          }
          else
          {
            *((_QWORD *)this + 253) = 0LL;
          }
        }
        *((_QWORD *)this + 91) = *((_QWORD *)this + 252);
        *((_QWORD *)this + 92) = *((_QWORD *)this + 253);
        v49 = *(unsigned int *)(*((_QWORD *)v21 + 30) + 232LL);
        *((_DWORD *)this + 186) = v49;
        v51 = *(_QWORD *)(W32GetUserSessionState(v49, v45) + 19184);
        *(_QWORD *)((char *)this + 748) = v51;
        *((_DWORD *)this + 189) = v27 != 0;
        v54 = 1;
        if ( (*((_DWORD *)this + 97) & 1) == 0 )
        {
          v52 = W32GetUserSessionState(v51, v50);
          if ( !CInertiaManager::QueryInertiaStatus((CInertiaManager *)(v52 + 16920), v53) )
            v54 = 0;
        }
        *((_DWORD *)this + 190) = v54;
        v55 = 0;
        *((_DWORD *)this + 193) = -__CFSHR__(*((_DWORD *)this + 97), 2);
        *((_DWORD *)this + 191) = *((_DWORD *)v21 + 10);
        *((_DWORD *)this + 192) = *((_DWORD *)v21 + 12);
        if ( *((_DWORD *)v21 + 12) )
        {
          do
          {
            v56 = v55++;
            v57 = 480 * v56;
            v58 = 3 * v56;
            v59 = *((_QWORD *)v21 + 30);
            v58 *= 32LL;
            *(_OWORD *)((char *)this + v58 + 776) = *(_OWORD *)(v59 + v57 + 168);
            *(_OWORD *)((char *)this + v58 + 792) = *(_OWORD *)(v59 + v57 + 184);
            *(_OWORD *)((char *)this + v58 + 808) = *(_OWORD *)(v59 + v57 + 200);
            *(_OWORD *)((char *)this + v58 + 824) = *(_OWORD *)(v59 + v57 + 216);
            *(_OWORD *)((char *)this + v58 + 840) = *(_OWORD *)(v59 + v57 + 232);
            *(_OWORD *)((char *)this + v58 + 856) = *(_OWORD *)(v59 + v57 + 248);
            *(_DWORD *)((char *)this + v58 + 780) = *(unsigned __int16 *)(*((_QWORD *)v21 + 30) + v57 + 160);
          }
          while ( v55 != *((_DWORD *)v21 + 12) );
        }
        PTPEngineTraceProducer::OnInput(
          *((PTPEngineTraceProducer **)this + 69),
          (CPTPProcessor *)((char *)this + 720),
          *((struct tagTPAAPSTATE **)this + 249));
        v60 = 4LL;
        v61 = (char *)this + 1352;
        v62 = (_OWORD *)((char *)this + 720);
        do
        {
          v63 = v62[1];
          *(_OWORD *)v61 = *v62;
          v64 = v62[2];
          *((_OWORD *)v61 + 1) = v63;
          v65 = v62[3];
          *((_OWORD *)v61 + 2) = v64;
          v66 = v62[4];
          *((_OWORD *)v61 + 3) = v65;
          v67 = v62[5];
          *((_OWORD *)v61 + 4) = v66;
          v68 = v62[6];
          *((_OWORD *)v61 + 5) = v67;
          v69 = v62[7];
          v62 += 8;
          *((_OWORD *)v61 + 6) = v68;
          v61 += 128;
          *((_OWORD *)v61 - 1) = v69;
          --v60;
        }
        while ( v60 );
        v70 = v62[1];
        *(_OWORD *)v61 = *v62;
        v71 = v62[2];
        *((_OWORD *)v61 + 1) = v70;
        v72 = v62[3];
        *((_OWORD *)v61 + 2) = v71;
        v73 = v62[4];
        *((_OWORD *)v61 + 3) = v72;
        v74 = v62[5];
        *((_OWORD *)v61 + 4) = v73;
        v75 = v62[6];
        v76 = *((_QWORD *)v62 + 14);
        *((_OWORD *)v61 + 5) = v74;
        *((_OWORD *)v61 + 6) = v75;
        *((_QWORD *)v61 + 14) = v76;
        if ( *((_QWORD *)this + 67) )
        {
          CTouchProcessor::FreeFrame((PERESOURCE *)this, (char *)v21, 1);
          *((_QWORD *)this + 67) = 0LL;
        }
        goto LABEL_54;
      }
    }
    else
    {
      *((_DWORD *)this + 141) = v36;
    }
    CPTPProcessor::UpdateEnvironment((__int64)this, 0, (struct tagHID_POINTER_DEVICE_INFO *)v28);
    goto LABEL_22;
  }
LABEL_56:
  if ( v12 != (unsigned int *)((char *)v10 + v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 192LL);
  *v7 = *((_BYTE *)this + 40);
}
