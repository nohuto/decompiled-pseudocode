/*
 * XREFs of ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770
 * Callers:
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1400C7400 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019F8AC (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057320 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057430 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057724 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x1400B31BC (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x1400C5278 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400C6550 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x1400C6BC0 (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$06@@QEAAXXZ @ 0x1400C7108 (-vUnlock@-$SEMOBJ@$06@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C72D0 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C7510 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140143538 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 *     ?vSpDwmDestroyDeviceSpecificResources@@YAXAEAVPDEVOBJ@@@Z @ 0x1401C1C3C (-vSpDwmDestroyDeviceSpecificResources@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1401C4BD8 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$09@@YAXXZ @ 0x1401C4C68 (--$GrepAcquireLockValidate@$09@@YAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDisableDisplay(struct PDEVOBJ *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r8
  __int64 v5; // r13
  struct _ERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // r12
  struct _ERESOURCE *v8; // rdi
  struct _ERESOURCE *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // rax
  unsigned int v15; // esi
  __int64 v16; // rdx
  signed __int32 v17; // ett
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // eax
  struct _GRETHREAD *v24; // rax
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // r8d
  struct _GRETHREAD *v28; // rax
  struct _GRETHREAD *v29; // rax
  __int64 result; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rcx
  int (*v35)(void); // rax
  __int64 v36; // rcx
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  __int64 v38; // [rsp+68h] [rbp-21h] BYREF
  struct _ERESOURCE **v39; // [rsp+70h] [rbp-19h]
  struct _ERESOURCE *v40; // [rsp+78h] [rbp-11h] BYREF
  __int64 v41; // [rsp+80h] [rbp-9h]
  __int64 v42; // [rsp+88h] [rbp-1h]
  HSEMAPHORE v43; // [rsp+90h] [rbp+7h] BYREF
  int v44; // [rsp+98h] [rbp+Fh]
  int v45; // [rsp+9Ch] [rbp+13h]

  v2 = a2;
  v39 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  WdLogSingleEntry2(4LL, *(_QWORD *)a1, v2);
  LOBYTE(v4) = 1;
  WdLogGlobalForLineNumber = 404;
  GrepSuspendDirectDraw(a1, 0LL, v4);
  v5 = (__int64)&(*v39)[6];
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v5);
  v42 = (__int64)&(*v39)[11];
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v42);
  v41 = (__int64)&(*v39)[7];
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v41);
  v6 = *(struct _ERESOURCE **)(*(_QWORD *)a1 + 56LL);
  GreAcquireSemaphoreInternal(v6);
  GrepAcquireLockValidate<4>();
  v7 = *v39 + 10;
  GreAcquireSemaphoreInternal(v7);
  GrepAcquireLockValidate<6>();
  v40 = *v39 + 5;
  GreAcquireSemaphoreInternal(v40);
  GrepAcquireLockValidate<7>();
  v8 = *(struct _ERESOURCE **)(*(_QWORD *)a1 + 48LL);
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<8>();
  v9 = *v39 + 13;
  GreAcquireSemaphoreInternal(v9);
  GrepAcquireLockValidate<10>();
  if ( (_DWORD)v2 )
  {
    v31 = *(_QWORD *)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x400) == 0 )
    {
      v32 = *(_QWORD *)(v31 + 2544);
      v33 = *(_DWORD *)(v32 + 60);
      v34 = *(unsigned int *)(v32 + 56);
      v43 = 0LL;
      v44 = v34;
      v45 = v33;
      v35 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v34) + 24) + 896LL);
      if ( v35 )
      {
        if ( v35() >= 0 )
        {
          v36 = *(_QWORD *)(v31 + 2544);
          if ( (*(_DWORD *)(v36 + 112) & 1) != 0 )
            v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v36 + 48) + 2824LL);
          else
            v37 = EngBitBlt;
          if ( v36 )
            v36 += 24LL;
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, HSEMAPHORE *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v37)(
            v36,
            0LL,
            0LL,
            0LL,
            0LL,
            &v43,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
        }
      }
    }
  }
  PDEVOBJ::vSync(
    a1,
    (struct _SURFOBJ *)((*(_QWORD *)(*(_QWORD *)a1 + 2544LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 2544LL) != 0LL)),
    0LL,
    0);
  vSpDwmDestroyDeviceSpecificResources(a1);
  if ( *(_WORD *)(W32GetUserSessionState(v11, v10, v12, v13) + 68744) == 0xFFFF )
    *(_DWORD *)(*(_QWORD *)a1 + 2608LL) = 4;
  v14 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1 + 2720LL);
  if ( v14 )
    v15 = v14(*(_QWORD *)(*(_QWORD *)a1 + 1784LL), 0LL);
  else
    v15 = 0;
  *(_DWORD *)(*(_QWORD *)a1 + 2608LL) = 0;
  if ( v15 )
  {
    v16 = *(_QWORD *)a1;
    _m_prefetchw((const void *)(*(_QWORD *)a1 + 40LL));
    do
      v17 = *(_DWORD *)(v16 + 40);
    while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 40), v17 | 0x400, v17) );
    *(_QWORD *)(*(_QWORD *)a1 + 32LL) = 0LL;
    SEMOBJ<20>::SEMOBJ<20>(&v43);
    v19 = 0LL;
    v38 = 0LL;
    while ( 1 )
    {
      LOBYTE(v18) = 1;
      v20 = HmgSafeNextObjt(v19, v18, &v38);
      if ( !v20 )
        break;
      v18 = v38;
      if ( !*(_DWORD *)(v38 + 32) && *(_QWORD *)(v38 + 48) == *(_QWORD *)a1 )
        *(_DWORD *)(v38 + 36) |= 0x1000u;
      v19 = v20;
    }
    SEMOBJ<20>::vUnlock(&v43, v21, v22);
    v23 = 0;
  }
  else
  {
    v23 = 1;
  }
  *((_DWORD *)v39 + 339) = v23;
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore(L"HT", v9);
    v24 = GreGetCurrentThreadCrossSessionCheck();
    if ( v24 )
    {
      v25 = (*((_BYTE *)v24 + 18))-- == 1;
      if ( v25 )
        *(_QWORD *)v24 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v9);
  }
  if ( v8 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8);
  SEMOBJ<7>::vUnlock(&v40);
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Sprite", v7);
    v28 = GreGetCurrentThreadCrossSessionCheck();
    if ( v28 )
    {
      v25 = (*((_BYTE *)v28 + 14))-- == 1;
      if ( v25 )
        *(_QWORD *)v28 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v7);
  }
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Pointer", v6);
    v29 = GreGetCurrentThreadCrossSessionCheck();
    if ( v29 )
    {
      v25 = (*((_BYTE *)v29 + 12))-- == 1;
      if ( v25 )
        *(_QWORD *)v29 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v6);
  }
  if ( v41 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal);
  if ( v42 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal);
  if ( v5 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v5,
      v27);
  if ( !v15 )
  {
    LOBYTE(v26) = 1;
    GreIncrementDisplaySettingsUniqueness(v26);
  }
  WdLogSingleEntry1(5LL, (int)v15);
  result = v15;
  WdLogGlobalForLineNumber = 523;
  return result;
}
