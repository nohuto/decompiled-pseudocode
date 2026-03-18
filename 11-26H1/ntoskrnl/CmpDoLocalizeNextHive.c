/*
 * XREFs of CmpDoLocalizeNextHive @ 0x140AD63C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140AD64C4 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

char __fastcall CmpDoLocalizeNextHive(_BYTE *a1, _QWORD *a2)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  struct _KTHREAD *v7; // rbx
  unsigned __int8 *PriorityFloorCounts; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  int locked; // ebx

  v2 = 0;
  *a2 = 10000000LL * (unsigned int)dword_140E022E4;
  *a1 = 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(a1, a2) )
    return 1;
  v7 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
  CmpLockHiveListShared(v4, v3, v5, v6);
  do
  {
    v7 = *(struct _KTHREAD **)&v7->Header.Lock;
    PriorityFloorCounts = 0LL;
    if ( v7 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
      break;
    PriorityFloorCounts = v7[-2].PriorityFloorCounts;
  }
  while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v7->QuantumTarget) );
  CmpUnlockHiveList();
  while ( PriorityFloorCounts )
  {
    CmpLockRegistry(v9);
    if ( (*((_DWORD *)PriorityFloorCounts + 64) & 4) != 0 )
    {
      HvLockHiveFlusherShared((__int64)PriorityFloorCounts, v10, v12, v13);
      HvLockHiveWriter((__int64)PriorityFloorCounts, v17, v18, v19);
      locked = HvpViewMapConvertLockedPagesToCOWByPolicy(PriorityFloorCounts + 224);
      HvUnlockHiveWriter((__int64)PriorityFloorCounts);
      HvUnlockHiveFlusherShared((__int64)PriorityFloorCounts);
      if ( locked < 0 )
      {
        CmpUnlockRegistry(v11);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)PriorityFloorCounts + 205);
        v2 = 1;
        break;
      }
    }
    CmpUnlockRegistry(v11);
    PriorityFloorCounts = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)PriorityFloorCounts, v14, v15, v16);
  }
  CmpReleaseShutdownRundown(v9);
  return v2;
}
