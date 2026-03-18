/*
 * XREFs of ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1403AEB20
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
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
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7B58 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1403B01CC (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        void *const a2,
        const struct _DXGKWIN32KENG_INTERFACE *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct _CDDDXGK_DRIVERINFO *a7,
        struct _CDDDXGK_DRIVERINFO *a8,
        struct _LUID *a9,
        struct _OBJECT_TYPE **a10)
{
  __int64 v13; // rcx
  struct DXGPROCESS *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 CurrentProcess; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  const wchar_t *v23; // r9
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v25; // r12
  __int64 v26; // rcx
  bool v27; // zf
  struct DXGDEVICE *v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rbx
  struct DXGHWQUEUE *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r15
  struct DXGDEVICE *v34; // rbx
  __int64 v35; // r9
  const char *v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // r9
  const char *v39; // rdx
  struct DXGCONTEXT *v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // r9
  const char *v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h]
  char v50; // [rsp+60h] [rbp-A0h]
  _QWORD v51[2]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGCONTEXT *v52; // [rsp+78h] [rbp-88h] BYREF
  struct DXGHWQUEUE *v53; // [rsp+80h] [rbp-80h] BYREF
  struct DXGPROCESS *Current; // [rsp+88h] [rbp-78h] BYREF
  struct DXGDEVICE *v55; // [rsp+90h] [rbp-70h] BYREF
  void *v56; // [rsp+98h] [rbp-68h]
  struct _LUID *v57; // [rsp+A0h] [rbp-60h]
  unsigned int *v58; // [rsp+A8h] [rbp-58h]
  unsigned int *v59; // [rsp+B0h] [rbp-50h]
  _BYTE v60[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v61[160]; // [rsp+D0h] [rbp-30h] BYREF

  v59 = a6;
  v51[0] = a10;
  v56 = a2;
  v58 = a5;
  v57 = a9;
  v55 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 3000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(0LL, (__int64)&EventProfilerEnter);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v48, 3000);
  if ( !a4 || !a5 || !a7 || !a8 || !a9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 164;
    v23 = L"Invalid paramters, returning 0x%I64x.";
LABEL_62:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  *a4 = 0;
  *(_OWORD *)a7 = 0LL;
  *((_QWORD *)a7 + 2) = 0LL;
  *(_OWORD *)a8 = 0LL;
  *((_QWORD *)a8 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent(v13);
  v14 = Current;
  if ( !Current )
  {
    v15 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL, 0, 0LL);
    v17 = v15;
    if ( v15 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v16);
      WdLogSingleEntry3(2LL, v17, a1, CurrentProcess);
      WdLogGlobalForLineNumber = 203;
      v20 = PsGetCurrentProcess(v19);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x DXGPROCESS::CreateDxgProcess() failed 0x%I64x 0x%I64x",
        v17,
        (__int64)a1,
        v20,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
      if ( v50 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
      }
      return (unsigned int)v17;
    }
    v14 = Current;
  }
  DXGPROCESS::SetWin32kInterface(v14, a3);
  *((_DWORD *)v14 + 102) |= 1u;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    v23 = L"No pAdapter specified, returning 0x%I64x";
    WdLogGlobalForLineNumber = 219;
    goto LABEL_62;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(a1 + 412),
                                           &v55,
                                           &v52,
                                           &v53,
                                           0);
  v25 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get CDD device and context for current session (Status = 0x%I64x).",
      v25,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    v27 = v50 == 0;
LABEL_21:
    if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
    return (unsigned int)v25;
  }
  v28 = v55;
  v29 = *(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL);
  if ( !*(_QWORD *)(v29 + 3168) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 239;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      239LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v30 = *((_QWORD *)v28 + 237);
  if ( v30 && !*(_QWORD *)(v30 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 241;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
      241LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v56 == (void *)v29 )
  {
    *(_DWORD *)a8 = *(_DWORD *)(v29 + 420);
    *((_DWORD *)a8 + 1) = *(_DWORD *)(v29 + 424);
    *((_DWORD *)a8 + 2) = *(_DWORD *)(v29 + 428);
    *((_DWORD *)a8 + 3) = *(_DWORD *)(v29 + 432);
    *((_DWORD *)a8 + 4) = *(_DWORD *)(v29 + 436);
    *((_DWORD *)a8 + 5) = *(_DWORD *)(v29 + 3044);
    if ( v30 )
    {
      *(_DWORD *)a7 = *(_DWORD *)(v30 + 420);
      *((_DWORD *)a7 + 1) = *(_DWORD *)(v30 + 424);
      *((_DWORD *)a7 + 2) = *(_DWORD *)(v30 + 428);
      *((_DWORD *)a7 + 3) = *(_DWORD *)(v30 + 432);
      *((_DWORD *)a7 + 4) = *(_DWORD *)(v30 + 436);
      *((_DWORD *)a7 + 5) = *(_DWORD *)(v30 + 3044);
      if ( (*(_DWORD *)(v30 + 444) & 0x100) == 0 )
        v29 = v30;
    }
    else
    {
      *(_OWORD *)a7 = *(_OWORD *)a8;
      *((_QWORD *)a7 + 2) = *((_QWORD *)a8 + 2);
    }
    *v57 = *(struct _LUID *)(v29 + 412);
    *a4 = *((_DWORD *)v28 + 117);
    *v58 = *((_DWORD *)v52 + 6);
    v46 = (unsigned int)v53;
    if ( v53 )
      v46 = *((_DWORD *)v53 + 6);
    *v59 = v46;
    *(_QWORD *)v51[0] = g_pDxgkSharedAllocationObjectType;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    v27 = v50 == 0;
    goto LABEL_21;
  }
  v31 = v53;
  if ( v53 )
  {
    v32 = _InterlockedDecrement64((volatile signed __int64 *)v53 + 14);
    if ( v32 >= 0 )
    {
      if ( !v32 )
      {
        v33 = *((_QWORD *)v31 + 2);
        v34 = *(struct DXGDEVICE **)(v33 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51, v34);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v60,
          *(struct DXGADAPTER **)(*((_QWORD *)v34 + 2) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v34, 2, v35, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v61, v36);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v33, v31, (struct COREDEVICEACCESS *)v61);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v37 = *(_QWORD *)(v33 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v51,
            (struct DXGDEVICE *)v37);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v60,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, v37, 2, v38, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v61, v39);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v37, (struct DXGCONTEXT ***)v33, (struct COREDEVICEACCESS *)v61);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v37 + 16), (struct DXGDEVICE *)v37);
        }
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 151;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 151LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v40 = v52;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v41 = *((_QWORD *)v40 + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v51,
      (struct DXGDEVICE *)v41);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v60,
      *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v40 + 2) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, v41, 2, v42, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v61, v43);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v41, (struct DXGCONTEXT ***)v40, (struct COREDEVICEACCESS *)v61);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v41 + 16), (struct DXGDEVICE *)v41);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v28 + 2), v28);
  v44 = (__int64)v56;
  WdLogSingleEntry3(2LL, v56, v29, -1073741130LL);
  WdLogGlobalForLineNumber = 260;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Paired Render adapter has been changed from 0x%I64x to 0x%I64x for current session (Status = 0x%I64x).",
    v44,
    v29,
    -1073741130LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
