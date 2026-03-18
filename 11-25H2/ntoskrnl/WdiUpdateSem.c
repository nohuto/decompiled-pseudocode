/*
 * XREFs of WdiUpdateSem @ 0x140640094
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1406400B4 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x140791198 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
