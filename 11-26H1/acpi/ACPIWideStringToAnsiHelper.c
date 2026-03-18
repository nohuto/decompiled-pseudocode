/*
 * XREFs of ACPIWideStringToAnsiHelper @ 0x14003AE10
 * Callers:
 *     ACPIGetConvertToInstanceID @ 0x14003A0C4 (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToCompatibleID @ 0x14003A30C (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToPnpID @ 0x14003ABA8 (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToDeviceID @ 0x140054450 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToString @ 0x140054818 (ACPIGetConvertToString.c)
 *     ACPIGetConvertToHardwareID @ 0x140061164 (ACPIGetConvertToHardwareID.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIWideStringToAnsiHelper(_BYTE *a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // r10d
  _BYTE *v4; // r8
  __int64 v5; // r11
  char *v6; // r9
  char v7; // al
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    v2 = a2 >> 1;
    v3 = 0;
    if ( v2 )
    {
      v4 = a1;
      v5 = v2;
      v6 = a1;
      v3 = v2;
      do
      {
        v7 = *v6;
        v6 += 2;
        *v4++ = v7;
        --v5;
      }
      while ( v5 );
    }
    result = v3;
    a1[v3] = 0;
  }
  return result;
}
