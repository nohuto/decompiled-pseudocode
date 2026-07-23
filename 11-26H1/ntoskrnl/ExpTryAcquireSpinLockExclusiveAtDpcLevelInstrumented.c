/*
 * XREFs of ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14040B640
 * Callers:
 *     PopPepWork @ 0x1403B84E0 (PopPepWork.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x1404D3B24 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  int v2; // r11d
  char v4; // r9
  unsigned int InterruptCount; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ecx
  signed __int32 v8; // ett
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v4 = 0;
    InterruptCount = 0;
  }
  else
  {
    v4 = 1;
    v10 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v2 = v10;
  }
  v6 = 0;
  v7 = 0x80000000;
  while ( 1 )
  {
    v8 = v6;
    v6 = _InterlockedCompareExchange(a1, v7, v6);
    if ( v8 == v6 )
      break;
    if ( v6 )
    {
      if ( v6 != 0x40000000 )
        return 0LL;
      v7 |= 0x40000000u;
    }
    else
    {
      v7 &= ~0x40000000u;
    }
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( v4 )
  {
    v11 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v11, v11 - v2, 0, InterruptCount, 3);
  }
  return 1LL;
}
