/*
 * XREFs of HUBDSM_ValidatingAlternateDeviceDescriptor @ 0x140025060
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D22C (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingAlternateDeviceDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheDeviceDescriptor(*(_QWORD *)(a1 + 960));
}
