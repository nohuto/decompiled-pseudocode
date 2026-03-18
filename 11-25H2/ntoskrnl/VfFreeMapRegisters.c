/*
 * XREFs of VfFreeMapRegisters @ 0x140B76800
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ViRemoveChannelWcb @ 0x140604E8C (ViRemoveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B74E40 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140B74F60 (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x140B78BBC (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 */

void __fastcall VfFreeMapRegisters(int a1, __int64 a2)
{
  __int64 v4; // rbp
  char v5; // r14
  __int64 AdapterInformationInternal; // rsi
  __int64 RealDmaAdapter; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rbx

  v4 = 0LL;
  v5 = 0;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v4 = a2;
    if ( a2 == -559026163 )
    {
      v5 = 1;
      v4 = 0LL;
    }
  }
  guard_dispatch_icall_no_overrides(RealDmaAdapter);
  if ( AdapterInformationInternal )
  {
    if ( v5 == 1 )
      v4 = -559026163LL;
    v8 = ViRemoveChannelWcb(AdapterInformationInternal, v4, 0LL);
    v9 = (_QWORD *)v8;
    if ( v8 )
    {
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v8 + 48));
      if ( v9[12] )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v9);
    }
  }
}
