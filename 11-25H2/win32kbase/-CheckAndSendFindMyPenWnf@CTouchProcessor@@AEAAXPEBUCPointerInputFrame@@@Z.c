/*
 * XREFs of ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1401FB0DC
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckAndSendFindMyPenWnf(LARGE_INTEGER *this, const struct CPointerInputFrame *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  char v5; // r8
  __int64 v6; // rax
  LARGE_INTEGER PerformanceCounter; // r8
  int CurrentWin32kSessionId; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)a2 + 32);
  if ( (*(_DWORD *)(v2 + 368) & 8) == 0 || (v4 = *(_QWORD *)(v2 + 16), v5 = 0, (*(_DWORD *)(v4 + 168) & 0x8000) != 0) )
    v5 = 1;
  if ( *((_DWORD *)a2 + 12) )
  {
    v6 = *((_QWORD *)a2 + 30);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 168) == 3 )
      {
        if ( v5 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          if ( this[15].QuadPart + 5000 * gliQpcFreq.QuadPart / 0x3E8uLL < PerformanceCounter.QuadPart )
          {
            this[15] = PerformanceCounter;
            CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
            if ( (int)ZwUpdateWnfStateData(
                        &WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL,
                        0LL,
                        0LL,
                        0LL,
                        &CurrentWin32kSessionId) < 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17550);
          }
        }
      }
    }
  }
}
