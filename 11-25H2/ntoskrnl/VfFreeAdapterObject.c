/*
 * XREFs of VfFreeAdapterObject @ 0x140B76560
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B74B44 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B74E40 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140B78BBC (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 */

void __fastcall VfFreeAdapterObject(int a1, int a2)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rsi
  KIRQL v6; // r15
  __int64 i; // rbx
  __int64 v8; // rbx
  __int64 *v9; // rdi
  __int64 *v10; // rcx
  __int64 **v11; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  guard_dispatch_icall_no_overrides(RealDmaAdapter);
  if ( AdapterInformationInternal && (unsigned int)(a2 - 2) <= 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 176));
    for ( i = *(_QWORD *)(AdapterInformationInternal + 160); ; i = *v9 )
    {
      v8 = i - 72;
      v9 = (__int64 *)(v8 + 72);
      if ( AdapterInformationInternal + 160 == v8 + 72 )
        break;
      if ( *(_DWORD *)(v8 + 52) == 1 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        if ( a2 == 3 )
        {
          *(_DWORD *)(v8 + 52) = 3;
        }
        else
        {
          v10 = (__int64 *)*v9;
          if ( *(__int64 **)(*v9 + 8) != v9 || (v11 = *(__int64 ***)(v8 + 80), *v11 != v9) )
            __fastfail(3u);
          *v11 = v10;
          v10[1] = (__int64)v11;
          SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v8 + 48));
          if ( *(_QWORD *)(v8 + 96) )
            ViFreeMapRegisterFile(AdapterInformationInternal);
          ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v8);
        }
        break;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 176), v6);
  }
}
