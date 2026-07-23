/*
 * XREFs of IommupDeviceGetAtsSettings @ 0x14058A420
 * Callers:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     IommupDeviceEnableSvm @ 0x14078537C (IommupDeviceEnableSvm.c)
 * Callees:
 *     IommupGetDeviceCreationConfigEntry @ 0x1405A271C (IommupGetDeviceCreationConfigEntry.c)
 */

__int64 __fastcall IommupDeviceGetAtsSettings(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // r9

  v2 = 0;
  v3 = a2;
  if ( a1 && IommupGetDeviceCreationConfigEntry(a1, 4LL) )
    v2 = -1073741637;
  *v3 = 0;
  return v2;
}
