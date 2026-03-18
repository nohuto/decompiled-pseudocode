/*
 * XREFs of CcIsCacheMapACursorInPrivateVCM @ 0x140389484
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140388CAC (CcLazyWriteScanVolume.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsCacheMapACursorInPrivateVCM(__int64 a1, __int64 a2)
{
  return a2 == a1 + 72 || a2 == a1 + 96;
}
