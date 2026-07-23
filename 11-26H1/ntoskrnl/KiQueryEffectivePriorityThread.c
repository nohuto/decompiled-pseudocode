/*
 * XREFs of KiQueryEffectivePriorityThread @ 0x140380E90
 * Callers:
 *     KiUpdateThreadSchedulingProperties @ 0x14020433C (KiUpdateThreadSchedulingProperties.c)
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140335C00 (KiTransitionSchedulingGroupGeneration.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14043E7DC (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KiInitializePriorityState @ 0x1405F9384 (KiInitializePriorityState.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiQueryEffectivePriorityThread(__int64 a1, struct _KPRCB *a2)
{
  struct _KPRCB *v2; // rsi
  int v4; // ebp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx

  v2 = a2;
  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return (unsigned int)*(char *)(a1 + 195);
  v4 = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
  {
    v8 = v7 + CurrentPrcb->ScbOffset;
    if ( v8 )
    {
      if ( v2 )
      {
        if ( *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0 )
        {
          v9 = v8;
          do
          {
            if ( (*(_BYTE *)(v9 + 128) & 2) != 0 )
            {
              v4 = -1;
              goto LABEL_15;
            }
            v9 = *(_QWORD *)(v9 + 440);
          }
          while ( v9 );
          do
          {
            v4 = *(_DWORD *)(v8 + 140);
            if ( v4 )
              break;
            v8 = *(_QWORD *)(v8 + 440);
          }
          while ( v8 );
        }
      }
      else
      {
        do
        {
          v4 = (*(unsigned __int16 *)(v8 + 128) >> 3) & 1;
          if ( v4 )
            break;
          v8 = *(_QWORD *)(v8 + 440);
        }
        while ( v8 );
      }
    }
  }
LABEL_15:
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v4 )
    return 1LL;
  else
    return (unsigned int)*(char *)(a1 + 195);
}
