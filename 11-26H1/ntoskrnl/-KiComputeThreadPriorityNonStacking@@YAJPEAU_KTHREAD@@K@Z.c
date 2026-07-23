/*
 * XREFs of ?KiComputeThreadPriorityNonStacking@@YAJPEAU_KTHREAD@@K@Z @ 0x1405332E4
 * Callers:
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeThreadPriorityNonStacking(struct _KTHREAD *a1, char a2)
{
  int BasePriority; // r10d
  int v4; // r8d
  int v5; // ecx
  unsigned int PriorityFloorSummary; // eax
  int v7; // ecx

  BasePriority = a1->BasePriority;
  v4 = BasePriority;
  if ( BasePriority < 16 )
  {
    if ( (a2 & 1) == 0 )
    {
      v5 = BasePriority + (a1->PriorityDecrement & 0xF);
      if ( v5 > BasePriority )
        v4 = v5;
    }
    if ( (a2 & 4) == 0 && BasePriority + a1->DecayBoost > v4 )
      v4 = BasePriority + a1->DecayBoost;
    if ( (a2 & 2) == 0 && (unsigned __int8)((unsigned __int16)a1->PriorityDecrement >> 4) > v4 )
      v4 = (unsigned __int8)((unsigned __int16)a1->PriorityDecrement >> 4);
    if ( v4 >= 16 && (*((_DWORD *)&a1->0 + 1) & 0x400000) == 0 )
      v4 = 15;
  }
  PriorityFloorSummary = a1->PriorityFloorSummary;
  if ( PriorityFloorSummary )
  {
    _BitScanReverse((unsigned int *)&v7, PriorityFloorSummary);
    if ( v4 < v7 )
      return (unsigned int)v7;
  }
  return (unsigned int)v4;
}
