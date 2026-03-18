/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x140250228
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402501F0 (-PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x14028B868 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(HideInkCursorProvider *this, unsigned int a2)
{
  int PointerInfoByPointerId; // ebx
  struct tagPOINTER_INFO *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  PointerInfoByPointerId = GetPointerInfoByPointerId(a2, &v4);
  if ( PointerInfoByPointerId >= 0
    && *(_DWORD *)(*(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)v4 + 2), 19) + 456) + 24LL) != 5 )
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)PointerInfoByPointerId;
}
