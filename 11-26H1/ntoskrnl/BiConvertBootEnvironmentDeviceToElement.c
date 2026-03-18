/*
 * XREFs of BiConvertBootEnvironmentDeviceToElement @ 0x140B4AF34
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x140B635D4 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x14089166C (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140891758 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4AF80 (BiConvertBootEnvironmentDeviceToNt.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToElement(_DWORD *a1, int a2, char a3, __int64 *a4, unsigned int *a5)
{
  if ( (a3 & 1) != 0 )
    return BiConvertBootEnvironmentDeviceToQualifiedPartition((__int64)a1, a4, a5);
  if ( (a3 & 2) != 0 )
    return BiConvertBootEnvironmentDeviceToUnknown(a1, a4, a5);
  return BiConvertBootEnvironmentDeviceToNt((_DWORD)a1, a2, a3, (_DWORD)a4, (__int64)a5);
}
