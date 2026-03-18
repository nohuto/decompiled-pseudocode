/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     UmfdLoadFontFileView @ 0x1400B5DE4 (UmfdLoadFontFileView.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14010BDE4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14010DAC8 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     UmfdHostLifeTimeManager_EnsureUmfdHost @ 0x14020B360 (UmfdHostLifeTimeManager_EnsureUmfdHost.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140228C20 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     GreNamedEscape @ 0x140263B94 (GreNamedEscape.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1403387C0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14010DF88 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14010E9E0 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1401ABECC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z @ 0x14022BC88 (-UmfdPostWinLogonMessage@@YAJAEAUGLOBALS@Font@Gre@@I_J@Z.c)
 */

char UmfdHostLifeTimeManager::EnsureUmfdHost(void)
{
  __int64 SessionState; // rax
  char v1; // bl
  __int64 v2; // rdi
  __int64 v4; // rcx
  bool v5; // zf
  struct W32_PUSH_LOCK *v6; // rcx
  struct W32_PUSH_LOCK *v7; // [rsp+40h] [rbp+8h] BYREF

  SessionState = W32GetSessionState();
  v1 = 0;
  v2 = *(_QWORD *)(SessionState + 96) + 4872LL;
  if ( *(_BYTE *)(*(_QWORD *)(SessionState + 96) + 24293LL) )
    return 0;
  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v7);
  if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock() )
  {
    if ( v7 )
      GreReleasePushLockShared(v7);
    if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 && !*(_BYTE *)(v2 + 19419) )
    {
      v4 = *(_QWORD *)(W32GetSessionState() + 96);
      v5 = v4 == -24264;
      v6 = (struct W32_PUSH_LOCK *)(v4 + 24264);
      v7 = v6;
      if ( !v5 )
        GreAcquirePushLockExclusive(v6);
      if ( !*(_BYTE *)(v2 + 19417) )
      {
        KeClearEvent(*(PRKEVENT *)(v2 + 19344));
        if ( (int)UmfdPostWinLogonMessage((struct Gre::Font::GLOBALS *)v2, 0x409u, 0LL) < 0 )
        {
          if ( (unsigned int)dword_14039BBC0 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x200000000000LL) )
            goto LABEL_23;
          goto LABEL_16;
        }
        if ( KeWaitForSingleObject(*(PVOID *)(v2 + 19344), Executive, 0, 0, 0LL) || !*(_QWORD *)(v2 + 19320) )
        {
          if ( (unsigned int)dword_14039BBC0 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x200000000000LL) )
            goto LABEL_23;
LABEL_16:
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            &dword_14039BBC0,
            &unk_14036C316);
LABEL_23:
          Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v7, 0);
          return v1;
        }
      }
      v1 = 1;
      goto LABEL_23;
    }
    return 0;
  }
  if ( v7 )
    GreReleasePushLockShared(v7);
  return 1;
}
