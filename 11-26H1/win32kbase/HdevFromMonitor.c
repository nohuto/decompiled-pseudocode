/*
 * XREFs of HdevFromMonitor @ 0x14017C240
 * Callers:
 *     DestroyMonitorDCs @ 0x14007F970 (DestroyMonitorDCs.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HdevFromMonitor(__int64 a1, int a2, int a3)
{
  __int64 v4; // r8
  unsigned int i; // edx

  v4 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 56968) + 16LL);
  for ( i = 0; i < *(_DWORD *)(v4 + 20); ++i )
  {
    if ( *(_QWORD *)(56LL * i + v4 + 40) == *(_QWORD *)(a1 + 80) )
      return i;
  }
  return 0xFFFFFFFFLL;
}
