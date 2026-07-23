/*
 * XREFs of ZwSetInformationKey @ 0x14072B520
 * Callers:
 *     DifZwSetInformationKeyWrapper @ 0x1406BDEC0 (DifZwSetInformationKeyWrapper.c)
 *     CmpDoReDoRecord @ 0x140869C08 (CmpDoReDoRecord.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140A11858 (IopApplyMutableTagToRegistryKey.c)
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
