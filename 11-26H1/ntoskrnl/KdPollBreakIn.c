/*
 * XREFs of KdPollBreakIn @ 0x1404819D0
 * Callers:
 *     KdCheckForDebugBreak @ 0x14048198C (KdCheckForDebugBreak.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

char KdPollBreakIn()
{
  char v0; // bl
  bool v2; // si
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int *v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // ebx
  _DWORD *v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v14; // eax
  __int64 v15; // rdx
  unsigned __int32 v16; // ett

  if ( KdPitchDebugger && !KdEventLoggingEnabled )
    return 0;
  v0 = 0;
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    v2 = KeDisableInterrupts();
    LODWORD(v3) = KeGetPcr()->Prcb.Number;
    v4 = (unsigned int)v3;
    v5 = (unsigned int *)KdLogBuffer[v3];
    if ( v5 )
    {
      v6 = 2 * (*v5 + 1LL);
      v7 = __rdtsc();
      *(_QWORD *)&v5[2 * v6] = ((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7;
      *(_QWORD *)&v5[2 * v6 + 2] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1u);
    }
    if ( BYTE4(KdpContext) )
    {
      v0 = 1;
      BYTE4(KdpContext) = 0;
    }
    else if ( KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock) )
    {
      v8 = KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL);
      KxReleaseSpinLock(&KdDebuggerLock);
      v0 = v8 == 0;
    }
    v0 &= (unsigned __int8)KdDebuggerEnabled;
    KdpControlCPressed |= v0;
    v9 = (_DWORD *)KdLogBuffer[v4];
    if ( v9 )
    {
      v10 = (unsigned int)*v9;
      v11 = __rdtsc();
      *(_QWORD *)&v9[4 * v10 + 6] = v9[4 * v10 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1u)) | ((((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) - *(_QWORD *)&v9[4 * v10 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (_DWORD)v10 == 254 )
        *v9 = 0;
      else
        *v9 = v10 + 1;
    }
    if ( v2 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v14 = *SchedulerAssist;
        do
        {
          v15 = v14;
          LODWORD(v15) = v14 & 0xFFDFFFFF;
          v16 = v14;
          v14 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v14 & 0xFFDFFFFF, v14);
        }
        while ( v16 != v14 );
        if ( (v14 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v15, SchedulerAssist, v9);
      }
      _enable();
    }
  }
  return v0;
}
