/*
 * XREFs of MiCheckLargePagesExist @ 0x1403D30D4
 * Callers:
 *     MiProcessLargeCoalesceCandidates @ 0x1403D2564 (MiProcessLargeCoalesceCandidates.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403D2B10 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403D2D74 (MiPerformOnDemandLargePageCoalesce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckLargePagesExist(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // r9
  __int64 i; // rdx

  v1 = 0;
  v2 = 88LL;
LABEL_2:
  if ( v1 > *(_DWORD *)(a1 + 16) )
    return 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= 1 )
    {
      ++v1;
      v2 += 2LL;
      goto LABEL_2;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 10) + 8 * (v2 + i)) )
      break;
  }
  return 1LL;
}
