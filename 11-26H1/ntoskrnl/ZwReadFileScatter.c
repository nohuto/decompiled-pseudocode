/*
 * XREFs of ZwReadFileScatter @ 0x1407239B0
 * Callers:
 *     DifZwReadFileScatterWrapper @ 0x1406B5BB0 (DifZwReadFileScatterWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReadFileScatter(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
