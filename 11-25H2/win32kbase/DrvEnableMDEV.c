/*
 * XREFs of DrvEnableMDEV @ 0x1400879E0
 * Callers:
 *     SafeEnableMDEV @ 0x14014C4A0 (SafeEnableMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x14007230C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1400725DC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1400736E0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkDisplayOnOff @ 0x1400750C0 (DrvDxgkDisplayOnOff.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086C28 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087950 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087D5C (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140088EF8 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserNotifyDisplayChange @ 0x1400AC800 (UserNotifyDisplayChange.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x14023E54C (IsDrvRealizeHalftonePaletteSupported.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  unsigned int v9; // edi
  HDEV v10; // rsi
  struct _ERESOURCE **v11; // r15
  __int64 v12; // r12
  struct _ERESOURCE *v13; // rsi
  struct _GRETHREAD *v14; // rax
  struct _GRETHREAD *v15; // rdi
  __int64 v16; // rcx
  char v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 j; // rcx
  struct _ERESOURCE *v21; // rbx
  struct _GRETHREAD *v22; // rax
  bool v23; // zf
  struct _ERESOURCE *v24; // rbx
  struct _GRETHREAD *v25; // rax
  struct _GRETHREAD *v26; // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  int v30; // r8d
  int v31; // eax
  void (__fastcall *v32)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  void (__fastcall *v33)(_QWORD, _QWORD **, _QWORD, _QWORD, _DWORD); // rax
  __int64 v34; // rdx
  void (__fastcall *v35)(__int64, __int64); // rax
  HSEMAPHORE v36; // [rsp+30h] [rbp-48h] BYREF
  HSEMAPHORE v37[8]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *i; // [rsp+80h] [rbp+8h] BYREF
  __int64 v39; // [rsp+98h] [rbp+20h] BYREF

  v6 = 1;
  WdLogSingleEntry2(4LL, a1, a2);
  v8 = *(_QWORD **)a1;
  v9 = 0;
  WdLogGlobalForLineNumber = 19724;
  for ( i = v8; v9 < *(_DWORD *)(a1 + 20); ++v9 )
  {
    v7 = 56LL * v9;
    v10 = *(HDEV *)(v7 + a1 + 40);
    if ( a2 )
    {
      DrvDxgkDisplayOnOff(*(_QWORD *)(v7 + a1 + 40), 1u, a3);
      DrvEnableDisplay(v10);
    }
  }
  v11 = *(struct _ERESOURCE ***)(W32GetSessionState(v7) + 88);
  v12 = (__int64)&(*v11)[6];
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v12);
  v13 = (struct _ERESOURCE *)v8[7];
  GreAcquireSemaphoreInternal(v13);
  v14 = GreGetCurrentThreadCrossSessionCheck();
  v15 = v14;
  if ( v14 )
  {
    v16 = *(_QWORD *)v14;
    if ( (*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v16 & 0x10) == 0 )
    {
      v29 = 0LL;
      v30 = 37;
      do
      {
        v31 = v29;
        if ( !_bittest64(&v16, v29) )
          v31 = v30;
        ++v29;
        v30 = v31;
      }
      while ( v29 < 0x40 );
      if ( v31 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v29, (unsigned int)v31);
    }
    v17 = *((_BYTE *)v15 + 12);
    *((_BYTE *)v15 + 12) = v17 + 1;
    if ( !v17 )
      *(_QWORD *)v15 |= 0x10uLL;
  }
  SEMOBJ<6>::SEMOBJ<6>(v37, v11);
  v18 = v8[6];
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v18);
  SEMOBJ<10>::SEMOBJ<10>((struct _ERESOURCE **)&v36, v11);
  if ( a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  j = v8[224];
  v39 = j;
  if ( (*(_DWORD *)(j + 24) & 0x800) != 0 )
  {
    v32 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v8[357];
    if ( v32 )
      v32(v8[223], &v39, 0LL, 0LL, *(_DWORD *)(j + 28));
    else
      v6 = 0;
  }
  else
  {
    v19 = *(unsigned int *)(a1 + 20);
    if ( (unsigned int)v19 > 1 )
    {
      for ( j = 0LL; (unsigned int)j < (unsigned int)v19; j = (unsigned int)(j + 1) )
      {
        v28 = *(_QWORD *)(56LL * (unsigned int)j + a1 + 40);
        if ( (*(_DWORD *)(v28 + 2156) & 0x100) != 0 )
        {
          v33 = *(void (__fastcall **)(_QWORD, _QWORD **, _QWORD, _QWORD, _DWORD))(v28 + 1752);
          v34 = *(_QWORD *)(v28 + 1792);
          i = (_QWORD *)v34;
          if ( v33 )
            v33(*(_QWORD *)(*(_QWORD *)(v28 + 24) + 1784LL), &i, 0LL, 0LL, *(_DWORD *)(v34 + 28));
          else
            v6 = 0;
          if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
          {
            j = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
            v35 = *(void (__fastcall **)(__int64, __int64))(j + 888);
            if ( v35 )
              v35(v28, 1LL);
          }
          break;
        }
      }
    }
  }
  v21 = (struct _ERESOURCE *)v36;
  if ( v36 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v36);
    v22 = GreGetCurrentThreadCrossSessionCheck();
    if ( v22 )
    {
      v23 = (*((_BYTE *)v22 + 18))-- == 1;
      if ( v23 )
        *(_QWORD *)v22 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v21);
  }
  if ( v18 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v18);
  v24 = (struct _ERESOURCE *)v37[0];
  if ( v37[0] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v37[0]);
    v25 = GreGetCurrentThreadCrossSessionCheck();
    if ( v25 )
    {
      v23 = (*((_BYTE *)v25 + 14))-- == 1;
      if ( v23 )
        *(_QWORD *)v25 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v24);
  }
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v13);
    v26 = GreGetCurrentThreadCrossSessionCheck();
    if ( v26 )
    {
      v23 = (*((_BYTE *)v26 + 12))-- == 1;
      if ( v23 )
        *(_QWORD *)v26 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v13);
  }
  if ( v12 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v12);
  if ( a2 )
    GreIncrementDisplaySettingsUniqueness(j);
  if ( UserIsConsoleConnection(j, v19) )
    UserNotifyDisplayChange();
  return v6;
}
