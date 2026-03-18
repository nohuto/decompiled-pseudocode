/*
 * XREFs of ZwAllocateReserveObject @ 0x140724270
 * Callers:
 *     DifZwAllocateReserveObjectWrapper @ 0x140699700 (DifZwAllocateReserveObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAllocateReserveObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
