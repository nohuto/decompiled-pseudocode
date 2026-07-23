/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x140B1B9C0
 * Callers:
 *     SSHSupportUnregisterPowerSettingCallback @ 0x1407EA0AC (SSHSupportUnregisterPowerSettingCallback.c)
 *     TtmCleanupCurrentSession @ 0x1409F5AB8 (TtmCleanupCurrentSession.c)
 *     PopModernStandbyNotificationInit @ 0x140CDC888 (PopModernStandbyNotificationInit.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404E227C (PopUnregisterPowerSettingCallback.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  NTSTATUS v1; // edi

  v1 = 0;
  if ( !Handle || *((_DWORD *)Handle + 4) != 1952797520 )
    return -1073741811;
  ExAcquireFastMutex(&PopSettingLock);
  if ( *((_BYTE *)Handle + 33) || *((_BYTE *)Handle + 32) || *(PVOID *)Handle == Handle )
  {
    v1 = -1073741811;
  }
  else
  {
    if ( *((_QWORD *)Handle + 3) )
    {
      if ( *((struct _KTHREAD **)Handle + 3) == KeGetCurrentThread() )
      {
        *((_BYTE *)Handle + 32) = 1;
        goto LABEL_9;
      }
      *((_BYTE *)Handle + 33) = 1;
      while ( *((_QWORD *)Handle + 3) )
      {
        KeReleaseGuardedMutex(&PopSettingLock);
        KeWaitForSingleObject(&PopPowerSettingCallbackReturned, Executive, 0, 0, 0LL);
        KeResetEvent(&PopPowerSettingCallbackReturned);
        ExAcquireFastMutex(&PopSettingLock);
      }
      *((_BYTE *)Handle + 33) = 0;
    }
    PopUnregisterPowerSettingCallback((__int64 *)Handle);
  }
LABEL_9:
  KeReleaseGuardedMutex(&PopSettingLock);
  return v1;
}
