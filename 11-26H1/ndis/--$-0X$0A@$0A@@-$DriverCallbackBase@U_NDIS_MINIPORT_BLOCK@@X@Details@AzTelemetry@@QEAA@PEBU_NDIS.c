/*
 * XREFs of ??$?0X$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400757C0
 * Callers:
 *     ??0MiniportDevicePnPEventNotify@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@@Z @ 0x14008DA70 (--0MiniportDevicePnPEventNotify@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_E.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008DB30 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x14008F1A0 (--0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>(
        __int64 a1,
        __int64 a2)
{
  bool v3; // al
  LARGE_INTEGER *v4; // rcx

  *(_QWORD *)a1 = &AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>::`vftable';
  v3 = (unsigned int)dword_14011C6C0 > 4
    && (qword_14011C6D0 & 0x200) != 0
    && (qword_14011C6D8 & 0x200) == qword_14011C6D8;
  *(_BYTE *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = (LARGE_INTEGER *)(a1 + 32);
  *(_QWORD *)(a1 + 40) = 0LL;
  v4->QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 8) )
    *(LARGE_INTEGER *)(a1 + 24) = KeQueryPerformanceCounter(v4);
  return a1;
}
