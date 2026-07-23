/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x1407CC6C4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407DF428 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1404262F8 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 PopPowerRequestOverrideInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  struct _KTHREAD *i; // rbx

  PopAcquirePowerRequestPushLock(0LL);
  for ( i = (struct _KTHREAD *)stru_140F12EA0.WpsFeedback;
        i != (struct _KTHREAD *)&stru_140F12EA0.WpsFeedback;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( !i->ApcStateFill[0] )
      PopUmpoSendPowerRequestOverrideQuery((__int64)i, v0, v1, v2);
  }
  return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
}
