/*
 * XREFs of VfCancelAdapterChannel @ 0x140B76000
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ViRemoveChannelWcb @ 0x140604E8C (ViRemoveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B74B44 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B74E40 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140B78BBC (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 */

char __fastcall VfCancelAdapterChannel(int a1, __int64 a2, __int64 a3)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rbp
  char v7; // al
  char v8; // di
  __int64 v9; // rbx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v7 = guard_dispatch_icall_no_overrides(RealDmaAdapter);
  v8 = v7;
  if ( AdapterInformationInternal )
  {
    if ( v7 )
    {
      v9 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, a3);
      if ( v9 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v9 + 48));
        if ( *(_QWORD *)(v9 + 96) )
          ViFreeMapRegisterFile(AdapterInformationInternal);
        ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v9);
      }
    }
  }
  return v8;
}
