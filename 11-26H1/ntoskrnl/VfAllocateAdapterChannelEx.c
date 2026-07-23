/*
 * XREFs of VfAllocateAdapterChannelEx @ 0x140C292E0
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
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfAllocateAdapterChannelEx(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        void *a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v12; // rdi
  __int64 AdapterInformationInternal; // rbx
  PVOID v14; // rax
  __int64 v16; // r14
  void *v17; // rsi
  unsigned int v18; // ebp
  KIRQL v19; // al
  __int64 v20; // r9
  _QWORD *v21; // r8
  __int64 RealDmaAdapter; // [rsp+50h] [rbp-38h]

  v12 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v14 = ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion);
    v12 = (__int64)v14;
    if ( !v14 )
      return 3221225626LL;
    memset_0(v14, 0, 0x98uLL);
    *(_QWORD *)v12 = a7;
    *(_QWORD *)(v12 + 8) = a6;
    *(_QWORD *)(v12 + 56) = AdapterInformationInternal;
    *(_DWORD *)(v12 + 48) = a4;
    *(_QWORD *)(v12 + 40) = a3;
    if ( !*(_QWORD *)(AdapterInformationInternal + 64) )
      *(_QWORD *)(AdapterInformationInternal + 64) = a2;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a4, 1);
    v16 = AdapterInformationInternal + 176;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 160),
      (PLIST_ENTRY)(v12 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 176));
    v17 = &ViAdapterCallback;
    if ( !a6 )
      v17 = 0LL;
  }
  else
  {
    v16 = 176LL;
    v17 = a6;
  }
  v18 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  if ( AdapterInformationInternal && ViIsActiveChannelWcb(AdapterInformationInternal, v12) )
  {
    if ( v18 )
    {
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16);
      v20 = *(_QWORD *)(v12 + 72);
      if ( *(_QWORD *)(v20 + 8) != v12 + 72 || (v21 = *(_QWORD **)(v12 + 80), *v21 != v12 + 72) )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      KeReleaseSpinLock((PKSPIN_LOCK)v16, v19);
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a4);
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, (PVOID)v12);
    }
    else if ( !v17 )
    {
      *(_DWORD *)(v12 + 52) = 1;
      *(_QWORD *)(v12 + 88) = *a8;
    }
  }
  return v18;
}
