/*
 * XREFs of PsSessionCreate @ 0x140A0975C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x140A08810 (MiMapProcessExecutable.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspFreeSessionId @ 0x140804C60 (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x140804CB4 (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x140804DCC (PspMarkSessionReferenceProcess.c)
 *     PspInitializeSessionGlobals @ 0x140A098DC (PspInitializeSessionGlobals.c)
 *     PsDereferenceSession @ 0x140AF4110 (PsDereferenceSession.c)
 *     PspSessionObjectCreate @ 0x140B2F734 (PspSessionObjectCreate.c)
 *     PspMakeSessionVisible @ 0x140B57978 (PspMakeSessionVisible.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PsSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rsi
  unsigned __int32 NewSessionId; // edi
  LARGE_INTEGER *Pool2; // rax
  __int64 v4; // rbx
  void *CurrentServerSilo; // rax
  int v6; // ebx
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int32 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  result = PspInitializeSessionGlobals();
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    NewSessionId = PspGetNewSessionId();
    if ( NewSessionId == -1 )
      return 3221225495LL;
    Pool2 = (LARGE_INTEGER *)ExAllocatePool2(0x40uLL);
    v4 = (__int64)Pool2;
    if ( !Pool2 )
    {
      PspFreeSessionId(NewSessionId);
      return 3221225495LL;
    }
    Pool2->LowPart = 1;
    Pool2[1].LowPart = NewSessionId;
    Pool2[6].LowPart = PsDefaultSystemLocaleId;
    Pool2[21] = RtlGetInterruptTimePrecise(&PerformanceCounter);
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    *(_DWORD *)(v4 + 12) = 1;
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    *(_QWORD *)(v4 + 160) = CurrentServerSilo;
    if ( CurrentServerSilo )
    {
      ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
      _InterlockedCompareExchange(
        *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v4 + 160)) + 161),
        NewSessionId,
        -1);
    }
    PspMarkSessionReferenceProcess((__int64)Process, v4);
    if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400000) != 0 )
    {
      v10 = 0;
      v7[0] = &PerformanceCounter;
      v9 = NewSessionId;
      PerformanceCounter.QuadPart = v4;
      v7[1] = 12LL;
      EtwTraceKernelEvent((int)v7, 1, 0x20400000u, 587, 5249027);
    }
    PspMakeSessionVisible(v4);
    v6 = PspSessionObjectCreate();
    if ( v6 < 0 )
      PsDereferenceSession();
    return (unsigned int)v6;
  }
  return result;
}
