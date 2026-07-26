/*
 * XREFs of ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1401684B0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z @ 0x140076F20 (-AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z.c)
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x14008D260 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFO.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMInvokeInitialize(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_INIT_PARAMETERS *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  unsigned int v5; // edi
  char v7[4]; // [rsp+38h] [rbp-30h]
  LARGE_INTEGER PerformanceFrequency[2]; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xE2u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      DriverHandle);
  PerformanceFrequency[0] = KeQueryPerformanceCounter(&PerformanceFrequency[1]);
  v5 = DriverHandle->MiniportDriverCharacteristics.InitializeHandlerEx(a1, DriverHandle->MiniportDriverContext, a2);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  AzTelemetryWriteMiniportInitialize(a1, v5, (const struct KStopwatch *)PerformanceFrequency);
  NdisTraceLoggingDeviceInitialized((__int64)a1, (__int64)PerformanceFrequency, v5 != 0 ? 0xB : 0, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v5;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xE3u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      (char)DriverHandle,
      *(_DWORD *)v7);
  }
  return v5;
}
