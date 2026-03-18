/*
 * XREFs of ZwQueryMultipleValueKey @ 0x140726030
 * Callers:
 *     DifZwQueryMultipleValueKeyWrapper @ 0x1406B2C40 (DifZwQueryMultipleValueKeyWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryMultipleValueKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
