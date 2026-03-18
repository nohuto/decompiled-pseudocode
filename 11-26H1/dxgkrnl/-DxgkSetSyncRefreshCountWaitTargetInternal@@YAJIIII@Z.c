/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14029FF9C
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x14029FE50 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140012A50 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140016D90 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x14003BD40 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14003C2B4 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1400423A0 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x14004C058 (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1400534B8 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x14005D500 (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402A12F8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1402A1330 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x140360A60 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  struct DXGADAPTER *v5; // r14
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rsi
  struct DXGPROCESS *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // r12d
  __int64 v19; // rax
  struct DXGADAPTER *v20; // rbx
  DXGADAPTER *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 result; // rax
  DXGADAPTER *v25; // rcx
  __int64 v26; // rax
  _DWORD *v27; // rsi
  char v28; // al
  __int64 v29; // rcx
  signed __int32 v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  ADAPTER_DISPLAY *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rsi
  struct DXGPROCESS *v39; // rax
  __int64 v40; // r8
  unsigned int v41; // esi
  unsigned int v42; // eax
  unsigned int v43; // edx
  ADAPTER_DISPLAY *v44; // r10
  __int64 v45; // rcx
  DXGADAPTER *v46; // rcx
  bool v47; // zf
  volatile signed __int64 *v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rdi
  int v52; // eax
  unsigned int v53; // r8d
  int IndirectDisplayPairedAdapter; // eax
  __int64 v55; // r13
  int v56; // edx
  __int64 v57; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  ADAPTER_RENDER **v61; // rcx
  unsigned __int64 v62; // rdx
  int v63; // eax
  unsigned int Timeout; // [rsp+20h] [rbp-E0h]
  signed __int32 v65; // [rsp+28h] [rbp-D8h]
  char v66; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v67; // [rsp+50h] [rbp-B0h] BYREF
  char v68; // [rsp+51h] [rbp-AFh]
  char v69; // [rsp+52h] [rbp-AEh]
  char v70; // [rsp+53h] [rbp-ADh]
  struct DXGADAPTER *v71; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+60h] [rbp-A0h]
  unsigned int v73; // [rsp+68h] [rbp-98h]
  unsigned int v74; // [rsp+6Ch] [rbp-94h]
  struct DXGDEVICE *v75; // [rsp+70h] [rbp-90h] BYREF
  int v76; // [rsp+78h] [rbp-88h] BYREF
  int v77; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v78; // [rsp+80h] [rbp-80h]
  _BYTE v79[16]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v80[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v81[56]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v82[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v83[16]; // [rsp+E8h] [rbp-18h] BYREF
  DXGADAPTER *v84; // [rsp+F8h] [rbp-8h]
  _BYTE v85[16]; // [rsp+128h] [rbp+28h] BYREF
  DXGADAPTER *v86; // [rsp+138h] [rbp+38h]
  char v87; // [rsp+140h] [rbp+40h]
  __int64 v88; // [rsp+148h] [rbp+48h]

  v4 = 0LL;
  v73 = a4;
  v5 = 0LL;
  v71 = 0LL;
  v6 = a3;
  LODWORD(v75) = a3;
  v74 = a2;
  v7 = a1;
  v78 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v11 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v11 )
        goto LABEL_4;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v10;
  if ( !v10 )
  {
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7162;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v17;
  }
LABEL_4:
  if ( (*((_DWORD *)v11 + 102) & 4) == 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(3LL);
    result = 3221225506LL;
    WdLogGlobalForLineNumber = 7170;
    return result;
  }
  v76 = 0;
  v77 = 0;
  v12 = (*(__int64 (__fastcall **)(int *, _QWORD, int *))(*((_QWORD *)v11 + 11) + 240LL))(&v76, 0LL, &v77);
  if ( !v76 || v12 && !v77 )
    return -1073741637LL;
  if ( v11 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v11 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 248, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)v11 + 68) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)"g");
    ExAcquirePushLockSharedEx((char *)v11 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v11 + 66);
  v14 = (v7 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)v11 + 102) & 0x100) != 0 )
  {
    v55 = *((_QWORD *)v11 + 74);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v55 + 248));
    if ( v14 < *(_DWORD *)(v55 + 296) )
    {
      v56 = *(_DWORD *)(*(_QWORD *)(v55 + 280) + 16LL * v14 + 8);
      if ( ((v78 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v55 + 280) + 16LL * v14 + 8) & 0x60)
        && (v56 & 0x2000) == 0
        && (v56 & 0x1F) != 0 )
      {
        v57 = *(_QWORD *)(v55 + 280);
        if ( (*(_BYTE *)(v57 + 16LL * v14 + 8) & 0x1F) == 1 )
        {
          v4 = *(_QWORD *)(v57 + 16LL * v14);
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v4 = 0LL;
        }
      }
      else
      {
        v4 = 0LL;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v55 + 264));
    ExReleasePushLockSharedEx(v55 + 248, 0LL);
    KeLeaveCriticalRegion();
    v6 = (unsigned int)v75;
    v7 = v78;
  }
  else if ( v14 < *((_DWORD *)v11 + 74) )
  {
    v15 = *(_DWORD *)(*((_QWORD *)v11 + 35) + 16LL * v14 + 8);
    if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v11 + 35) + 16LL * v14 + 8) & 0x60)
      && (v15 & 0x2000) == 0
      && (v15 & 0x1F) != 0 )
    {
      v16 = *((_QWORD *)v11 + 35);
      if ( (*(_BYTE *)(v16 + 16LL * v14 + 8) & 0x1F) == 1 )
      {
        v4 = *(_QWORD *)(v16 + 16LL * v14);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v4 = 0LL;
      }
    }
    else
    {
      v4 = 0LL;
    }
  }
  v80[0] = (DXGADAPTER *)v4;
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    v80[1] = (DXGADAPTER *)-1LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)v11 + 66);
  ExReleasePushLockSharedEx((char *)v11 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v4 )
  {
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 7193;
    return (unsigned int)v17;
  }
  v17 = v74;
  v18 = 0;
  if ( v74 )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75, v74, (struct _KTHREAD **)v11, &v71);
    v5 = v71;
    if ( !v71 )
    {
      WdLogSingleEntry2(3LL, v4, v17);
      v61 = (ADAPTER_RENDER **)v75;
      WdLogGlobalForLineNumber = 7208;
      if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v61[2], (struct DXGDEVICE *)v61);
      LODWORD(v17) = -1073741811;
      goto LABEL_56;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v71 + 8);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v75);
  }
  v19 = *(_QWORD *)(v4 + 3160);
  v75 = v5;
  v71 = 0LL;
  if ( !v19 )
  {
    WdLogSingleEntry2(4LL, v4, -1073741637LL);
    v25 = v71;
    WdLogGlobalForLineNumber = 8846;
    if ( !v71 )
    {
LABEL_60:
      LODWORD(v17) = -1073741637;
      goto LABEL_93;
    }
LABEL_59:
    DXGADAPTER::ReleaseReference(v25);
    goto LABEL_60;
  }
  if ( v6 >= *(_DWORD *)(v19 + 96) )
  {
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry2(2LL, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 8833;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v6,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v46 = v71;
    if ( !v71 )
      goto LABEL_93;
    goto LABEL_92;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
  if ( !*(_QWORD *)(v4 + 3168) )
  {
    if ( (*(_DWORD *)(v4 + 444) & 0x100) == 0 )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v79);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v79);
      v48 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 126);
      if ( v71 )
        DXGADAPTER::ReleaseReference(v71);
      v71 = (struct DXGADAPTER *)v48;
      if ( v48 )
      {
        _InterlockedIncrement64(v48 + 3);
        v72 = -1LL;
        if ( v71 )
        {
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
          goto LABEL_33;
        }
      }
      WdLogSingleEntry2(2LL, v4, -1073741637LL);
      WdLogGlobalForLineNumber = 8889;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
        v4,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
      if ( v71 )
        DXGADAPTER::ReleaseReference(v71);
      v71 = 0LL;
      v25 = (DXGADAPTER *)v4;
      goto LABEL_59;
    }
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)v4, 0, &v71);
    v17 = IndirectDisplayPairedAdapter;
    if ( IndirectDisplayPairedAdapter >= 0 )
    {
      LODWORD(v17) = v74;
      goto LABEL_33;
    }
    WdLogSingleEntry2(2LL, v4, IndirectDisplayPairedAdapter);
    WdLogGlobalForLineNumber = 8875;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
      v4,
      v17,
      0LL,
      0LL,
      0LL);
    if ( v71 )
      DXGADAPTER::ReleaseReference(v71);
    v71 = 0LL;
    v46 = (DXGADAPTER *)v4;
