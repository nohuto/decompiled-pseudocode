/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1407C9068
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060CD70 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 *     PopGetCurrentPdcPhase @ 0x14060D670 (PopGetCurrentPdcPhase.c)
 */

__int64 __fastcall PopRecordPhysicalPowerButton(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // r9d
  unsigned __int8 CurrentPdcPhase; // al
  __int64 v7; // r8
  unsigned __int64 v8; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, a2, a3, a4);
  v5 = 1;
  if ( a1 )
  {
    stru_140E66FF0.MutantListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
    ++*(_DWORD *)&stru_140E66FF0.AbWaitEntryCount;
    LOWORD(stru_140E66FF0.SecureThreadCookie) = MEMORY[0xFFFFF780000002C4];
    BYTE2(stru_140E66FF0.SecureThreadCookie) = stru_140E66FF0.SavedApcStateFill[8];
    HIBYTE(stru_140E66FF0.SecureThreadCookie) = stru_140E66FF0.SavedApcStateFill[12] & 1 | HIBYTE(stru_140E66FF0.SecureThreadCookie) & 0xFC | (2 * (stru_140E66FF0.SavedApcStateFill[16] & 1));
    *(_OWORD *)&stru_140E66FF0.SchedulerSharedSystemSlot = *(_OWORD *)&PopModernStandbyStateNotify.Spare35[1];
    CurrentPdcPhase = PopGetCurrentPdcPhase();
    PopModernStandbyStateNotify.KernelShadowStackLimit.AllFields |= v7;
    LODWORD(PopModernStandbyStateNotify.KernelShadowStackBase) += v5;
    stru_140E66FF0.PriorityFloorCounts[8] = CurrentPdcPhase;
    *(_DWORD *)&stru_140E66FF0.PriorityFloorCounts[12] = *(_DWORD *)&stru_140F12D20.PriorityFloorCounts[24];
    *(_DWORD *)&stru_140E66FF0.PriorityFloorCounts[16] = *(_DWORD *)&stru_140F12D20.PriorityFloorCounts[28];
    *(_DWORD *)&stru_140E66FF0.PriorityFloorCounts[20] = stru_140F12D20.SuspendEvent.Header.Lock;
    PopModernStandbyStateNotify.ExtendedFeatureDisableMask = v8;
  }
  else
  {
    stru_140E66FF0.IoSelfBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
    ++*(_DWORD *)stru_140E66FF0.PriorityFloorCounts;
    PopModernStandbyStateNotify.KernelShadowStackLimit.AllFields &= ~(1LL << (LOBYTE(PopModernStandbyStateNotify.KernelShadowStackBase)
                                                                            + BYTE4(PopModernStandbyStateNotify.KernelShadowStackBase)));
    ++HIDWORD(PopModernStandbyStateNotify.KernelShadowStackBase);
    *(_WORD *)&stru_140E66FF0.PriorityFloorCounts[4] = MEMORY[0xFFFFF780000002C4];
    *(_OWORD *)&stru_140E66FF0.SchedulerSharedSystemSlot = 0LL;
    PopModernStandbyStateNotify.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)MEMORY[0xFFFFF78000000014];
  }
  if ( LODWORD(PopModernStandbyStateNotify.KernelShadowStackBase) < HIDWORD(PopModernStandbyStateNotify.KernelShadowStackBase)
    || LODWORD(PopModernStandbyStateNotify.KernelShadowStackBase)
     - HIDWORD(PopModernStandbyStateNotify.KernelShadowStackBase) > v5 )
  {
    LOBYTE(PopModernStandbyStateNotify.SchedulerSharedSwappablePage) = v5;
  }
  PopBsdHandleRequest(4u);
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
}
