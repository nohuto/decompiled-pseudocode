/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1403BF9C8
 * Callers:
 *     KiUpdateRunTime @ 0x14021F420 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1403BF1A4 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( KiForceParkingConfiguration && (*(_BYTE *)(a1 + 35) & 0x20) != 0 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 36496) )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 35) & 0x10) == 0 )
    return 0LL;
  LOBYTE(v1) = *(_QWORD *)(a1 + 36480) != 0LL;
  return v1;
}
