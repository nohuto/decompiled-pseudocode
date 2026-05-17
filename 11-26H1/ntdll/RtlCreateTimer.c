/*
 * XREFs of RtlCreateTimer @ 0x1800674B0
 * Callers:
 *     RtlSetTimer @ 0x1801595A0 (RtlSetTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TpAllocTimer @ 0x18004EC00 (TpAllocTimer.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x18004F280 (RtlpTpInitializeData.c)
 *     RtlpTpDeleteData @ 0x180067444 (RtlpTpDeleteData.c)
 *     RtlpTpRevertCapture @ 0x180067740 (RtlpTpRevertCapture.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateTimer(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 Heap_0; // rbx
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  volatile signed __int64 *v15; // rdi
  __int64 *v16; // r14
  __int64 v17; // rax
  void *v19; // [rsp+28h] [rbp-90h] BYREF
  __int64 v20; // [rsp+30h] [rbp-88h]
  __int64 v21; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v22[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v23; // [rsp+48h] [rbp-70h]
  __int64 v24; // [rsp+50h] [rbp-68h]
  __int64 v25; // [rsp+58h] [rbp-60h]
  __int128 v26; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v27)(__int64, __int64); // [rsp+70h] [rbp-48h]
  int v28; // [rsp+78h] [rbp-40h]
  int v29; // [rsp+7Ch] [rbp-3Ch]
  int v30; // [rsp+80h] [rbp-38h]

  v22[1] = 0;
  memset_thunk_772440563353939046(v22, 0, 0x44uLL);
  v19 = 0LL;
  Heap_0 = 0LL;
  v20 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a2 = 0LL;
  v12 = RtlpTpRevertCapture(&v19, a7 & 0x100);
  if ( v12 >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0();
    v20 = Heap_0;
    if ( Heap_0 )
    {
      *(_QWORD *)(Heap_0 + 64) = 0LL;
      *(_DWORD *)(Heap_0 + 92) = 0;
      v12 = RtlpTpInitializeData(Heap_0 + 16, a7, (__int64)v19);
      if ( v12 >= 0 )
      {
        *(_QWORD *)(Heap_0 + 32) = a3;
        *(_QWORD *)(Heap_0 + 40) = a4;
        *(_DWORD *)(Heap_0 + 48) = 0;
        *(_BYTE *)(Heap_0 + 88) = a6 != 0;
        *(_QWORD *)(Heap_0 + 56) = a1;
        *(_QWORD *)(Heap_0 + 72) = 0LL;
        *(_QWORD *)(Heap_0 + 80) = 0LL;
        v22[0] = 3;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0;
        v29 = 1;
        v30 = 72;
        v13 = 0;
        if ( (a7 & 0xE0) != 0 )
        {
          v13 = 2;
          v28 = 2;
        }
        if ( (a7 & 0x10) != 0 )
          v28 = v13 | 1;
        v27 = RtlpTpTimerFinalizationCallback;
        v12 = TpAllocTimer((__int64 *)(Heap_0 + 64), (__int64)RtlpTpTimerCallback, Heap_0, (__int64)v22);
        if ( v12 >= 0 )
        {
          v21 = -10000LL * a5;
          _InterlockedIncrement((volatile signed __int32 *)a1);
          v15 = (volatile signed __int64 *)(a1 + 8);
          RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8), v14);
          v16 = (__int64 *)(a1 + 24);
          v17 = *v16;
          if ( *(__int64 **)(*v16 + 8) != v16 )
            __fastfail(3u);
          *(_QWORD *)Heap_0 = v17;
          *(_QWORD *)(Heap_0 + 8) = v16;
          *(_QWORD *)(v17 + 8) = Heap_0;
          *v16 = Heap_0;
          *a2 = Heap_0;
          TpSetTimerEx(*(_QWORD *)(Heap_0 + 64), &v21, a6, 0LL);
          RtlReleaseSRWLockExclusive(v15);
          Heap_0 = 0LL;
          v20 = 0LL;
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
    RtlpTpDeleteData((void **)(Heap_0 + 16));
    RtlFreeHeap_0();
  }
  RtlpTpResumeImpersonation(v19);
  return (unsigned int)v12;
}
