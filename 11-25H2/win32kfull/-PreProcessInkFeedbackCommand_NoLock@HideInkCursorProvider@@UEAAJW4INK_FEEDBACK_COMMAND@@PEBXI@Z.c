/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x140216290
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x140266C4C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::PreProcessInkFeedbackCommand_NoLock(
        HideInkCursorProvider *a1,
        int a2,
        unsigned int *a3,
        int a4)
{
  if ( (unsigned int)(a2 - 3) >= 2 )
    return 3221225659LL;
  if ( a4 == 4 )
    return HideInkCursorProvider::ValidatePointer(a1, *a3);
  return 3221225485LL;
}
