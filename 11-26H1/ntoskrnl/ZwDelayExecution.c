/*
 * XREFs of ZwDelayExecution @ 0x140723A70
 * Callers:
 *     DifZwDelayExecutionWrapper @ 0x1406A3C30 (DifZwDelayExecutionWrapper.c)
 *     IovUnloadDrivers @ 0x140C20E8C (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDelayExecution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
