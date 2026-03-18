/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x14000DAB0
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x14000D9B0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140085D1C (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140098640 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1401C3B50 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14000C528 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(void *a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4272LL) + 32LL);
  if ( v2 )
    NSInstrumentation::CTypeIsolation<81920,320>::Free(v2, a1);
}
