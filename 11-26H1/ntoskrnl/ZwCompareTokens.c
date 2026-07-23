/*
 * XREFs of ZwCompareTokens @ 0x1407293E0
 * Callers:
 *     DifZwCompareTokensWrapper @ 0x1406A1430 (DifZwCompareTokensWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FirstTokenHandle);
}
