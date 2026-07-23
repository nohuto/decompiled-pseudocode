/*
 * XREFs of MiGetSystemCacheRegionsToFree @ 0x1404849A4
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1402A6600 (MiReleaseSystemCacheView.c)
 *     MiDeleteUnmappedSystemCacheViews @ 0x1406FA688 (MiDeleteUnmappedSystemCacheViews.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSystemCacheRegionsToFree(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r10
  _QWORD *v6; // r10

  result = *(unsigned int *)(a1 + 4);
  v3 = a1 + 2720;
  a2[1] = a2;
  *a2 = a2;
  while ( 1 )
  {
    v4 = *(_QWORD **)v3;
    if ( *(_QWORD *)v3 == v3 || (result & 1) == 0 && *(_QWORD *)(v3 + 16) <= 0x20uLL )
      break;
    if ( v4[1] != v3
      || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4)
      || (*(_QWORD *)v3 = v5, *(_QWORD *)(v5 + 8) = v3,
                              --*(_QWORD *)(v3 + 16),
                              v6 = (_QWORD *)a2[1],
                              (_QWORD *)*v6 != a2) )
    {
      __fastfail(3u);
    }
    *v4 = a2;
    v4[1] = v6;
    *v6 = v4;
    a2[1] = v4;
  }
  return result;
}
