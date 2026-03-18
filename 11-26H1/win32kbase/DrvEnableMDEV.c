/*
 * XREFs of DrvEnableMDEV @ 0x14013AF88
 * Callers:
 *     SafeEnableMDEV @ 0x14013AF00 (SafeEnableMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     UserNotifyDisplayChange @ 0x14007F1A0 (UserNotifyDisplayChange.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x1400C5278 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x1400C6BC0 (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C72D0 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14013B2A8 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x14013B310 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1401C46FC (IsDrvRealizeHalftonePaletteSupported.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1401C4BD8 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$09@@YAXXZ @ 0x1401C4C68 (--$GrepAcquireLockValidate@$09@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  struct _ERESOURCE **v12; // r14
  struct _ERESOURCE *v13; // rsi
  struct _ERESOURCE *v14; // rdi
  struct _ERESOURCE *v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 j; // rcx
  void (__fastcall *v19)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  unsigned int v20; // edx
  __int64 v21; // rbx
  void (__fastcall *v22)(_QWORD, _QWORD **, _QWORD, _QWORD, _DWORD); // rax
  __int64 v23; // rdx
  void (__fastcall *v24)(__int64, __int64); // rax
  struct _GRETHREAD *v25; // rax
  bool v26; // zf
  struct _GRETHREAD *v27; // rax
  struct _GRETHREAD *v28; // rax
  __int64 v29; // rdx
  struct _ERESOURCE *v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+38h] [rbp-40h]
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *i; // [rsp+98h] [rbp+20h] BYREF

  v6 = 1;
  WdLogSingleEntry2(4LL, a1, a2);
  v9 = *(_QWORD **)a1;
  v10 = 0;
  WdLogGlobalForLineNumber = 19482;
  for ( i = v9; v10 < *(_DWORD *)(a1 + 20); ++v10 )
  {
    v8 = 56LL * v10;
    v11 = *(_QWORD *)(v8 + a1 + 40);
    v33 = v11;
    if ( a2 && v11 )
    {
      LOBYTE(v7) = 1;
      DrvDxgkDisplayOnOff(&v33, v7, a3);
      DrvEnableDisplay((struct PDEVOBJ *)&v33);
    }
  }
  v12 = *(struct _ERESOURCE ***)(W32GetSessionState(v8) + 88);
  v32 = (__int64)&(*v12)[6];
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v32);
  v13 = (struct _ERESOURCE *)v9[7];
  GreAcquireSemaphoreInternal(v13);
  GrepAcquireLockValidate<4>();
  v31 = *v12 + 10;
  GreAcquireSemaphoreInternal(v31);
  GrepAcquireLockValidate<6>();
  v14 = (struct _ERESOURCE *)v9[6];
  GreAcquireSemaphoreInternal(v14);
  GrepAcquireLockValidate<8>();
  v15 = *v12 + 13;
  GreAcquireSemaphoreInternal(v15);
  GrepAcquireLockValidate<10>();
  if ( a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  j = v9[224];
  v33 = j;
  if ( (*(_DWORD *)(j + 24) & 0x800) != 0 )
  {
    v19 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v9[357];
    if ( v19 )
      v19(v9[223], &v33, 0LL, 0LL, *(_DWORD *)(j + 28));
    else
      v6 = 0;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 20);
    if ( v20 > 1 )
    {
      for ( j = 0LL; (unsigned int)j < v20; j = (unsigned int)(j + 1) )
      {
        v21 = *(_QWORD *)(56LL * (unsigned int)j + a1 + 40);
        if ( (*(_DWORD *)(v21 + 2156) & 0x100) != 0 )
        {
          v22 = *(void (__fastcall **)(_QWORD, _QWORD **, _QWORD, _QWORD, _DWORD))(v21 + 1752);
          v23 = *(_QWORD *)(v21 + 1792);
          i = (_QWORD *)v23;
          if ( v22 )
            v22(*(_QWORD *)(*(_QWORD *)(v21 + 24) + 1784LL), &i, 0LL, 0LL, *(_DWORD *)(v23 + 28));
          else
            v6 = 0;
          if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
          {
            j = *(_QWORD *)(W32GetWin32kBaseApiSetTable(j) + 24);
            v24 = *(void (__fastcall **)(__int64, __int64))(j + 888);
            if ( v24 )
              v24(v21, 1LL);
          }
          break;
        }
      }
    }
  }
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v15, v16);
    v25 = GreGetCurrentThreadCrossSessionCheck();
    if ( v25 )
    {
      v26 = (*((_BYTE *)v25 + 18))-- == 1;
      if ( v26 )
        *(_QWORD *)v25 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v15);
  }
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v14, v16);
    v27 = GreGetCurrentThreadCrossSessionCheck();
    if ( v27 )
    {
      v26 = (*((_BYTE *)v27 + 16))-- == 1;
      if ( v26 )
        *(_QWORD *)v27 &= ~0x100uLL;
    }
    GreReleaseSemaphoreSharedInternal(v14);
  }
  if ( v31 )
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>();
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v13, v16);
    v28 = GreGetCurrentThreadCrossSessionCheck();
    if ( v28 )
    {
      v26 = (*((_BYTE *)v28 + 12))-- == 1;
      if ( v26 )
        *(_QWORD *)v28 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v13);
  }
  v29 = v32;
  if ( v32 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v32,
      v16);
  if ( a2 )
  {
    LOBYTE(j) = 1;
    GreIncrementDisplaySettingsUniqueness(j);
  }
  if ( UserIsConsoleConnection(j, v29, v16, v17) )
    UserNotifyDisplayChange();
  return v6;
}
