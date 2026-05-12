/*
 * XREFs of StorFreeExtraIoResourceForAdapter @ 0x1400AF7CC
 * Callers:
 *     RaidAdapterReclaimIoResourceTimerDpcRoutine @ 0x140065100 (RaidAdapterReclaimIoResourceTimerDpcRoutine.c)
 * Callees:
 *     StorFreeExtraIoResourceForGateway @ 0x1400AF858 (StorFreeExtraIoResourceForGateway.c)
 */

__int64 __fastcall StorFreeExtraIoResourceForAdapter(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 588) / *(_DWORD *)(a1 + 1032);
  do
  {
    v4 = 320LL * v2;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 1024) + v4 + 136),
                             0,
                             0);
    if ( (unsigned int)result > v3 )
      result = StorFreeExtraIoResourceForGateway(v4 + *(_QWORD *)(a1 + 1024), v3);
    ++v2;
  }
  while ( v2 < *(_DWORD *)(a1 + 1032) );
  return result;
}
