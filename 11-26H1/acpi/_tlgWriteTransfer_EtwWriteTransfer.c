/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x140038430
 * Callers:
 *     FreeContext @ 0x140003D30 (FreeContext.c)
 *     AcpiDiagTracePccEjectSubspace @ 0x140051C68 (AcpiDiagTracePccEjectSubspace.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x140056060 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTraceEpmInitialization @ 0x140056400 (AcpiDiagTraceEpmInitialization.c)
 *     AcpiDiagTracePccCommandTimeout @ 0x1400564CC (AcpiDiagTracePccCommandTimeout.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x140056A84 (AcpiDiagTraceTemperatureTelemetry.c)
 *     ACPIPepInitializeEpmNotificationSupport @ 0x1400B434C (ACPIPepInitializeEpmNotificationSupport.c)
 *     IrqTraceAffinityPolicy @ 0x1400D265C (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a6)
{
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR v9; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  v9.Keyword = v6;
  a6->Ptr = *(_QWORD *)(a1 + 8);
  a6->Size = **(unsigned __int16 **)(a1 + 8);
  a6[1].Ptr = (unsigned __int64)v7;
  a6->Reserved = 2;
  a6[1].Size = *v7;
  a6[1].Reserved = 1;
  return EtwWriteTransfer(*(_QWORD *)(a1 + 32), &v9, 0LL, 0LL, UserDataCount, a6);
}
