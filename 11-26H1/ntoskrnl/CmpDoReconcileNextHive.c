/*
 * XREFs of CmpDoReconcileNextHive @ 0x140AAB490
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x140AAB620 (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140AAB6F8 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140AAB984 (CmpFlushUnsupportedOperationTelemetry.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // r14
  unsigned __int64 v5; // rsi
  _QWORD *v6; // r15
  struct _KTHREAD *v9; // rdi
  unsigned __int8 *PriorityFloorCounts; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int EffectiveLogSizeCapForHive; // eax

  v4 = 0;
  v5 = 10000000LL * (unsigned int)dword_140E02224;
  v6 = (_QWORD *)a2;
  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    v9 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
    CmpLockHiveListShared((__int64)a1, a2, a3, a4);
    do
    {
      v9 = *(struct _KTHREAD **)&v9->Header.Lock;
      PriorityFloorCounts = 0LL;
      if ( v9 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
        break;
      PriorityFloorCounts = v9[-2].PriorityFloorCounts;
    }
    while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v9->QuantumTarget) );
    CmpUnlockHiveList();
    if ( PriorityFloorCounts )
    {
      do
      {
        v11 = -1LL;
        v12 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
        if ( (unsigned __int8)CmpIsHiveEligibleForLazyReconcile(PriorityFloorCounts) )
        {
          EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(PriorityFloorCounts);
          if ( (int)CmpFlushHive(
                      (ULONG_PTR)PriorityFloorCounts,
                      *((_DWORD *)PriorityFloorCounts + 45) < EffectiveLogSizeCapForHive ? 22 : 6) < 0 )
          {
            *a1 = 1;
            v11 = v12 + 10000000LL * (unsigned int)dword_140E0222C;
          }
        }
        else if ( *((_DWORD *)PriorityFloorCounts + 32) )
        {
          if ( (*((_DWORD *)PriorityFloorCounts + 40) & 0x8001) == 0 )
          {
            v4 = 1;
            v13 = *((_QWORD *)PriorityFloorCounts + 519) + 10000000LL * (unsigned int)dword_140E02220;
            if ( v12 < v13 )
              v11 = v13 - v12;
          }
        }
        if ( v11 >= v5 )
          v11 = v5;
        v5 = v11;
        PriorityFloorCounts = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)PriorityFloorCounts, v13, v14, v15);
      }
      while ( PriorityFloorCounts );
      v6 = (_QWORD *)a2;
    }
    CmpFlushUnsupportedOperationTelemetry();
    if ( v4 )
      *v6 = v5;
  }
  return v4;
}
