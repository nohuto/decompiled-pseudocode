/*
 * XREFs of ZwQueryInformationPort @ 0x140725EF0
 * Callers:
 *     DifZwQueryInformationPortWrapper @ 0x1406B1710 (DifZwQueryInformationPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
