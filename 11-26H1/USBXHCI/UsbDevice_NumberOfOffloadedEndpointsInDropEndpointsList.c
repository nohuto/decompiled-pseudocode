/*
 * XREFs of UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x14002ED38
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x14004E428 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x14004E4E4 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int i; // esi
  __int64 v4; // rax
  unsigned int v5; // edx

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); v1 = v5 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
           WdfDriverGlobals,
           *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * i),
           off_14006AFE8);
    v5 = v1 + 1;
    if ( *(_DWORD *)(v4 + 1368) != 2 )
      v5 = v1;
    ++i;
  }
  return v1;
}
