/*
 * XREFs of ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180010718
 * Callers:
 *     HamQueryApplicationUsageInfo @ 0x18001AC10 (HamQueryApplicationUsageInfo.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemOpenKey(HKEY a1, const unsigned __int16 *a2, REGSAM a3, HKEY *phkResult)
{
  LSTATUS result; // eax

  result = RegOpenKeyExW(a1, a2, 0, a3, phkResult);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
