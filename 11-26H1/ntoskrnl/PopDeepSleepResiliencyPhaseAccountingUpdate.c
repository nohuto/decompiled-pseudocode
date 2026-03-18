/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403B43BC
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403B6230 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403B63C4 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 */

void __fastcall PopDeepSleepResiliencyPhaseAccountingUpdate(int a1, char a2)
{
  __int64 v2; // r12
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v6; // esi
  KIRQL v7; // al
  __int16 v8; // bp
  unsigned __int64 v9; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v11; // rdx
  unsigned __int64 *v12; // rcx

  v2 = a1;
  v3 = 0;
  v5 = 0;
  v6 = 1 << a1;
  v7 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
  v8 = dword_140F10CFC;
  v9 = v7;
  if ( (v6 & dword_140F10CFC) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = &stru_140F10828.Spare35[v2];
    if ( !a2 )
    {
      *((_QWORD *)&stru_140F10828 + v2 + 166) += PerformanceCounter.QuadPart - v12[20];
      PerformanceCounter.QuadPart = 0LL;
    }
    v12[20] = PerformanceCounter.QuadPart;
    if ( a2 )
    {
      if ( (v6 & 3) != 0 )
      {
        v5 = v8 & 0x40;
        if ( (v8 & 0x7BC) != 0 )
          v5 |= 0x7BCu;
      }
      else if ( (v6 & 0x40) != 0 && (v8 & 0x7BC) != 0 )
      {
        v5 = 1980;
      }
      LOBYTE(v11.LowPart) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD))PopDeepSleepResiliencyPhaseAccountingEnd)(v5, (LARGE_INTEGER)v11.QuadPart);
    }
    else
    {
      if ( (v6 & 3) != 0 )
      {
        if ( (PopWeakChargerLock.SchedulerApcFill5[72] & 3) == 0 )
        {
          v3 = 64;
          if ( (PopWeakChargerLock.SchedulerApcFill5[72] & 0x40) == 0 )
            v3 = 2044;
        }
      }
      else if ( (v6 & 0x40) != 0 && (PopWeakChargerLock.SchedulerApcFill5[72] & 0x40) == 0 )
      {
        v3 = 1980;
      }
      LOBYTE(v11.LowPart) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD))PopDeepSleepResiliencyPhaseAccountingBegin)(v3, (LARGE_INTEGER)v11.QuadPart);
    }
  }
  KxReleaseSpinLock(&stru_140F10070.Spare35[1]);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  __writecr8(v9);
}
