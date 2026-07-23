/*
 * XREFs of ExpConvertSharedToExclusiveImmediately @ 0x1406D2680
 * Callers:
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1406D2490 (ExTryToConvertFastResourceSharedToExclusive.c)
 * Callees:
 *     ExpAddFastOwnerEntryToThreadList @ 0x140275C10 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x14041ECF0 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpConvertSharedToExclusiveImmediately(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // r9
  __int64 v6; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  if ( !*(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = a3;
    *(_DWORD *)(a1 + 96) = 1;
    _disable();
    ExpRemoveFastOwnerEntryFromThreadList((_QWORD *)a2);
    ExpAddFastOwnerEntryToThreadList(v6, v4, 0, v5);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v9 = *SchedulerAssist;
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  *(_DWORD *)(a2 + 32) = 0;
  *(_BYTE *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
}
