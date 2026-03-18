/*
 * XREFs of BcdOpenSystemStore @ 0x14077B68C
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140B5C260 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BcdOpenSystemStore(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // r8d
  unsigned int v5; // ebx

  v2 = BiAcquireBcdSyncMutant(0LL);
  if ( v2 >= 0 )
  {
    v5 = BiOpenSystemStore(a1, 0LL);
    BiReleaseBcdSyncMutant(0LL);
    return v5;
  }
  else
  {
    BiLogMessage(4LL, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v2);
    return v3;
  }
}
