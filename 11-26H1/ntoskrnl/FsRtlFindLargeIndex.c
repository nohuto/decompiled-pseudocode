/*
 * XREFs of FsRtlFindLargeIndex @ 0x1404146C0
 * Callers:
 *     FsRtlTruncateBaseMcb @ 0x1404145B0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlSplitBaseMcb @ 0x1405B7E20 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlFindLargeIndex(__int64 a1, unsigned int a2, int *a3)
{
  int v3; // esi
  int v4; // r9d
  int v5; // r10d
  int v6; // eax

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0;
  v5 = v3 - 1;
  while ( v4 <= v5 )
  {
    v6 = (v5 + v4) / 2;
    if ( v6 && a2 < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v6 - 8) )
    {
      v5 = v6 - 1;
    }
    else
    {
      if ( a2 <= *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v6) - 1 )
      {
        *a3 = v6;
        return 1;
      }
      v4 = v6 + 1;
    }
  }
  *a3 = v3;
  return 0;
}
