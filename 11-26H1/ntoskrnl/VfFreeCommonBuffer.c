/*
 * XREFs of VfFreeCommonBuffer @ 0x140C2A610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140C28B0C (DECREMENT_COMMON_BUFFERS.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C28F2C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViHalFreeDomainCommonBuffer @ 0x140C2D288 (ViHalFreeDomainCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x140C2DE80 (ViSpecialFreeCommonBuffer.c)
 */

void __fastcall VfFreeCommonBuffer(int a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  char v8; // si
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rax
  char v11; // r15
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v8 = 0;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v11 = a5;
  v12 = AdapterInformationInternal;
  if ( !AdapterInformationInternal
    || (VF_ASSERT_MAX_IRQL(), (v8 = ViHalFreeDomainCommonBuffer(&v14)) != 0)
    || (LOBYTE(v13) = v11,
        !(unsigned int)ViSpecialFreeCommonBuffer(*(_QWORD *)(*(_QWORD *)(RealDmaAdapter + 8) + 24LL), v12, a4, v13)) )
  {
    guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
    if ( v12 )
    {
      if ( !v8 )
        DECREMENT_COMMON_BUFFERS(v12);
    }
  }
}
