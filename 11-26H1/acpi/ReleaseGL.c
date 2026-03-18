/*
 * XREFs of ReleaseGL @ 0x14003930C
 * Callers:
 *     ParseRelease @ 0x14000C360 (ParseRelease.c)
 *     ParseAcquire @ 0x14000D400 (ParseAcquire.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))ghGlobalLock)(5LL, 1LL, qword_14008EAD0);
  return result;
}
