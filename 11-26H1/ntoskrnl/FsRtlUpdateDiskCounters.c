/*
 * XREFs of FsRtlUpdateDiskCounters @ 0x14047B860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall FsRtlUpdateDiskCounters(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KPRCB *result; // rax

  result = KeGetCurrentPrcb();
  if ( a1 )
    _InterlockedAdd64((volatile signed __int64 *)&result->FsCounters, a1);
  if ( a2 )
    _InterlockedAdd64((volatile signed __int64 *)&result->FsCounters.FsBytesWritten, a2);
  return result;
}
