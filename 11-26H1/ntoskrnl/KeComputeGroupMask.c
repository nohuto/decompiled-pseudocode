/*
 * XREFs of KeComputeGroupMask @ 0x140200A08
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405F66F8 (KeQueryCpuPartitionAffinity.c)
 *     KiExtendProcessAffinity @ 0x1405FBEA8 (KiExtendProcessAffinity.c)
 *     EtwpExtractCompactedAffinity @ 0x1406C9190 (EtwpExtractCompactedAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeComputeGroupMask(unsigned __int16 *a1, _OWORD *a2)
{
  unsigned __int16 i; // r8
  __int64 result; // rax

  *a2 = 0LL;
  for ( i = 0; i < *a1; ++i )
  {
    if ( *(_QWORD *)&a1[4 * i + 4] )
    {
      result = i & 7;
      *((_BYTE *)a2 + ((unsigned __int64)i >> 3)) |= 1 << result;
    }
  }
  return result;
}
