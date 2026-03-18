/*
 * XREFs of ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140062BB4
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140060B24 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckAndSendFindMyPenWnf(LARGE_INTEGER *this, const struct CPointerInputFrame *a2)
{
  __int64 v2; // r8
  char v4; // cl
  __int64 v5; // rax
  LARGE_INTEGER PerformanceCounter; // r8
  unsigned __int64 v7; // rcx
  int CurrentWin32kSessionId; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)a2 + 32);
  if ( (*(_DWORD *)(v2 + 368) & 8) == 0 || (v4 = 0, (*(_DWORD *)(*(_QWORD *)(v2 + 16) + 168LL) & 0x8000) != 0) )
    v4 = 1;
  if ( *((_DWORD *)a2 + 12) )
  {
    v5 = *((_QWORD *)a2 + 30);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 168) == 3 )
      {
        if ( v4 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v7 = this[15].QuadPart + 5000 * gliQpcFreq.QuadPart / 0x3E8uLL;
          if ( v7 < PerformanceCounter.QuadPart )
          {
            this[15] = PerformanceCounter;
            CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v7);
            if ( (int)ZwUpdateWnfStateData(
                        &WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL,
                        0LL,
                        0LL,
                        0LL,
                        &CurrentWin32kSessionId,
                        0,
                        0) < 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17490LL);
          }
        }
      }
    }
  }
}
