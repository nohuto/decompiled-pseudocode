/*
 * XREFs of VmpUnsecureMemoryForPin @ 0x14081DEE4
 * Callers:
 *     VmpSplitMemoryRange @ 0x1404C8B68 (VmpSplitMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1405199E0 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRanges @ 0x1406C1F74 (VmpPinMemoryRanges.c)
 *     VmpUnpinMemoryRangeHelper @ 0x1406C286C (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14086AC5C (MmAdjustSecuredVirtualMemorySize.c)
 *     MmUnsecureVirtualMemory @ 0x1409C1B90 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmpUnsecureMemoryForPin(
        struct _EX_RUNDOWN_REF *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx

  if ( a4 == a6 )
  {
    MmUnsecureVirtualMemory(a2);
    ExReleaseRundownProtection_0(a1 + 18);
  }
  else
  {
    v8 = a4 + a5;
    if ( a3 != a5 )
      v8 = a5;
    if ( (int)MmAdjustSecuredVirtualMemorySize(a2, v8 << 12, (a6 - a4) << 12) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  }
}
