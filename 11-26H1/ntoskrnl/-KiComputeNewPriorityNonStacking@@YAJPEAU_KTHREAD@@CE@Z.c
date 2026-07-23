/*
 * XREFs of ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405306A8
 * Callers:
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiComputeNewPriority @ 0x140486450 (KiComputeNewPriority.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiClearForegroundBoost @ 0x14023B460 (KiClearForegroundBoost.c)
 */

__int64 __fastcall KiComputeNewPriorityNonStacking(struct _KTHREAD *a1, __int64 a2, char a3)
{
  unsigned int Priority; // ecx
  unsigned int v6; // edx
  unsigned int v7; // edx
  int DecayBoost; // esi
  int v9; // eax
  int BasePriority; // ecx
  char v11; // al

  Priority = a1->Priority;
  if ( (char)Priority < 16 || (*((_DWORD *)&a1->0 + 1) & 0x400000) != 0 )
  {
    v7 = 6;
    DecayBoost = a1->DecayBoost;
    if ( KiSchedulerForegroundBoostDecayPolicy )
    {
      v7 = 7;
      if ( a3 )
        KiClearForegroundBoost((__int64)a1);
    }
    v9 = KiComputeThreadPriority(a1, v7, 0);
    BasePriority = a1->BasePriority;
    v6 = v9;
    if ( (char)DecayBoost >= 1 )
      BasePriority = DecayBoost + BasePriority - 1;
    if ( v9 < BasePriority )
      v6 = BasePriority;
    if ( a3 )
    {
      a1->PriorityDecrement &= 0xF00Fu;
      v11 = a1->DecayBoost;
      if ( v11 >= 1 )
        a1->DecayBoost = v11 - 1;
      else
        a1->DecayBoost = 0;
    }
  }
  else
  {
    return Priority;
  }
  return v6;
}
