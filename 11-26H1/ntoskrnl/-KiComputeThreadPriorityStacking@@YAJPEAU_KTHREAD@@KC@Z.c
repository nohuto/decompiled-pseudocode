/*
 * XREFs of ?KiComputeThreadPriorityStacking@@YAJPEAU_KTHREAD@@KC@Z @ 0x140521BAC
 * Callers:
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeThreadPriorityStacking(struct _KTHREAD *a1, char a2, char a3)
{
  int BasePriority; // r9d
  int v5; // ecx
  char v6; // cl
  unsigned int PriorityFloorSummary; // eax
  int v8; // ecx

  BasePriority = a1->BasePriority;
  if ( BasePriority < 16 )
  {
    if ( (a2 & 1) == 0 )
    {
      v5 = BasePriority + (a1->PriorityDecrement & 0xF);
      if ( v5 > BasePriority )
        BasePriority = v5;
    }
    if ( (a2 & 4) == 0 )
    {
      v6 = a1->DecayBoost - a3;
      if ( a1->DecayBoost <= a3 )
        v6 = 0;
      BasePriority += v6;
    }
    if ( BasePriority >= 16 )
      BasePriority = 15;
    if ( (a2 & 2) == 0 && (unsigned __int8)((unsigned __int16)a1->PriorityDecrement >> 4) > BasePriority )
      BasePriority = (unsigned __int8)((unsigned __int16)a1->PriorityDecrement >> 4);
  }
  PriorityFloorSummary = a1->PriorityFloorSummary;
  if ( PriorityFloorSummary )
  {
    _BitScanReverse((unsigned int *)&v8, PriorityFloorSummary);
    if ( BasePriority < v8 )
      return (unsigned int)v8;
  }
  return (unsigned int)BasePriority;
}
