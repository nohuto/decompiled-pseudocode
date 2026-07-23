/*
 * XREFs of PspLockProcessListExclusive @ 0x14021621C
 * Callers:
 *     PsGetSessionObjectById @ 0x140216024 (PsGetSessionObjectById.c)
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140424C54 (PsIsSessionInCurrentServerSilo.c)
 *     PspDetachSession @ 0x1404B05B0 (PspDetachSession.c)
 *     PsAttachSession @ 0x140619D70 (PsAttachSession.c)
 *     PspMarkSessionDeletePending @ 0x14077D2E8 (PspMarkSessionDeletePending.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PspFreeSessionId @ 0x140804C60 (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x140804CB4 (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x140804DCC (PspMarkSessionReferenceProcess.c)
 *     PspSessionUnlinkProcess @ 0x140804E54 (PspSessionUnlinkProcess.c)
 *     PspUnlinkSessionId @ 0x140804EB4 (PspUnlinkSessionId.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     PspInitializeSessionGlobals @ 0x140A098DC (PspInitializeSessionGlobals.c)
 *     PsGetNextSession @ 0x140A837F0 (PsGetNextSession.c)
 *     PsJoinSession @ 0x140ABFD18 (PsJoinSession.c)
 *     PsUnlinkProcessFromSession @ 0x140AF9554 (PsUnlinkProcessFromSession.c)
 *     PspAttachSession @ 0x140B23AC8 (PspAttachSession.c)
 *     ExpInitializeSessionDriver @ 0x140B381A8 (ExpInitializeSessionDriver.c)
 *     PspMakeSessionVisible @ 0x140B57978 (PspMakeSessionVisible.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall PspLockProcessListExclusive(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // rdx
  AutoBoost *v3; // rbx

  --*(_WORD *)(a1 + 486);
  v1 = KeAbPreAcquire((struct _KTHREAD *)&PspActiveProcessLock, 0LL);
  v3 = (AutoBoost *)v1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspActiveProcessLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PspActiveProcessLock, v1, &PspActiveProcessLock);
  if ( v3 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v3, v2);
    else
      *((_BYTE *)v3 + 10) = 1;
  }
}
