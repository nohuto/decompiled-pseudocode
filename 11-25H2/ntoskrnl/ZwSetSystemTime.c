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

__int64 __fastcall ZwSetSystemTime(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
