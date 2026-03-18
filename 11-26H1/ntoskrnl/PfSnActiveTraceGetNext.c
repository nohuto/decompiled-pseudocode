/*
 * XREFs of PfSnActiveTraceGetNext @ 0x1402F1D80
 * Callers:
 *     PfSnNameRemoveAll @ 0x1409E9800 (PfSnNameRemoveAll.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *p_CurrentRunTime; // rsi
  unsigned __int64 *v5; // rbp
  struct _EX_RUNDOWN_REF *v6; // rcx
  unsigned __int64 v7; // rtt
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E66FF0.StateSaveArea, 0LL) )
      KxWaitForSpinLockAndAcquire(&stru_140E66FF0.StateSaveArea);
  }
  else
  {
    KiAcquireSpinLockInstrumented(&stru_140E66FF0.StateSaveArea);
  }
  if ( a1 )
    p_CurrentRunTime = (struct _KTHREAD *)&a1[1];
  else
    p_CurrentRunTime = (struct _KTHREAD *)&stru_140E66FF0.CurrentRunTime;
  while ( 1 )
  {
    p_CurrentRunTime = (struct _KTHREAD *)p_CurrentRunTime->Header.WaitListHead.Flink;
    if ( p_CurrentRunTime == (struct _KTHREAD *)&stru_140E66FF0.CurrentRunTime )
      break;
    v5 = &p_CurrentRunTime[-1].Padding[4];
    v6 = (struct _EX_RUNDOWN_REF *)&p_CurrentRunTime->WaitBlockFill11[32];
    _m_prefetchw(v6);
    v7 = v6->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)v6, v7 + 2, v7)
      || ExfAcquireRundownProtection(v6) )
    {
      goto LABEL_15;
    }
  }
  v5 = 0LL;
LABEL_15:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)&stru_140E66FF0.StateSaveArea, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&stru_140E66FF0.StateSaveArea, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 45);
  return v5;
}
