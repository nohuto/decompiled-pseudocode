/*
 * XREFs of ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x14007230C
 * Callers:
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x140074F40 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     DrvEnableMDEV @ 0x1400879E0 (DrvEnableMDEV.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019CA20 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgSafeNextObjt @ 0x1400726E0 (HmgSafeNextObjt.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1400736E0 (GreIncrementDisplaySettingsUniqueness.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086C28 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087950 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087D5C (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140088EF8 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvEnableDisplay(HDEV a1)
{
  unsigned int v2; // r15d
  __int64 v3; // r14
  __int64 v4; // rbp
  struct _ERESOURCE *v5; // rsi
  struct _GRETHREAD *v6; // rax
  struct _GRETHREAD *v7; // rdi
  __int64 v8; // rcx
  char v9; // dl
  __int64 v10; // rdi
  signed __int32 v11; // ett
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 i; // rcx
  unsigned int v15; // eax
  struct _ERESOURCE *v16; // rbx
  struct _GRETHREAD *v17; // rax
  bool v18; // zf
  struct _ERESOURCE *v19; // rbx
  struct _GRETHREAD *v20; // rax
  struct _GRETHREAD *v21; // rax
  HDEV v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // r8d
  int v26; // eax
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF
  HSEMAPHORE v28; // [rsp+68h] [rbp+10h] BYREF
  HSEMAPHORE v29; // [rsp+70h] [rbp+18h] BYREF
  HSEMAPHORE v30; // [rsp+78h] [rbp+20h] BYREF

  v2 = 1;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  WdLogSingleEntry1(4LL, a1);
  v4 = *(_QWORD *)v3 + 624LL;
  WdLogGlobalForLineNumber = 19652;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v4);
  v5 = (struct _ERESOURCE *)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v5);
  v6 = GreGetCurrentThreadCrossSessionCheck();
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 && (v8 & 0x10) == 0 )
    {
      v24 = 0LL;
      v25 = 37;
      do
      {
        v26 = v24;
        if ( !_bittest64(&v8, v24) )
          v26 = v25;
        ++v24;
        v25 = v26;
      }
      while ( v24 < 0x40 );
      if ( v26 > 4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v24, (unsigned int)v26);
    }
    v9 = *((_BYTE *)v7 + 12);
    *((_BYTE *)v7 + 12) = v9 + 1;
    if ( !v9 )
      *(_QWORD *)v7 |= 0x10uLL;
  }
  SEMOBJ<6>::SEMOBJ<6>(&v30, v3);
  v10 = *((_QWORD *)a1 + 6);
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v10);
  SEMOBJ<10>::SEMOBJ<10>(&v29, v3);
  *(_DWORD *)(v3 + 1268) = 0;
  if ( *((_QWORD *)a1 + 340) )
  {
    while ( !(*((unsigned int (__fastcall **)(_QWORD, __int64))a1 + 340))(*((_QWORD *)a1 + 223), 1LL) )
      *(_DWORD *)(v3 + 1268) = 1;
  }
  else
  {
    v2 = 0;
  }
  _m_prefetchw(a1 + 10);
  do
    v11 = *((_DWORD *)a1 + 10);
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v11 & 0xFFFFFBFF, v11) );
  if ( _bittest((const signed __int32 *)a1 + 10, 0x11u) )
  {
    *((_QWORD *)a1 + 4) = 0LL;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 3);
    if ( v12 )
    {
      if ( _bittest((const signed __int32 *)(v12 + 40), 0x11u) )
      {
        if ( !*((_QWORD *)a1 + 4) )
        {
          v23 = *(HDEV *)(**(_QWORD **)(v12 + 1784) + 48LL);
          if ( a1 != v23 )
            *((_QWORD *)a1 + 4) = v23;
        }
      }
    }
  }
  SEMOBJ<20>::SEMOBJ<20>(&v28);
  v27 = 0LL;
  for ( i = 0LL; ; i = v15 )
  {
    LOBYTE(v13) = 1;
    v15 = HmgSafeNextObjt(i, v13, &v27);
    if ( !v15 )
      break;
    if ( !*(_DWORD *)(v27 + 32) && *(HDEV *)(v27 + 48) == a1 )
      *(_DWORD *)(v27 + 36) &= ~0x1000u;
  }
  SEMOBJ<20>::vUnlock(&v28);
  v16 = (struct _ERESOURCE *)v29;
  if ( v29 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v29);
    v17 = GreGetCurrentThreadCrossSessionCheck();
    if ( v17 )
    {
      v18 = (*((_BYTE *)v17 + 18))-- == 1;
      if ( v18 )
        *(_QWORD *)v17 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v16);
  }
  if ( v10 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v10);
  v19 = (struct _ERESOURCE *)v30;
  if ( v30 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v30);
    v20 = GreGetCurrentThreadCrossSessionCheck();
    if ( v20 )
    {
      v18 = (*((_BYTE *)v20 + 14))-- == 1;
      if ( v18 )
        *(_QWORD *)v20 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v19);
  }
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v5);
    v21 = GreGetCurrentThreadCrossSessionCheck();
    if ( v21 )
    {
      v18 = (*((_BYTE *)v21 + 12))-- == 1;
      if ( v18 )
        *(_QWORD *)v21 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v5);
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v4);
  GreIncrementDisplaySettingsUniqueness();
  return v2;
}
