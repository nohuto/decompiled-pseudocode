/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreWaitForTextReady @ 0x1400C6010 (GreWaitForTextReady.c)
 *     ?GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z @ 0x1400C6298 (-GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z.c)
 *     xxxLW_LoadFonts @ 0x1400CC240 (xxxLW_LoadFonts.c)
 *     ?GrepGetCharSet@@YAKAEAVDCOBJ@@@Z @ 0x1400FE5E8 (-GrepGetCharSet@@YAKAEAVDCOBJ@@@Z.c)
 *     NtGdiAddFontResourceW @ 0x1401043D0 (NtGdiAddFontResourceW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z @ 0x14010C768 (-dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C (-GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x14021B960 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiWaitForTextReady @ 0x140259D10 (NtGdiWaitForTextReady.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CE980 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CEB08 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

NTSTATUS __fastcall UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  struct _KEVENT *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  NTSTATUS result; // eax
  __int64 v10; // rsi
  LONG StateEvent; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v5 = *(struct _KEVENT **)(v4 + 24208);
  if ( !v5 || !*(_QWORD *)(v4 + 24216) )
    return -1073741595;
  if ( KeReadStateEvent(v5) )
  {
    v7 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
    if ( *(_BYTE *)(v7 + 24274) )
    {
      if ( KeReadStateEvent(*(PRKEVENT *)(v4 + 24216)) )
        return v3;
    }
  }
  v10 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
  StateEvent = KeReadStateEvent(*(PRKEVENT *)(v10 + 24216));
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
  {
    return StateEvent == 0 ? 0x103 : 0;
  }
  if ( !StateEvent && (unsigned int)UserIsUserCritSecIn() )
    return -1073741595;
  result = KeWaitForSingleObject(*(PVOID *)(v10 + 24208), Executive, 0, 0, 0LL);
  if ( result >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 24274LL) )
    {
      KeWaitForSingleObject(*(PVOID *)(v10 + 24216), Executive, 0, 0, 0LL);
      return 0;
    }
    return -1073741595;
  }
  return result;
}
