/*
 * XREFs of ZwSetInformationKey @ 0x14069E680
 * Callers:
 *     DifZwSetInformationKeyWrapper @ 0x14063C650 (DifZwSetInformationKeyWrapper.c)
 *     CmpDoReDoRecord @ 0x1407D6E40 (CmpDoReDoRecord.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409B2C54 (IopApplyMutableTagToRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
