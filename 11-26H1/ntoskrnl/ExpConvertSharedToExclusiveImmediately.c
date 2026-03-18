/*
 * XREFs of ExpConvertSharedToExclusiveImmediately @ 0x1406CE650
 * Callers:
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1406CE460 (ExTryToConvertFastResourceSharedToExclusive.c)
 * Callees:
 *     ExpAddFastOwnerEntryToThreadList @ 0x1402766A0 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x140431CC0 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpConvertSharedToExclusiveImmediately(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r9
  __int64 v7; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v10; // ett

  result = *(_QWORD *)(a1 + 80);
  if ( !result )
  {
    *(_QWORD *)(a1 + 80) = a3;
    *(_DWORD *)(a1 + 96) = 1;
    _disable();
    ExpRemoveFastOwnerEntryFromThreadList((_QWORD *)a2);
    result = (__int64)ExpAddFastOwnerEntryToThreadList(v7, v5, 0, v6);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v10 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v10 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  *(_DWORD *)(a2 + 32) = 0;
  *(_BYTE *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
