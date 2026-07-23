/*
 * XREFs of MmCheckPartitionManagementSupported @ 0x140AE26F0
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmCheckPartitionManagementSupported(__int64 a1, unsigned int a2)
{
  int v2; // eax

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0x20) != 0 && (a2 > 0xC || (v2 = 4579, !_bittest(&v2, a2))) )
    return a2 != 14 ? 0xC00000BB : 0;
  else
    return 0LL;
}
