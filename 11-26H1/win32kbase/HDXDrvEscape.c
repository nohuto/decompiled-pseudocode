/*
 * XREFs of HDXDrvEscape @ 0x1401FB020
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1401973A0 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057430 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C5E40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400C6550 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C6748 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7164 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C7510 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140185690 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140186760 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14018C9B0 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14018E080 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // esi
  struct _ERESOURCE **v9; // rbx
  int v10; // r8d
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  struct _ERESOURCE *v12; // rbx
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  struct _ERESOURCE *v15; // rbx
  struct _GRETHREAD *v16; // rax
  struct _ERESOURCE *v17; // rbx
  struct _GRETHREAD *v18; // rax
  struct _ERESOURCE *v19; // rbx
  struct _GRETHREAD *v20; // rax
  HSEMAPHORE v22; // [rsp+40h] [rbp-40h] BYREF
  HSEMAPHORE v23; // [rsp+48h] [rbp-38h] BYREF
  HSEMAPHORE v24; // [rsp+50h] [rbp-30h] BYREF
  HSEMAPHORE v25; // [rsp+58h] [rbp-28h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+30h] BYREF

  v29 = a1;
  if ( !a1 )
    return 0LL;
  v8 = 1;
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    return 0LL;
  v9 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  SEMOBJ<1>::SEMOBJ<1>(&v28, v9);
  SEMOBJ<2>::SEMOBJ<2>(&v27, v9);
  SEMOBJ<3>::SEMOBJ<3>(&v26, v9);
  SEMOBJ<4>::SEMOBJ<4>((struct _ERESOURCE **)&v25, (__int64)&v29);
  SEMOBJ<6>::SEMOBJ<6>((struct _ERESOURCE **)&v24, v9);
  SEMOBJ<8>::SEMOBJ<8>((struct _ERESOURCE **)&v23, (__int64)&v29);
  SEMOBJ<10>::SEMOBJ<10>((struct _ERESOURCE **)&v22, v9);
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v29,
    (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2544) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 2544) >> 64)),
    0LL,
    0);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2872);
  if ( v11 )
    v8 = v11(*(_QWORD *)(a1 + 2544) + 24LL, a2, a4, a3, 0, 0LL);
  v12 = (struct _ERESOURCE *)v22;
  if ( v22 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v22, v10);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      v14 = (*((_BYTE *)v13 + 18))-- == 1;
      if ( v14 )
        *(_QWORD *)v13 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v12);
  }
  v15 = (struct _ERESOURCE *)v23;
  if ( v23 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v23, v10);
    v16 = GreGetCurrentThreadCrossSessionCheck();
    if ( v16 )
    {
      v14 = (*((_BYTE *)v16 + 16))-- == 1;
      if ( v14 )
        *(_QWORD *)v16 &= ~0x100uLL;
    }
    GreReleaseSemaphoreSharedInternal(v15);
  }
  v17 = (struct _ERESOURCE *)v24;
  if ( v24 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v24, v10);
    v18 = GreGetCurrentThreadCrossSessionCheck();
    if ( v18 )
    {
      v14 = (*((_BYTE *)v18 + 14))-- == 1;
      if ( v14 )
        *(_QWORD *)v18 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v17);
  }
  v19 = (struct _ERESOURCE *)v25;
  if ( v25 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v25, v10);
    v20 = GreGetCurrentThreadCrossSessionCheck();
    if ( v20 )
    {
      v14 = (*((_BYTE *)v20 + 12))-- == 1;
      if ( v14 )
        *(_QWORD *)v20 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v19);
  }
  if ( v26 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v26,
      v10);
  if ( v27 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v27,
      v10);
  if ( v28 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v28,
      v10);
  return v8;
}
