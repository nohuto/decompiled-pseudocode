/*
 * XREFs of FsRtlFindFirstOverlapInNode @ 0x1405301B0
 * Callers:
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x14030AC68 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlCheckNoSharedConflict @ 0x14030EEF0 (FsRtlCheckNoSharedConflict.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlFindFirstOverlapInNode(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _QWORD *result; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx

  for ( result = (_QWORD *)*a1; result; result = (_QWORD *)*result )
  {
    v5 = result[6];
    if ( v5 >= *a2 )
    {
      v6 = result[1];
      if ( v6 || result[2] )
      {
        if ( v6 <= *a3 )
          return result;
        return 0LL;
      }
    }
    if ( v5 == *a3 && result[1] == *a2 )
      return result;
  }
  return 0LL;
}
