/*
 * XREFs of PopAdaptiveUpdateIdleContextWorker @ 0x1407E2340
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
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
