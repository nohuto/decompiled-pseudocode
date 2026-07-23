/*
 * XREFs of KiPrepareFlushCurrentAffinity @ 0x1404150F0
 * Callers:
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1405F35E0 (KeFlushSingleCurrentTb.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall KiPrepareFlushCurrentAffinity(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 result; // rax
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)a1 = 2097153LL;
  result = (unsigned __int64)memset_0((void *)(a1 + 8), 0, 0x100uLL);
  Group = CurrentPrcb->Group;
  GroupSetMember = CurrentPrcb->GroupSetMember;
  if ( *(_WORD *)a1 <= (unsigned __int16)Group )
  {
    if ( *(_WORD *)(a1 + 2) <= (unsigned __int16)Group )
      return result;
    result = (unsigned int)(Group + 1);
    *(_WORD *)a1 = Group + 1;
  }
  *(_QWORD *)(a1 + 8 * Group + 8) |= GroupSetMember;
  return result;
}
