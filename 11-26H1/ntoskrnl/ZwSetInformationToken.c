/*
 * XREFs of ZwSetInformationToken @ 0x1407269B0
 * Callers:
 *     DifZwSetInformationTokenWrapper @ 0x1406BAC40 (DifZwSetInformationTokenWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle, *(_QWORD *)&TokenInformationClass);
}
