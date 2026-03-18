/*
 * XREFs of ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1402F2144
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1402F21C8 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14020A778 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1402F2308 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1402F2688 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceAttributes(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        struct InteractiveControlDevice *a2)
{
  int v4; // eax
  int DigitizerForDevice; // ecx
  const char *v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = InteractiveControlParser::BuildDeviceShapeDescriptor(a2);
  DigitizerForDevice = 0;
  if ( v4 >= 0 )
    DigitizerForDevice = v4;
  if ( *((_DWORD *)a1 + 18) )
  {
    DigitizerForDevice = InteractiveControlParser::FindDigitizerForDevice(a2);
    if ( DigitizerForDevice < 0 )
    {
      if ( (unsigned int)dword_14039BBF8 > 3 )
      {
        v7 = "Failed to find digitizer during initialization.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_14039BBF8,
          byte_14036BCB7,
          0LL,
          0LL,
          (void **)&v7);
      }
      return 0;
    }
  }
  return (unsigned int)DigitizerForDevice;
}
