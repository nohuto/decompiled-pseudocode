/*
 * XREFs of AmliWatchdogTimeoutAction @ 0x14006B97C
 * Callers:
 *     FreeContext @ 0x140003D30 (FreeContext.c)
 *     AmliWatchdog @ 0x14006B920 (AmliWatchdog.c)
 * Callees:
 *     AcpiQueueRecordBlackboxInformation @ 0x140054394 (AcpiQueueRecordBlackboxInformation.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x140056060 (AcpiDiagTraceAmliWatchdogTimeout.c)
 */

void __fastcall AmliWatchdogTimeoutAction(_QWORD *a1)
{
  int v2; // ecx
  int v3; // ecx
  ULONG_PTR v4; // r9
  ULONG_PTR v5; // rax

  AcpiDiagTraceAmliWatchdogTimeout();
  v2 = *((_DWORD *)a1 + 4);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = a1[1];
        if ( !v4 || !*(_QWORD *)(v4 + 768) )
          v4 = RootDeviceExtension;
        KeBugCheckEx(0x1D0u, *a1, *a1 + 440LL, v4, (ULONG_PTR)&gAcpiTriageInfo);
      }
      return;
    }
    v5 = a1[1];
    if ( !v5 || !*(_QWORD *)(v5 + 768) )
      v5 = RootDeviceExtension;
    DbgkWerCaptureLiveKernelDump(L"AcpiFirmwareWatchDog", 464LL, *a1, *a1 + 440LL, v5, &gAcpiTriageInfo, 0LL, 0LL, 0);
  }
  AcpiQueueRecordBlackboxInformation();
  if ( *((_BYTE *)a1 + 88) )
  {
    *((_BYTE *)a1 + 88) = 0;
    KeCancelTimer((PKTIMER)(a1 + 13));
  }
}
