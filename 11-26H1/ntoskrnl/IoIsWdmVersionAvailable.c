/*
 * XREFs of IoIsWdmVersionAvailable @ 0x140B0A4D0
 * Callers:
 *     DifIoIsWdmVersionAvailableWrapper @ 0x14065D160 (DifIoIsWdmVersionAvailableWrapper.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsWdmVersionAvailable(UCHAR MajorVersion, UCHAR MinorVersion)
{
  BOOLEAN result; // al

  if ( MajorVersion < 6u )
    return 1;
  result = 0;
  if ( MajorVersion == 6 && !MinorVersion )
    return 1;
  return result;
}
