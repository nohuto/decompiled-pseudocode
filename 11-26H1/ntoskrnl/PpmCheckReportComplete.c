/*
 * XREFs of PpmCheckReportComplete @ 0x1404B8230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PpmCheckReportComplete()
{
  __int64 result; // rax

  result = qword_140F12240;
  if ( qword_140F12240 )
    return guard_dispatch_icall_no_overrides(qword_140F12230, *(_QWORD *)&PopSleepstudySessionLock.SystemCallNumber);
  return result;
}
