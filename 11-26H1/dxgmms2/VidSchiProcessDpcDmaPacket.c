/*
 * XREFs of VidSchiProcessDpcDmaPacket @ 0x1400279C0
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1400271BC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140028570 (VidSchiProcessDpcSystemRequest.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiProcessDpcDmaPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  KSPIN_LOCK *v5; // rbp
  int v6; // eax
  _QWORD *v7; // rsi
  KSPIN_LOCK *v8; // rcx
  _QWORD *v9; // rax
  void (__fastcall *v10)(KSPIN_LOCK); // rax
  int v11; // ecx
  int v12; // r8d
  void (__fastcall *v13)(KSPIN_LOCK); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+68h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(unsigned int *)(v3 + 1432);
  v5 = *(KSPIN_LOCK **)(*(_QWORD *)(v1 + 104) + 40LL);
  if ( a1 != (struct _VIDSCH_DMA_PACKET *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(v3 + 8 * v4 + 1440),
                                            0LL,
                                            (signed __int64)a1) )
  {
    WdLogSingleEntry2(1LL, v5, a1);
    WdLogGlobalForLineNumber = 11645;
    DxgkLogInternalTriageEvent(
      v11,
      0x40000,
      v12,
      (unsigned int)L"Hardware queue is inconsistant",
      (__int64)v5,
      (__int64)a1,
      0LL,
      0LL);
  }
  _InterlockedExchange((volatile __int32 *)(v3 + 1432), ((_BYTE)v4 + 1) & 0xF);
  *(_DWORD *)(v3 + 520) = ((unsigned __int8)*(_DWORD *)(v3 + 520) + 1) & 0xF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v5 + 252, &LockHandle);
  v6 = *((_DWORD *)a1 + 23);
  if ( (v6 & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 23) = v6 & 0xFFFFFBFF;
    if ( *(_DWORD *)(v3 + 16520) != -1 )
    {
      v10 = (void (__fastcall *)(KSPIN_LOCK))v5[417];
      if ( v10 )
        v10(v5[421]);
    }
  }
  if ( (*((_DWORD *)a1 + 23) & 0x800) != 0 )
  {
    if ( *(_DWORD *)(v5[*(unsigned int *)(*((_QWORD *)a1 + 7) + 396LL) + 431] + 44488) != -1 )
    {
      v13 = (void (__fastcall *)(KSPIN_LOCK))v5[415];
      if ( v13 )
        v13(v5[421]);
    }
    *((_DWORD *)a1 + 23) &= ~0x800u;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( *((_DWORD *)a1 + 22) == 3 )
  {
    VidSchiProcessDpcSystemRequest(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 10 || *((_DWORD *)a1 + 18) == 18 )
  {
    VidSchiProcessDpcCompletedPacket(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 11 )
  {
    VidSchiProcessDpcPreemptedPacket((__int64)a1);
  }
  v7 = (_QWORD *)((char *)a1 + 16);
  v8 = (KSPIN_LOCK *)(*(_QWORD *)(v3 + 24) + 2024LL);
  memset(&v15, 0, sizeof(v15));
  KeAcquireInStackQueuedSpinLock(v8, &v15);
  v9 = *(_QWORD **)(v3 + 16536);
  if ( *v9 != v3 + 16528 )
    __fastfail(3u);
  *v7 = v3 + 16528;
  *((_QWORD *)a1 + 3) = v9;
  *v9 = v7;
  *(_QWORD *)(v3 + 16536) = v7;
  KeReleaseInStackQueuedSpinLock(&v15);
}
