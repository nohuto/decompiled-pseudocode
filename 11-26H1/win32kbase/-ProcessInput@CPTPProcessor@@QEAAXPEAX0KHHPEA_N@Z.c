/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1400D4990
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1400D3070 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x14004CD5C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140081264 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D2D18 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x140125F18 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1401326AC (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x1401471E4 (-EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CPTPProcessor::ProcessInput(
        CPTPProcessor *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int a4,
        int a5,
        int a6,
        bool *a7)
{
  bool *v7; // r13
  __int64 v8; // rax
  __int64 v10; // rbx
  unsigned int *v11; // r15
  __int64 v12; // r12
  unsigned int *v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  unsigned int *v16; // rbp
  unsigned int *v17; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct CPointerInputFrame *v21; // rax
  int v22; // edx
  int v23; // r8d
  struct CPointerInputFrame *v24; // rbx
  bool v25; // bl
  bool v26; // di
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  unsigned int v30; // r12d
  char v31; // di
  __int64 v32; // rbp
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // eax
  LARGE_INTEGER *v43; // rdi
  LARGE_INTEGER v44; // rax
  LARGE_INTEGER v45; // rdx
  LARGE_INTEGER v46; // r8
  __int64 *v47; // r11
  LARGE_INTEGER v48; // rbp
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // r10
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // r10
  __int64 v60; // rcx
  int v61; // ecx
  int v62; // edx
  __int64 v63; // rcx
  int v64; // r8d
  __int64 v65; // rax
  bool v66; // zf
  int v67; // eax
  unsigned int v68; // r8d
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  char *v74; // rcx
  _OWORD *v75; // rax
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int64 v89; // rax
  __int64 v90; // [rsp+A0h] [rbp+8h]
  __int64 v91; // [rsp+A8h] [rbp+10h]

  v91 = a2;
  v7 = a7;
  v8 = a2;
  *((_BYTE *)this + 1984) = 0;
  *((_BYTE *)this + 40) = 0;
  LOBYTE(a2) = 19;
  v10 = a4;
  *a7 = 0;
  v11 = a3;
  v12 = HMValidateHandleNoSecure(v8, a2);
  v90 = v12;
  v13 = v11;
  v14 = (unsigned int)v10;
  if ( v11 + 60 <= (unsigned int *)((char *)v11 + v10) )
  {
    v15 = (unsigned __int64)v11 + v10;
    while ( 1 )
    {
      v16 = v13;
      v17 = v13;
      v13 = (unsigned int *)((char *)v13 + *v13);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *((LARGE_INTEGER *)this + 257) = PerformanceCounter;
      *((_QWORD *)v17 + 8) = *(_QWORD *)(v12 + 2264);
      *((LARGE_INTEGER *)v17 + 9) = PerformanceCounter;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput(
        (const struct TELEMETRY_POINTER_FRAME_TIMES *)(v17 + 12),
        v19,
        v20);
      v21 = CTouchProcessor::CommitRimCompleteFrame((PERESOURCE *)this, (struct RIMCOMPLETEFRAME *)v17, 1, 0);
      v24 = v21;
      if ( v21 )
        break;
      v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          4,
          10,
          (__int64)&WPP_82abd821ed1c3bbaa254c37d13ae98bc_Traceguids);
      }
LABEL_55:
      if ( (unsigned __int64)(v13 + 60) > v15 )
      {
        v14 = a4;
        v11 = a3;
        v7 = a7;
        goto LABEL_57;
      }
    }
    v30 = v16[49];
    InputTraceLogging::PTP::EngineInput(v21, v30 != 0);
    v31 = 0;
    v32 = *(_QWORD *)(v90 + 456);
    v37 = *(_QWORD *)(W32GetUserSessionState(v34, v33, v35) + 19904);
    if ( *((_DWORD *)this + 143) != (*(_DWORD *)(v37 + 1988) != 0) )
    {
      v31 = 1;
      v37 = *(_QWORD *)(W32GetUserSessionState(v37, v36, v38) + 19904);
      *((_DWORD *)this + 143) = *(_DWORD *)(v37 + 1988) != 0;
    }
    v42 = *(_DWORD *)(v32 + 268)
       && (!*(_QWORD *)(W32GetUserSessionState(v37, v36, v38) + 18944)
        || *(char *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v40, v39, v41) + 18944) + 456LL) + 808LL) >= 0);
    if ( v42 == *((_DWORD *)this + 141) )
    {
      if ( !v31 )
      {
LABEL_23:
        v43 = (LARGE_INTEGER *)((char *)this + 720);
        *((_DWORD *)this + 136) = a5;
        *((_DWORD *)this + 137) = a6;
        *((_QWORD *)this + 66) = v91;
        *((_QWORD *)this + 67) = v24;
        memset((char *)this + 720, 0, 0x278uLL);
        *((_QWORD *)this + 90) = *(_QWORD *)(*((_QWORD *)v24 + 30) + 248LL);
        v44 = KeQueryPerformanceCounter(0LL);
        v47 = (__int64 *)*((_QWORD *)this + 249);
        v48 = v44;
        v49 = *v47;
        if ( *v47 != *((_QWORD *)this + 250) )
        {
          *((_QWORD *)this + 250) = v49;
          if ( v49 )
          {
            v45 = *v43;
            v50 = v49 - v44.QuadPart;
            v51 = v50;
            v46.QuadPart = *((_QWORD *)this + 169) + 1LL;
            v52 = v50 + v43->QuadPart;
            v53 = v43->QuadPart - 1;
            if ( v52 >= v53 )
              v51 = -1LL;
            if ( (unsigned __int64)(v45.QuadPart + v51) <= v46.QuadPart )
            {
              v54 = *((_QWORD *)this + 169) + 1LL;
            }
            else
            {
              if ( v52 >= v53 )
                v50 = -1LL;
              v54 = v45.QuadPart + v50;
            }
            *((_QWORD *)this + 252) = v54;
          }
          else
          {
            *((_QWORD *)this + 252) = 0LL;
          }
        }
        v55 = v47[1];
        if ( v55 != *((_QWORD *)this + 251) )
        {
          *((_QWORD *)this + 251) = v55;
          if ( v55 )
          {
            v45 = *v43;
            v56 = v55 - v48.QuadPart;
            v57 = v56;
            v46.QuadPart = *((_QWORD *)this + 169) + 1LL;
            v58 = v56 + v43->QuadPart;
            v59 = v43->QuadPart - 1;
            if ( v58 >= v59 )
              v57 = -1LL;
            if ( (unsigned __int64)(v45.QuadPart + v57) <= v46.QuadPart )
            {
              v60 = *((_QWORD *)this + 169) + 1LL;
            }
            else
            {
              if ( v58 >= v59 )
                v56 = -1LL;
              v60 = v45.QuadPart + v56;
            }
            *((_QWORD *)this + 253) = v60;
          }
          else
          {
            *((_QWORD *)this + 253) = 0LL;
          }
        }
        *((_QWORD *)this + 91) = *((_QWORD *)this + 252);
        *((_QWORD *)this + 92) = *((_QWORD *)this + 253);
        v61 = *(_DWORD *)(*((_QWORD *)v24 + 30) + 232LL);
        *((_DWORD *)this + 186) = v61;
        v63 = *(_QWORD *)(W32GetUserSessionState(v61, v45.LowPart, v46.LowPart) + 19216);
        *(_QWORD *)((char *)this + 748) = v63;
        *((_DWORD *)this + 189) = v30 != 0;
        if ( (*((_DWORD *)this + 97) & 1) != 0
          || (v65 = W32GetUserSessionState(v63, v62, v64),
              v66 = !CInertiaManager::QueryInertiaStatus((CInertiaManager *)(v65 + 16912)),
              v67 = 0,
              !v66) )
        {
          v67 = 1;
        }
        *((_DWORD *)this + 190) = v67;
        v68 = 0;
        *((_DWORD *)this + 193) = -__CFSHR__(*((_DWORD *)this + 97), 2);
        *((_DWORD *)this + 191) = *((_DWORD *)v24 + 10);
        *((_DWORD *)this + 192) = *((_DWORD *)v24 + 12);
        if ( *((_DWORD *)v24 + 12) )
        {
          do
          {
            v69 = v68++;
            v70 = 480 * v69;
            v71 = 3 * v69;
            v72 = *((_QWORD *)v24 + 30);
            v71 *= 32LL;
            *(_OWORD *)((char *)this + v71 + 776) = *(_OWORD *)(v72 + v70 + 168);
            *(_OWORD *)((char *)this + v71 + 792) = *(_OWORD *)(v72 + v70 + 184);
            *(_OWORD *)((char *)this + v71 + 808) = *(_OWORD *)(v72 + v70 + 200);
            *(_OWORD *)((char *)this + v71 + 824) = *(_OWORD *)(v72 + v70 + 216);
            *(_OWORD *)((char *)this + v71 + 840) = *(_OWORD *)(v72 + v70 + 232);
            *(_OWORD *)((char *)this + v71 + 856) = *(_OWORD *)(v72 + v70 + 248);
            *(_DWORD *)((char *)this + v71 + 780) = *(unsigned __int16 *)(*((_QWORD *)v24 + 30) + v70 + 160);
          }
          while ( v68 != *((_DWORD *)v24 + 12) );
        }
        PTPEngineTraceProducer::OnInput(
          *((PTPEngineTraceProducer **)this + 69),
          (CPTPProcessor *)((char *)this + 720),
          *((struct tagTPAAPSTATE **)this + 249));
        v73 = 4LL;
        v74 = (char *)this + 1352;
        v75 = (_OWORD *)((char *)this + 720);
        do
        {
          v76 = v75[1];
          *(_OWORD *)v74 = *v75;
          v77 = v75[2];
          *((_OWORD *)v74 + 1) = v76;
          v78 = v75[3];
          *((_OWORD *)v74 + 2) = v77;
          v79 = v75[4];
          *((_OWORD *)v74 + 3) = v78;
          v80 = v75[5];
          *((_OWORD *)v74 + 4) = v79;
          v81 = v75[6];
          *((_OWORD *)v74 + 5) = v80;
          v82 = v75[7];
          v75 += 8;
          *((_OWORD *)v74 + 6) = v81;
          v74 += 128;
          *((_OWORD *)v74 - 1) = v82;
          --v73;
        }
        while ( v73 );
        v83 = v75[1];
        *(_OWORD *)v74 = *v75;
        v84 = v75[2];
        *((_OWORD *)v74 + 1) = v83;
        v85 = v75[3];
        *((_OWORD *)v74 + 2) = v84;
        v86 = v75[4];
        *((_OWORD *)v74 + 3) = v85;
        v87 = v75[5];
        *((_OWORD *)v74 + 4) = v86;
        v88 = v75[6];
        v89 = *((_QWORD *)v75 + 14);
        *((_OWORD *)v74 + 5) = v87;
        *((_OWORD *)v74 + 6) = v88;
        *((_QWORD *)v74 + 14) = v89;
        if ( *((_QWORD *)this + 67) )
        {
          CTouchProcessor::FreeFrame((PERESOURCE *)this, v24, 1);
          *((_QWORD *)this + 67) = 0LL;
        }
        v12 = v90;
        goto LABEL_55;
      }
    }
    else
    {
      *((_DWORD *)this + 141) = v42;
    }
    CPTPProcessor::UpdateEnvironment((__int64)this, 0, (struct tagHID_POINTER_DEVICE_INFO *)v32);
    goto LABEL_23;
  }
LABEL_57:
  if ( v13 != (unsigned int *)((char *)v11 + v14) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 192LL);
  *v7 = *((_BYTE *)this + 40);
}
