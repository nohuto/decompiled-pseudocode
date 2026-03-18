/*
 * XREFs of DrvDisableMDEV @ 0x140074C10
 * Callers:
 *     SafeDisableMDEV @ 0x140075040 (SafeDisableMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140043A70 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044EE4 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1400725DC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140072A48 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreSuspendDirectDraw @ 0x140072B40 (GreSuspendDirectDraw.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400730C4 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140073114 (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400735C4 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1400736E0 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x140074F40 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086C28 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087950 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087D5C (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140088EF8 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall DrvDisableMDEV(HDEV *a1, int a2, unsigned int a3)
{
  __int64 v5; // rcx
  HDEV v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  struct _ERESOURCE *v10; // rsi
  struct _GRETHREAD *v11; // rax
  struct _GRETHREAD *v12; // rdi
  __int64 v13; // rcx
  char v14; // cl
  __int64 v15; // r15
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbp
  struct _ERESOURCE *v20; // rbx
  struct _GRETHREAD *v21; // rax
  bool v22; // zf
  struct _ERESOURCE *v23; // rbx
  struct _GRETHREAD *v24; // rax
  struct _GRETHREAD *v25; // rax
  __int64 result; // rax
  unsigned __int64 v27; // rdx
  int v28; // r8d
  int v29; // eax
  _QWORD *v30; // [rsp+20h] [rbp-58h]
  HDEV v31; // [rsp+28h] [rbp-50h] BYREF
  __int64 v32; // [rsp+30h] [rbp-48h]
  HSEMAPHORE v33; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+90h] [rbp+18h]
  HSEMAPHORE v35; // [rsp+98h] [rbp+20h] BYREF

  v34 = a3;
  WdLogSingleEntry2(4LL, a1, a2);
  v6 = *a1;
  v31 = *a1;
  WdLogGlobalForLineNumber = 20079;
  if ( a2 )
    GreSuspendDirectDraw(v6, 0);
  v7 = *(_QWORD **)(W32GetSessionState(v5) + 88);
  v30 = v7;
  v8 = *v7 + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v8);
  v9 = *v7 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v9);
  v32 = *v7 + 728LL;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v32);
  v10 = (struct _ERESOURCE *)*((_QWORD *)v6 + 7);
  GreAcquireSemaphoreInternal(v10);
  v11 = GreGetCurrentThreadCrossSessionCheck();
  v12 = v11;
  if ( v11 )
  {
    v13 = *(_QWORD *)v11;
    if ( (*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v13 & 0x10) == 0 )
    {
      v27 = 0LL;
      v28 = 37;
      do
      {
        v29 = v27;
        if ( !_bittest64(&v13, v27) )
          v29 = v28;
        ++v27;
        v28 = v29;
      }
      while ( v27 < 0x40 );
      if ( v29 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v27, (unsigned int)v29);
    }
    v14 = *((_BYTE *)v12 + 12);
    *((_BYTE *)v12 + 12) = v14 + 1;
    if ( !v14 )
      *(_QWORD *)v12 |= 0x10uLL;
  }
  SEMOBJ<6>::SEMOBJ<6>(&v35, v7);
  v15 = *v7 + 520LL;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v15);
  v16 = *((_QWORD *)v6 + 6);
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v16);
  SEMOBJ<10>::SEMOBJ<10>(&v33, v30);
  v17 = DrvDisableMDEVChildren((struct _MDEV *)a1, a2, v34);
  v19 = v17;
  if ( v17 && a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v31, 1);
  v20 = (struct _ERESOURCE *)v33;
  if ( v33 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v33);
    v21 = GreGetCurrentThreadCrossSessionCheck();
    if ( v21 )
    {
      v22 = (*((_BYTE *)v21 + 18))-- == 1;
      if ( v22 )
        *(_QWORD *)v21 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v20);
    v33 = 0LL;
  }
  if ( v16 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v16);
  if ( v15 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v15);
  v23 = (struct _ERESOURCE *)v35;
  if ( v35 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v35);
    v24 = GreGetCurrentThreadCrossSessionCheck();
    if ( v24 )
    {
      v22 = (*((_BYTE *)v24 + 14))-- == 1;
      if ( v22 )
        *(_QWORD *)v24 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v23);
    v35 = 0LL;
  }
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v10);
    v25 = GreGetCurrentThreadCrossSessionCheck();
    if ( v25 )
    {
      v22 = (*((_BYTE *)v25 + 12))-- == 1;
      if ( v22 )
        *(_QWORD *)v25 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v10);
  }
  if ( v32 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v32);
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v9);
  if ( v8 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v8);
  if ( !(_DWORD)v19 && a2 )
    GreIncrementDisplaySettingsUniqueness(v18);
  WdLogSingleEntry1(5LL, v19);
  result = (unsigned int)v19;
  WdLogGlobalForLineNumber = 20141;
  return result;
}
