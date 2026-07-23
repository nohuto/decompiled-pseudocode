/*
 * XREFs of MmFreeMemoryRanges @ 0x14086E3D0
 * Callers:
 *     IopLiveDumpFreeIoSpaceRanges @ 0x1405D1D0C (IopLiveDumpFreeIoSpaceRanges.c)
 *     MiFreePhysicalRange @ 0x140706770 (MiFreePhysicalRange.c)
 * Callees:
 *     MiReleaseMemoryRuns @ 0x1406F2148 (MiReleaseMemoryRuns.c)
 */

__int64 __fastcall MmFreeMemoryRanges(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v5[1] = 0LL;
  v5[4] = 0LL;
  if ( *(_DWORD *)a1 != 1 )
    return 3221225485LL;
  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 >= 2 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 16) )
    return 3221225485LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2
    || *(_DWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 8)
    || KeGetCurrentIrql()
    || (v1 & 1) == 0
    || *(_QWORD *)(a1 + 24) != 0x40000000LL )
  {
    return 3221225485LL;
  }
  v3 = *(_QWORD *)(a1 + 48);
  v5[3] = a1;
  v5[2] = v3;
  v5[0] = v2;
  MiReleaseMemoryRuns(v5, 1);
  return 0LL;
}
