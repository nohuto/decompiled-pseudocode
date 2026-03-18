/*
 * XREFs of rimDispatchCompleteFrames @ 0x1401342F4
 * Callers:
 *     rimDispatchCompleteFrame @ 0x140134290 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140183228 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     rimSignalReadComplete @ 0x140035980 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1400E69D8 (rimStackAttachAndProcessInput.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LARGE_INTEGER __fastcall rimDispatchCompleteFrames(
        struct RawInputManagerObject *a1,
        LARGE_INTEGER *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int *v5; // r14
  __int64 v6; // r13
  struct RawInputManagerObject *v8; // rdi
  unsigned __int64 v9; // r12
  LARGE_INTEGER *v10; // rsi
  LARGE_INTEGER *v11; // r15
  LARGE_INTEGER v12; // rax
  char *v13; // rcx
  LARGE_INTEGER result; // rax
  struct _IO_STATUS_BLOCK v15; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-18h] BYREF

  v5 = a4;
  v15.Pointer = 0LL;
  v6 = a3;
  v15.Information = a5;
  v8 = a1;
  v9 = (unsigned __int64)a4 + a5;
  v10 = (LARGE_INTEGER *)a4;
  if ( (unsigned __int64)a4 < v9 )
  {
    do
    {
      v11 = v10;
      v10 = (LARGE_INTEGER *)((char *)v10 + v10->LowPart);
      if ( (a2[21].LowPart & 0x2000) != 0 )
      {
        v12 = v11[4];
        if ( v12.QuadPart != a2[3].QuadPart && v12.QuadPart != a2[41].QuadPart )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 580LL);
        if ( !v11[24].LowPart )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 581LL);
      }
      v11[25].LowPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v11[26] = KeQueryPerformanceCounter(0LL);
    }
    while ( (unsigned __int64)v10 < v9 );
    v8 = a1;
    v5 = a4;
    v6 = a3;
  }
  rimStackAttachAndProcessInput((__int64)v8, (__int64)a2, v5, (__m128i *)&v15, 1);
  if ( !*((_QWORD *)v8 + 104) && !*((_BYTE *)v8 + 776) && a2[3].QuadPart )
  {
    v16[1] = a2;
    v16[0] = (char *)v8 + 48;
    HMAssignmentLock((__int64)v16, 0LL);
    v17[0] = (char *)v8 + 56;
    v17[1] = a2[57].QuadPart;
    HMAssignmentLock((__int64)v17, 0LL);
  }
  rimSignalReadComplete(v8, a2, &v15);
  v13 = *(char **)(a2[57].QuadPart + 1072);
  if ( v13 )
    GreDeleteFastMutex(v13);
  if ( *(_QWORD *)(v6 + 8) != v6 + 8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131080LL, 635LL);
  result = a2[57];
  *(_QWORD *)(result.QuadPart + 1072) = v6;
  return result;
}
