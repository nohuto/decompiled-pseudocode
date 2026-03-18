/*
 * XREFs of ZwChangeProcessState @ 0x1407246F0
 * Callers:
 *     DifZwChangeProcessStateWrapper @ 0x14069CDB0 (DifZwChangeProcessStateWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwChangeProcessState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
