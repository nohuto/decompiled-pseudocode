/*
 * XREFs of BiOpenStoreWithHash @ 0x140776404
 * Callers:
 *     BcdOpenStore @ 0x1407763EC (BcdOpenStore.c)
 *     PoInitHiberServices @ 0x1407CB3D0 (PoInitHiberServices.c)
 *     PopValidateWinresume @ 0x1407D3AA4 (PopValidateWinresume.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407E206C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 *     PopBcdOpen @ 0x140B5530C (PopBcdOpen.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 * Callees:
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

__int64 __fastcall BiOpenStoreWithHash(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v4; // di
  int v7; // esi
  int v8; // eax
  unsigned int v9; // r10d
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // r9d
  int v14; // eax

  v4 = a2 & 1;
  LOBYTE(a1) = a2 & 1;
  v7 = a2 & 2;
  v8 = BiAcquireBcdSyncMutant(a1);
  if ( v8 >= 0 )
  {
    BiLogMessage(2LL, L"Opening store. Flags: 0x%x", a2);
    if ( v4 )
    {
      v12 = -1073741811;
    }
    else
    {
      if ( v7 )
        BiLogMessage(v11, L"Store will be synchronized with firmware.");
      else
        v13 = v11;
      v14 = BiOpenSystemStore(a4, v13);
      v12 = v14;
      if ( v14 < 0 )
        BiLogMessage(4LL, L"Failed to open system store. Status: %x", (unsigned int)v14);
    }
    LOBYTE(v11) = v4;
    BiReleaseBcdSyncMutant(v11);
    return v12;
  }
  else
  {
    BiLogMessage(
      4LL,
      L"BcdOpenStore: Failed to acquire BCD sync Mutant. Store: %ws Flags: 0x%x Status: %x",
      L"NULL",
      a2,
      v8);
    return v9;
  }
}
