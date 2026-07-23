/*
 * XREFs of CmpAllocateTransientPoolWithQuota @ 0x140480350
 * Callers:
 *     NtCompactKeys @ 0x140854C00 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140855850 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14093FADC (CmpCaptureKeyValueArray.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     CmpBounceContextStart @ 0x1409407E0 (CmpBounceContextStart.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 CmpAllocateTransientPoolWithQuota()
{
  return ExAllocatePool2(0x101uLL);
}
