/*
 * XREFs of HUBDSM_ValidatingAlternateBOSDescriptorHeader @ 0x140025020
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C9CC (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 */

__int64 __fastcall HUBDSM_ValidatingAlternateBOSDescriptorHeader(__int64 a1)
{
  return HUBDTX_ValidateAndCacheBOSDescriptorHeader(*(_QWORD *)(a1 + 960));
}
