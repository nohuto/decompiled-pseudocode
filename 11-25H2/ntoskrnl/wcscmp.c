/*
 * XREFs of wcscmp @ 0x1404FD6A0
 * Callers:
 *     EtwStartAutoLogger @ 0x14079EA28 (EtwStartAutoLogger.c)
 *     PiDqDispatch @ 0x1408377C0 (PiDqDispatch.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140950B3C (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140950D48 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmValidateDeviceContainerName @ 0x14095B284 (_CmValidateDeviceContainerName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409A913C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A9989C (PiDcContainerRequiresConfiguration.c)
 *     HdlspAddLogEntry @ 0x140B9D008 (HdlspAddLogEntry.c)
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
