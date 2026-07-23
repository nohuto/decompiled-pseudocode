/*
 * XREFs of HalpDmaFlushBufferWithEmergencyResources @ 0x140439EB8
 * Callers:
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     KeFlushIoBuffers @ 0x140439C90 (KeFlushIoBuffers.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall HalpDmaFlushBufferWithEmergencyResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        char a6)
{
  ULONG v9; // r15d
  struct _MDL **v10; // r12
  struct _MDL *Object; // rbx
  MEMORY_CACHING_TYPE v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID v15; // r14
  unsigned int v16; // edi
  int v17; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140E3EAA8.QueueListEntry.Blink, &LockHandle);
  v9 = a3 & 0xFFF;
  v10 = (struct _MDL **)(a2 + 48 + 8LL * (unsigned int)((unsigned __int64)(a3 - *(_QWORD *)(a2 + 32)) >> 12));
  Object = (struct _MDL *)stru_140E3EAA8.WaitBlock[3].Object;
  *(_DWORD *)(stru_140E3EAA8.Spare18 + 40) = 4096 - v9;
  Object->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  Object->ByteOffset = v9;
  while ( a4 )
  {
    v12 = MmNonCached;
    Object[1].Next = *v10;
    while ( 1 )
    {
      v15 = MmMapLockedPagesWithReservedMapping(stru_140E3EAA8.WaitBlock[2].SparePtr, 0x446C6148u, Object, v12);
      if ( v15 )
        break;
      if ( ++v12 >= MmMaximumCacheType )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF01uLL, 0LL, 0LL);
    }
    v16 = a4;
    if ( a4 >= 4096 - v9 )
      v16 = 4096 - v9;
    if ( !a6 )
    {
      LOBYTE(v13) = 1;
      KeFlushIoBuffers((ULONG_PTR)Object, a5 == 0, v13, v14);
    }
    MmUnmapReservedMapping(v15, 0x446C6148u, Object);
    a4 -= v16;
    a3 += v16;
    ++v10;
    v9 = 0;
    v17 = a4;
    if ( a4 > 0x1000 )
      v17 = 4096;
    Object->ByteCount = v17;
    Object->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
    Object->ByteOffset = a3 & 0xFFF;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
