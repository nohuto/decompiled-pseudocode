/*
 * XREFs of PopDiagTraceZoneCriticalTripPointExceeded @ 0x1407D56AC
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDiagTraceTripPointExceeded @ 0x140B44BB8 (PopDiagTraceTripPointExceeded.c)
 */

void __fastcall PopDiagTraceZoneCriticalTripPointExceeded(__int64 a1, __int64 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rdi

  if ( byte_140E67628
    && (EtwEventEnabled(
          *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC)
     || EtwEventEnabled(
          *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM)) )
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
          *(_DWORD *)(a1 + 28) / 0xAu,
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC);
        PopDiagTraceTripPointExceeded(
          *(_WORD *)(v6 + 128) >> 1,
          *(_QWORD *)(v6 + 136),
          *(_DWORD *)(a1 + 28) / 0xAu,
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM);
      }
      ObfDereferenceObjectWithTag(v5, 0x67446F50u);
    }
  }
}