LABEL_92:
    DXGADAPTER::ReleaseReference(v46);
LABEL_93:
    WdLogSingleEntry3(2LL, v4, v6, (int)v17);
    WdLogGlobalForLineNumber = 7234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      v4,
      v6,
      (int)v17,
      0LL,
      0LL);
    if ( v5 )
    {
      v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_126;
    }
LABEL_56:
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
    return (unsigned int)v17;
  }
  if ( v71 )
    DXGADAPTER::ReleaseReference(v71);
  v71 = (struct DXGADAPTER *)v4;
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
  v72 = -1LL;
LABEL_33:
  v20 = v71;
  v71 = 0LL;
  if ( !v20 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7240;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      7240LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v5 && (v20 != *(struct DXGADAPTER **)(*((_QWORD *)v5 + 2) + 16LL) || v4 != *((_QWORD *)v5 + 237)) )
  {
    WdLogSingleEntry2(3LL, v4, (unsigned int)v17);
    WdLogGlobalForLineNumber = 7248;
    LODWORD(v17) = -1073741811;
    goto LABEL_170;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v82, v20, (struct DXGADAPTER *const)v4);
  DXGADAPTER::ReleaseReference(v20);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
  if ( *(_DWORD *)(v4 + 160) == 1 )
  {
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
      (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v81,
      v20,
      (struct DXGADAPTER *)v4);
    if ( *((_DWORD *)v20 + 50) != 1 || *(_DWORD *)(v4 + 200) != 1 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v81);
      goto LABEL_169;
    }
    if ( v6 >= *(_DWORD *)(*(_QWORD *)(v4 + 3160) + 96LL) )
    {
      LODWORD(v17) = -1073741811;
      WdLogSingleEntry2(3LL, v6, -1073741811LL);
      WdLogGlobalForLineNumber = 7276;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v81);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
      goto LABEL_170;
    }
    if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v4, v6) )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v81);
      goto LABEL_52;
    }
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v81);
  }
  if ( v87 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v85, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v21 = v86;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v86 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v86 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)"g");
      KeWaitForSingleObject((char *)v86 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v86, 0LL);
    v21 = v86;
  }
  v88 = 0LL;
  v87 = 1;
  if ( *((_DWORD *)v21 + 50) != 1 )
    goto LABEL_121;
  if ( v84 != v86 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v83, 0LL);
    if ( *((_DWORD *)v84 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v83);
LABEL_121:
      COREACCESS::Release((COREACCESS *)v85);
LABEL_169:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
      LODWORD(v17) = -1073741130;
LABEL_170:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v75);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v80, v62);
      return (unsigned int)v17;
    }
  }
  v82[1] = 1;
  if ( !*((_QWORD *)v20 + 396) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7294;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      7294LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_QWORD *)(v4 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7295;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      7295LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_DWORD)v17 && *((_DWORD *)v5 + 152) != 1 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    LODWORD(v17) = -1073741130;
    goto LABEL_56;
  }
  v68 = 0;
  v67 = 0;
  v69 = 0;
  v70 = 0;
  if ( !*(_QWORD *)(v4 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10648;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10648LL, 0LL, 0LL, 0LL, 0LL);
  }
  v23 = *(_QWORD *)(v4 + 3160);
  if ( !v23 )
    goto LABEL_52;
  if ( v6 >= *(_DWORD *)(v23 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6468;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6468LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v26 = *(_QWORD *)(v23 + 128);
  v71 = (struct DXGADAPTER *)(4024LL * v6);
  if ( !*((_BYTE *)v71 + v26 + 760) )
  {
LABEL_52:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    if ( !v5 )
    {
LABEL_55:
      LODWORD(v17) = -1071775738;
      goto LABEL_56;
    }
LABEL_53:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    goto LABEL_55;
  }
  if ( !*(_QWORD *)(v4 + 3168) )
  {
    v42 = DXGADAPTER::NumberOfVSyncWaiter(v20, v6);
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v44, v43, v73, v42, &v67);
    ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v4 + 3160), v6);
    goto LABEL_84;
  }
  if ( (struct DXGADAPTER *)v4 != v20 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7317;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter == pRenderAdapter",
      7317LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v27 = (_DWORD *)((char *)v20 + 3016);
  v28 = -(*((_DWORD *)v20 + 754) & 0x10);
  v29 = (*((_DWORD *)v20 + 754) & 0x10) != 0 ? v6 : 0;
  if ( (unsigned int)v29 < 0x10 )
  {
    v30 = _InterlockedIncrement((volatile signed __int32 *)v20 + v29 + 798);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      v65 = v30;
      Timeout = v28 != 0 ? v6 : 0;
      McTemplateK0pqq_EtwWriteTransfer(v29, (__int64)&VSyncWaiterChange);
    }
  }
  v31 = *((_QWORD *)v20 + 396);
  v68 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v31 + 736) + 8LL) + 568LL))(
          *(_QWORD *)(v31 + 744),
          v6) )
  {
    if ( !v5 )
    {
      if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter(
                  *(_QWORD *)(*((_QWORD *)v20 + 396) + 736LL),
                  *(_QWORD *)(*((_QWORD *)v20 + 396) + 744LL),
                  1LL,
                  1,
                  v6) < 0 )
      {
        DXGADAPTER::DecrementVSyncWaiter(v20, v6);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
        LODWORD(v17) = -1071775738;
        goto LABEL_170;
      }
      v69 = 1;
      goto LABEL_71;
    }
    LOBYTE(v32) = 1;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int, signed __int32))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 396) + 736LL) + 8LL)
                                                                                              + 584LL))(
           *((_QWORD *)v5 + 100),
           0LL,
           v32,
           v6,
           Timeout,
           v65) >= 0 )
    {
      v70 = 1;
      goto LABEL_71;
    }
    v50 = (*v27 & 0x10) != 0 ? v6 : 0;
    if ( (unsigned int)v50 < 0x10 )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)v20 + v50 + 798) < 0 )
      {
        WdLogSingleEntry5(0LL, 275LL, 37LL, v20, *((unsigned int *)v20 + v50 + 798), 0LL);
        WdLogGlobalForLineNumber = 2783;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0pqq_EtwWriteTransfer(v49, (__int64)&VSyncWaiterChange);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    goto LABEL_53;
  }
