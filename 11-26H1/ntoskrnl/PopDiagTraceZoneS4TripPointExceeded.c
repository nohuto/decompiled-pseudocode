/*
 * XREFs of PopDiagTraceZoneS4TripPointExceeded @ 0x1407D8958
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404E6660 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDiagTraceTripPointExceeded @ 0x140B46BF4 (PopDiagTraceTripPointExceeded.c)
 */

void __fastcall PopDiagTraceZoneS4TripPointExceeded(__int64 a1, __int64 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rdi

  if ( PopDiagHandleRegistered
    && (EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC)
     || EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM)) )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
    v5 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
    {
      v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
      if ( v6 )
      {
        PopDiagTraceTripPointExceeded(
          *(_WORD *)(v6 + 128) >> 1,
          *(_QWORD *)(v6 + 136),
          *(_DWORD *)(a1 + 76) / 0xAu,
          POP_ETW_EVENT_S4_TRIP_POINT_DIAGNOSTIC);
        PopDiagTraceTripPointExceeded(
          *(_WORD *)(v6 + 128) >> 1,
          *(_QWORD *)(v6 + 136),
          *(_DWORD *)(a1 + 76) / 0xAu,
          "X");
      }
      ObfDereferenceObjectWithTag(v5, 0x67446F50u);
    }
  }
}
