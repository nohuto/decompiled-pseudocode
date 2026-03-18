/*
 * XREFs of ACPIEcCreateEcData @ 0x14005FB08
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x14005FC00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcStartDevice @ 0x14005FEB0 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 ACPIEcCreateEcData()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = ExAllocatePool2(64LL, 2328LL, 1164993345LL);
  v1 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = _InterlockedExchange64(&EcExtensionList, result);
    *(_DWORD *)(result + 64) = 50;
    *(_DWORD *)(result + 68) = 10;
    if ( (AcpiOverrideAttributes & 0x1000000) != 0 )
      *(_DWORD *)(result + 68) = 50;
    *(_WORD *)(result + 121) = 0;
    *(_BYTE *)(result + 496) = 0;
    *(_BYTE *)(result + 512) = 0;
    *(_BYTE *)(result + 467) = 1;
    KeQueryPerformanceCounter((PLARGE_INTEGER)(result + 520));
    *(_QWORD *)(v1 + 480) = v1 + 472;
    *(_QWORD *)(v1 + 472) = v1 + 472;
    KeInitializeEvent((PRKEVENT)(v1 + 96), NotificationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 88));
    KeInitializeTimer((PKTIMER)(v1 + 528));
    KeInitializeDpc((PRKDPC)(v1 + 592), (PKDEFERRED_ROUTINE)ACPIEcWatchdogDpc, (PVOID)v1);
    return v1;
  }
  return result;
}
