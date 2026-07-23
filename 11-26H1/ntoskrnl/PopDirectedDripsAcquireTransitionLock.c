/*
 * XREFs of PopDirectedDripsAcquireTransitionLock @ 0x140AC70F8
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140AC6E74 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 */

unsigned __int64 __fastcall PopDirectedDripsAcquireTransitionLock(void *a1)
{
  unsigned __int64 result; // rax

  _m_prefetchw(a1);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)a1, 0x40u);
  if ( (result & 0x40) == 0 )
  {
    KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
    PopTransitionLockAcquireReason = 7;
    result = (unsigned __int64)KeGetCurrentThread();
    PopTransitionLockOwnerThread = result;
  }
  return result;
}
