/*
 * XREFs of ACPISystemPowerDetermineSupportedSystemState @ 0x140041A78
 * Callers:
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x14004104C (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x140041748 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedSystemState(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  __int64 *v4; // rcx
  int v6; // eax

  v2 = 0;
  v3 = 7;
  if ( a2 != 4 )
  {
    v4 = *(__int64 **)(a1 + 8LL * a2 + 408);
    while ( v4 )
    {
      v6 = *((_DWORD *)v4 + 4);
      v4 = (__int64 *)*v4;
      if ( v6 >= v3 )
        v6 = v3;
      v3 = v6;
    }
  }
  if ( v3 != 7 )
    return (unsigned int)v3;
  return v2;
}
