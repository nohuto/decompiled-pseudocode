/*
 * XREFs of ZwQueryInformationProcess @ 0x140723710
 * Callers:
 *     DifZwQueryInformationProcessWrapper @ 0x1404C0470 (DifZwQueryInformationProcessWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
