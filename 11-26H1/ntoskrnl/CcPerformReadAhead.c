/*
 * XREFs of CcPerformReadAhead @ 0x140388BC8
 * Callers:
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140384E10 (PsSetPagePriorityThread.c)
 *     CcDecrementOpenCount @ 0x1403A04AC (CcDecrementOpenCount.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1403A1408 (MmWaitForCacheManagerPrefetch.c)
 *     CcPerfLogReadAhead @ 0x1404B80EC (CcPerfLogReadAhead.c)
 *     CcPerfLogReadAheadPrefetch @ 0x1404BC088 (CcPerfLogReadAheadPrefetch.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     MmPrefetchForCacheManager @ 0x140A59FA0 (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x140A718D0 (CcMapAndCopyFromCache.c)
 */

void __fastcall CcPerformReadAhead(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  signed __int64 v3; // rbx
  signed __int64 v4; // rsi
  unsigned int v5; // r15d
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int8 v8; // al
  __int64 v9; // r8
  int v10; // ecx
  void *v11; // rdi
  __int64 v12; // r12
  unsigned int v13; // eax
  signed __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r12d
  struct _KTHREAD *v18; // rdi
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // [rsp+54h] [rbp-F4h]
  int v24; // [rsp+58h] [rbp-F0h]
  unsigned int v25; // [rsp+5Ch] [rbp-ECh]
  BOOL v26; // [rsp+60h] [rbp-E8h]
  int v27; // [rsp+64h] [rbp-E4h]
  int v28; // [rsp+68h] [rbp-E0h]
  int v29; // [rsp+6Ch] [rbp-DCh]
  unsigned int v30; // [rsp+70h] [rbp-D8h]
  signed __int64 v31; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+90h] [rbp-B8h]
  __int64 v33; // [rsp+98h] [rbp-B0h]
  int v34[5]; // [rsp+A0h] [rbp-A8h] BYREF
  int PagePriorityThread; // [rsp+B4h] [rbp-94h]
  __int64 v36; // [rsp+B8h] [rbp-90h]
  __int64 v37; // [rsp+C0h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-80h] BYREF
  void *v39; // [rsp+E0h] [rbp-68h]
  signed __int64 v40; // [rsp+E8h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-58h]
  __int64 v42; // [rsp+F8h] [rbp-50h]
  __int64 v43; // [rsp+100h] [rbp-48h]
  _QWORD *v45; // [rsp+158h] [rbp+10h]
  unsigned int v46; // [rsp+160h] [rbp+18h]
  unsigned int v47; // [rsp+168h] [rbp+20h]

  v45 = a2;
  v2 = a2;
  v32 = 0LL;
  v3 = 0LL;
  v31 = 0LL;
  v4 = 0LL;
  v40 = 0LL;
  v47 = 0;
  v5 = 0;
  v33 = 0LL;
  v26 = 0;
  v46 = 0;
  v27 = 0;
  v28 = 0;
  v24 = 0;
  v29 = 0;
  v30 = 0;
  v37 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  v6 = *(_QWORD *)(a2[5] + 8LL);
  v32 = v6;
  v43 = v6;
  v7 = *(_QWORD *)(v6 + 224);
  v42 = v7;
  v33 = v7;
  v36 = *(_QWORD *)(v6 + 536);
  v37 = v36;
  LOBYTE(a2) = 1;
  v8 = guard_dispatch_icall_no_overrides(v7, a2, 0LL);
  v10 = v8;
  v23 = v8;
  if ( v8 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      v39 = 0LL;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 768), &LockHandle);
        v12 = v45[6];
        if ( v12 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v12 + 80));
          v5 = *(_DWORD *)(v12 + 52);
          v13 = v5;
          v26 = v5 == 0;
          v3 = *(_QWORD *)(v12 + 56);
          v31 = v3;
          if ( v5 > 0x800000 )
            v5 = 0x800000;
          *(_DWORD *)(v12 + 52) = 0;
          if ( v13 )
            *(_QWORD *)(v12 + 64) = v3 + v5;
          if ( (*(_DWORD *)v12 & 0x200000) != 0 )
          {
            v29 = 1;
            v30 = *(_DWORD *)(v12 + 88);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v12 + 80));
          v46 = (*(_DWORD *)v12 >> 18) & 7;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( !v12 || v26 )
          break;
        v14 = *(_QWORD *)(v6 + 8);
        if ( v3 < v14 )
        {
          v28 = 1;
          if ( v3 + v5 >= v14 )
          {
            v5 = v14 - v3;
            v27 = 1;
          }
          v15 = (v5 + 4095) & 0xFFFFF000;
          v47 = v15;
          v5 = v15;
          v16 = v15;
          v25 = v15;
          v4 = v3;
          v40 = v3;
          if ( v29 )
          {
            if ( !v30 )
              KeBugCheckEx(0x34u, 0xACFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v17 = v15;
            if ( v15 > v30 )
              v17 = v30;
          }
          else
          {
            v17 = v15;
          }
          if ( (xmmword_140FC0C10 & 0x20000) != 0 )
          {
            CcPerfLogReadAhead(a1, &v31, v15, v46);
            v16 = v25;
          }
          while ( v16 )
          {
            if ( v17 > v16 )
              v17 = v16;
            if ( (xmmword_140FC0C10 & 0x20000) != 0 )
              CcPerfLogReadAheadPrefetch(a1, &v31, v17, v46);
            v24 |= MmPrefetchForCacheManager((_DWORD)v45, v3, 0, v17, v46);
            v16 = v25 - v17;
            v25 -= v17;
            v3 += v17;
            v31 = v3;
            v11 = v39;
          }
        }
      }
      if ( !v11 )
        break;
      CurrentThread = KeGetCurrentThread();
      PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
      v34[0] = 0;
      MmWaitForCacheManagerPrefetch(v11);
      v18 = CurrentThread;
      PsSetPagePriorityThread((__int64)CurrentThread, v46);
      LOBYTE(v19) = 1;
      CcMapAndCopyFromCache(v45, v4, v47, v19, 0LL, v34, v46, *(_QWORD *)(a1 + 24), 0LL);
      PsSetPagePriorityThread((__int64)v18, PagePriorityThread);
    }
    v2 = v45;
    v7 = v42;
    v10 = v23;
  }
  __addgsdword(0x89A4u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( v10 )
    guard_dispatch_icall_no_overrides(v7, *(_QWORD *)(v43 + 216), v9);
  v20 = v36;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 768), &LockHandle);
  v21 = v2[6];
  if ( v21 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v21 + 80));
    *(_DWORD *)v21 &= ~0x10000u;
    if ( v27 && (v45[10] & 0x20) != 0 )
      *(_QWORD *)(v21 + 64) = 0LL;
    if ( v28 && !v24 )
      *(_DWORD *)v21 &= ~0x20000u;
    KxReleaseSpinLock((PKSPIN_LOCK)(v21 + 80));
    v2 = v45;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  v22 = *(_QWORD *)(a1 + 24);
  if ( v22 )
    IoDiskIoAttributionDereference(v22);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 768), &LockHandle);
  CcDecrementOpenCount(v6);
  *(_DWORD *)(v6 + 152) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
