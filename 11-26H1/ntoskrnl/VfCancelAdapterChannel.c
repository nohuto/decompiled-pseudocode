/*
 * XREFs of VfCancelAdapterChannel @ 0x140C23F80
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     ViRemoveChannelWcb @ 0x140641264 (ViRemoveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140C22A54 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140C22D7C (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140C26C90 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 */

char __fastcall VfCancelAdapterChannel(int a1, __int64 a2, __int64 a3)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rbp
  char v8; // al
  char v9; // di
  __int64 v10; // rbx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v8 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  v9 = v8;
  if ( AdapterInformationInternal )
  {
    if ( v8 )
    {
      v10 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, a3);
      if ( v10 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v10 + 48));
        if ( *(_QWORD *)(v10 + 96) )
          ViFreeMapRegisterFile(AdapterInformationInternal);
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27B08.AffinityVersion, (PVOID)v10);
      }
    }
  }
  return v9;
}
