/*
 * XREFs of ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4
 * Callers:
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1400C7400 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019F8AC (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x1400C5278 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x1400C6BC0 (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C72D0 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1401C4BD8 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$09@@YAXXZ @ 0x1401C4C68 (--$GrepAcquireLockValidate@$09@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvEnableDisplay(struct PDEVOBJ *this)
{
  unsigned int v2; // r13d
  struct _ERESOURCE **v3; // r12
  __int64 v4; // r15
  struct _ERESOURCE *v5; // rdi
  struct _ERESOURCE *v6; // rbp
  struct _ERESOURCE *v7; // rbx
  struct _ERESOURCE *v8; // rsi
  __int64 v9; // rcx
  int v10; // r8d
  struct _GRETHREAD *v11; // rax
  bool v12; // zf
  struct _GRETHREAD *v13; // rax
  struct _GRETHREAD *v14; // rax
  struct _GRETHREAD *v15; // rax

  v2 = 1;
  v3 = *(struct _ERESOURCE ***)(W32GetSessionState(this) + 88);
  WdLogSingleEntry1(4LL, *(_QWORD *)this);
  v4 = (__int64)&(*v3)[6];
  WdLogGlobalForLineNumber = 331;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v4);
  v5 = *(struct _ERESOURCE **)(*(_QWORD *)this + 56LL);
  GreAcquireSemaphoreInternal(v5);
  GrepAcquireLockValidate<4>();
  v6 = *v3 + 10;
  GreAcquireSemaphoreInternal(v6);
  GrepAcquireLockValidate<6>();
  v7 = *(struct _ERESOURCE **)(*(_QWORD *)this + 48LL);
  GreAcquireSemaphoreInternal(v7);
  GrepAcquireLockValidate<8>();
  v8 = *v3 + 13;
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<10>();
  *((_DWORD *)v3 + 339) = 0;
  if ( *(_QWORD *)(*(_QWORD *)this + 2720LL) )
  {
    while ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)this + 2720LL))(
               *(_QWORD *)(*(_QWORD *)this + 1784LL),
               1LL) )
      *((_DWORD *)v3 + 339) = 1;
  }
  else
  {
    v2 = 0;
  }
  PDEVOBJ::bDisabled(this, 0);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v8, v10);
    v11 = GreGetCurrentThreadCrossSessionCheck();
    if ( v11 )
    {
      v12 = (*((_BYTE *)v11 + 18))-- == 1;
      if ( v12 )
        *(_QWORD *)v11 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v8);
  }
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v7, v10);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      v12 = (*((_BYTE *)v13 + 16))-- == 1;
      if ( v12 )
        *(_QWORD *)v13 &= ~0x100uLL;
    }
    GreReleaseSemaphoreSharedInternal(v7);
  }
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v6, v10);
    v14 = GreGetCurrentThreadCrossSessionCheck();
    if ( v14 )
    {
      v12 = (*((_BYTE *)v14 + 14))-- == 1;
      if ( v12 )
        *(_QWORD *)v14 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v6);
  }
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v5, v10);
    v15 = GreGetCurrentThreadCrossSessionCheck();
    if ( v15 )
    {
      v12 = (*((_BYTE *)v15 + 12))-- == 1;
      if ( v12 )
        *(_QWORD *)v15 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v5);
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v4,
      v10);
  LOBYTE(v9) = 1;
  GreIncrementDisplaySettingsUniqueness(v9);
  return v2;
}
