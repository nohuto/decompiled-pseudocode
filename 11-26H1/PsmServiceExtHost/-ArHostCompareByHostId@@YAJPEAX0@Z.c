/*
 * XREFs of ?ArHostCompareByHostId@@YAJPEAX0@Z @ 0x180062F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ArHostCompareByHostId(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8

  v2 = a2[73];
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > v2;
}
