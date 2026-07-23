/*
 * XREFs of CcIsCacheMapACursorInPrivateVCM @ 0x14038B234
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsCacheMapACursorInPrivateVCM(__int64 a1, __int64 a2)
{
  return a2 == a1 + 72 || a2 == a1 + 96;
}
