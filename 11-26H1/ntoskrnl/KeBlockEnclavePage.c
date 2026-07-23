/*
 * XREFs of KeBlockEnclavePage @ 0x1405F1068
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403432BC (KiEnclsStatus.c)
 *     KiEncls @ 0x14072CBA0 (KiEncls.c)
 */

__int64 __fastcall KeBlockEnclavePage(__int64 a1)
{
  int v2; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  do
    v2 = KiEncls(9LL, 0LL, a1, 0LL);
  while ( v2 == 15 );
  return KiEnclsStatus(v2);
}
