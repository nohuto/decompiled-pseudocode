/*
 * XREFs of PopDirectedDripsAcquireTransitionLock @ 0x140AC5488
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140AC5204 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall PopDirectedDripsAcquireTransitionLock(void *a1)
{
  struct _KTHREAD *result; // rax

  _m_prefetchw(a1);
  result = (struct _KTHREAD *)(unsigned int)_InterlockedOr((volatile signed __int32 *)a1, 0x40u);
  if ( ((unsigned __int8)result & 0x40) == 0 )
  {
    KeWaitForSingleObject(&word_140F0F600, WrExecutive, 0, 0, 0LL);
    LODWORD(stru_140F0F620.Header.WaitListHead.Blink) = 7;
    result = KeGetCurrentThread();
    stru_140F0F620.WaitBlock[0].Object = result;
  }
  return result;
}
