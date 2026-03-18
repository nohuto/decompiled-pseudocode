/*
 * XREFs of AcpiDiagRequeueThermalPollingTimer @ 0x14002BBDC
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x14002BB60 (AcpiDiagThermalPollingTimerRoutine.c)
 *     AcpiDiagThermalPollingTraceControlCallback @ 0x140056010 (AcpiDiagThermalPollingTraceControlCallback.c)
 *     AcpiDiagInitialize @ 0x1400D8B98 (AcpiDiagInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

void AcpiDiagRequeueThermalPollingTimer()
{
  KIRQL v0; // al
  _IO_ALLOCATION_ACTION (__fastcall *DeviceRoutine)(_DEVICE_OBJECT *, _IRP *, void *, void *); // rdx
  KIRQL v2; // bl
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  v2 = v0;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
    && (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
     || *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels >= (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine)
    || (DeviceRoutine = *(_IO_ALLOCATION_ACTION (__fastcall **)(_DEVICE_OBJECT *, _IRP *, void *, void *))&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels) != 0LL )
  {
    *((_QWORD *)&v3 + 1) = -1LL;
    ((void (__fastcall *)(_KDEVICE_QUEUE *, __int64, _QWORD, __int128 *))KeSetTimer2)(
      &WPP_MAIN_CB.DeviceQueue,
      -(__int64)DeviceRoutine,
      0LL,
      &v3);
  }
  else
  {
    KeCancelTimer2(&WPP_MAIN_CB.DeviceQueue);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}
