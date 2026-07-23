/*
 * XREFs of MiLargeCoalesceCandidatesExist @ 0x1403D306C
 * Callers:
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403D2D74 (MiPerformOnDemandLargePageCoalesce.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLargeCoalesceCandidatesExist(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  _DWORD *v3; // r8
  __int64 v4; // r10
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_DWORD *)(a1 + 12);
  v4 = *(_QWORD *)(a1 + 32);
  if ( a2 == 2 )
    v5 = 56320LL * (unsigned int)*v3 + qword_140E37E50 + 56216;
  else
    v5 = v2 + 56216;
  return *(__int64 *)(v5 + 8LL * a2) > 0
      && (*(_DWORD *)(v4 + 4LL * a2) != *v3 || *(_QWORD *)(v2 + 8LL * a2 + 56240) > *(_QWORD *)(v4 + 8LL * a2 + 16));
}
