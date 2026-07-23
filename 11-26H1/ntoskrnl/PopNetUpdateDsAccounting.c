/*
 * XREFs of PopNetUpdateDsAccounting @ 0x1404F94A0
 * Callers:
 *     PdcPoNetworkResiliency @ 0x140B59330 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopNetUpdateDsAccounting(char a1)
{
  KIRQL v2; // r8
  unsigned __int128 v3; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( a1 )
  {
    if ( PopNetStandbyState == 2 )
      qword_140F100B8 = MEMORY[0xFFFFF78000000008];
  }
  else if ( qword_140F100B8 )
  {
    v3 = (unsigned __int64)(MEMORY[0xFFFFF78000000008] - qword_140F100B8) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    qword_140F100B8 = 0LL;
    qword_140F100C0 += *((_QWORD *)&v3 + 1) >> 3;
  }
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
