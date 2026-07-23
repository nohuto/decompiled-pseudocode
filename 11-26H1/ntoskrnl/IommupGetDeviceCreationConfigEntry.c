/*
 * XREFs of IommupGetDeviceCreationConfigEntry @ 0x1405A271C
 * Callers:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     IommupDeviceGetFaultSettings @ 0x140534238 (IommupDeviceGetFaultSettings.c)
 *     IommupDeviceGetAtsSettings @ 0x14058A420 (IommupDeviceGetAtsSettings.c)
 *     IommupDeviceGetPasidSettings @ 0x14058A55C (IommupDeviceGetPasidSettings.c)
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
