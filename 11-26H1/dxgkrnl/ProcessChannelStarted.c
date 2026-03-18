/*
 * XREFs of ProcessChannelStarted @ 0x1402137D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 ProcessChannelStarted()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx

  result = ((__int64 (*)(void))qword_140168448)();
  v3 = result;
  if ( result )
  {
    result = WdLogNewEntry5_WdTrace(v2, v1);
    *(_QWORD *)(result + 24) = v3;
    WdLogGlobalForLineNumber = 706;
  }
  return result;
}
