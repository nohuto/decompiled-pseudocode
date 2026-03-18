/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D23B8
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D22F0 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x14009F2F0 (InternalMapVirtualKeyEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x14013EA64 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x140196B7C (ApiSetEditionSynthesizeMouseWheel.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rsi
  __int64 v6; // r12
  LARGE_INTEGER PerformanceCounter; // r15
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // cf
  __int16 v12; // ax
  int IsEnabledDeviceUsageNoInline; // eax
  int v14; // edx
  __int64 v15; // rdx
  _BYTE v17[4]; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+34h] [rbp-2Ch]
  __int128 v19; // [rsp+38h] [rbp-28h] BYREF
  __int128 v20; // [rsp+48h] [rbp-18h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)PtiCurrent() + 157);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::PTP::DownlevelInput(a1, a2, PerformanceCounter.QuadPart);
  v8 = *(_DWORD *)a2;
  v9 = *(unsigned int *)a2;
  if ( *(_DWORD *)a2 && (v9 = (unsigned int)(v9 - 1), (_DWORD)v9) )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v10 = *((_QWORD *)PtiCurrent() + 60);
      v11 = *((_DWORD *)a2 + 1) != 0;
      *(_QWORD *)&v19 = 0LL;
      *((_QWORD *)&v19 + 1) = v5;
      *(_DWORD *)((char *)&v19 + 2) = (unsigned __int16)(v11 ? 16546 : -16222);
      v20 = 0LL;
      if ( v10 )
        LOBYTE(v19) = InternalMapVirtualKeyEx(0xA2u, 0, *(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL));
      xxxProcessKeyEvent((unsigned int)&v19, 0, 0, 0, 0LL, 0LL);
    }
    else
    {
      v18 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 380LL);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    *(_QWORD *)&v20 = 0LL;
    v19 = 0LL;
    WORD1(v19) = 128;
    v12 = 1024;
    if ( v8 )
      v12 = 2048;
    WORD2(v19) = v12;
    WORD3(v19) = *((_WORD *)a2 + 2);
    IsEnabledDeviceUsageNoInline = Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline(v9);
    v14 = DWORD1(v20);
    if ( IsEnabledDeviceUsageNoInline )
      v14 = -11446784;
    DWORD1(v20) = v14;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v17, 1);
    ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v19, v6, PerformanceCounter.LowPart, 134120);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v17, v15);
  }
  return v2;
}
