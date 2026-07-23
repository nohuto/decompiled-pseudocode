/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x14093FE00
 * Callers:
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14093FADC (CmpCaptureKeyValueArray.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  return a1 || CmpFreezeListLock.CycleTime && MmIsUserAddress(a2);
}
