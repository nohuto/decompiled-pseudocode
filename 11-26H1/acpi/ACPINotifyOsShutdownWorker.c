/*
 * XREFs of ACPINotifyOsShutdownWorker @ 0x140068C70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1400621FC (ACPIInternalEvaluateOST.c)
 *     ACPIInitShutdownInProgress @ 0x140068B2C (ACPIInitShutdownInProgress.c)
 *     ACPIStopShutdownInProgress @ 0x140069030 (ACPIStopShutdownInProgress.c)
 */

void __fastcall ACPINotifyOsShutdownWorker(__int64 a1)
{
  _QWORD *v2; // rcx

  ACPIInternalEvaluateOST(a1, 129, 129);
  v2 = AcpiShutdownNotification;
  *(_BYTE *)AcpiShutdownNotification = 1;
  v2[25] = a1;
  *((_DWORD *)v2 + 48) = 0;
  ACPIInitShutdownInProgress((char *)v2);
  if ( AcpiNotifyOsShutdownCritical )
  {
    ZwInitiatePowerAction(PowerActionShutdownOff, PowerSystemSleeping3, 0x41000004u, 0);
  }
  else if ( ZwInitiatePowerAction(PowerActionShutdownOff, PowerSystemSleeping3, 0x2000003u, 0) < 0 )
  {
    ACPIInternalEvaluateOST(a1, 129, 128);
    KeAcquireGuardedMutex(&AcpiShutdownInProgressWorkerLock);
    ACPIStopShutdownInProgress(AcpiShutdownNotification);
    KeReleaseGuardedMutex(&AcpiShutdownInProgressWorkerLock);
  }
}
