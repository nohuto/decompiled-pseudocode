/*
 * XREFs of BcdCloseStore @ 0x1409A1068
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x1407CB3D0 (PoInitHiberServices.c)
 *     PopValidateWinresume @ 0x1407D3AA4 (PopValidateWinresume.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407E206C (PopAdaptiveClearInitialSystemPowerState.c)
 *     BiLoadSystemStore @ 0x1409A0DF0 (BiLoadSystemStore.c)
 *     PopBcdClose @ 0x1409A1050 (PopBcdClose.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     SepSecureBootCorrectBcd @ 0x140B85B08 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsSystemStore @ 0x1409A1114 (BiIsSystemStore.c)
 *     BiCloseStore @ 0x1409A120C (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x1409A3868 (BiIsWinPEBoot.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdCloseStore(HANDLE BcdStoreHandle)
{
  HANDLE v1; // rdi
  char v2; // si
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // r8d
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  NTSTATUS v10; // r8d
  char IsWinPEBoot; // al

  v1 = BcdStoreHandle;
  v2 = (unsigned __int8)BcdStoreHandle & 1;
  LOBYTE(BcdStoreHandle) = (unsigned __int8)BcdStoreHandle & 1;
  v3 = BiAcquireBcdSyncMutant(BcdStoreHandle);
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
