/*
 * XREFs of ZwSetSystemTime @ 0x14069E900
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x14063D120 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x1407A7590 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1407A7650 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
