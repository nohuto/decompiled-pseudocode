/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x1401FB300
 * Callers:
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     NtUserEnsureDpiDepSysMetCacheForPlateau @ 0x1401FB2C0 (NtUserEnsureDpiDepSysMetCacheForPlateau.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x14004B9C0 (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall EnsureDpiDepSysMetCacheForPlateau(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = a1;
  v3 = 0;
  v6 = 120LL * (int)GetDpiCacheSlot(a1, a2) + 2284;
  do
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
    if ( *(_DWORD *)(v6 + v5) == -1 )
    {
      v7 = ScaleSystemMetricForDPIWithoutCache(v3, v2);
      v5 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
      *(_DWORD *)(v6 + v5) = v7;
    }
    ++v3;
    v6 += 4LL;
  }
  while ( v3 < 0x1E );
  return 1LL;
}
