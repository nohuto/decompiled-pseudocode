/*
 * XREFs of PerfCommitLegacyPcc @ 0x14000E190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PerfCommitLegacyPcc(__int64 (*a1)(void))
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, __int64 (*)(void)), __int64 (*)(void)))qword_140015BF0)(
             qword_140015BC8,
             PccCommitAcquireCallback,
             a1);
  if ( (int)result < 0 )
  {
    if ( a1 )
      return a1();
  }
  return result;
}
