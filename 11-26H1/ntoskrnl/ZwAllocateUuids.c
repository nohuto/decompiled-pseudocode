/*
 * XREFs of ZwAllocateUuids @ 0x1407242D0
 * Callers:
 *     DifZwAllocateUuidsWrapper @ 0x140699BA0 (DifZwAllocateUuidsWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAllocateUuids(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
