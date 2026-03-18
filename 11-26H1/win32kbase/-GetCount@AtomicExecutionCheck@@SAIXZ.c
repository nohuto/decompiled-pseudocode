/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400E5470
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1400E5180 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ??1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ @ 0x1400FB674 (--1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013C400 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x140164A9C (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1401FBD50 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtomicExecutionCheck::GetCount(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = PsGetCurrentThreadWin32Thread(a1, a2);
  if ( result )
    return *(unsigned int *)(result + 28);
  return result;
}
