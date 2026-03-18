/*
 * XREFs of HDXDrvEscape @ 0x1401D1C00
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1401586B0 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140043A70 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044EE4 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140074928 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140086794 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400877D0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087950 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087D5C (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014711C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140148008 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140152384 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // esi
  struct _ERESOURCE **v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  struct _ERESOURCE *v11; // rbx
  struct _GRETHREAD *v12; // rax
  bool v13; // zf
  struct _ERESOURCE *v14; // rbx
  struct _GRETHREAD *v15; // rax
  struct _ERESOURCE *v16; // rbx
  struct _GRETHREAD *v17; // rax
  HSEMAPHORE v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  HSEMAPHORE v21; // [rsp+50h] [rbp-30h] BYREF
  HSEMAPHORE v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+30h] BYREF

  v26 = a1;
  if ( !a1 )
    return 0LL;
  v8 = 1;
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    return 0LL;
  v9 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  SEMOBJ<1>::SEMOBJ<1>(&v25, v9);
  SEMOBJ<2>::SEMOBJ<2>(&v24, v9);
  SEMOBJ<3>::SEMOBJ<3>(&v23, v9);
  SEMOBJ<4>::SEMOBJ<4>((struct _ERESOURCE **)&v22, (__int64)&v26);
  SEMOBJ<6>::SEMOBJ<6>((struct _ERESOURCE **)&v21, v9);
  SEMOBJ<8>::SEMOBJ<8>(&v20, (__int64)&v26);
  SEMOBJ<10>::SEMOBJ<10>((struct _ERESOURCE **)&v19, v9);
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v26,
    (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2544) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 2544) >> 64)),
    0LL,
    0);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2872);
  if ( v10 )
    v8 = v10(*(_QWORD *)(a1 + 2544) + 24LL, a2, a4, a3, 0, 0LL);
  v11 = (struct _ERESOURCE *)v19;
  if ( v19 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v19);
    v12 = GreGetCurrentThreadCrossSessionCheck();
    if ( v12 )
    {
      v13 = (*((_BYTE *)v12 + 18))-- == 1;
      if ( v13 )
        *(_QWORD *)v12 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v11);
  }
  if ( v20 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v20);
  v14 = (struct _ERESOURCE *)v21;
  if ( v21 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v21);
    v15 = GreGetCurrentThreadCrossSessionCheck();
    if ( v15 )
    {
      v13 = (*((_BYTE *)v15 + 14))-- == 1;
      if ( v13 )
        *(_QWORD *)v15 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v14);
  }
  v16 = (struct _ERESOURCE *)v22;
  if ( v22 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v22);
    v17 = GreGetCurrentThreadCrossSessionCheck();
    if ( v17 )
    {
      v13 = (*((_BYTE *)v17 + 12))-- == 1;
      if ( v13 )
        *(_QWORD *)v17 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v16);
  }
  if ( v23 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v23);
  if ( v24 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v24);
  if ( v25 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v25);
  return v8;
}
