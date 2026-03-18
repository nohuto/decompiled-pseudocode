/*
 * XREFs of ZwSetInformationKey @ 0x140726950
 * Callers:
 *     DifZwSetInformationKeyWrapper @ 0x1406BA2E0 (DifZwSetInformationKeyWrapper.c)
 *     CmpDoReDoRecord @ 0x140863828 (CmpDoReDoRecord.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140A12668 (IopApplyMutableTagToRegistryKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeySetInformationClass);
}
