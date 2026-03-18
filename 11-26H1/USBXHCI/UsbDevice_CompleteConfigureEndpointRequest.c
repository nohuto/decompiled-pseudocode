/*
 * XREFs of UsbDevice_CompleteConfigureEndpointRequest @ 0x14002F72C
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x14002F8DC (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dqqd @ 0x140033E6C (WPP_RECORDER_SF_dqqd.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_CompleteConfigureEndpointRequest(__int64 a1, char a2, int a3, int a4)
{
  int v5; // edi
  __int64 v6; // rsi
  _BYTE *v7; // rcx
  bool v8; // zf
  unsigned int v9; // ebp

  if ( !*(_QWORD *)(a1 + 448) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v5 = *(_DWORD *)(a1 + 456);
  v6 = *(_QWORD *)(a1 + 448);
  if ( v5 == 259 )
    v5 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqqd(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), *(unsigned __int8 *)(a1 + 143), a3, a4);
  v7 = *(_BYTE **)(a1 + 600);
  if ( v7 )
  {
    *(_BYTE *)(a1 + 578) = v7[80];
    *(_BYTE *)(a1 + 579) = v7[81];
    *(_BYTE *)(a1 + 580) = v7[82];
  }
  v8 = *(_BYTE *)(a1 + 440) == 0;
  v9 = v5;
  *(_DWORD *)(a1 + 584) = v5;
  if ( !v8 )
    v9 = 0;
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_DWORD *)(a1 + 456) = -1073741823;
  *(_BYTE *)(a1 + 440) = 0;
  *(_BYTE *)(a1 + 460) = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0ppqqqq_EtwWriteTransfer(
      *(unsigned __int8 *)(a1 + 579),
      a2,
      a3,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
      *(_QWORD *)a1,
      *(_BYTE *)(a1 + 578),
      *(_BYTE *)(a1 + 579),
      *(_BYTE *)(a1 + 580),
      v5);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           v6,
           v9);
}
