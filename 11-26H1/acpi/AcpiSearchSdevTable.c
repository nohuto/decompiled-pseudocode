/*
 * XREFs of AcpiSearchSdevTable @ 0x1400BA760
 * Callers:
 *     AcpiIsDeviceSecure @ 0x1400C1CA4 (AcpiIsDeviceSecure.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400CA68C (PnpBiosGetDeviceResourceList.c)
 * Callees:
 *     AcpiSdevEntryCompare @ 0x1400BA618 (AcpiSdevEntryCompare.c)
 */

char __fastcall AcpiSearchSdevTable(__int64 a1, const UNICODE_STRING *a2, _DWORD *a3)
{
  char v3; // di
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  int i; // esi
  __int64 v9; // rax

  v3 = 0;
  *a3 = -1;
  v4 = a1 + 36;
  v5 = a1 + *(unsigned int *)(a1 + 4);
  for ( i = 0; v4 + 4 <= v5; ++i )
  {
    v9 = *(unsigned __int16 *)(v4 + 2);
    if ( (unsigned int)v9 < 4 || v4 + v9 > v5 )
      break;
    if ( AcpiSdevEntryCompare(a2, v4) )
    {
      v3 = 1;
      *a3 = i;
      return v3;
    }
    v4 += *(unsigned __int16 *)(v4 + 2);
  }
  return v3;
}
