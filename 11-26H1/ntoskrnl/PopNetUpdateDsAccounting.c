/*
 * XREFs of PopNetUpdateDsAccounting @ 0x1404FFCB0
 * Callers:
 *     PdcPoNetworkResiliency @ 0x140B56630 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopNetUpdateDsAccounting(char a1)
{
  KIRQL v2; // r8
  unsigned __int128 v3; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
  if ( a1 )
  {
    if ( PopNetStandbyState == 2 )
      stru_140F10828.AutoBoostThreadState = (void *)MEMORY[0xFFFFF78000000008];
  }
  else if ( stru_140F10828.AutoBoostThreadState )
  {
    v3 = (MEMORY[0xFFFFF78000000008] - (unsigned __int64)stru_140F10828.AutoBoostThreadState)
       * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    stru_140F10828.AutoBoostThreadState = 0LL;
    stru_140F10828.Spare32 = (char *)stru_140F10828.Spare32 + (*((_QWORD *)&v3 + 1) >> 3);
  }
  KeReleaseSpinLock(&stru_140F10070.Spare35[1], v2);
}
