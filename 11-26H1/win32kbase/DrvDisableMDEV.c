/*
 * XREFs of DrvDisableMDEV @ 0x1400C6E50
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeDisableMDEV @ 0x14019B620 (SafeDisableMDEV.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057320 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057430 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057724 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x1400B31BC (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x1400C5278 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x1400C6BC0 (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$06@@QEAAXXZ @ 0x1400C7108 (-vUnlock@-$SEMOBJ@$06@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C72D0 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1400C7400 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C7510 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1401C4BD8 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$09@@YAXXZ @ 0x1401C4C68 (--$GrepAcquireLockValidate@$09@@YAXXZ.c)
 */

__int64 __fastcall DrvDisableMDEV(struct _MDEV *a1, int a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  struct _ERESOURCE **v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r12
  struct _ERESOURCE *v11; // rdi
  struct _ERESOURCE *v12; // r15
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rsi
  int v15; // eax
  int v16; // r8d
  __int64 v17; // r14
  struct _GRETHREAD *v18; // rax
  bool v19; // zf
  struct _GRETHREAD *v20; // rax
  __int64 v21; // rcx
  int v22; // r8d
  struct _GRETHREAD *v23; // rax
  struct _GRETHREAD *v24; // rax
  __int64 result; // rax
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+90h] [rbp+18h]
  struct _ERESOURCE *v29; // [rsp+98h] [rbp+20h] BYREF

  v28 = a3;
  WdLogSingleEntry2(4LL, a1, a2);
  v7 = *(_QWORD *)a1;
  v27 = *(_QWORD *)a1;
  WdLogGlobalForLineNumber = 19627;
  if ( a2 )
  {
    LOBYTE(v6) = 1;
    GrepSuspendDirectDraw(&v27, 0LL, v6);
  }
  v8 = *(struct _ERESOURCE ***)(W32GetSessionState(v5) + 88);
  v9 = (__int64)&(*v8)[6];
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v9);
  v26 = (__int64)&(*v8)[11];
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v26);
  v10 = (__int64)&(*v8)[7];
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v10);
  v11 = *(struct _ERESOURCE **)(v7 + 56);
  GreAcquireSemaphoreInternal(v11);
  GrepAcquireLockValidate<4>();
  v12 = *v8 + 10;
  GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<6>();
  v29 = *v8 + 5;
  GreAcquireSemaphoreInternal(v29);
  GrepAcquireLockValidate<7>();
  v13 = *(struct _ERESOURCE **)(v7 + 48);
  GreAcquireSemaphoreInternal(v13);
  GrepAcquireLockValidate<8>();
  v14 = *v8 + 13;
  GreAcquireSemaphoreInternal(v14);
  GrepAcquireLockValidate<10>();
  v15 = DrvDisableMDEVChildren(a1, a2, v28);
  v17 = v15;
  if ( v15 && a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v27, 1);
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v14, v16);
    v18 = GreGetCurrentThreadCrossSessionCheck();
    if ( v18 )
    {
      v19 = (*((_BYTE *)v18 + 18))-- == 1;
      if ( v19 )
        *(_QWORD *)v18 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v14);
  }
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v13, v16);
    v20 = GreGetCurrentThreadCrossSessionCheck();
    if ( v20 )
    {
      v19 = (*((_BYTE *)v20 + 16))-- == 1;
      if ( v19 )
        *(_QWORD *)v20 &= ~0x100uLL;
    }
    GreReleaseSemaphoreSharedInternal(v13);
  }
  SEMOBJ<7>::vUnlock(&v29);
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v12, v22);
    v23 = GreGetCurrentThreadCrossSessionCheck();
    if ( v23 )
    {
      v19 = (*((_BYTE *)v23 + 14))-- == 1;
      if ( v19 )
        *(_QWORD *)v23 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v12);
  }
  if ( v11 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v11, v22);
    v24 = GreGetCurrentThreadCrossSessionCheck();
    if ( v24 )
    {
      v19 = (*((_BYTE *)v24 + 12))-- == 1;
      if ( v19 )
        *(_QWORD *)v24 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v11);
  }
  if ( v10 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v10,
      v22);
  if ( v26 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal);
  if ( v9 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v9,
      v22);
  if ( !(_DWORD)v17 && a2 )
  {
    LOBYTE(v21) = 1;
    GreIncrementDisplaySettingsUniqueness(v21);
  }
  WdLogSingleEntry1(5LL, v17);
  result = (unsigned int)v17;
  WdLogGlobalForLineNumber = 19689;
  return result;
}
