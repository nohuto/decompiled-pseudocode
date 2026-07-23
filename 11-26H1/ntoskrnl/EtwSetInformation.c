/*
 * XREFs of EtwSetInformation @ 0x14082E9F0
 * Callers:
 *     BapdRegisterEtwProvider @ 0x140504704 (BapdRegisterEtwProvider.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     HvlpEtwRegister @ 0x1405C39E4 (HvlpEtwRegister.c)
 *     BapdWriteEtwEvents @ 0x1406CDFBC (BapdWriteEtwEvents.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     BapdRecordFirmwareBootStats @ 0x140C0DC54 (BapdRecordFirmwareBootStats.c)
 *     PopDiagInitialize @ 0x140CD7AF8 (PopDiagInitialize.c)
 * Callees:
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpTrackProviderBinaryKm @ 0x14082EBE8 (EtwpTrackProviderBinaryKm.c)
 *     EtwpSetProviderTraitsKm @ 0x140918EBC (EtwpSetProviderTraitsKm.c)
 */

NTSTATUS __stdcall EtwSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  NTSTATUS v4; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8

  v4 = 0;
  if ( !RegHandle )
    return -1073741816;
  switch ( InformationClass )
  {
    case EventProviderBinaryTrackInfo:
      goto LABEL_26;
    case EventProviderSetTraits:
      if ( EventInformation && InformationLength - 3 <= 0x7FFC )
        return EtwpSetProviderTraitsKm(RegHandle, EventInformation);
      return -1073741811;
    case EventProviderUseDescriptorType:
      if ( EventInformation && InformationLength == 1 )
      {
        if ( *(_BYTE *)EventInformation == 1 )
        {
          _InterlockedOr16((volatile signed __int16 *)(RegHandle + 98), 0x100u);
          return v4;
        }
        if ( !*(_BYTE *)EventInformation )
        {
          _InterlockedAnd16((volatile signed __int16 *)(RegHandle + 98), 0xFEFFu);
          return v4;
        }
      }
      return -1073741811;
    case EventProviderSetReserved2:
LABEL_26:
      if ( !(unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
        return -1073741808;
      if ( !EventInformation && !InformationLength )
      {
        LOBYTE(v11) = InformationClass == EventProviderSetReserved2;
        return EtwpTrackProviderBinaryKm(RegHandle, v10, v11);
      }
      return -1073741811;
  }
  return -1073741808;
}
