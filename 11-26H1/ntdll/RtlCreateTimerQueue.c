/*
 * XREFs of RtlCreateTimerQueue @ 0x1800FDBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180067740 (RtlpTpRevertCapture.c)
 */

__int64 __fastcall RtlCreateTimerQueue(__int64 *a1)
{
  int v2; // ebx
  __int64 Heap_0; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  HANDLE v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a1 = 0LL;
  v2 = RtlpTpRevertCapture(&v7, 0);
  if ( v2 >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0();
    v4 = Heap_0;
    if ( Heap_0 )
    {
      *(_DWORD *)Heap_0 = 1;
      *(_QWORD *)(Heap_0 + 8) = 0LL;
      *(_QWORD *)(Heap_0 + 16) = 0LL;
      v5 = (_QWORD *)(Heap_0 + 24);
      v5[1] = v5;
      *v5 = v5;
      *(_QWORD *)(v4 + 40) = 0LL;
      *a1 = v4;
      v2 = 0;
    }
    else
    {
      v2 = -1073741801;
    }
  }
  RtlpTpResumeImpersonation(v7);
  return (unsigned int)v2;
}
