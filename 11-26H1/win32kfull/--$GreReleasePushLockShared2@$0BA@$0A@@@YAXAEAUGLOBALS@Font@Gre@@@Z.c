/*
 * XREFs of ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1400F59E4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140174824 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1401BB14C (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?GrepFontIsLinked@@YAHAEAVDCOBJ@@@Z @ 0x1402366CC (-GrepFontIsLinked@@YAHAEAVDCOBJ@@@Z.c)
 *     _EUDCCountRegion::EUDCCountRegion_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x140254430 (_EUDCCountRegion--EUDCCountRegion_--_2_--_lambda_1_--_lambda_invoker_cdecl_.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall GreReleasePushLockShared2<16,0>(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  W32ReleasePushLockSharedEx((struct W32_PUSH_LOCK *)(a1 + 8608), 2u);
  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  v4 = v2 + 8;
  v5 = -v2;
  v6 = (_QWORD *)(v4 & -(__int64)(v5 != 0));
  if ( v6 )
  {
    if ( (*(_BYTE *)((v4 & -(__int64)(v5 != 0)) + 0x18))-- == 1 )
      *v6 &= ~0x10000uLL;
    if ( !*v6 )
      GrepOnAllLocksReleased();
  }
}
