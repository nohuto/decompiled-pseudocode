/*
 * XREFs of rimDispatchCompleteFrames @ 0x140096874
 * Callers:
 *     rimDispatchCompleteFrame @ 0x140096810 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140097328 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     rimSignalReadComplete @ 0x140098988 (rimSignalReadComplete.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     rimStackAttachAndProcessInput @ 0x1400A05C4 (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimDispatchCompleteFrames(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 a3,
        LARGE_INTEGER *a4,
        unsigned int a5)
{
  int v5; // ebp
  __int64 v6; // r13
  struct RawInputManagerObject *v8; // rsi
  unsigned __int64 v9; // r15
  LARGE_INTEGER *v10; // rdi
  LARGE_INTEGER *v11; // r14
  int v12; // edx
  int v13; // r8d
  struct RIMDEV *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rcx
  __int64 result; // rax
  LARGE_INTEGER v22; // rax
  struct _IO_STATUS_BLOCK v23; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+A8h] [rbp+20h]

  v26 = (int)a4;
  v5 = (int)a4;
  v23.Pointer = 0LL;
  v6 = a3;
  v23.Information = a5;
  v8 = a1;
  v9 = (unsigned __int64)a4 + a5;
  v10 = a4;
  if ( (unsigned __int64)a4 < v9 )
  {
    do
    {
      v11 = v10;
      v10 = (LARGE_INTEGER *)((char *)v10 + v10->LowPart);
      if ( (*((_DWORD *)a2 + 42) & 0x2000) != 0 )
      {
        v22 = v11[4];
        if ( v22.QuadPart != *((_QWORD *)a2 + 3) && v22.QuadPart != *((_QWORD *)a2 + 41) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 580LL);
        if ( !v11[24].LowPart )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 581LL);
      }
      v11[25].LowPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v11[26] = KeQueryPerformanceCounter(0LL);
    }
    while ( (unsigned __int64)v10 < v9 );
    v8 = a1;
    v5 = v26;
    v6 = a3;
  }
  rimStackAttachAndProcessInput((_DWORD)v8, (_DWORD)a2, v5, (unsigned int)&v23, 1);
  if ( !*((_QWORD *)v8 + 104) && !*((_BYTE *)v8 + 776) && *((_QWORD *)a2 + 3) )
  {
    v14 = (struct RIMDEV *)*((_QWORD *)v8 + 6);
    *((_QWORD *)v8 + 6) = a2;
    if ( !v14 || v14 != a2 )
    {
      if ( (*(_BYTE *)(HMPheFromObjectWorker(a2, v12, v13) + 25) & 1) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3545LL);
        UserSetLastError(87);
      }
      _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
      if ( v14 )
        HMUnlockObject(v14);
    }
    v15 = *((_QWORD *)v8 + 7);
    v16 = *((_QWORD *)a2 + 57);
    *((_QWORD *)v8 + 7) = v16;
    if ( !v15 || v15 != v16 )
    {
      if ( v16 )
      {
        if ( (*(_BYTE *)(HMPheFromObjectWorker((_DWORD *)v16, v12, v13) + 25) & 1) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3545LL);
          UserSetLastError(87);
        }
        _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
      }
      if ( v15 )
        HMUnlockObject(v15);
    }
  }
  rimSignalReadComplete(v8, a2, &v23);
  v20 = *(char **)(*((_QWORD *)a2 + 57) + 1072LL);
  if ( v20 )
    GreDeleteFastMutex(v20, v17, v18, v19);
  if ( *(_QWORD *)(v6 + 8) != v6 + 8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131080LL, 635LL);
  result = *((_QWORD *)a2 + 57);
  *(_QWORD *)(result + 1072) = v6;
  return result;
}
