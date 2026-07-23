/*
 * XREFs of VfFreeAdapterObject @ 0x140C2A4F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140C28A64 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140C28D8C (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140C2CCA0 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 */

void __fastcall VfFreeAdapterObject(int a1, unsigned int a2)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rsi
  KIRQL v6; // al
  __int64 v7; // rbx
  KIRQL v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rcx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 176));
    v7 = *(_QWORD *)(AdapterInformationInternal + 160);
    v8 = v6;
    while ( 1 )
    {
      v9 = v7 - 72;
      if ( AdapterInformationInternal == v9 - 88 )
        break;
      if ( *(_DWORD *)(v9 + 52) == 1 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        if ( a2 == 3 )
        {
          *(_DWORD *)(v9 + 52) = 3;
        }
        else
        {
          v10 = *(_QWORD *)(v9 + 72);
          if ( *(_QWORD *)(v10 + 8) != v9 + 72 || (v11 = *(_QWORD **)(v9 + 80), *v11 != v9 + 72) )
            __fastfail(3u);
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v9 + 48));
          if ( *(_QWORD *)(v9 + 96) )
            ViFreeMapRegisterFile(AdapterInformationInternal);
          ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, (PVOID)v9);
        }
        break;
      }
      v7 = *(_QWORD *)(v9 + 72);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 176), v8);
  }
}
