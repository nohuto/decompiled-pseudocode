/*
 * XREFs of ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x140124E1C
 * Callers:
 *     NtUserProcessInkFeedbackCommand @ 0x14024BD30 (NtUserProcessInkFeedbackCommand.c)
 * Callees:
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x140123B08 (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 */

__int64 __fastcall InkProcessorProcessInkFeedbackCommand(__int64 a1, void *a2)
{
  __int64 v3; // rcx

  if ( (unsigned int)a1 >= 5 )
    return 3221225485LL;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3272);
  if ( v3 )
    return InkProcessor::ProcessInkFeedbackCommand(v3);
  else
    return 3221225473LL;
}
