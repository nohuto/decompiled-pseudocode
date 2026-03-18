/*
 * XREFs of ExpFreePoolChecks @ 0x140344A90
 * Callers:
 *     ExRemovePoolTag @ 0x1403447D0 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x140345B28 (ExpFreeHeapSpecialPool.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 * Callees:
 *     ExpCheckForResource @ 0x140344B48 (ExpCheckForResource.c)
 *     ExpCheckForWorker @ 0x140344BD8 (ExpCheckForWorker.c)
 *     KeCheckForTimer @ 0x140344DA0 (KeCheckForTimer.c)
 *     ExpCheckForLookaside @ 0x140344F78 (ExpCheckForLookaside.c)
 *     VfPtFreePoolNotification @ 0x140C44F7C (VfPtFreePoolNotification.c)
 */

unsigned __int8 __fastcall ExpFreePoolChecks(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned __int8 result; // al

  result = ExpPoolFlags;
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    result = (ExpPoolFlags & 0x200) != 0;
    if ( (((a4 & 0xC0) != 0) & result) != 0 )
      result = ExpCheckForLookaside(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 1) != 0 )
      result = KeCheckForTimer(BugCheckParameter3);
    if ( (ExpPoolFlags & 4) != 0 )
      result = ExpCheckForResource(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 2) != 0 )
      result = ExpCheckForWorker(BugCheckParameter3);
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
    return VfPtFreePoolNotification(BugCheckParameter3, a2, a3, a5);
  return result;
}
