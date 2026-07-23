/*
 * XREFs of RtlCreateTimer @ 0x180087900
 * Callers:
 *     RtlSetTimer @ 0x180159470 (RtlSetTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TpAllocTimer @ 0x180039180 (TpAllocTimer.c)
 *     RtlpTpResumeImpersonation @ 0x1800397B8 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x180039800 (RtlpTpInitializeData.c)
 *     RtlpTpDeleteData @ 0x180087894 (RtlpTpDeleteData.c)
 *     RtlpTpRevertCapture @ 0x180087B90 (RtlpTpRevertCapture.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCreateTimer(
        HANDLE TimerQueueHandle,
        PHANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG DueTime,
        ULONG Period,
        ULONG Flags)
{
  _QWORD *Heap_0; // rbx
  NTSTATUS v12; // edi
  int v13; // eax
  _RTL_SRWLOCK *v14; // rdi
  char *v15; // r14
  __int64 v16; // rax
  HANDLE TokenHandle; // [rsp+28h] [rbp-90h] BYREF
  _QWORD *v19; // [rsp+30h] [rbp-88h]
  LARGE_INTEGER v20; // [rsp+38h] [rbp-80h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+40h] [rbp-78h] BYREF

  *(&CallbackEnviron.Version + 1) = 0;
  memset_thunk_772440563353939046(&CallbackEnviron, 0, 0x44uLL);
  TokenHandle = 0LL;
  Heap_0 = 0LL;
  v19 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  *Handle = 0LL;
  v12 = RtlpTpRevertCapture(&TokenHandle);
  if ( v12 >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v19 = Heap_0;
    if ( Heap_0 )
    {
      Heap_0[8] = 0LL;
      *((_DWORD *)Heap_0 + 23) = 0;
      v12 = RtlpTpInitializeData((HANDLE *)Heap_0 + 2, Flags, TokenHandle);
      if ( v12 >= 0 )
      {
        Heap_0[4] = Function;
        Heap_0[5] = Context;
        *((_DWORD *)Heap_0 + 12) = 0;
        *((_BYTE *)Heap_0 + 88) = Period != 0;
        Heap_0[7] = TimerQueueHandle;
        Heap_0[9] = 0LL;
        Heap_0[10] = 0LL;
        CallbackEnviron.Version = 3;
        memset(&CallbackEnviron.Pool, 0, 52);
        CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
        CallbackEnviron.Size = 72;
        v13 = 0;
        if ( (Flags & 0xE0) != 0 )
        {
          v13 = 2;
          CallbackEnviron.u.Flags = 2;
        }
        if ( (Flags & 0x10) != 0 )
          CallbackEnviron.u.Flags = v13 | 1;
        CallbackEnviron.FinalizationCallback = (void (__fastcall *)(_TP_CALLBACK_INSTANCE *, void *))RtlpTpTimerFinalizationCallback;
        v12 = TpAllocTimer((PTP_TIMER *)Heap_0 + 8, (PTP_TIMER_CALLBACK)RtlpTpTimerCallback, Heap_0, &CallbackEnviron);
        if ( v12 >= 0 )
        {
          v20.QuadPart = -10000LL * DueTime;
          _InterlockedIncrement((volatile signed __int32 *)TimerQueueHandle);
          v14 = (_RTL_SRWLOCK *)((char *)TimerQueueHandle + 8);
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
          v15 = (char *)TimerQueueHandle + 24;
          v16 = *(_QWORD *)v15;
          if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 )
            __fastfail(3u);
          *Heap_0 = v16;
          Heap_0[1] = v15;
          *(_QWORD *)(v16 + 8) = Heap_0;
          *(_QWORD *)v15 = Heap_0;
          *Handle = Heap_0;
          TpSetTimerEx((PTP_TIMER)Heap_0[8], &v20, Period, 0);
          RtlReleaseSRWLockExclusive(v14);
          Heap_0 = 0LL;
          v19 = 0LL;
          v12 = 0;
        }
      }
    }
    else
    {
      v12 = -1073741801;
    }
  }
  if ( Heap_0 )
  {
    RtlpTpDeleteData((void **)Heap_0 + 2);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v12;
}
