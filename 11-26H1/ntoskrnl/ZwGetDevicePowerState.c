/*
 * XREFs of ZwGetDevicePowerState @ 0x1407253B0
 * Callers:
 *     DifZwGetDevicePowerStateWrapper @ 0x1406A77E0 (DifZwGetDevicePowerStateWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetDevicePowerState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
