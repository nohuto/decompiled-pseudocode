/*
 * XREFs of KeQuerySchedulingGroupHistory @ 0x14049AE7C
 * Callers:
 *     PspQueryRateControlHistory @ 0x140A856AC (PspQueryRateControlHistory.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall KeQuerySchedulingGroupHistory(__int64 a1, __int64 *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v6; // rbx
  unsigned int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  LARGE_INTEGER v14; // rax
  unsigned __int64 v15; // r8
  LARGE_INTEGER v16; // rcx
  unsigned __int64 v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v9 = KeNumberProcessors_0;
  *a2 = 0LL;
  if ( v9 )
  {
    v10 = (__int64 *)(a1 + 176);
    v11 = v9;
    do
    {
      v12 = *v10;
      v10 += 58;
      v13 = v6 | v12;
      v6 = v13;
      --v11;
    }
    while ( v11 );
    *a2 = v13;
  }
  *a3 = PsDfssGenerationLengthMS;
  v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v15 = (unsigned int)*a3;
  v16 = v14;
  v17 = 1000 * (v14.QuadPart - *(_QWORD *)(a1 + 24));
  *(LARGE_INTEGER *)(a1 + 24) = v16;
  *a4 = v17 / PerformanceFrequency.QuadPart / v15;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
