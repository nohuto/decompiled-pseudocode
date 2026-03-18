/*
 * XREFs of UsbDevice_HandleAddAndDropEndpointsState @ 0x14003D300
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14001CF0C (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140035D98 (UsbDevice_SetConfigureRequestStatus.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003BF8C (UsbDevice_SendConfigureEndpointCommand.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x14004BDD4 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     TR_SetClientAddressesForOffload @ 0x14004BECC (TR_SetClientAddressesForOffload.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_HandleAddAndDropEndpointsState(__int64 a1, __int64 a2)
{
  unsigned int *v4; // rsi
  unsigned int i; // r14d
  __int64 j; // rdi
  __int64 v7; // rax
  int TransferRingSegmentsForOffload; // edi
  unsigned __int16 v9; // r9
  __int64 v10; // rcx
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1036LL) == 1 )
  {
    v4 = *(unsigned int **)(a2 + 88);
    for ( i = 0; i < *(_DWORD *)(a2 + 84); ++i )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= *(_DWORD *)(a2 + 24) )
          goto LABEL_15;
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * j),
               off_14006AFE8);
        if ( *(unsigned __int8 *)(v7 + 98) == *((_WORD *)v4 + 2) )
          break;
      }
      if ( *(_QWORD *)((char *)v4 + 82) )
      {
        TransferRingSegmentsForOffload = TR_SetClientAddressesForOffload(
                                           *(_QWORD *)(v7 + 88),
                                           *(_QWORD *)((char *)v4 + 82),
                                           *(_QWORD *)((char *)v4 + 90),
                                           *(_QWORD *)((char *)v4 + 98),
                                           *(_QWORD *)((char *)v4 + 106));
        if ( TransferRingSegmentsForOffload < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_13;
          v9 = 63;
          goto LABEL_12;
        }
      }
      else
      {
        TransferRingSegmentsForOffload = TR_ReAllocateTransferRingSegmentsForOffload(*(_QWORD *)(v7 + 88));
        if ( TransferRingSegmentsForOffload < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v9 = 64;
LABEL_12:
            v13 = TransferRingSegmentsForOffload;
            v12 = *(unsigned __int8 *)(a1 + 143);
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              2u,
              0xCu,
              v9,
              (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
              v12,
              v13);
          }
LABEL_13:
          UsbDevice_SetConfigureRequestStatus(a1, TransferRingSegmentsForOffload);
          return UsbDevice_QueueConfigureEndpointEvent(v10, 2);
        }
      }
LABEL_15:
      v4 = (unsigned int *)((char *)v4 + *v4);
    }
  }
  TransferRingSegmentsForOffload = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, a2, 0);
  if ( TransferRingSegmentsForOffload < 0 )
    goto LABEL_13;
  return UsbDevice_SendConfigureEndpointCommand(a1, 0);
}
