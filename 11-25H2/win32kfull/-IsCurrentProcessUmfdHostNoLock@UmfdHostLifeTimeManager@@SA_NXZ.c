/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14010DF88
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x14010D9A4 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x14010DE2C (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x14010DF70 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  return *(_QWORD *)(v3 + 24192) == PsGetCurrentProcess();
}
