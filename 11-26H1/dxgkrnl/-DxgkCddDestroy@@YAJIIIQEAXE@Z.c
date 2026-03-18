/*
 * XREFs of ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x14030AB20
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x140204E94 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShutdownBootGraphics @ 0x14030C080 (DxgkShutdownBootGraphics.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7B58 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r15
  unsigned int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // r14
  unsigned int v19; // esi
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r15
  struct DXGDEVICE *v26; // rbx
  __int64 v27; // r9
  const char *v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r9
  const char *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // edx
  __int64 v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // r9
  const char *v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r9
  const char *v41; // rdx
  __int64 v42[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  char v45; // [rsp+70h] [rbp-90h]
  unsigned int v46; // [rsp+78h] [rbp-88h]
  _BYTE v47[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v48[160]; // [rsp+A0h] [rbp-60h] BYREF

  v42[0] = a4;
  v6 = a3;
  v46 = a2;
  v7 = (unsigned int)a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 3001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 3001);
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 336;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_40:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    v21 = v45 == 0;
LABEL_27:
    if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v8);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 342;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pProcess", 342LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v10 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)Current + 74)
    && (v11 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v10 + 8),
        (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v10 + 8) & 0x60))
    && (v11 & 0x2000) == 0
    && (v11 & 0x1F) != 0 )
  {
    v12 = *((_QWORD *)Current + 35);
    if ( (*(_BYTE *)(v12 + 16LL * v10 + 8) & 0x1F) == 3 )
    {
      v13 = *(_QWORD *)(v12 + 16LL * v10);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v13 = 0LL;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v13 = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v7, Current);
    WdLogGlobalForLineNumber = 348;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v7,
      (__int64)Current,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    v21 = v45 == 0;
    goto LABEL_27;
  }
  DxgkShutdownBootGraphics((struct DXGDEVICE *)v13, 0);
  if ( a5 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v42[0] + 412), (struct DXGDEVICE *)v13);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v14 = v46;
  v15 = (v46 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *((_DWORD *)Current + 74)
    && (v16 = *((_QWORD *)Current + 35),
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
        ((v46 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) != 0 )
  {
    if ( (*(_BYTE *)(v16 + 16 * (((unsigned __int64)v46 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 7 )
    {
      v18 = *(_QWORD *)(v16 + 16 * (((unsigned __int64)v46 >> 6) & 0xFFFFFF));
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v18 = 0LL;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v14 = v46;
    }
  }
  else
  {
    v18 = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  v19 = v14;
  v42[0] = v14;
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v19, Current);
    WdLogGlobalForLineNumber = 375;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hContext=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v42[0],
      (__int64)Current,
      0LL,
      0LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    v21 = v45 == 0;
    goto LABEL_27;
  }
  if ( (_DWORD)v6 )
  {
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v32 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 < *((_DWORD *)Current + 74)
      && (v33 = *((_QWORD *)Current + 35),
          v34 = *(_DWORD *)(v33 + 16 * v32 + 8),
          (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60))
      && (v34 & 0x2000) == 0
      && (v34 & 0x1F) != 0 )
    {
      if ( (*(_BYTE *)(v33 + 16 * (((unsigned __int64)(unsigned int)v6 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xF )
      {
        v35 = *(_QWORD *)(v33 + 16 * (((unsigned __int64)(unsigned int)v6 >> 6) & 0xFFFFFF));
      }
      else
      {
        WdLogSingleEntry0(2LL);
        v35 = 0LL;
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v35 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)Current + 66);
    ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v35 )
    {
      v24 = _InterlockedDecrement64((volatile signed __int64 *)(v35 + 112));
      if ( v24 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 151;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 151LL, 0LL, 0LL, 0LL, 0LL);
      }
      else if ( !v24 )
      {
        v25 = *(_QWORD *)(v35 + 16);
        v26 = *(struct DXGDEVICE **)(v25 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42, v26);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v47,
          *(struct DXGADAPTER **)(*((_QWORD *)v26 + 2) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v26, 2, v27, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v48, v28);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v25, (struct DXGHWQUEUE *)v35, (struct COREDEVICEACCESS *)v48);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v29 = *(_QWORD *)(v25 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v42,
            (struct DXGDEVICE *)v29);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v47,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, v29, 2, v30, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v48, v31);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v29, (struct DXGCONTEXT *)v25, (struct COREDEVICEACCESS *)v48);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v29 + 16), (struct DXGDEVICE *)v29);
        }
      }
      goto LABEL_32;
    }
    WdLogSingleEntry3(2LL, -1073741811LL, v6, Current);
    WdLogGlobalForLineNumber = 390;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hHwQueue=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v6,
      (__int64)Current,
      0LL,
      0LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v36 = *(_QWORD *)(v18 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v42,
        (struct DXGDEVICE *)v36);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v47,
        *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, v36, 2, v37, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v48, v38);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v36, (struct DXGCONTEXT *)v18, (struct COREDEVICEACCESS *)v48);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v36 + 16), (struct DXGDEVICE *)v36);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
    goto LABEL_40;
  }
LABEL_32:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v39 = *(_QWORD *)(v18 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v42,
      (struct DXGDEVICE *)v39);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v47,
      *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, v39, 2, v40, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v48, v41);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v39, (struct DXGCONTEXT *)v18, (struct COREDEVICEACCESS *)v48);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v39 + 16), (struct DXGDEVICE *)v39);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
  return 0LL;
}
