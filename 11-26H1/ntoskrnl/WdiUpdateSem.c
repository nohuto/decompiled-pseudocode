/*
 * XREFs of WdiUpdateSem @ 0x140532B84
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x140513C6C (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x14081EC6C (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
