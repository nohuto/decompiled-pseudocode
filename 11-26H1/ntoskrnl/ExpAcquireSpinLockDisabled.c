/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x1403DE500
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1403DE3D0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1403DE450 (ExInterlockedInsertTailList.c)
 *     ExInterlockedAddLargeInteger @ 0x1403DFAB0 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedAddUlong @ 0x140500FC0 (ExInterlockedAddUlong.c)
 *     ExInterlockedPopEntryList @ 0x1406D09A0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x1406D09F0 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  unsigned int v1; // ebx
  bool v3; // si
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v8; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // ett

  v1 = 0;
  v3 = KeDisableInterrupts();
  while ( _interlockedbittestandset64(a1, 0LL) )
  {
    if ( v3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v8 = *SchedulerAssist;
        do
        {
          v9 = v8;
          LODWORD(v9) = v8 & 0xFFDFFFFF;
          v10 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v8 & 0xFFDFFFFF, v8);
        }
        while ( v10 != v8 );
        if ( (v8 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, v4);
      }
      _enable();
    }
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v1);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return v3;
}
