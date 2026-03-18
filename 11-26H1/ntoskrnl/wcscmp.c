/*
 * XREFs of wcscmp @ 0x140537FF0
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x140909994 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140909B98 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDqDispatch @ 0x14098EE00 (PiDqDispatch.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140992EEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmValidateDeviceContainerName @ 0x140A29DF4 (_CmValidateDeviceContainerName.c)
 *     PiDcContainerRequiresConfiguration @ 0x140B04F50 (PiDcContainerRequiresConfiguration.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwStartAutoLogger @ 0x140B42448 (EtwStartAutoLogger.c)
 *     HdlspAddLogEntry @ 0x140C4C008 (HdlspAddLogEntry.c)
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
