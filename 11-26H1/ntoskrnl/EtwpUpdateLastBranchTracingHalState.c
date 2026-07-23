/*
 * XREFs of EtwpUpdateLastBranchTracingHalState @ 0x1404F3B18
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x140836440 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x140B39990 (EtwpUpdateLastBranchTracingEvents.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140B4132C (EtwpReferenceLastBranchLookasideList.c)
 */

__int64 __fastcall EtwpUpdateLastBranchTracingHalState(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  _DWORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = 0;
  v3 = *(unsigned int *)(*(_QWORD *)(a1 + 1072) + 4LL);
  if ( (_DWORD)v3 == -1 || (v3 = *(unsigned int *)(*(_QWORD *)(a1 + 1072) + 8LL), !(_DWORD)v3) )
  {
    v6 = **(unsigned int **)(a1 + 1072);
    if ( (_DWORD)v6 )
    {
      v1 = guard_dispatch_icall_no_overrides(v6, v3);
      **(_DWORD **)(a1 + 1072) = 0;
      _InterlockedDecrement((volatile signed __int32 *)&stru_140E285C0.PriorityFloorCounts[8]);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 816), 0xFFFF7FFF);
    }
  }
  else
  {
    v4 = *(_DWORD **)(a1 + 1072);
    if ( !*v4 )
    {
      result = guard_dispatch_icall_no_overrides((unsigned int)v4[1], v4);
      v1 = result;
      if ( (int)result < 0 )
        return result;
      EtwpReferenceLastBranchLookasideList();
      _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x8000u);
    }
  }
  return v1;
}