LABEL_71:
  v33 = *((_QWORD *)v20 + 396);
  v34 = *((_QWORD *)v11 + 8);
  v35 = *(_QWORD *)(v33 + 736);
  if ( v34 && *(_QWORD *)(v34 + 8LL * (unsigned int)(*(_DWORD *)v35 - 1) + 16) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v35 + 8) + 1088LL))(*(_QWORD *)(v33 + 744));
  v36 = *(ADAPTER_DISPLAY **)(v4 + 3160);
  v37 = (*v27 & 0x10) != 0 ? v6 : 0;
  if ( (unsigned int)v37 >= 0x10 )
    v74 = 0;
  else
    v74 = *((_DWORD *)v20 + v37 + 798);
  v38 = *((_QWORD *)v36 + 16);
  v39 = DXGPROCESS::GetCurrent();
  v67 = 1;
  if ( *(_QWORD *)((char *)v71 + v38 + 912) && ((*((_DWORD *)v39 + 102) & 4) != 0 || g_OSTestSigningEnabled) )
  {
    if ( *((_QWORD *)v36 + 58) )
    {
      v53 = v73;
      *(_DWORD *)((char *)v71 + v38 + 920) = v73;
      BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v36 + 58) + 8LL) + 3040LL * v6), v53);
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v66 = *((_BYTE *)v71 + v38 + 928);
        v52 = *(_DWORD *)((char *)v71 + v38 + 924);
        v41 = v73;
        McTemplateK0qqqqq_EtwWriteTransfer(v74, &EventDWMVsyncCountWait, v40, v73, v52, v66, v74, 4);
      }
      else
      {
        v41 = v73;
      }
      ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v36, v6, v41, &v67);
    }
  }
