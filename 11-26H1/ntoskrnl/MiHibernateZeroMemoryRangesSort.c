/*
 * XREFs of MiHibernateZeroMemoryRangesSort @ 0x140C06D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHibernateZeroMemoryRangesSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
