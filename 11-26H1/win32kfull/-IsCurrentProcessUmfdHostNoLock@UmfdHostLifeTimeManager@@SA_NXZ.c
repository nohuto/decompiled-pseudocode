/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CEB58
 * Callers:
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1400CE758 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x1400CEA00 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1400CEB40 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     GreSystemProcessCallout @ 0x14028CC90 (GreSystemProcessCallout.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  return *(_QWORD *)(v3 + 24176) == PsGetCurrentProcess(v4);
}
