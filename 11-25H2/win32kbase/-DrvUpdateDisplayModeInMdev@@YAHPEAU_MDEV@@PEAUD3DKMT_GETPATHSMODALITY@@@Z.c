/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401CBA50
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400730C4 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007495C (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140086794 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087950 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087D5C (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsDwmActive @ 0x1400FC134 (IsDwmActive.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140148008 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     IsGrepAcquirePublicPFTSemaphoreExSupported @ 0x140154018 (IsGrepAcquirePublicPFTSemaphoreExSupported.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C4B14 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator() @ 0x1401C9B1C (_DrvUpdateDisplayModeInMdev_--_2_--_lambda_1_--operator().c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  HSEMAPHORE v6; // rsi
  __int64 DxgkWin32kInterface; // rax
  unsigned int (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rcx
  struct _ERESOURCE **v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void (*v17)(void); // rax
  void (*v18)(void); // rax
  __int64 v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  void (*v25)(void); // rax
  void (*v26)(void); // rax
  struct _ERESOURCE *v27; // rbx
  struct _GRETHREAD *v28; // rax
  bool v29; // zf
  struct _ERESOURCE *v30; // rbx
  struct _GRETHREAD *v31; // rax
  struct _ERESOURCE *v32; // rbx
  struct _GRETHREAD *v33; // rax
  struct _ERESOURCE *v34; // rbx
  struct _GRETHREAD *v35; // rax
  __int64 v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-30h] BYREF
  __int64 v39; // [rsp+28h] [rbp-28h] BYREF
  HSEMAPHORE v40; // [rsp+30h] [rbp-20h] BYREF
  HSEMAPHORE v41; // [rsp+38h] [rbp-18h] BYREF
  HSEMAPHORE v42[2]; // [rsp+40h] [rbp-10h] BYREF
  HSEMAPHORE v43; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v44; // [rsp+88h] [rbp+38h] BYREF

  if ( !(unsigned int)IsDwmActive((__int64)a1, (__int64)a2) )
  {
    WdLogSingleEntry1(4LL, 5LL);
    WdLogGlobalForLineNumber = 29023;
    return 0LL;
  }
  if ( *((_DWORD *)a1 + 5) != 1 )
  {
    WdLogSingleEntry1(4LL, 5LL);
    WdLogGlobalForLineNumber = 29032;
    return 0LL;
  }
  if ( !a2 )
  {
    v5 = 29038;
    WdLogSingleEntry1(4LL, 29038LL);
LABEL_7:
    WdLogGlobalForLineNumber = v5;
    return 0LL;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v5 = 29043;
    WdLogSingleEntry1(4LL, 29043LL);
    goto LABEL_7;
  }
  v43 = *(HSEMAPHORE *)a1;
  v6 = v43;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 440))(
          *(_QWORD *)(*((_QWORD *)v6 + 321) + 232LL),
          *(unsigned int *)(*((_QWORD *)v6 + 321) + 248LL)) )
  {
    WdLogSingleEntry1(4LL, 7LL);
    WdLogGlobalForLineNumber = 29051;
    return 0LL;
  }
  v8 = (unsigned int (__fastcall *)(_QWORD))*((_QWORD *)v6 + 333);
  if ( !v8 || !v8(*((_QWORD *)v6 + 223)) )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 29060;
    return 0LL;
  }
  v10 = *(struct _ERESOURCE ***)(W32GetSessionState(v9) + 88);
  SEMOBJ<4>::SEMOBJ<4>((struct _ERESOURCE **)&v41, (__int64)&v43);
  SEMOBJ<6>::SEMOBJ<6>((struct _ERESOURCE **)&v40, v10);
  SEMOBJ<7>::SEMOBJ<7>(&v39, v10);
  SEMOBJ<8>::SEMOBJ<8>(&v38, (__int64)&v43);
  SEMOBJ<10>::SEMOBJ<10>((struct _ERESOURCE **)&v44, v10);
  SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v43, v10);
  if ( (int)IsGrepAcquirePublicPFTSemaphoreExSupported(v12, v11) < 0 )
  {
    SEMOBJ<20>::SEMOBJ<20>(v42, v10);
    v20 = DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator()(v37, (__int64)a1, a2);
    SEMOBJ<20>::vUnlock(v42);
  }
  else
  {
    v16 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 24);
    v17 = *(void (**)(void))(v16 + 1888);
    if ( v17 )
      v17();
    v18 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 24) + 1936LL);
    if ( v18 )
      v18();
    SEMOBJ<20>::SEMOBJ<20>(v42, v10);
    v20 = DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator()(v19, (__int64)a1, a2);
    SEMOBJ<20>::vUnlock(v42);
    v24 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 24);
    v25 = *(void (**)(void))(v24 + 1952);
    if ( v25 )
      v25();
    v26 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 24) + 1904LL);
    if ( v26 )
      v26();
  }
  v27 = (struct _ERESOURCE *)v43;
  if ( v43 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v43);
    v28 = GreGetCurrentThreadCrossSessionCheck();
    if ( v28 )
    {
      v29 = (*((_BYTE *)v28 + 21))-- == 1;
      if ( v29 )
        *(_QWORD *)v28 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v27);
  }
  v30 = (struct _ERESOURCE *)v44;
  if ( v44 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v44);
    v31 = GreGetCurrentThreadCrossSessionCheck();
    if ( v31 )
    {
      v29 = (*((_BYTE *)v31 + 18))-- == 1;
      if ( v29 )
        *(_QWORD *)v31 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v30);
  }
  if ( v38 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v38);
  if ( v39 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v39);
  v32 = (struct _ERESOURCE *)v40;
  if ( v40 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v40);
    v33 = GreGetCurrentThreadCrossSessionCheck();
    if ( v33 )
    {
      v29 = (*((_BYTE *)v33 + 14))-- == 1;
      if ( v29 )
        *(_QWORD *)v33 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v32);
  }
  v34 = (struct _ERESOURCE *)v41;
  if ( v41 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v41);
    v35 = GreGetCurrentThreadCrossSessionCheck();
    if ( v35 )
    {
      v29 = (*((_BYTE *)v35 + 12))-- == 1;
      if ( v29 )
        *(_QWORD *)v35 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v34);
  }
  return v20;
}
