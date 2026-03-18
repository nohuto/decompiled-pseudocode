/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x14097DDF0
 * Callers:
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     CmCreateKey @ 0x1409748F0 (CmCreateKey.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14097DACC (CmpCaptureKeyValueArray.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  return a1 || CmpFreezeListLock.RelativeTimerBias && MmIsUserAddress(a2);
}
