/*
 * XREFs of EtwEventSetInformation @ 0x180117BD0
 * Callers:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016E69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 * Callees:
 *     EtwpTrackProviderBinary @ 0x180117C5C (EtwpTrackProviderBinary.c)
 */

ULONG __cdecl EtwEventSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  if ( InformationClass )
  {
    if ( InformationClass == 2 )
    {
      if ( EventInformation && InformationLength - 3 <= 0xFFFC )
        return EtwpSetProviderTraits(RegHandle, (__int64)EventInformation, InformationLength);
      return 87;
    }
    if ( InformationClass == 3 )
    {
      if ( EventInformation && InformationLength == 1 )
        return EtwpUseDescriptorType(RegHandle, EventInformation);
      return 87;
    }
    if ( InformationClass != 4 )
      return 50;
  }
  if ( InformationLength )
    return 87;
  LOBYTE(InformationClass) = InformationClass == 4;
  return EtwpTrackProviderBinary(RegHandle, InformationClass);
}
