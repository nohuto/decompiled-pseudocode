/*
 * XREFs of ??_GActiveCommand@InkFeedbackProviderBase@@QEAAPEAXI@Z @ 0x1402FDCF4
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x140229240 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1402FDEB8 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402FEB90 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     <none>
 */

InkFeedbackProviderBase::ActiveCommand *__fastcall InkFeedbackProviderBase::ActiveCommand::`scalar deleting destructor'(
        InkFeedbackProviderBase::ActiveCommand *this)
{
  if ( this )
    Win32FreePool(this);
  return this;
}
