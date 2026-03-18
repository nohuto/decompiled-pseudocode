/*
 * XREFs of PopRundownPowerSettings @ 0x140AC1020
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopDiagTracePowerSetting @ 0x140AC10A0 (PopDiagTracePowerSetting.c)
 */

void PopRundownPowerSettings()
{
  __int64 v0; // rcx
  struct _KTHREAD *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r8

  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  v1 = *(struct _KTHREAD **)&stru_140F10828.ThreadTimerDelay;
  if ( *(struct _KTHREAD **)&stru_140F10828.ThreadTimerDelay != (struct _KTHREAD *)&stru_140F10828.ThreadTimerDelay )
  {
    v2 = dword_140F106CC;
    do
    {
      v3 = *(&v1->ThreadLock + v2);
      if ( v3 )
      {
        LOBYTE(v0) = 1;
        PopDiagTracePowerSetting(v0, &v1->QuantumTarget, *(unsigned int *)(v3 + 4), v3 + 12);
      }
      v1 = *(struct _KTHREAD **)&v1->Header.Lock;
    }
    while ( v1 != (struct _KTHREAD *)&stru_140F10828.ThreadTimerDelay );
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
}
