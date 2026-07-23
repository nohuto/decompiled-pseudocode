/*
 * XREFs of KeSrcuReadLock @ 0x1405F7AB0
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _KTHREAD *__fastcall KeSrcuReadLock(__int64 a1, __int64 a2)
{
  bool v4; // r8
  int v5; // r9d
  unsigned int Number; // esi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  struct _KTHREAD *result; // rax

  if ( (*(_DWORD *)(a1 + 172) & 1) != 0 )
  {
    v5 = 0;
    v4 = 0;
  }
  else
  {
    v4 = KeDisableInterrupts();
  }
  Number = KeGetPcr()->Prcb.Number;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = (unsigned __int64)Number << 6;
  if ( (*(_QWORD *)(v8 + v7))++ == -1LL )
    __fastfail(0xEu);
  if ( v5 && v4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  *(_WORD *)a2 = Number;
  *(_QWORD *)a2 = (a1 << 16) | (unsigned __int16)*(_DWORD *)a2;
  result = KeGetCurrentThread();
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
