/*
 * XREFs of ZwCreateEventPair @ 0x1407249F0
 * Callers:
 *     DifZwCreateEventPairWrapper @ 0x14069EF70 (DifZwCreateEventPairWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateEventPair(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
