/*
 * XREFs of VfAllocateAdapterChannel @ 0x140C29100
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     ExInterlockedInsertTailList @ 0x1403E1640 (ExInterlockedInsertTailList.c)
 *     ViIsActiveChannelWcb @ 0x140644DD0 (ViIsActiveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ADD_MAP_REGISTERS @ 0x140C2894C (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140C28A64 (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140C28CE0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140C28D8C (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140C28EAC (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x140C2BF88 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140C2CCA0 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfAllocateAdapterChannel(int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char *v6; // rdi
  __int64 AdapterInformationInternal; // rbx
  char *v11; // rax
  bool v13; // zf
  __int64 v14; // rbp
  __int64 RealDmaAdapter; // rax
  unsigned int v16; // eax
  unsigned int v17; // r14d
  KIRQL v18; // al
  char **v19; // r8
  void **v20; // rcx

  v6 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v11 = (char *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion);
    v6 = v11;
    if ( !v11 )
      return 3221225626LL;
    memset_0(v11, 0, 0x98uLL);
    v13 = ViDoubleBufferDma == 0;
    *(_QWORD *)v6 = a5;
    *((_QWORD *)v6 + 1) = a4;
    *((_QWORD *)v6 + 7) = AdapterInformationInternal;
    *((_DWORD *)v6 + 12) = a3;
    if ( !v13 && !*(_BYTE *)(AdapterInformationInternal + 73) && *(_DWORD *)(AdapterInformationInternal + 224) < 3u )
      *((_QWORD *)v6 + 12) = ViAllocateMapRegisterFile(AdapterInformationInternal, a3);
    if ( !*(_QWORD *)(AdapterInformationInternal + 64) )
      *(_QWORD *)(AdapterInformationInternal + 64) = a2;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a3, 0);
    v14 = AdapterInformationInternal + 176;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 160),
      (PLIST_ENTRY)(v6 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 176));
  }
  else
  {
    v14 = 176LL;
  }
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  v16 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  v17 = v16;
  if ( AdapterInformationInternal && v16 && ViIsActiveChannelWcb(AdapterInformationInternal, (__int64)v6) )
  {
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
    v19 = (char **)*((_QWORD *)v6 + 9);
    if ( v19[1] != v6 + 72 || (v20 = (void **)*((_QWORD *)v6 + 10), *v20 != v6 + 72) )
      __fastfail(3u);
    *v20 = v19;
    v19[1] = (char *)v20;
    KeReleaseSpinLock((PKSPIN_LOCK)v14, v18);
    DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a3);
    if ( *((_QWORD *)v6 + 12) )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, v6);
  }
  return v17;
}
