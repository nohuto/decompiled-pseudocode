/*
 * XREFs of ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14010DF30
 * Callers:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     GreTextInitialized @ 0x1400C006C (GreTextInitialized.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x14010DE2C (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     FinishStockFontInit @ 0x140146690 (FinishStockFontInit.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread(__int64 a1, __int64 a2, __int64 a3)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 24208LL) == (_QWORD)KeGetCurrentThread();
}
