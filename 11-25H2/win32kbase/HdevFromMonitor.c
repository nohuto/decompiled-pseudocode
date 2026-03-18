/*
 * XREFs of HdevFromMonitor @ 0x140146250
 * Callers:
 *     DestroyMonitorDCs @ 0x1400ABCF0 (DestroyMonitorDCs.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HdevFromMonitor(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned int i; // edx

  v3 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968) + 16LL);
  for ( i = 0; i < *(_DWORD *)(v3 + 20); ++i )
  {
    if ( *(_QWORD *)(56LL * i + v3 + 40) == *(_QWORD *)(a1 + 80) )
      return i;
  }
  return 0xFFFFFFFFLL;
}
