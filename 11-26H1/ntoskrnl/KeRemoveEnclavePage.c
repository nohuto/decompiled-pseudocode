/*
 * XREFs of KeRemoveEnclavePage @ 0x140343280
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitRemoveEnclavePageForce @ 0x140343E60 (MiDecommitRemoveEnclavePageForce.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C07A84 (MiDeleteAllHardwareEnclaves.c)
 *     MiDeleteEnclavePages @ 0x140C07CE8 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403432BC (KiEnclsStatus.c)
 *     KiEncls @ 0x14072CBA0 (KiEncls.c)
 */

__int64 __fastcall KeRemoveEnclavePage(__int64 a1)
{
  unsigned int v1; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v1 = KiEncls(3LL, 0LL, a1, 0LL);
  return KiEnclsStatus(v1);
}
