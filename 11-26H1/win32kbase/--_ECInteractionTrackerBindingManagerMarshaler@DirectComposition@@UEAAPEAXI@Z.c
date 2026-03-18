/*
 * XREFs of ??_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140128F40
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x1401292D4 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

char *__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vector deleting destructor'(
        char *Buffer,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CDCompDynamicArrayBase *)(Buffer + 72));
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer, v4, v5, v6);
  return Buffer;
}
