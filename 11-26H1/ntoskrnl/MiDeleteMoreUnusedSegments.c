/*
 * XREFs of MiDeleteMoreUnusedSegments @ 0x1404C3538
 * Callers:
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeleteMoreUnusedSegments(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // rax

  v2 = 0;
  if ( *a2 && *(_QWORD *)(a1 + 23104) <= *a2 )
    *a2 = 0LL;
  v3 = a2[1];
  if ( v3 )
  {
    v3 = a2[1];
    if ( *(_QWORD *)(a1 + 2440) >> 12 <= v3 )
    {
      a2[1] = 0LL;
      v3 = 0LL;
    }
  }
  if ( *a2 )
    return 1LL;
  LOBYTE(v2) = v3 != 0;
  return v2;
}
