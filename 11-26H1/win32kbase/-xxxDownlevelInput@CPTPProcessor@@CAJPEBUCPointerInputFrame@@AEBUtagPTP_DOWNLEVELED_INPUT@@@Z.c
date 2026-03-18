/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x140157A4C
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x140157984 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x140088250 (InternalMapVirtualKeyEx.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1401743C4 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1401BD4E0 (ApiSetEditionSynthesizeMouseWheel.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 v6; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD LowPart; // r15d
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r8
  bool v13; // cf
  __int16 v14; // ax
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r8d
  _BYTE v19[4]; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+34h] [rbp-2Ch]
  __int128 v21; // [rsp+38h] [rbp-28h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)PtiCurrent(0LL, (__int64)a2) + 157);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LowPart = PerformanceCounter.LowPart;
  InputTraceLogging::PTP::DownlevelInput(a1, a2, PerformanceCounter.QuadPart);
  v11 = *(unsigned int *)a2;
  if ( (unsigned int)v11 < 2 )
  {
    *(_QWORD *)&v22 = 0LL;
    v21 = 0LL;
    WORD1(v21) = 128;
    v14 = 1024;
    if ( (_DWORD)v11 )
      v14 = 2048;
    WORD3(v21) = *((_WORD *)a2 + 2);
    v15 = WORD3(v21);
    LOBYTE(v15) = 1;
    WORD2(v21) = v14;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v19, v15, v11, v10);
    ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v21, v6, LowPart, 134120);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v19, v16, v17);
  }
  else if ( (_DWORD)v11 == 2 )
  {
    v12 = *((_QWORD *)PtiCurrent(1LL, v9) + 59);
    v13 = *((_DWORD *)a2 + 1) != 0;
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = v5;
    *(_DWORD *)((char *)&v21 + 2) = (unsigned __int16)(v13 ? 16546 : -16222);
    v22 = 0LL;
    if ( v12 )
      LOBYTE(v21) = InternalMapVirtualKeyEx(0xA2u, 0, *(_QWORD *)(*(_QWORD *)(v12 + 48) + 32LL));
    xxxProcessKeyEvent((unsigned __int16 *)&v21, 0LL, 0, 0, 0LL, 0LL);
  }
  else
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 376LL);
    return (unsigned int)-1073741811;
  }
  return v2;
}
