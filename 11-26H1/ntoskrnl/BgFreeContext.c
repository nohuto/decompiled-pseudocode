/*
 * XREFs of BgFreeContext @ 0x140C4F9A8
 * Callers:
 *     BgkResumeFinished @ 0x140C09404 (BgkResumeFinished.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     ResFwFreeContext @ 0x140C528B8 (ResFwFreeContext.c)
 */

__int64 BgFreeContext()
{
  PVOID v0; // rbx
  __int64 result; // rax

  v0 = qword_140E65D30;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 2u && qword_140E65D30 )
  {
    BgpFwAcquireLock();
    if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) != 0 )
      ResFwFreeContext(v0);
    return BgpFwReleaseLock();
  }
  return result;
}
