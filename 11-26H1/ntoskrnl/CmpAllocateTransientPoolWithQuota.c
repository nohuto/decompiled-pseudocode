/*
 * XREFs of CmpAllocateTransientPoolWithQuota @ 0x1404869D8
 * Callers:
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14084F540 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     CmCreateKey @ 0x1409748F0 (CmCreateKey.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14097DACC (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     CmpBounceContextStart @ 0x14097E7D0 (CmpBounceContextStart.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 CmpAllocateTransientPoolWithQuota()
{
  return ExAllocatePool2(0x101uLL);
}
