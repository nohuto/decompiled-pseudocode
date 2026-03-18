/*
 * XREFs of VfAllocateCommonBuffer @ 0x140C234E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_IRQL @ 0x140C22E9C (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140C27CF0 (ViSpecialAllocateCommonBuffer.c)
 */

__int64 __fastcall VfAllocateCommonBuffer(int a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 RealDmaAdapter; // r15
  __int64 AdapterInformationInternal; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(0),
        (result = ViSpecialAllocateCommonBuffer(
                    *(_QWORD *)(*(_QWORD *)(RealDmaAdapter + 8) + 16LL),
                    AdapterInformationInternal,
                    (_DWORD)retaddr,
                    a2,
                    a3,
                    a4)) == 0) )
  {
    result = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
    if ( result )
    {
      if ( AdapterInformationInternal )
        _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 204));
    }
  }
  return result;
}
