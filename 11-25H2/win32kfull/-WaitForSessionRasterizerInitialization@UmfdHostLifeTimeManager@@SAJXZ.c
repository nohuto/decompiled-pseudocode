/*
 * XREFs of ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x1400193F0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400802FC (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BD04C (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BDE04 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x14010D100 (NtGdiAddFontMemResourceEx.c)
 *     xxxLW_LoadFonts @ 0x140147F80 (xxxLW_LoadFonts.c)
 *     NtGdiAddFontResourceW @ 0x1401A2CA0 (NtGdiAddFontResourceW.c)
 *     GreWaitForTextReady @ 0x1401A8720 (GreWaitForTextReady.c)
 *     NtGdiWaitForTextReady @ 0x140223D90 (NtGdiWaitForTextReady.c)
 * Callees:
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14010DF30 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140146FEC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

NTSTATUS UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(void)
{
  int v0; // ebx
  __int64 v1; // rdi
  struct _KEVENT *v2; // rcx
  NTSTATUS result; // eax
  __int64 v4; // rsi
  LONG StateEvent; // edi

  v0 = 0;
  v1 = *(_QWORD *)(W32GetSessionState() + 96);
  v2 = *(struct _KEVENT **)(v1 + 24224);
  if ( !v2 || !*(_QWORD *)(v1 + 24232) )
    return -1073741595;
  if ( KeReadStateEvent(v2)
    && *(_BYTE *)(*(_QWORD *)(W32GetSessionState() + 96) + 24290LL)
    && KeReadStateEvent(*(PRKEVENT *)(v1 + 24232)) )
  {
    return v0;
  }
  v4 = *(_QWORD *)(W32GetSessionState() + 96);
  StateEvent = KeReadStateEvent(*(PRKEVENT *)(v4 + 24232));
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
  {
    return StateEvent == 0 ? 0x103 : 0;
  }
  if ( !StateEvent && (unsigned int)UserIsUserCritSecIn() )
    return -1073741595;
  result = KeWaitForSingleObject(*(PVOID *)(v4 + 24224), Executive, 0, 0, 0LL);
  if ( result >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState() + 96) + 24290LL) )
    {
      KeWaitForSingleObject(*(PVOID *)(v4 + 24232), Executive, 0, 0, 0LL);
      return 0;
    }
    return -1073741595;
  }
  return result;
}
