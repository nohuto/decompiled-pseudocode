/*
 * XREFs of ACPIEcUnloadPending @ 0x140060338
 * Callers:
 *     ACPIEcServiceDevice @ 0x14001F19C (ACPIEcServiceDevice.c)
 *     ACPIEcDispatchQueries @ 0x14003E738 (ACPIEcDispatchQueries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcUnloadPending(_BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1[122] && !a1[465] && !a1[496] )
    a1[121] = 2;
  return result;
}
