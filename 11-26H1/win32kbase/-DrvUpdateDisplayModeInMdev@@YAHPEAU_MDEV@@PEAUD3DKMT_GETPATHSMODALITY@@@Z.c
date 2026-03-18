/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140140030
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C3380 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C5E40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C6748 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     IsDwmActive @ 0x140140458 (IsDwmActive.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140168140 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140183688 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140185690 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14018C9B0 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     IsGrepAcquirePublicPFTSemaphoreExSupported @ 0x140192114 (IsGrepAcquirePublicPFTSemaphoreExSupported.c)
 *     _DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator() @ 0x1401F4764 (_DrvUpdateDisplayModeInMdev_--_2_--_lambda_1_--operator().c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  HSEMAPHORE v7; // rsi
  __int64 DxgkWin32kInterface; // rax
  unsigned int (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // rcx
  struct _ERESOURCE **v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  void (*v14)(void); // rax
  void (*v15)(void); // rax
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rcx
  void (*v22)(void); // rax
  void (*v23)(void); // rax
  int v24; // r8d
  struct _ERESOURCE *v25; // rbx
  struct _GRETHREAD *v26; // rax
  bool v27; // zf
  struct _ERESOURCE *v28; // rbx
  struct _GRETHREAD *v29; // rax
  struct _ERESOURCE *v30; // rbx
  struct _GRETHREAD *v31; // rax
  struct _ERESOURCE *v32; // rbx
  struct _GRETHREAD *v33; // rax
  struct _ERESOURCE *v34; // rbx
  struct _GRETHREAD *v35; // rax
  struct _ERESOURCE *v36; // rbx
  struct _GRETHREAD *v37; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // r8d
  HSEMAPHORE v42; // [rsp+20h] [rbp-30h] BYREF
  HSEMAPHORE v43; // [rsp+28h] [rbp-28h] BYREF
  HSEMAPHORE v44; // [rsp+30h] [rbp-20h] BYREF
  HSEMAPHORE v45; // [rsp+38h] [rbp-18h] BYREF
  HSEMAPHORE v46[2]; // [rsp+40h] [rbp-10h] BYREF
  HSEMAPHORE v47; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v48; // [rsp+88h] [rbp+38h] BYREF

  if ( !(unsigned int)IsDwmActive() )
  {
    WdLogSingleEntry1(4LL, 5LL);
    WdLogGlobalForLineNumber = 27666;
    return 0LL;
  }
  if ( *((_DWORD *)a1 + 5) != 1 )
  {
    WdLogSingleEntry1(4LL, 5LL);
    WdLogGlobalForLineNumber = 27675;
    return 0LL;
  }
  if ( !a2 )
  {
    v6 = 27681;
    WdLogSingleEntry1(4LL, 27681LL);
LABEL_7:
    WdLogGlobalForLineNumber = v6;
    return 0LL;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v6 = 27686;
    WdLogSingleEntry1(4LL, 27686LL);
    goto LABEL_7;
  }
  v47 = *(HSEMAPHORE *)a1;
  v7 = v47;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 440))(
          *(_QWORD *)(*((_QWORD *)v7 + 321) + 232LL),
          *(unsigned int *)(*((_QWORD *)v7 + 321) + 248LL)) )
  {
    WdLogSingleEntry1(4LL, 7LL);
    WdLogGlobalForLineNumber = 27694;
    return 0LL;
  }
  v9 = (unsigned int (__fastcall *)(_QWORD))*((_QWORD *)v7 + 333);
  if ( !v9 || !v9(*((_QWORD *)v7 + 223)) )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 27703;
    return 0LL;
  }
  v11 = *(struct _ERESOURCE ***)(W32GetSessionState(v10) + 88);
  SEMOBJ<4>::SEMOBJ<4>(&v45, &v47);
  SEMOBJ<6>::SEMOBJ<6>((struct _ERESOURCE **)&v44, v11);
  SEMOBJ<7>::SEMOBJ<7>(&v43, v11);
  SEMOBJ<8>::SEMOBJ<8>((struct _ERESOURCE **)&v42, (__int64)&v47);
  SEMOBJ<10>::SEMOBJ<10>(&v48, v11);
  SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v47, v11);
  if ( (int)IsGrepAcquirePublicPFTSemaphoreExSupported() < 0 )
  {
    SEMOBJ<20>::SEMOBJ<20>(v46, v11);
    v17 = DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator()(v39, a1, a2);
    SEMOBJ<20>::vUnlock(v46, v40, v41);
  }
  else
  {
    v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 24);
    v14 = *(void (**)(void))(v13 + 1864);
    if ( v14 )
      v14();
    v15 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13) + 24) + 1912LL);
    if ( v15 )
      v15();
    SEMOBJ<20>::SEMOBJ<20>(v46, v11);
    v17 = DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator()(v16, a1, a2);
    SEMOBJ<20>::vUnlock(v46, v18, v19);
    v21 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 24);
    v22 = *(void (**)(void))(v21 + 1928);
    if ( v22 )
      v22();
    v23 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21) + 24) + 1880LL);
    if ( v23 )
      v23();
  }
  v25 = (struct _ERESOURCE *)v47;
  if ( v47 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v47, v24);
    v26 = GreGetCurrentThreadCrossSessionCheck();
    if ( v26 )
    {
      v27 = (*((_BYTE *)v26 + 21))-- == 1;
      if ( v27 )
        *(_QWORD *)v26 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v25);
  }
  v28 = (struct _ERESOURCE *)v48;
  if ( v48 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v48, v24);
    v29 = GreGetCurrentThreadCrossSessionCheck();
    if ( v29 )
    {
      v27 = (*((_BYTE *)v29 + 18))-- == 1;
      if ( v27 )
        *(_QWORD *)v29 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v28);
  }
  v30 = (struct _ERESOURCE *)v42;
  if ( v42 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v42, v24);
    v31 = GreGetCurrentThreadCrossSessionCheck();
    if ( v31 )
    {
      v27 = (*((_BYTE *)v31 + 16))-- == 1;
      if ( v27 )
        *(_QWORD *)v31 &= ~0x100uLL;
    }
    GreReleaseSemaphoreSharedInternal(v30);
  }
  v32 = (struct _ERESOURCE *)v43;
  if ( v43 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", (int)v43, v24);
    v33 = GreGetCurrentThreadCrossSessionCheck();
    if ( v33 )
    {
      v27 = (*((_BYTE *)v33 + 15))-- == 1;
      if ( v27 )
        *(_QWORD *)v33 &= ~0x80uLL;
    }
    GreReleaseSemaphoreSharedInternal(v32);
  }
  v34 = (struct _ERESOURCE *)v44;
  if ( v44 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v44, v24);
    v35 = GreGetCurrentThreadCrossSessionCheck();
    if ( v35 )
    {
      v27 = (*((_BYTE *)v35 + 14))-- == 1;
      if ( v27 )
        *(_QWORD *)v35 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v34);
  }
  v36 = (struct _ERESOURCE *)v45;
  if ( v45 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v45, v24);
    v37 = GreGetCurrentThreadCrossSessionCheck();
    if ( v37 )
    {
      v27 = (*((_BYTE *)v37 + 12))-- == 1;
      if ( v27 )
        *(_QWORD *)v37 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v36);
  }
  return v17;
}
