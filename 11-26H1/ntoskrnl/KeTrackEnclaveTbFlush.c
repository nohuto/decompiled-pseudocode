/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1405F12AC
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403432BC (KiEnclsStatus.c)
 *     KiEncls @ 0x14072CBA0 (KiEncls.c)
 */

__int64 __fastcall KeTrackEnclaveTbFlush(__int64 a1)
{
  int v1; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v1 = KiEncls(12LL, 0LL, a1, 0LL);
  return KiEnclsStatus(v1);
}
