/*
 * XREFs of PspLockProcessListExclusive @ 0x140215EEC
 * Callers:
 *     PsGetSessionObjectById @ 0x140215CF4 (PsGetSessionObjectById.c)
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140435678 (PsIsSessionInCurrentServerSilo.c)
 *     PspDetachSession @ 0x1404B6D7C (PspDetachSession.c)
 *     PsAttachSession @ 0x140616D80 (PsAttachSession.c)
 *     PspMarkSessionDeletePending @ 0x14077A3B8 (PspMarkSessionDeletePending.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PspFreeSessionId @ 0x1407FF230 (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x1407FF284 (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x1407FF39C (PspMarkSessionReferenceProcess.c)
 *     PspSessionUnlinkProcess @ 0x1407FF424 (PspSessionUnlinkProcess.c)
 *     PspUnlinkSessionId @ 0x1407FF484 (PspUnlinkSessionId.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     PsGetNextSession @ 0x140A7D980 (PsGetNextSession.c)
 *     PsJoinSession @ 0x140ABD728 (PsJoinSession.c)
 *     PsUnlinkProcessFromSession @ 0x140AF6EB4 (PsUnlinkProcessFromSession.c)
 *     PspAttachSession @ 0x140B216C8 (PspAttachSession.c)
 *     ExpInitializeSessionDriver @ 0x140B35F98 (ExpInitializeSessionDriver.c)
 *     PspMakeSessionVisible @ 0x140B550DC (PspMakeSessionVisible.c)
 *     PspInitializeSessionGlobals @ 0x140B6AFFC (PspInitializeSessionGlobals.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
