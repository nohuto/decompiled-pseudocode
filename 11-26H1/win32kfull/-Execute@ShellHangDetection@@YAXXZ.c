/*
 * XREFs of ?Execute@ShellHangDetection@@YAXXZ @ 0x140289468
 * Callers:
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1402A7B44 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1402C36B8 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer @ 0x1402894D8 (ShellHangDetection--_anonymous_namespace_--ReportHungShellToWer.c)
 */

void __fastcall ShellHangDetection::Execute(ShellHangDetection *this)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  const struct tagTHREADINFO *v3; // rbx
  __int64 v4; // rbx

  v2 = *((_QWORD *)PtiCurrent((__int64)this) + 61);
  v3 = *(const struct tagTHREADINFO **)(v2 + 288);
  if ( v3 && IsThreadHung(*(const struct tagTHREADINFO **)(v2 + 288), v1)
    || (v4 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 184LL)) != 0
    && (v3 = *(const struct tagTHREADINFO **)(v4 + 16)) != 0LL
    && IsThreadHung(v3, v1) )
  {
    ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer(v3);
  }
}
