/*
 * XREFs of PopDirectedDripsReleaseTransitionLock @ 0x140AC5458
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140AC5204 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140AC5364 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     PopReleaseTransitionLock @ 0x140B4C040 (PopReleaseTransitionLock.c)
 */

__int64 __fastcall PopDirectedDripsReleaseTransitionLock(void *a1)
{
  __int64 result; // rax

  _m_prefetchw(a1);
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFBF);
  if ( (result & 0x40) != 0 )
    return PopReleaseTransitionLock(7LL);
  return result;
}
