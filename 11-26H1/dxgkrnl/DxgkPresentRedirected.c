/*
 * XREFs of DxgkPresentRedirected @ 0x140330FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1400111D0 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x140033350 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x14005C010 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x140332AC8 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 */

__int64 __fastcall DxgkPresentRedirected(__int64 Src)
{
  __int64 v1; // r15
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v4; // ebx
  struct DXGDEVICE *v5; // rsi
  __int64 v6; // r13
  struct DXGGLOBAL *Global; // rax
  char *v8; // r12
  unsigned int v9; // ebx
  DXGPUSHLOCK *v10; // rcx
  int v11; // edx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // r9
  int v17; // ebx
  struct VIDSCH_SUBMIT_DATA_BASE *v18; // rcx
  ADAPTER_RENDER **v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  ADAPTER_RENDER **v24; // rcx
  int v25; // edx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rbx
  struct DXGDEVICE *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  ADAPTER_RENDER **v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 CurrentProcess; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  const wchar_t *v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct DXGDEVICE *v45; // [rsp+60h] [rbp-5F8h] BYREF
  int v46; // [rsp+68h] [rbp-5F0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-5E8h]
  __int64 v48; // [rsp+78h] [rbp-5E0h]
  int *v49; // [rsp+80h] [rbp-5D8h]
  char v50; // [rsp+88h] [rbp-5D0h]
  int v51; // [rsp+90h] [rbp-5C8h] BYREF
  unsigned int v52; // [rsp+94h] [rbp-5C4h]
  struct DXGDEVICE *v53; // [rsp+98h] [rbp-5C0h] BYREF
  _BYTE v54[8]; // [rsp+A0h] [rbp-5B8h] BYREF
  char v55; // [rsp+A8h] [rbp-5B0h]
  _BYTE v56[8]; // [rsp+B0h] [rbp-5A8h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-5A0h]
  char v58; // [rsp+C0h] [rbp-598h]
  __int64 v59; // [rsp+C8h] [rbp-590h]
  struct VIDSCH_SUBMIT_DATA_BASE *v60[2]; // [rsp+D0h] [rbp-588h] BYREF
  int v61; // [rsp+E0h] [rbp-578h] BYREF
  _DWORD *v62; // [rsp+E8h] [rbp-570h]
  _BYTE *v63; // [rsp+F0h] [rbp-568h]
  _BYTE *v64; // [rsp+F8h] [rbp-560h]
  __int64 v65; // [rsp+100h] [rbp-558h] BYREF
  unsigned int v66; // [rsp+108h] [rbp-550h]
  int v67; // [rsp+10Ch] [rbp-54Ch]
  __int64 v68; // [rsp+110h] [rbp-548h]
  struct DXGDEVICE *v69; // [rsp+118h] [rbp-540h]
  _BYTE v70[160]; // [rsp+120h] [rbp-538h] BYREF
  _BYTE v71[1120]; // [rsp+1C0h] [rbp-498h] BYREF

  v1 = Src;
  v51 = -1073741823;
  Current = DXGPROCESS::GetCurrent(Src);
  v45 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1073;
    v40 = PsGetCurrentProcess(v39);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v40,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  memset(v71, 0, sizeof(v71));
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    RtlCopyFromUser(v71, (void *)v1, 0x460uLL);
    v1 = (__int64)v71;
  }
  v59 = v1;
  v47 = 0LL;
  v46 = 2147;
  v49 = &v51;
  v50 = 1;
  v48 = v1 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v1 & -(__int64)(bTracingEnabled != 0), (__int64)&EventProfilerEnter);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v46, 2147);
  if ( *(_DWORD *)(v1 + 16) != 9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1105;
    v41 = L"Invalid PresentHistoryToken Mode, returning 0x%I64x";
LABEL_96:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v41, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_67;
  }
  if ( *(_DWORD *)(v1 + 1096) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1112;
    v41 = L"Reserved bits should not be set, returning 0x%I64x";
    goto LABEL_96;
  }
  v4 = *(_DWORD *)v1;
  v52 = *(_DWORD *)v1;
  v45 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v53,
    *(_DWORD *)(v1 + 4),
    (struct _KTHREAD **)Current,
    &v45);
  v5 = v45;
  if ( !v45 )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)(v1 + 4), -1073741811LL);
    WdLogGlobalForLineNumber = 1129;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)(v1 + 4),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v31 = v53;
    if ( !v53 )
      goto LABEL_67;
    goto LABEL_65;
  }
  v6 = *(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL);
  if ( (*(_DWORD *)(v6 + 3016) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1137;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter device 0x%I64x",
      *(unsigned int *)(v1 + 4),
      0LL,
      0LL,
      0LL,
      0LL);
    v35 = (ADAPTER_RENDER **)v53;
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v35[2], (struct DXGDEVICE *)v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( v50 )
    {
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v36,
          v37,
          *(_DWORD *)v48,
          *(_DWORD *)(v48 + 56),
          *(_QWORD *)(v48 + 80),
          *(_QWORD *)(v48 + 88),
          *(_DWORD *)(v48 + 1096),
          *v49);
    }
    else if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
    }
    if ( (qword_1401664C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_84:
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v54, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v54);
  v8 = (char *)Current + 248;
  v9 = (v4 >> 6) & 0xFFFFFF;
  v10 = (struct DXGPROCESS *)((char *)Current + 248);
  if ( *(int *)(v6 + 3044) >= 2000 )
  {
    DXGPUSHLOCK::AcquireShared(v10);
    if ( v9 < *((_DWORD *)Current + 74)
      && (v11 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8),
          ((v52 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8) & 0x60))
      && (v11 & 0x2000) == 0
      && (v11 & 0x1F) != 0 )
    {
      v13 = 2LL * v9;
      v14 = *((_QWORD *)Current + 35);
      if ( (*(_BYTE *)(v14 + 8 * v13 + 8) & 0x1F) == 0xB )
      {
        v15 = *(_QWORD *)(v14 + 8 * v13);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        v15 = 0LL;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v15 = 0LL;
    }
    _InterlockedAdd((volatile signed __int32 *)Current + 66, 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v8, 0LL);
    KeLeaveCriticalRegion();
    if ( v15 )
      goto LABEL_21;
    v30 = v52;
    WdLogSingleEntry2(2LL, v52, -1073741811LL);
    WdLogGlobalForLineNumber = 1156;
LABEL_62:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hSyncObj (0x%I64x) specified, returning 0x%I64x",
      v30,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v55 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v54);
    v31 = v53;
    if ( !v53 )
    {
LABEL_67:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
      if ( v50 )
      {
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v32,
            v34,
            *(_DWORD *)v48,
            *(_DWORD *)(v48 + 56),
            *(_QWORD *)(v48 + 80),
            *(_QWORD *)(v48 + 88),
            *(_DWORD *)(v48 + 1096),
            *v49);
      }
      else if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
      }
      if ( (qword_1401664C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return 3221225485LL;
      goto LABEL_84;
    }
LABEL_65:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    goto LABEL_67;
  }
  DXGPUSHLOCK::AcquireShared(v10);
  if ( v9 < *((_DWORD *)Current + 74)
    && (v25 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8),
        ((v52 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8) & 0x60))
    && (v25 & 0x2000) == 0
    && (v25 & 0x1F) != 0 )
  {
    v27 = 2LL * v9;
    v28 = *((_QWORD *)Current + 35);
    if ( (*(_BYTE *)(v28 + 8 * v27 + 8) & 0x1F) == 8 )
    {
      v29 = *(_QWORD *)(v28 + 8 * v27);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      v29 = 0LL;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v29 = 0LL;
  }
  _InterlockedAdd((volatile signed __int32 *)Current + 66, 0xFFFFFFFF);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( !v29 )
  {
    v30 = v52;
    WdLogSingleEntry2(2LL, v52, -1073741811LL);
    WdLogGlobalForLineNumber = 1166;
    goto LABEL_62;
  }
LABEL_21:
  _InterlockedIncrement64((volatile signed __int64 *)v5 + 8);
  v45 = v5;
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v54);
  v57 = v6;
  v58 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
  if ( *(_DWORD *)(v6 + 200) != 1 )
  {
    v17 = -1073741823;
    WdLogSingleEntry2(2LL, v6, -1073741823LL);
    WdLogGlobalForLineNumber = 1186;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGADAPTER: 0x%I64x stopped, returning 0x%I64x",
      v6,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
LABEL_44:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    if ( v55 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v54);
    v24 = (ADAPTER_RENDER **)v53;
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v24[2], (struct DXGDEVICE *)v24);
    goto LABEL_35;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, (__int64)v5, 2, v16, 0);
  v51 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v70, 0LL);
  if ( v51 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1194;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire CoreDeviceAccess, returning 0x%I64x",
      v51,
      0LL,
      0LL,
      0LL,
      0LL);
    v17 = v51;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    goto LABEL_44;
  }
  v17 = SubmitPresentHistoryTokenPreparation(
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v56,
          (struct COREDEVICEACCESS *)v70,
          (struct DXGADAPTER *)v6,
          (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v1 + 16),
          0LL,
          0);
  v51 = v17;
  if ( v17 < 0 )
  {
LABEL_28:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    if ( v55 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v54);
    v19 = (ADAPTER_RENDER **)v53;
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v19[2], (struct DXGDEVICE *)v19);
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( v50 )
    {
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v20,
          v22,
          *(_DWORD *)v48,
          *(_DWORD *)(v48 + 56),
          *(_QWORD *)(v48 + 80),
          *(_QWORD *)(v48 + 88),
          *(_DWORD *)(v48 + 1096),
          *v49);
    }
    else if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
    }
    if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    return (unsigned int)v17;
  }
  v61 = -1073741823;
  v62 = (_DWORD *)(v1 + 16);
  v63 = v56;
  v64 = v70;
  if ( v1 == -16 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 122;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pToken", 122LL, 0LL, 0LL, 0LL, 0LL);
  }
  CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v60, *(struct ADAPTER_RENDER **)(v6 + 3168), 1);
  v18 = v60[0];
  if ( v60[0] )
  {
    *(_DWORD *)v60[0] = *(_DWORD *)v60[0] & 0xFFFCFEDF | 0x10120;
    *((_QWORD *)v18 + 59) = *(_QWORD *)(v1 + 8);
    v67 = 0;
    v65 = v1;
    v66 = v52;
    v68 = v6;
    v69 = v5;
    v17 = SubmitPresentHistoryToken(
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v1 + 16),
            (struct COREDEVICEACCESS *)v70,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v56,
            0LL,
            1,
            0LL,
            0LL,
            v18,
            0LL,
            (struct _PRESENT_REDIRECTED_PARAMS *)&v65,
            0LL);
    v51 = v17;
    v61 = v17;
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v60);
    TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v61);
    goto LABEL_28;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1218;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate VidSchSubmitData",
    1218LL,
    0LL,
    0LL,
    0LL,
    0LL);
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v60);
  TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v61);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v45);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v54);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v53);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( v50 )
  {
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v42,
        v44,
        *(_DWORD *)v48,
        *(_DWORD *)(v48 + 56),
        *(_QWORD *)(v48 + 80),
        *(_QWORD *)(v48 + 88),
        *(_DWORD *)(v48 + 1096),
        *v49);
  }
  else if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
  }
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v43, (__int64)&EventProfilerExit);
  return 3221225495LL;
}
