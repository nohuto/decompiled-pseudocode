/*
 * XREFs of PopSetSleepMarker @ 0x140B2ECDC
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetTransitionsToOnCount @ 0x14043598C (PopGetTransitionsToOnCount.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopSetSleepMarker(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  __int16 TransitionsToOnCount; // bx

  TransitionsToOnCount = -1;
  if ( (unsigned int)PopGetTransitionsToOnCount() < 0xFFFF )
    TransitionsToOnCount = PopGetTransitionsToOnCount();
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, v2, v3, v4);
  *(_WORD *)&stru_140E66FF0.SavedApcStateFill[36] = TransitionsToOnCount;
  stru_140E66FF0.SavedApcStateFill[32] = (16 * a1) | stru_140E66FF0.SavedApcStateFill[32] & 0xF;
  stru_140E66FF0.SavedApcStateFill[38] = stru_140F10070.Spare35[0] & 0xF | stru_140E66FF0.SavedApcStateFill[38] & 0xF0;
  PopBsdHandleRequest(9u);
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
}
