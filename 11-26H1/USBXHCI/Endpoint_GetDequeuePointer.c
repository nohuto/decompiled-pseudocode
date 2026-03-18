/*
 * XREFs of Endpoint_GetDequeuePointer @ 0x14001E7D4
 * Callers:
 *     UsbDevice_InitializeEndpointContext @ 0x14001D7AC (UsbDevice_InitializeEndpointContext.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x14001E158 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 *     UsbDevice_SetAddress @ 0x140025BE0 (UsbDevice_SetAddress.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140035FF0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x14003A690 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x140048680 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x140054A70 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 * Callees:
 *     TR_GetDequeuePointer @ 0x14001E818 (TR_GetDequeuePointer.c)
 */

__int64 __fastcall Endpoint_GetDequeuePointer(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  if ( !*(_BYTE *)(a1 + 37) )
  {
    v3 = *(_QWORD *)(a1 + 88);
    return TR_GetDequeuePointer(v3);
  }
  v2 = *(_QWORD *)(a1 + 144);
  if ( a2 )
  {
    v3 = *(_QWORD *)(104LL * (unsigned int)(a2 - 1) + v2 + 48);
    return TR_GetDequeuePointer(v3);
  }
  return *(_QWORD *)(*(_QWORD *)(v2 + 32) + 24LL);
}
