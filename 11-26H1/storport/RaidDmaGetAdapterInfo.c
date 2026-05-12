/*
 * XREFs of RaidDmaGetAdapterInfo @ 0x1400722BC
 * Callers:
 *     RaidInitializePerfOpts @ 0x14005232C (RaidInitializePerfOpts.c)
 *     NVMeGetUncachedExtensionEx @ 0x1400797D4 (NVMeGetUncachedExtensionEx.c)
 *     NvmeControllerAllocateInternalBufferAllocation @ 0x1400799F4 (NvmeControllerAllocateInternalBufferAllocation.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400D3950 (NvmeAdapterCompleteInitialization.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidDmaGetAdapterInfo(int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(_QWORD); // rax

  if ( a2
    && a1
    && *(_QWORD *)a1
    && (v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL)) != 0
    && a1[7] >= 3
    && (v3 = *(__int64 (__fastcall **)(_QWORD))(v2 + 128)) != 0LL )
  {
    return v3(*(_QWORD *)a1);
  }
  else
  {
    return 3221225485LL;
  }
}
