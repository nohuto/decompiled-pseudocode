/*
 * XREFs of BgFreeContext @ 0x140C559A8
 * Callers:
 *     BgkResumeFinished @ 0x140C0F614 (BgkResumeFinished.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     ResFwFreeContext @ 0x140C588B8 (ResFwFreeContext.c)
 */

__int64 BgFreeContext()
{
  PVOID v0; // rbx
  __int64 result; // rax

  v0 = qword_140E65F38;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 2u && qword_140E65F38 )
  {
    BgpFwAcquireLock();
    if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) != 0 )
      ResFwFreeContext(v0);
    return BgpFwReleaseLock();
  }
  return result;
}
