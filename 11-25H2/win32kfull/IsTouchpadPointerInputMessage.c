/*
 * XREFs of IsTouchpadPointerInputMessage @ 0x140150714
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTouchpadPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 593) <= 2 || (unsigned int)(a1 - 577) <= 9;
}
