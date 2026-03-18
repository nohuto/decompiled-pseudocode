/*
 * XREFs of WPP_RECORDER_SF_q @ 0x14001DED0
 * Callers:
 *     HUBPDO_EvtDeviceProcessQueryInterfaceRequest @ 0x140016240 (HUBPDO_EvtDeviceProcessQueryInterfaceRequest.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016C10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBDSM_WaitingForD0EntryOnHwWake @ 0x140025F00 (HUBDSM_WaitingForD0EntryOnHwWake.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x140026F30 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028F10 (HUBUCX_UCXIoctlComplete.c)
 *     FindMidiInterfaceDescriptor @ 0x14002A084 (FindMidiInterfaceDescriptor.c)
 *     HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x14002DE04 (HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability.c)
 *     HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped @ 0x14002E004 (HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped.c)
 *     HUBMISC_GetGenericErrorResponseOnDescriptorFailure @ 0x14002E080 (HUBMISC_GetGenericErrorResponseOnDescriptorFailure.c)
 *     TUNNEL_EvtInterfaceChange @ 0x140091FC0 (TUNNEL_EvtInterfaceChange.c)
 *     TUNNEL_EvtIoTargetQueryRemove @ 0x140092680 (TUNNEL_EvtIoTargetQueryRemove.c)
 *     TUNNEL_EvtIoTargetRemoveCanceled @ 0x140092720 (TUNNEL_EvtIoTargetRemoveCanceled.c)
 *     TUNNEL_EvtIoTargetRemoveComplete @ 0x1400927A0 (TUNNEL_EvtIoTargetRemoveComplete.c)
 *     TUNNEL_EvtIrpPreprocessQueryDevRelations @ 0x1400928B0 (TUNNEL_EvtIrpPreprocessQueryDevRelations.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, va, 8LL, 0LL);
}
