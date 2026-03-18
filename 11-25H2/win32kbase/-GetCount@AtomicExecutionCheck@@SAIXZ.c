/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400AF090
 * Callers:
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14004C39C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1400AEC00 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     LeaveCrit @ 0x1401675A0 (LeaveCrit.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1401A5FDC (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 AtomicExecutionCheck::GetCount(void)
{
  __int64 result; // rax

  result = W32GetCurrentThreadNonPaged();
  if ( result )
    return *(unsigned int *)(result + 28);
  return result;
}