LABEL_84:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v82);
  if ( v67 )
  {
    if ( v68 )
    {
      v51 = (*((_DWORD *)v20 + 754) & 0x10) != 0 ? v6 : 0;
      if ( (unsigned int)v51 < 0x10 )
      {
        if ( _InterlockedDecrement((volatile signed __int32 *)v20 + v51 + 798) < 0 )
        {
          WdLogSingleEntry5(0LL, 275LL, 37LL, v20, *((unsigned int *)v20 + v51 + 798), 0LL);
          WdLogGlobalForLineNumber = 2783;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          McTemplateK0pqq_EtwWriteTransfer(v45, (__int64)&VSyncWaiterChange);
      }
    }
  }
  if ( v69 )
  {
    LODWORD(v17) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v82, 0LL);
    if ( (int)v17 >= 0 )
    {
      v63 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(
              *(_QWORD *)(*((_QWORD *)v20 + 396) + 736LL),
              *(_QWORD *)(*((_QWORD *)v20 + 396) + 744LL),
              1LL,
              0,
              v6);
LABEL_194:
      v18 = v63;
      goto LABEL_87;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
    if ( v5 )
    {
      v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_126:
      if ( v47 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
      goto LABEL_56;
    }
    goto LABEL_56;
  }
  if ( v70 )
  {
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v82, 0LL);
    if ( v18 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
      LODWORD(v17) = v18;
      goto LABEL_170;
    }
    if ( *((_DWORD *)v5 + 152) == 1 )
    {
      v63 = VIDSCH_EXPORT::VidSchControlVSyncDevice(
              *(_QWORD *)(*((_QWORD *)v20 + 396) + 736LL),
              *((_QWORD *)v5 + 100),
              0LL,
              0,
              v6);
      goto LABEL_194;
    }
  }
LABEL_87:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
  return (unsigned int)v18;
}
