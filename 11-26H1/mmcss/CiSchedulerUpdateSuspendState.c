/*
 * XREFs of CiSchedulerUpdateSuspendState @ 0x140001220
 * Callers:
 *     CiProcessSuspend @ 0x140001070 (CiProcessSuspend.c)
 * Callees:
 *     CiSchedulerSetPriority @ 0x1400017E0 (CiSchedulerSetPriority.c)
 */

LONG __fastcall CiSchedulerUpdateSuspendState(__int64 a1)
{
  LONG result; // eax

  if ( (*(_BYTE *)(a1 + 148) & 1) == 0 )
    return CiSchedulerSetPriority();
  if ( *(_BYTE *)(a1 + 107) != 0xFF )
    result = KeSetBasePriorityThread(*(PKTHREAD *)(a1 + 96), *(_DWORD *)(a1 + 144));
  *(_BYTE *)(a1 + 107) = -1;
  return result;
}
