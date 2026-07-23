/*
 * XREFs of HalpDmaSyncMapBuffers @ 0x14035DBE0
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035D320 (HalPutScatterGatherListV2.c)
 *     IopMapTransfer @ 0x14035E030 (IopMapTransfer.c)
 *     IoFlushAdapterBuffersV2 @ 0x14035E4B0 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x140436D4C (HalpDmaFlushContiguousTransferV3.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x140438E00 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404396C4 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x14043A03C (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035DF88 (HalpDmaAcquireBufferMappings.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14043A160 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpFlushMapBuffers @ 0x14058BDDC (HalpFlushMapBuffers.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall HalpDmaSyncMapBuffers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        size_t Size,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // r10
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // bl
  char *v13; // rdi
  int v14; // ebp
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  char *v18; // rdi
  unsigned int v19; // r12d
  char v20; // si
  char *v21; // rdi
  unsigned int v22; // r14d
  int v23; // edx
  unsigned int v24; // esi
  char *v25; // rax
  __int64 v26; // rdx
  unsigned int i; // ecx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-A8h]
  __int64 v32; // [rsp+40h] [rbp-88h]
  int v33; // [rsp+48h] [rbp-80h]
  PMDL MemoryDescriptorList[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD LockHandle[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+80h] [rbp-48h]
  char v37; // [rsp+D8h] [rbp+10h]

  *(_OWORD *)MemoryDescriptorList = 0LL;
  v36 = 0LL;
  v8 = a4;
  memset(LockHandle, 0, sizeof(LockHandle));
  v10 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
  {
    v13 = *(char **)(a2 + 24);
  }
  else
  {
    v25 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u);
    v8 = a4;
    v13 = v25;
  }
  if ( v13 )
  {
    v14 = Size;
    v15 = a3 & 0xFFF;
    v37 = 0;
    v16 = (v15 + (unsigned __int64)(unsigned int)Size + 4095) >> 12;
    if ( CurrentIrql > 2u )
    {
      v26 = v8;
      for ( i = 0; i < (unsigned int)v16; ++i )
      {
        if ( (*(_QWORD *)(v26 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
        v26 = *(_QWORD *)(v26 + 8);
      }
    }
    else
    {
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
          v8 = a4;
        }
        v37 = 1;
      }
      HalpDmaAcquireBufferMappings(v15, v8, (unsigned int)v16, MemoryDescriptorList);
      v8 = a4;
    }
    v17 = v8;
    v18 = &v13[-*(unsigned int *)(v10 + 44) - *(_QWORD *)(v10 + 32)];
    v19 = Size;
    v20 = a6;
    v21 = &v18[a3];
    v32 = v8;
    v22 = (unsigned __int16)v21 & 0xFFF;
    v23 = (int)v21;
    v33 = (int)v21;
    if ( !*(_BYTE *)(a1 + 445) && !a6 )
    {
      HalpFlushMapBuffers(a1, (_DWORD)v21, v8, Size, 0, a8);
      v17 = v32;
      v23 = (int)v21;
      LODWORD(v8) = a4;
    }
    if ( (_DWORD)Size )
    {
      do
      {
        v24 = v19;
        if ( v19 >= 4096 - v22 )
          v24 = 4096 - v22;
        if ( !a7 )
        {
          if ( a6 )
            guard_dispatch_icall_no_overrides(v22 + (*(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFF000uLL), v21, v24);
          else
            memmove(v21, (const void *)(v22 + (*(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFF000uLL)), v24);
          v17 = v32;
        }
        v17 = *(_QWORD *)(v17 + 8);
        v22 = 0;
        v21 += v24;
        v32 = v17;
        v19 -= v24;
      }
      while ( v19 );
      v14 = Size;
      LODWORD(v8) = a4;
      v20 = a6;
      v23 = v33;
    }
    if ( !*(_BYTE *)(a1 + 445) && v20 )
      HalpFlushMapBuffers(a1, v23, v8, v14, v20, a8);
    if ( CurrentIrql <= 2u && MemoryDescriptorList[0] )
    {
      if ( (_BYTE)v36 )
      {
        MmUnmapReservedMapping(MemoryDescriptorList[1], 0x446C6148u, MemoryDescriptorList[0]);
        if ( !stru_140E3EAA8.WaitBlockFill7[144] )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle[1]);
          v28 = LockHandle[0];
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(LockHandle[0] + 24LL), 0xFFFFFFFF) == 1
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v28 + 28), 1, 0) )
          {
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E3EAA8.WaitBlockFill11[152], (PSLIST_ENTRY)v28);
          }
        }
      }
      else
      {
        MmUnmapLockedPages(MemoryDescriptorList[1], MemoryDescriptorList[0]);
      }
      if ( (_DWORD)v16 )
      {
        v29 = a4;
        v30 = (unsigned int)v16;
        do
        {
          if ( (*(_QWORD *)(v29 + 48) & 0x10) != 0 )
            *(_QWORD *)(v29 + 48) &= 0xFEFuLL;
          v29 = *(_QWORD *)(v29 + 8);
          --v30;
        }
        while ( v30 );
      }
    }
    if ( v37 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF05uLL, 0LL, 0LL);
    BugCheckOnFailure[0] = Size;
    HalpDmaSyncMapBuffersWithEmergencyResources(a1, v10, a3, v8, *(size_t *)BugCheckOnFailure, a6, a7, a8);
  }
}
