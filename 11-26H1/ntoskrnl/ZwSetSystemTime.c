/*
 * XREFs of ZwSetSystemTime @ 0x140726BD0
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x1406BBF30 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x1408364F8 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1408365C0 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemTime(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
