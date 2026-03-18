/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1405EE93C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140519CE0 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x14034123C (KiEnclsStatus.c)
 *     KiEncls @ 0x140727FD0 (KiEncls.c)
 */

__int64 __fastcall KeTrackEnclaveTbFlush(__int64 a1)
{
  int v1; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v1 = KiEncls(12LL, 0LL, a1, 0LL);
  return KiEnclsStatus(v1);
}
