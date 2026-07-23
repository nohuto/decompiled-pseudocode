/*
 * XREFs of HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14043A160
 * Callers:
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 *     KeFlushIoBuffers @ 0x140439C90 (KeFlushIoBuffers.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall HalpDmaSyncMapBuffersWithEmergencyResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        size_t Size,
        char a6,
        char a7,
        char a8)
{
  _QWORD *v8; // rbp
  struct _MDL *Object; // r15
  struct _MDL *Thread; // rsi
  ULONG v13; // r12d
  unsigned int v14; // r14d
  unsigned __int64 v15; // r9
  struct _MDL **v16; // r9
  PVOID SparePtr; // rcx
  unsigned __int64 v18; // rbx
  char v19; // r13
  MEMORY_CACHING_TYPE v20; // edi
  PVOID v21; // rax
  void *v22; // rbp
  unsigned int v23; // edi
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // edx
  __int16 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v30; // eax
  struct _MDL **v31; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned int AdapterCacheAlignment; // [rsp+A8h] [rbp+10h]
  __int64 v35; // [rsp+B0h] [rbp+18h]
  _QWORD *v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v8 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140E3EAA8.QueueListEntry.Blink, &LockHandle);
  Object = (struct _MDL *)stru_140E3EAA8.WaitBlock[3].Object;
  Thread = (struct _MDL *)stru_140E3EAA8.WaitBlock[2].Thread;
  v13 = a3 & 0xFFF;
  v14 = Size;
  v15 = (unsigned __int64)(a3 - *(_QWORD *)(a2 + 32)) >> 12;
  *(_DWORD *)(stru_140E3EAA8.Spare18 + 44) = v13;
  Object->ByteCount = 4096 - v13;
  Object->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  Thread->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v16 = (struct _MDL **)(a2 + 8 * ((unsigned int)v15 + 6LL));
  Thread->ByteOffset = v13;
  for ( Thread->ByteCount = 4096 - v13; ; Thread->ByteCount = v26 )
  {
    v31 = v16;
    if ( !v14 )
      break;
    if ( (v8[6] & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v18 = v13 + (v8[6] & 0xFFFFFFFFFFFFF000uLL);
      v19 = 0;
    }
    else
    {
      SparePtr = stru_140E3EAA8.WaitBlock[3].SparePtr;
      Thread[1].Next = (struct _MDL *)(*v8 >> 12);
      v18 = (unsigned __int64)MmMapLockedPagesWithReservedMapping(SparePtr, 0x446C6148u, Thread, MmCached);
      if ( !v18 )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF00uLL, 0LL, 0LL);
      v16 = v31;
      v19 = 1;
    }
    v20 = MmNonCached;
    Object[1].Next = *v16;
    while ( 1 )
    {
      v21 = MmMapLockedPagesWithReservedMapping(stru_140E3EAA8.WaitBlock[2].SparePtr, 0x446C6148u, Object, v20);
      v22 = v21;
      if ( v21 )
        break;
      if ( ++v20 >= MmMaximumCacheType )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF01uLL, 0LL, 0LL);
    }
    v23 = 4096 - v13;
    if ( v14 < 4096 - v13 )
      v23 = v14;
    v13 = 0;
    if ( a6 )
    {
      if ( !a7 )
        guard_dispatch_icall_no_overrides(v18, v21);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v24 = ~(AdapterCacheAlignment - 1);
        v25 = (unsigned int)v18 - ((unsigned int)v24 & (unsigned int)v18);
        Thread->ByteOffset = v24 & v18 & 0xFFF;
        Thread->StartVa = (PVOID)((v18 - v25) & 0xFFFFFFFFFFFFF000uLL);
        Thread->ByteCount = v24 & (v25 + v23 + AdapterCacheAlignment - 1);
        if ( !a8 )
        {
          LOBYTE(v24) = 1;
          KeFlushIoBuffers((ULONG_PTR)Thread, 1, v24, AdapterCacheAlignment);
        }
      }
      if ( !a7 )
        memmove(v22, (const void *)v18, v23);
    }
    MmUnmapReservedMapping(v22, 0x446C6148u, Object);
    if ( v19 )
      MmUnmapReservedMapping((PVOID)v18, 0x446C6148u, Thread);
    v14 -= v23;
    v26 = v14;
    v16 = v31 + 1;
    v27 = v23 + v35;
    v8 = (_QWORD *)v36[1];
    v28 = v23 + v35;
    v36 = v8;
    if ( v14 > 0x1000 )
      v26 = 4096;
    v35 += v23;
    v29 = v28 & 0xFFFFFFFFFFFFF000uLL;
    Object->ByteCount = v26;
    Object->StartVa = (PVOID)v29;
    v30 = v27 & 0xFFF;
    Object->ByteOffset = v30;
    Thread->StartVa = (PVOID)v29;
    Thread->ByteOffset = v30;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
