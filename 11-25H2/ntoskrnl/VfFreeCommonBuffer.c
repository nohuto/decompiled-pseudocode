/*
 * XREFs of VfFreeCommonBuffer @ 0x140B76680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140B74BE0 (DECREMENT_COMMON_BUFFERS.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B74FE0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 *     ViHalFreeDomainCommonBuffer @ 0x140B79198 (ViHalFreeDomainCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x140B79D5C (ViSpecialFreeCommonBuffer.c)
 */

void __fastcall VfFreeCommonBuffer(int a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v7; // si
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rax
  char v10; // r15
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = a3;
  v7 = 0;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v10 = a5;
  v11 = AdapterInformationInternal;
  if ( !AdapterInformationInternal
    || (VF_ASSERT_MAX_IRQL(), (v7 = ViHalFreeDomainCommonBuffer(&v13)) != 0)
    || (LOBYTE(v12) = v10,
        !(unsigned int)ViSpecialFreeCommonBuffer(*(_QWORD *)(*(_QWORD *)(RealDmaAdapter + 8) + 24LL), v11, a4, v12)) )
  {
    guard_dispatch_icall_no_overrides(RealDmaAdapter);
    if ( v11 )
    {
      if ( !v7 )
        DECREMENT_COMMON_BUFFERS(v11);
    }
  }
}
