/*
 * XREFs of WdiUpdateSem @ 0x140535024
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14050D6DC (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x140824E7C (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
