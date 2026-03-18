/*
 * XREFs of PsSessionCreate @ 0x1409638D4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x140962988 (MiMapProcessExecutable.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PspFreeSessionId @ 0x1407FF230 (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x1407FF284 (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x1407FF39C (PspMarkSessionReferenceProcess.c)
 *     PsDereferenceSession @ 0x140AF14D0 (PsDereferenceSession.c)
 *     PspSessionObjectCreate @ 0x140B2D6B4 (PspSessionObjectCreate.c)
 *     PspMakeSessionVisible @ 0x140B550DC (PspMakeSessionVisible.c)
 *     PspInitializeSessionGlobals @ 0x140B6AFFC (PspInitializeSessionGlobals.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PsSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rsi
  unsigned __int32 NewSessionId; // edi
  __int64 Pool2; // rax
  __int64 v4; // rbx
  void *CurrentServerSilo; // rax
  int v6; // ebx
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int32 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  result = PspInitializeSessionGlobals();
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    NewSessionId = PspGetNewSessionId();
    if ( NewSessionId == -1 )
      return 3221225495LL;
    Pool2 = ExAllocatePool2(0x40uLL);
    v4 = Pool2;
    if ( !Pool2 )
    {
      PspFreeSessionId(NewSessionId);
      return 3221225495LL;
    }
    *(_DWORD *)Pool2 = 1;
    *(_DWORD *)(Pool2 + 8) = NewSessionId;
    *(_DWORD *)(Pool2 + 48) = PsDefaultSystemLocaleId;
    *(_QWORD *)(Pool2 + 168) = RtlGetInterruptTimePrecise((unsigned __int64 *)&v8);
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
      v7[0] = &v8;
      v9 = NewSessionId;
      v8 = v4;
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
