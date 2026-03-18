/*
 * XREFs of BgGetContext @ 0x140C4F9EC
 * Callers:
 *     BgkResumePrepare @ 0x140BF144C (BgkResumePrepare.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     ResFwGetContext @ 0x140C50D8C (ResFwGetContext.c)
 */

__int64 BgGetContext()
{
  __int64 v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v1 = 0LL;
  v2 = 0LL;
  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v1 = v2;
  }
  BgpFwReleaseLock();
  return v1;
}
