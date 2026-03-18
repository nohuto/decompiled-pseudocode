/*
 * XREFs of BcdCloseStore @ 0x1409D0088
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406D5E6C (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x1407C8370 (PoInitHiberServices.c)
 *     PopValidateWinresume @ 0x1407D0A04 (PopValidateWinresume.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407DDA3C (PopAdaptiveClearInitialSystemPowerState.c)
 *     BiLoadSystemStore @ 0x1409CFE10 (BiLoadSystemStore.c)
 *     PopBcdClose @ 0x1409D0070 (PopBcdClose.c)
 *     PopFreeHiberContext @ 0x140B1AB90 (PopFreeHiberContext.c)
 *     SepSecureBootCorrectBcd @ 0x140B5C260 (SepSecureBootCorrectBcd.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsSystemStore @ 0x1409D0134 (BiIsSystemStore.c)
 *     BiCloseStore @ 0x1409D022C (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x1409D2888 (BiIsWinPEBoot.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BcdCloseStore(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // si
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v10; // r8d
  char IsWinPEBoot; // al

  v1 = a1;
  v2 = a1 & 1;
  LOBYTE(a1) = a1 & 1;
  v3 = BiAcquireBcdSyncMutant(a1);
  if ( v3 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v10;
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(v1) )
    {
      IsWinPEBoot = BiIsWinPEBoot();
      v4 = ~(2 * (_BYTE)v1) & 4 | 2u;
      if ( !IsWinPEBoot )
        v4 = ~(2 * (_BYTE)v1) & 4;
    }
    else
    {
      v4 = 2LL;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v4);
    v6 = BiCloseStore(v1, v5);
    LOBYTE(v7) = v2;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
}
