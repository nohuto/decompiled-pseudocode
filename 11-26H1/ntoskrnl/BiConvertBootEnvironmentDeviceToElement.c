/*
 * XREFs of BiConvertBootEnvironmentDeviceToElement @ 0x140B4CCC4
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x140B66674 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140897A68 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140897B54 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10 (BiConvertBootEnvironmentDeviceToNt.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToElement(_DWORD *a1, int a2, char a3, __int64 *a4, unsigned int *a5)
{
  if ( (a3 & 1) != 0 )
    return BiConvertBootEnvironmentDeviceToQualifiedPartition((__int64)a1, a4, a5);
  if ( (a3 & 2) != 0 )
    return BiConvertBootEnvironmentDeviceToUnknown(a1, a4, a5);
  return BiConvertBootEnvironmentDeviceToNt((_DWORD)a1, a2, a3, (_DWORD)a4, (__int64)a5);
}
