/*
 * XREFs of ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CEB08
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreTextInitialized @ 0x1400CE928 (GreTextInitialized.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x1400CEA00 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     FinishStockFontInit @ 0x14010FBC0 (FinishStockFontInit.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread(__int64 a1, __int64 a2, __int64 a3)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 24192LL) == (_QWORD)KeGetCurrentThread();
}
