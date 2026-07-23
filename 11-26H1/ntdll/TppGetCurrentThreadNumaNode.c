/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x180086D00
 * Callers:
 *     TppAllocAlpcCompletion @ 0x180085234 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800856E0 (TpAllocIoCompletion.c)
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 *     TppInitializeTimerSubQueue @ 0x1800861C0 (TppInitializeTimerSubQueue.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlpTpIoAlloc @ 0x1800B585C (RtlpTpIoAlloc.c)
 *     TpAllocJobNotification @ 0x1800FAF50 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 */

void __fastcall TppGetCurrentThreadNumaNode(__int64 a1, int *a2, _BYTE *a3, _WORD *a4)
{
  unsigned __int64 Number; // r15
  int v9; // ebp
  int Group; // r12d
  int v11; // eax
  unsigned int i; // edx
  __int64 v13; // rax
  __int64 v14; // rax

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v9 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v11 = *(_DWORD *)(a1 + 440)) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v11 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  }
  for ( i = 0; i < TppNumberNodes; ++i )
  {
    v13 = *(_QWORD *)(a1 + 48);
    if ( *(_WORD *)(v13 + 16LL * (Group + TppMaximumGroups * i) + 8) == (_WORD)Group )
    {
      v14 = *(_QWORD *)(v13 + 16LL * (Group + TppMaximumGroups * i));
      if ( _bittest64(&v14, Number) )
      {
        v9 = i;
        break;
      }
    }
  }
  *a2 = v9;
  if ( a3 )
    *a3 = Number;
  if ( a4 )
    *a4 = Group;
}
