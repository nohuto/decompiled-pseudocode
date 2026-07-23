/*
 * XREFs of wcscmp @ 0x14053A470
 * Callers:
 *     PiDqDispatch @ 0x14094F860 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1409AC150 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x140A3CE94 (_CmValidateDeviceContainerName.c)
 *     PiDcContainerRequiresConfiguration @ 0x140B06B60 (PiDcContainerRequiresConfiguration.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwStartAutoLogger @ 0x140B44338 (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x140C52008 (HdlspAddLogEntry.c)
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *Str1, const wchar_t *Str2)
{
  int v2; // eax
  unsigned int v3; // r8d
  signed __int64 v4; // rcx

  v2 = *Str2;
  v3 = *Str1 - v2;
  if ( !v3 )
  {
    v4 = (char *)Str1 - (char *)Str2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++Str2;
      v3 = *(const wchar_t *)((char *)Str2 + v4) - v2;
    }
    while ( !v3 );
  }
  return ((int)v3 > 0) - (v3 >> 31);
}
