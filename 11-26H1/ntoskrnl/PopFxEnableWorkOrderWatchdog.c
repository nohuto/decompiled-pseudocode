/*
 * XREFs of PopFxEnableWorkOrderWatchdog @ 0x1403AB570
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x1403B782C (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403AE1FC (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 *     KiEncodeTolerableDelayValue @ 0x1403AE234 (KiEncodeTolerableDelayValue.c)
 */

struct _LIST_ENTRY *__fastcall PopFxEnableWorkOrderWatchdog(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(struct _LIST_ENTRY **)(a1 + 48);
  if ( v4 )
  {
    v4[10].Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    if ( a2 )
    {
      LOBYTE(a4) = 0;
      v5 = -10000LL * a2;
      if ( a2 >= 0xA )
      {
        v6 = a2 / 0xA;
        v7 = 10000LL * (unsigned int)v6;
        v8 = (unsigned int)Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline(a1, v6, a3, a4) != 0
           ? 9600000LL
           : 63LL;
        if ( v7 > v8 )
        {
          v9 = v7 - v8;
          if ( v5 < 0 )
          {
            v10 = v5 - v9;
            if ( (__int64)(v5 - v9) > v5 )
              v10 = 0;
          }
          else
          {
            v10 = v9 + v5;
            if ( (__int64)(v9 + v5) < v5 )
              v10 = -1;
          }
          LODWORD(v7) = v8;
          LODWORD(v5) = v10;
        }
        LOBYTE(a4) = 4 * KiEncodeTolerableDelayValue((unsigned int)v7);
      }
      KiSetTimerEx((_DWORD)v4 + 16, v5, 0, a4, (__int64)&v4[5]);
      v4[10].Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
      v4[9].Blink = 0LL;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12420.PriorityFloorCounts[24]);
      Flink = stru_140F12420.QueueListEntry.Flink;
      if ( stru_140F12420.QueueListEntry.Flink->Flink != (struct _LIST_ENTRY *)&stru_140F12420.512 )
        __fastfail(3u);
      v4->Flink = (struct _LIST_ENTRY *)&stru_140F12420.512;
      v4->Blink = Flink;
      Flink->Flink = v4;
      stru_140F12420.QueueListEntry.Flink = v4;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        _InterlockedAnd64((volatile signed __int64 *)&stru_140F12420.PriorityFloorCounts[24], 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)&stru_140F12420.PriorityFloorCounts[24], retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
    }
  }
  return v4;
}
