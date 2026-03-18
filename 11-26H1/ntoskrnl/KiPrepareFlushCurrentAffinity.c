/*
 * XREFs of KiPrepareFlushCurrentAffinity @ 0x14041D8A0
 * Callers:
 *     KeFlushCurrentTbOnly @ 0x140250688 (KeFlushCurrentTbOnly.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1405F0C70 (KeFlushSingleCurrentTb.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
