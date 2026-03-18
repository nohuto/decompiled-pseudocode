/*
 * XREFs of IommupGetDeviceCreationConfigEntry @ 0x14059FF2C
 * Callers:
 *     HalpIommuCreateDevice @ 0x14051AC18 (HalpIommuCreateDevice.c)
 *     IommupDeviceGetFaultSettings @ 0x140531D98 (IommupDeviceGetFaultSettings.c)
 *     IommupDeviceGetAtsSettings @ 0x140587E48 (IommupDeviceGetAtsSettings.c)
 *     IommupDeviceGetPasidSettings @ 0x140587F84 (IommupDeviceGetPasidSettings.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall IommupGetDeviceCreationConfigEntry(__int64 *a1, int a2)
{
  __int64 *result; // rax

  result = a1;
  while ( *((_DWORD *)result + 4) != a2 )
  {
    result = (__int64 *)*result;
    if ( result == a1 )
      return 0LL;
  }
  return result;
}
