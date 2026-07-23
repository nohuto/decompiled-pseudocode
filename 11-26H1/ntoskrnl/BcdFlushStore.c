/*
 * XREFs of BcdFlushStore @ 0x140B56C7C
 * Callers:
 *     PopAdaptiveClearInitialSystemPowerState @ 0x1407E206C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdClearPendingResume @ 0x1409A18D8 (PopBcdClearPendingResume.c)
 * Callees:
 *     ZwFlushKey @ 0x140729E00 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdFlushStore(HANDLE BcdStoreHandle)
{
  char v2; // di
  NTSTATUS v3; // eax
  NTSTATUS v4; // r8d
  NTSTATUS v6; // ebx

  v2 = (unsigned __int8)BcdStoreHandle & 1;
  v3 = BiAcquireBcdSyncMutant((unsigned __int8)BcdStoreHandle & 1);
  if ( v3 >= 0 )
  {
    v6 = ZwFlushKey((HANDLE)((unsigned __int64)BcdStoreHandle & 0xFFFFFFFFFFFFFFFDuLL));
    BiReleaseBcdSyncMutant(v2);
    return v6;
  }
  else
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
