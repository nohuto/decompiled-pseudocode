/*
 * XREFs of ZwCompactKeys @ 0x1407247B0
 * Callers:
 *     DifZwCompactKeysWrapper @ 0x14069D6E0 (DifZwCompactKeysWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCompactKeys(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
