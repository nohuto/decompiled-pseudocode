/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1403C98C8
 * Callers:
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1403C90A4 (KiNormalPriorityReadyScan.c)
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
