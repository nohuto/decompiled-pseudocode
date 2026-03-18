/*
 * XREFs of PopAdaptiveUpdateIdleContextWorker @ 0x1407DDD10
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateSystemIdleContext @ 0x140945524 (PopUpdateSystemIdleContext.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopAdaptiveUpdateIdleContextWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  PopUpdateSystemIdleContext(5LL);
  return PopReleasePolicyLock(v3, v2, v4, v5, v7);
}
