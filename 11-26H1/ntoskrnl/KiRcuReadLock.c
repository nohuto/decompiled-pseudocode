/*
 * XREFs of KiRcuReadLock @ 0x140223D4C
 * Callers:
 *     CcForceWriteThrough @ 0x140223A00 (CcForceWriteThrough.c)
 *     KeRcuReadLock @ 0x140386340 (KeRcuReadLock.c)
 *     KeRcuReadLockAtDpcLevel @ 0x1405F29C0 (KeRcuReadLockAtDpcLevel.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiRcuReadLock(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // r10
  int v5; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v9; // rdx
  int v10; // ett

  LOBYTE(v3) = KeDisableInterrupts(a1, a2, KeGetCurrentPrcb());
  v5 = *(_DWORD *)(v2 + 14560);
  if ( v5 )
  {
    if ( v5 == -1 )
      __fastfail(0xEu);
  }
  else
  {
    *(_BYTE *)(v2 + 14564) = v4;
    if ( *(_BYTE *)(v2 + 14567) )
    {
      _InterlockedOr8((volatile signed __int8 *)(v2 + 14567), 0x80u);
      v5 = *(_DWORD *)(v2 + 14560);
    }
  }
  result = (unsigned int)(v5 + 1);
  *(_DWORD *)(v2 + 14560) = result;
  if ( (_BYTE)v3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v9 = (unsigned int)result;
        LODWORD(v9) = result & 0xFFDFFFFF;
        v10 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v10 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, v3);
    }
    _enable();
  }
  return result;
}
