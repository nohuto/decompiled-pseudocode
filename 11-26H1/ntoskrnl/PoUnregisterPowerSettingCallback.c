/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x140B19570
 * Callers:
 *     SSHSupportUnregisterPowerSettingCallback @ 0x1407E453C (SSHSupportUnregisterPowerSettingCallback.c)
 *     TtmCleanupCurrentSession @ 0x140A39EB8 (TtmCleanupCurrentSession.c)
 *     PopModernStandbyNotificationInit @ 0x140CD6534 (PopModernStandbyNotificationInit.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404E8EBC (PopUnregisterPowerSettingCallback.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  NTSTATUS v1; // edi

  v1 = 0;
  if ( !Handle || *((_DWORD *)Handle + 4) != 1952797520 )
    return -1073741811;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
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
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
        KeWaitForSingleObject(&stru_140F11D08.WaitBlockFill11[120], Executive, 0, 0, 0LL);
        KeResetEvent((PRKEVENT)&stru_140F11D08.WaitBlockFill11[120]);
        ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
      }
      *((_BYTE *)Handle + 33) = 0;
    }
    PopUnregisterPowerSettingCallback((__int64 *)Handle);
  }
LABEL_9:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  return v1;
}
