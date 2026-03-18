/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     UmfdHostLifeTimeManager_EnsureUmfdHost @ 0x1402245B0 (UmfdHostLifeTimeManager_EnsureUmfdHost.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     GreNamedEscape @ 0x14027EC38 (GreNamedEscape.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     UmfdLoadFontFileView @ 0x140326DD0 (UmfdLoadFontFileView.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUHDEV__@@PEAUFNTCHECKSUM@@HPEAH@Z @ 0x140327830 (-vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUH.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x14034DAE0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1400918D4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CE980 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CEB08 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     UserPostWinLogonMessage @ 0x14029D240 (UserPostWinLogonMessage.c)
 */

char __fastcall UmfdHostLifeTimeManager::EnsureUmfdHost(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  struct W32_PUSH_LOCK *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rbx
  bool v23; // zf
  struct W32_PUSH_LOCK *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rbx
  LONG StateEvent; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct W32_PUSH_LOCK *v33; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( *(_BYTE *)(v5 + 24277) )
    return 0;
  v7 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(v4, v3, v6) + 96) + 24240LL);
  GreAcquirePushLockShared(v7);
  v11 = *(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96);
  if ( *(_QWORD *)(v11 + 24176) == PsGetCurrentProcess(v12) )
  {
    if ( v7 )
      GreReleasePushLockShared(v7);
    return 1;
  }
  if ( v7 )
    GreReleasePushLockShared(v7);
  v16 = -1073741595;
  v18 = *(_QWORD *)(W32GetSessionState(v14, v13, v15) + 96);
  v20 = *(_QWORD *)(v18 + 24208);
  if ( v20 && *(_QWORD *)(v18 + 24216) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v20)
      || (v20 = *(_QWORD *)(W32GetSessionState(v20, v17, v19) + 96), !*(_BYTE *)(v20 + 24274))
      || !KeReadStateEvent(*(PRKEVENT *)(v18 + 24216)) )
    {
      v28 = *(_QWORD *)(W32GetSessionState(v20, v17, v19) + 96);
      StateEvent = KeReadStateEvent(*(PRKEVENT *)(v28 + 24216));
      if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
        && !UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
      {
        if ( !StateEvent && (unsigned int)UserIsUserCritSecIn()
          || KeWaitForSingleObject(*(PVOID *)(v28 + 24208), Executive, 0, 0, 0LL) < 0
          || !*(_BYTE *)(*(_QWORD *)(W32GetSessionState(v31, v30, v32) + 96) + 24274LL) )
        {
          return 0;
        }
        KeWaitForSingleObject(*(PVOID *)(v28 + 24216), Executive, 0, 0, 0LL);
      }
      goto LABEL_12;
    }
    v21 = 0;
  }
  else
  {
    v21 = -1073741595;
  }
  if ( v21 < 0 )
    return 0;
LABEL_12:
  if ( *(_BYTE *)(v5 + 24275) )
    return 0;
  v22 = *(_QWORD *)(W32GetSessionState(v20, v17, v19) + 96);
  v23 = v22 == -24248;
  v24 = (struct W32_PUSH_LOCK *)(v22 + 24248);
  v33 = v24;
  if ( !v23 )
    GreAcquirePushLockExclusive(v24);
  if ( *(_BYTE *)(v5 + 24273) )
    goto LABEL_23;
  KeClearEvent(*(PRKEVENT *)(v5 + 24200));
  GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v5 + 24256));
  if ( !*(_BYTE *)(v5 + 24276) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v26, v25) + 63536) )
      goto LABEL_18;
    *(_BYTE *)(v5 + 24276) = 1;
  }
  v16 = UserPostWinLogonMessage(1033LL, 0LL);
LABEL_18:
  if ( v5 != -24256 )
    GreReleasePushLockShared((struct W32_PUSH_LOCK *)(v5 + 24256));
  if ( v16 < 0 )
  {
    if ( (unsigned int)dword_1403AAA30 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1403AAA30, 0x200000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)&dword_1403AAA30,
        (__int64)&unk_14037AF93);
  }
  else
  {
    if ( !KeWaitForSingleObject(*(PVOID *)(v5 + 24200), Executive, 0, 0, 0LL) && *(_QWORD *)(v5 + 24176) )
    {
LABEL_23:
      if ( v24 )
        GreReleasePushLockExclusive(v24);
      return 1;
    }
    if ( (unsigned int)dword_1403AAA30 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1403AAA30, 0x200000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)&dword_1403AAA30,
        (__int64)&unk_14037AFB9);
  }
  Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v33, 0);
  return 0;
}
