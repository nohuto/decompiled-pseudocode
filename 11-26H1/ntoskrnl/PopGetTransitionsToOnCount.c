/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14043598C
 * Callers:
 *     PopSetSleepMarker @ 0x140B2ECDC (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int KernelShadowStack; // ebx

  PopAcquireRwLockExclusive(PopSleepstudySessionLock.TracingPrivate);
  KernelShadowStack = (unsigned int)PopSleepstudySessionLock.KernelShadowStack;
  PopReleaseRwLock((struct _KTHREAD *)PopSleepstudySessionLock.TracingPrivate);
  return KernelShadowStack;
}
