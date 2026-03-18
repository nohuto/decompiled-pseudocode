/*
 * XREFs of PopThermalStateTransitionWorker @ 0x1407D1CA0
 * Callers:
 *     <none>
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140434F64 (PopThermalStandbyEndTracking.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopThermalStateTransitionWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h]
  _OWORD v22[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0;
  memset(v22, 0, sizeof(v22));
  v5 = 2;
  while ( 1 )
  {
    PopAcquireRwLockExclusive(&stru_140F0F620.Spare35[1], a2, a3, a4);
    if ( !BYTE1(stru_140F0F620.SystemAffinityTokenListHead.Next)
      && (!BYTE3(stru_140F0F620.SystemAffinityTokenListHead.Next)
       || BYTE4(stru_140F0F620.SystemAffinityTokenListHead.Next) == BYTE1(stru_140F0F620.SystemAffinityTokenListHead.Next)) )
    {
      break;
    }
    if ( !LOBYTE(stru_140F0F620.SystemAffinityTokenListHead.Next) )
      break;
    if ( BYTE1(stru_140F0F620.SystemAffinityTokenListHead.Next) )
    {
      if ( !BYTE2(stru_140F0F620.SystemAffinityTokenListHead.Next) )
      {
        v4 = 3;
        BYTE2(stru_140F0F620.SystemAffinityTokenListHead.Next) = 1;
        v5 = 2;
      }
      BYTE1(stru_140F0F620.SystemAffinityTokenListHead.Next) = 0;
    }
    if ( BYTE3(stru_140F0F620.SystemAffinityTokenListHead.Next)
      && BYTE4(stru_140F0F620.SystemAffinityTokenListHead.Next) )
    {
      v4 = 6;
      BYTE3(stru_140F0F620.SystemAffinityTokenListHead.Next) = 0;
      v5 = 3;
    }
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.Spare35[1]);
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F0F620.SchedulerAssistPriorityFloor, v6, v7, v8);
    PopThermalStandbyEndTracking(v5, v9, v10);
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.SchedulerAssistPriorityFloor);
    LODWORD(v21) = 0;
    memset((char *)v22 + 8, 0, 24);
    v20 = v4 | 0xC000000400000000uLL;
    *(_QWORD *)&v22[0] = 0x8000000001LL;
    PopAcquirePolicyLock(v12, v11);
    if ( v4 == 6 )
      PopCriticalShutdownInProgress = 1;
    PopExecutePowerAction((unsigned int)v22, 0, (unsigned int)&v20, 5, 1);
    PopReleasePolicyLock(v14, v13, v15, v16, v18, v19, v20, v21, *(_QWORD *)&v22[0], *((_QWORD *)&v22[0] + 1));
  }
  PopOkayToQueueNextWorkItem((__int64)&stru_140F0F620.SavedApcState.ApcListHead[0].Blink);
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.Spare35[1]);
}
