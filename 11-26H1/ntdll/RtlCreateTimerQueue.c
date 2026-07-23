/*
 * XREFs of RtlCreateTimerQueue @ 0x1800FD330
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpTpResumeImpersonation @ 0x1800397B8 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180087B90 (RtlpTpRevertCapture.c)
 */

NTSTATUS __cdecl RtlCreateTimerQueue(PHANDLE TimerQueueHandle)
{
  int v2; // ebx
  _QWORD *Heap_0; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  HANDLE TokenHandle; // [rsp+38h] [rbp+10h] BYREF

  TokenHandle = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  *TimerQueueHandle = 0LL;
  v2 = RtlpTpRevertCapture(&TokenHandle, 0);
  if ( v2 >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
    v4 = Heap_0;
    if ( Heap_0 )
    {
      *(_DWORD *)Heap_0 = 1;
      Heap_0[1] = 0LL;
      Heap_0[2] = 0LL;
      v5 = Heap_0 + 3;
      v5[1] = v5;
      *v5 = v5;
      v4[5] = 0LL;
      *TimerQueueHandle = v4;
      v2 = 0;
    }
    else
    {
      v2 = -1073741801;
    }
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v2;
}
