/*
 * XREFs of VfAllocateCommonBufferWithBounds @ 0x140B757B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 *     Below4gb_AllocateCommonBuffer_Entry @ 0x140B8C170 (Below4gb_AllocateCommonBuffer_Entry.c)
 */

__int64 __fastcall VfAllocateCommonBufferWithBounds(int a1)
{
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v4 = AdapterInformationInternal;
  if ( AdapterInformationInternal && (MmVerifierData & 0x4000000) != 0 )
    Below4gb_AllocateCommonBuffer_Entry(*(_QWORD *)(AdapterInformationInternal + 80));
  result = guard_dispatch_icall_no_overrides(RealDmaAdapter);
  if ( result )
  {
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 204));
  }
  return result;
}
