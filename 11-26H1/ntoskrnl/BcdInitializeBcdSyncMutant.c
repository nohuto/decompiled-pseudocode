/*
 * XREFs of BcdInitializeBcdSyncMutant @ 0x140890FBC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateMutant @ 0x140724B30 (ZwCreateMutant.c)
 */

int BcdInitializeBcdSyncMutant()
{
  signed __int64 v0; // rax
  HANDLE Handle; // [rsp+60h] [rbp+10h] BYREF

  Handle = 0LL;
  LODWORD(v0) = ZwCreateMutant((__int64)&Handle, 2031617LL);
  if ( (int)v0 >= 0 )
  {
    v0 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)&gLoadedDiffHivesLock.SchedulerSharedSystemSlot,
           (signed __int64)Handle,
           0LL);
    if ( v0 )
      LODWORD(v0) = ZwClose(Handle);
  }
  return v0;
}
