/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x1407C9624
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14077595C (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140437368 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AECCA4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 PopPowerRequestOverrideInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  struct _KTHREAD *i; // rbx

  PopAcquirePowerRequestPushLock(0LL);
  for ( i = (struct _KTHREAD *)stru_140F12D20.QuantumTarget;
        i != (struct _KTHREAD *)&stru_140F12D20.QuantumTarget;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( !i->ApcStateFill[0] )
      PopUmpoSendPowerRequestOverrideQuery((__int64)i, v0, v1, v2);
  }
  return PopReleaseRwLock(&stru_140F12D20);
}
