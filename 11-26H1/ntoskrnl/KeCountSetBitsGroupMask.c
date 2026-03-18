/*
 * XREFs of KeCountSetBitsGroupMask @ 0x1402007F0
 * Callers:
 *     KeQueryNodeActiveAffinity2 @ 0x14050E130 (KeQueryNodeActiveAffinity2.c)
 *     KiSelectGroupFromNodeForAffinity @ 0x1405EFE88 (KiSelectGroupFromNodeForAffinity.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405F3D38 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall KeCountSetBitsGroupMask(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = a1;
  v4[0] = 32LL;
  return RtlNumberOfSetBitsEx(v4, a2, a3);
}
