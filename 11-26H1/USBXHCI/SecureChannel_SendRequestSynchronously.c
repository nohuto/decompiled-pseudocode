/*
 * XREFs of SecureChannel_SendRequestSynchronously @ 0x140007AF4
 * Callers:
 *     XilUsbDevice_CreateSecureObject @ 0x140004680 (XilUsbDevice_CreateSecureObject.c)
 *     Interrupter_UpdateERDP @ 0x1400077D0 (Interrupter_UpdateERDP.c)
 *     XilRegister_WriteUlong64 @ 0x1400079C0 (XilRegister_WriteUlong64.c)
 *     Register_ReadSecureMmio @ 0x14000B66C (Register_ReadSecureMmio.c)
 *     TR_AcquireSecureSegments @ 0x140019420 (TR_AcquireSecureSegments.c)
 *     Bulk_Stage_MapIntoRing @ 0x14001A0D0 (Bulk_Stage_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x14001C358 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140027E60 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_SendCompleteStageRequest @ 0x1400292EC (TR_SendCompleteStageRequest.c)
 *     Register_WriteSecureMmio @ 0x14002DDB0 (Register_WriteSecureMmio.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x14002EA28 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     TR_CreateSecureObject @ 0x140038D24 (TR_CreateSecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x140038F28 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x140039014 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039514 (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     TR_InitializeTransferSegment @ 0x140039744 (TR_InitializeTransferSegment.c)
 *     XilCommand_InitializeSecureResources @ 0x140039830 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_AllocateSecureResources @ 0x14003F5CC (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x14003F790 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x14003F94C (XilCommand_FreeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x14003FAA8 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x14003FBC0 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x14003FCE0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x14003FE14 (XilCommand_SendRequestToRingDoorbell.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x140046AF8 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x140046CA4 (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x140046DFC (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x140046F18 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x140047040 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1400472BC (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x140047410 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x140047854 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1400479E0 (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x140047B0C (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x140047C60 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x140047D28 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x140047F20 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Register_MapSecureMmio @ 0x140049F1C (Register_MapSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x14004A008 (Register_UnmapSecureMmio.c)
 *     TR_FreeSecureTransferSegments @ 0x14004BCE0 (TR_FreeSecureTransferSegments.c)
 *     XilUsbDevice_DestroySecureObject @ 0x14004DFF0 (XilUsbDevice_DestroySecureObject.c)
 *     SecureDmaEnabler_Unmap @ 0x140056258 (SecureDmaEnabler_Unmap.c)
 *     Controller_CreateSecureObject @ 0x140074EE0 (Controller_CreateSecureObject.c)
 *     Controller_DestroySecureObject @ 0x1400759D8 (Controller_DestroySecureObject.c)
 *     Register_CreateSecureObject @ 0x14007C968 (Register_CreateSecureObject.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x14007F168 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x140082264 (SecureDmaEnabler_MapMemory.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x140007E44 (McTemplateK0qqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x140007EC4 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_DP @ 0x140056340 (WPP_RECORDER_SF_DP.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005641C (WPP_RECORDER_SF_Ld.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SecureChannel_SendRequestSynchronously(__int64 a1, GUID *a2, int a3, __int64 a4, int a5)
{
  int v6; // edx
  LARGE_INTEGER PerformanceCounter; // rbx
  signed __int32 v10; // ecx
  unsigned int Data1; // eax
  __int64 v12; // rax
  char v13; // r12
  int v14; // edx
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // r14d
  unsigned int v19; // edi
  __int64 v20; // rax
  int v21; // ecx
  __int64 v23; // rcx
  _QWORD *BugCheckParameter4; // [rsp+20h] [rbp-71h]
  char v25; // [rsp+50h] [rbp-41h]
  unsigned int v26; // [rsp+54h] [rbp-3Dh]
  signed __int32 v27; // [rsp+58h] [rbp-39h]
  _QWORD v28[2]; // [rsp+80h] [rbp-11h] BYREF
  int v29; // [rsp+90h] [rbp-1h]
  int v30; // [rsp+94h] [rbp+3h]
  GUID v31; // [rsp+98h] [rbp+7h] BYREF

  v6 = 0;
  HIDWORD(v28[0]) = 0;
  v25 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  Data1 = a2[2].Data1;
  a2[1].Data1 = v10;
  v27 = v10;
  v26 = Data1;
  v31 = GUID_NULL;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v12 )
    {
      EtwActivityIdControl(3u, a2);
      v10 = v27;
    }
    v31 = *a2;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqqq_EtwWriteTransfer(v10, v6, (_DWORD)a2, a2[2].Data1, a3, a5, v10);
    v13 = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  else
  {
    v13 = 0;
  }
  v28[0] = 1LL;
  v30 = 0;
  v28[1] = a2;
  v29 = a3;
  if ( KeGetCurrentIrql() == 2 )
  {
    v23 = *(_QWORD *)(a1 + 8);
    if ( !*(_QWORD *)(v23 + 8) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v23 + 16), v14, 19, 13, (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids);
      }
      KeBugCheckEx(0x144u, 4uLL, 0LL, 2uLL, 3uLL);
    }
    Controller_LowerAndTrackIrql(*(_QWORD *)(v23 + 8));
    v25 = 1;
  }
  BugCheckParameter4 = v28;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01033 + 3592))(
          WdfDriverGlobals,
          *(_QWORD *)a1,
          0LL,
          6078464LL);
  if ( v25 )
    Controller_RaiseAndTrackIrql(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
  if ( v18 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
      v15,
      19,
      14,
      (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
      v18);
  }
  else
  {
    if ( !a5 )
      goto LABEL_14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DP(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v15, v16, v17, (unsigned int)v28, a5, 0);
    v18 = -1073741306;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = v26;
    WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v15, v16, v17, (_DWORD)BugCheckParameter4, v26, v18);
    goto LABEL_15;
  }
LABEL_14:
  v19 = v26;
LABEL_15:
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( v13 )
  {
    v20 = 1000000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqx_EtwWriteTransfer(
        v21,
        v20 % *(_QWORD *)(a1 + 16),
        (unsigned int)&v31,
        v19,
        v27,
        v20 / *(_QWORD *)(a1 + 16));
  }
  return (unsigned int)v18;
}
