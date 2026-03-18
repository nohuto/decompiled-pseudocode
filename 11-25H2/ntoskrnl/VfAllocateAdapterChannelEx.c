/*
 * XREFs of VfAllocateAdapterChannelEx @ 0x140B75390
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExInterlockedInsertTailList @ 0x140354630 (ExInterlockedInsertTailList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     ViIsActiveChannelWcb @ 0x140604E10 (ViIsActiveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ADD_MAP_REGISTERS @ 0x140B74A38 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B74B44 (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140B74DA0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B74E40 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140B74F60 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfAllocateAdapterChannelEx(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // rsi
  __int64 v13; // rdi
  __int64 AdapterInformationInternal; // rbx
  PVOID v15; // rax
  __int64 v17; // r14
  void *v18; // rax
  unsigned int v19; // ebp
  KIRQL v20; // al
  __int64 v21; // r9
  _QWORD *v22; // r8
  __int64 RealDmaAdapter; // [rsp+50h] [rbp-38h]

  v8 = a6;
  v13 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v15 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v13 = (__int64)v15;
    if ( !v15 )
      return 3221225626LL;
    memset_0(v15, 0, 0x98uLL);
    *(_QWORD *)v13 = a7;
    *(_QWORD *)(v13 + 8) = a6;
    *(_QWORD *)(v13 + 56) = AdapterInformationInternal;
    *(_DWORD *)(v13 + 48) = a4;
    *(_QWORD *)(v13 + 40) = a3;
    if ( !*(_QWORD *)(AdapterInformationInternal + 64) )
      *(_QWORD *)(AdapterInformationInternal + 64) = a2;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a4, 1);
    v17 = AdapterInformationInternal + 176;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 160),
      (PLIST_ENTRY)(v13 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 176));
    v18 = &ViAdapterCallback;
    if ( !a6 )
      v18 = 0LL;
    v8 = (__int64)v18;
  }
  else
  {
    v17 = 176LL;
  }
  v19 = guard_dispatch_icall_no_overrides(RealDmaAdapter);
  if ( AdapterInformationInternal && ViIsActiveChannelWcb(AdapterInformationInternal, v13) )
  {
    if ( v19 )
    {
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v17);
      v21 = *(_QWORD *)(v13 + 72);
      if ( *(_QWORD *)(v21 + 8) != v13 + 72 || (v22 = *(_QWORD **)(v13 + 80), *v22 != v13 + 72) )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      KeReleaseSpinLock((PKSPIN_LOCK)v17, v20);
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a4);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v13);
    }
    else if ( !v8 )
    {
      *(_DWORD *)(v13 + 52) = 1;
      *(_QWORD *)(v13 + 88) = *a8;
    }
  }
  return v19;
}
