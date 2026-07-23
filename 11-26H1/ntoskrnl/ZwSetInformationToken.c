/*
 * XREFs of ZwSetInformationToken @ 0x14072B580
 * Callers:
 *     DifZwSetInformationTokenWrapper @ 0x1406BE820 (DifZwSetInformationTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
