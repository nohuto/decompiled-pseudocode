/*
 * XREFs of ExtEnvAllocatePhysicalMemory @ 0x14059A394
 * Callers:
 *     IvtAllocateScalableModePasidTables @ 0x1405034FC (IvtAllocateScalableModePasidTables.c)
 *     IvtAllocateContextTable @ 0x140508E08 (IvtAllocateContextTable.c)
 *     IvtExtendScalableModePasidTables @ 0x1405A8BA0 (IvtExtendScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405AB470 (HsaAllocateRemappingTableEntry.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x14034B9A0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall ExtEnvAllocatePhysicalMemory(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        MEMORY_CACHING_TYPE CacheType,
        LARGE_INTEGER *a5,
        PVOID *a6)
{
  PVOID *v6; // r14
  PHYSICAL_ADDRESS v8; // r10
  __int64 v9; // r15
  unsigned int v10; // edi
  unsigned __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  char v14; // r8
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // r12
  LARGE_INTEGER v18; // rax
  PVOID v19; // rax
  PVOID ContiguousMemorySpecifyCacheNode; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rsi
  KIRQL v26; // al
  _QWORD *v27; // rcx
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF
  int v29; // [rsp+68h] [rbp+10h]

  v28 = a1;
  v6 = a6;
  v8.QuadPart = a3;
  v9 = a2;
  *a6 = 0LL;
  if ( !a2 )
    goto LABEL_2;
  v11 = a3 >> 12;
  if ( a3 >> 12 << 12 != a3 )
    goto LABEL_2;
  v12 = !_BitScanReverse64((unsigned __int64 *)&v13, v11);
  v14 = -1;
  v15 = -1;
  v29 = 0;
  if ( !v12 )
    v15 = v13;
  v12 = !_BitScanForward64((unsigned __int64 *)&v16, v11);
  if ( !v12 )
    v14 = v16;
  if ( v15 != v14 || (unsigned int)CacheType > MmCached )
  {
LABEL_2:
    v10 = -1073741637;
LABEL_14:
    if ( *v6 && HalpExtEnvAllocationPhase == 1 )
      MmFreeContiguousMemory(*v6);
    return v10;
  }
  v10 = 0;
  v17 = (unsigned int)(v9 + 4095) >> 12 << 12;
  if ( !HalpExtEnvAllocationPhase )
  {
    v28 = -1LL;
    v18.QuadPart = HalpAllocPhysicalMemoryEx(
                     *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[64],
                     (unsigned int)&v28,
                     (unsigned int)(v9 + 4095) >> 12,
                     v8.LowPart,
                     0LL);
    *a5 = v18;
    if ( v18.QuadPart )
    {
      v19 = HalMapIoSpace(v18, (unsigned int)v17, CacheType);
      *v6 = v19;
      if ( v19 )
        return v10;
    }
    goto LABEL_13;
  }
  if ( HalpExtEnvAllocationPhase != 1
    || (ContiguousMemorySpecifyCacheNode = MmAllocateContiguousMemorySpecifyCacheNode(
                                             (unsigned int)(v9 + 4095) >> 12 << 12,
                                             0LL,
                                             (PHYSICAL_ADDRESS)-1LL,
                                             v8,
                                             CacheType,
                                             0x80000000),
        (*v6 = ContiguousMemorySpecifyCacheNode) == 0LL)
    || (PhysicalAddress = MmGetPhysicalAddress(ContiguousMemorySpecifyCacheNode),
        v23 = (__int64)a5,
        *a5 = PhysicalAddress,
        v24 = HalpMmAllocCtxAlloc(v23, 56LL),
        (v25 = (_QWORD *)v24) == 0LL) )
  {
LABEL_13:
    v10 = -1073741670;
    goto LABEL_14;
  }
  *(_OWORD *)v24 = 0LL;
  *(_OWORD *)(v24 + 16) = 0LL;
  *(_OWORD *)(v24 + 32) = 0LL;
  *(_QWORD *)(v24 + 48) = 0LL;
  *(_QWORD *)(v24 + 16) = *v6;
  *(_QWORD *)(v24 + 32) = v9;
  *(_QWORD *)(v24 + 40) = v17;
  *(_DWORD *)(v24 + 48) = CacheType;
  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr);
  v27 = *(_QWORD **)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[64];
  if ( **(struct _KTHREAD ***)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[64] != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[56] )
    __fastfail(3u);
  *v25 = &IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].WaitListEntry.Blink;
  v25[1] = v27;
  *v27 = v25;
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[64] = v25;
  KeReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr, v26);
  return v10;
}
