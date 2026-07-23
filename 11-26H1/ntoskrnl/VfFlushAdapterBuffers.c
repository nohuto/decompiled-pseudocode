/*
 * XREFs of VfFlushAdapterBuffers @ 0x140C2A1E0
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C28F2C (VF_ASSERT_MAX_IRQL.c)
 *     ViFlushDoubleBuffer @ 0x140C2CAE4 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetMapRegisterFile @ 0x140C2D0AC (ViGetMapRegisterFile.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 *     ViSwap @ 0x140C2DF9C (ViSwap.c)
 */

char __fastcall VfFlushAdapterBuffers(int a1, __int64 a2, const void *a3, const void *a4, int a5, char a6)
{
  __int64 AdapterInformationInternal; // rbp
  __int64 RealDmaAdapter; // r13
  char result; // al
  __int64 MapRegisterFile; // r12
  char v14; // r13
  const void *v15; // [rsp+40h] [rbp-48h] BYREF
  const void *v16; // [rsp+48h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h] BYREF

  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( AdapterInformationInternal
    && (VF_ASSERT_MAX_IRQL(), a3 != (const void *)-559026163LL)
    && (MapRegisterFile = ViGetMapRegisterFile(a3)) != 0 )
  {
    v17 = a2;
    v15 = a4;
    v16 = a3;
    if ( (unsigned int)ViSwap(&v16, &v17, &v15) )
    {
      v14 = guard_dispatch_icall_no_overrides(RealDmaAdapter, v17);
      ViFlushDoubleBuffer(MapRegisterFile, a6);
      if ( v14 )
        _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 220), 0);
      return v14;
    }
    else
    {
      if ( a5 )
      {
        ViHalPreprocessOptions(
          byte_140E0EAF0,
          "Cannot flush map register that isn't mapped! (Map register base %p, flushing address %p, MDL %p)",
          (const void *)0x20,
          a3,
          a4);
        VfReportIssueWithOptions(0xE6u, 0x20uLL, (ULONG_PTR)a3, (ULONG_PTR)a4, a2, byte_140E0EAF0);
      }
      return 0;
    }
  }
  else
  {
    result = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
    if ( AdapterInformationInternal )
    {
      if ( result )
        _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 220), 0);
    }
  }
  return result;
}
