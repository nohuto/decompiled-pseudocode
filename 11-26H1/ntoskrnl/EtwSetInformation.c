/*
 * XREFs of EtwSetInformation @ 0x1408287B0
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     BapdRegisterEtwProvider @ 0x14050AC94 (BapdRegisterEtwProvider.c)
 *     HvlpEtwRegister @ 0x1405C1174 (HvlpEtwRegister.c)
 *     BapdWriteEtwEvents @ 0x1406C9F80 (BapdWriteEtwEvents.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     BapdRecordFirmwareBootStats @ 0x140C07A44 (BapdRecordFirmwareBootStats.c)
 *     PopDiagInitialize @ 0x140CD1950 (PopDiagInitialize.c)
 * Callees:
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140520D7C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpTrackProviderBinaryKm @ 0x1408289A8 (EtwpTrackProviderBinaryKm.c)
 *     EtwpSetProviderTraitsKm @ 0x14093D31C (EtwpSetProviderTraitsKm.c)
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
