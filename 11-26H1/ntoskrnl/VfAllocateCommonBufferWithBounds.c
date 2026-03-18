/*
 * XREFs of VfAllocateCommonBufferWithBounds @ 0x140C236F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 *     Below4gb_AllocateCommonBuffer_Entry @ 0x140C39904 (Below4gb_AllocateCommonBuffer_Entry.c)
 */

__int64 __fastcall VfAllocateCommonBufferWithBounds(int a1, __int64 a2)
{
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rax
  __int64 v6; // rbx
  __int64 result; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v6 = AdapterInformationInternal;
  if ( AdapterInformationInternal && (MmVerifierData & 0x4000000) != 0 )
    Below4gb_AllocateCommonBuffer_Entry(*(_QWORD *)(AdapterInformationInternal + 80));
  result = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  if ( result )
  {
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 204));
  }
  return result;
}
