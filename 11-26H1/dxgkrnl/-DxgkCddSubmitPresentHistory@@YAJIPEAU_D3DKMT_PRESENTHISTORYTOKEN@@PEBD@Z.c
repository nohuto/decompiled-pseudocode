/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEBD@Z @ 0x140332B20
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, char *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rdi
  volatile signed __int32 *v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // ecx
  signed __int64 v13; // rcx
  struct DXGPROCESS *v14; // r15
  unsigned int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rsi
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  volatile signed __int32 *v20; // rcx
  __int64 v21; // rsi
  struct _KEVENT *v22; // rbx
  DXGADAPTER *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char *v27; // r14
  int v28; // eax
  unsigned int v29; // ebx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  char *v32; // rcx
  DXGPUSHLOCK *v33; // rcx
  __int64 v34; // rcx
  bool v35; // zf
  __int64 CurrentProcess; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  volatile signed __int32 *v40; // rcx
  DXGPUSHLOCK *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h]
  char v50; // [rsp+70h] [rbp-90h]
  struct DXGPROCESS *v51; // [rsp+78h] [rbp-88h] BYREF
  char v52; // [rsp+80h] [rbp-80h]
  unsigned __int64 v53; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v54; // [rsp+90h] [rbp-70h]
  char v55; // [rsp+98h] [rbp-68h]
  char v56[8]; // [rsp+A0h] [rbp-60h] BYREF
  DXGPUSHLOCK *v57; // [rsp+A8h] [rbp-58h]
  int v58; // [rsp+B0h] [rbp-50h]
  char v59[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v60; // [rsp+C0h] [rbp-40h]
  int v61; // [rsp+C8h] [rbp-38h]
  char *v62; // [rsp+D0h] [rbp-30h]
  union _LARGE_INTEGER v63; // [rsp+D8h] [rbp-28h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v64; // [rsp+E0h] [rbp-20h]
  char v65[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v66[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  char v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  char v71[8]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  char v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  char v77; // [rsp+180h] [rbp+80h]

  v62 = a3;
  v64 = a2;
  v3 = (unsigned int)a1;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 3036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v48, 3036);
  Current = DXGPROCESS::GetCurrent(v4);
  v51 = Current;
  v7 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    v29 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3089;
    v39 = PsGetCurrentProcess(v38);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v39,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    v35 = v50 == 0;
    goto LABEL_49;
  }
  v8 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v9 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( v9 >= *((_DWORD *)v7 + 74) )
  {
    v11 = (unsigned int)v3 >> 30;
  }
  else
  {
    v10 = *((_QWORD *)v7 + 35);
    v11 = (unsigned int)v3 >> 30;
    v12 = *(_DWORD *)(v10 + 16LL * v9 + 8);
    if ( (unsigned int)v3 >> 30 == ((v12 >> 5) & 3)
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) != 0
      && (*(_BYTE *)(v10 + 16 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  _InterlockedDecrement(v8 + 4);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  v60 = v8;
  v61 = 0;
  if ( v8 && *((struct _KTHREAD **)v8 + 1) == KeGetCurrentThread() )
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
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v59);
  v14 = v51;
  if ( v9 < *((_DWORD *)v51 + 74) )
  {
    v13 = *((_QWORD *)v51 + 35);
    v15 = *(_DWORD *)(v13 + 16LL * (((unsigned int)v3 >> 6) & 0xFFFFFF) + 8);
    if ( v11 == ((v15 >> 5) & 3) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
    {
      if ( (*(_BYTE *)(v13 + 16LL * (((unsigned int)v3 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 7 )
      {
        v16 = *(_QWORD *)(v13 + 16LL * (((unsigned int)v3 >> 6) & 0xFFFFFF));
        goto LABEL_21;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v16 = 0LL;
LABEL_21:
  v51 = (struct DXGPROCESS *)v16;
  v17 = v3;
  v52 = 0;
  if ( v16 )
  {
    _m_prefetchw((const void *)(v16 + 32));
    v18 = *(_QWORD *)(v16 + 32);
    while ( v18 )
    {
      v13 = v18 + 1;
      v19 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 32), v18 + 1, v18);
      if ( v19 == v18 )
        goto LABEL_27;
    }
    v16 = 0LL;
    v51 = 0LL;
  }
LABEL_27:
  if ( v61 == 1 )
  {
    v20 = v60;
    v61 = 0;
    _InterlockedDecrement(v60 + 4);
    ExReleasePushLockSharedEx(v20, 0LL);
LABEL_29:
    KeLeaveCriticalRegion();
    goto LABEL_30;
  }
  if ( v61 == 2 )
  {
    v40 = v60;
    v61 = 0;
    *((_QWORD *)v60 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v40, 0LL);
    goto LABEL_29;
  }
LABEL_30:
  if ( !v16 )
  {
    v42 = PsGetCurrentProcess(v13);
    v29 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v42, v17);
    WdLogGlobalForLineNumber = 3102;
    v44 = PsGetCurrentProcess(v43);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v44,
      v17,
      0LL,
      0LL);
    goto LABEL_48;
  }
  v21 = *(_QWORD *)(v16 + 16);
  v22 = *(struct _KEVENT **)(v21 + 16);
  if ( !KeReadStateEvent(v22 + 5) )
    KeWaitForSingleObject(&v22[5], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, (__int64)"g");
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
  }
  v57 = (DXGPUSHLOCK *)(v16 + 440);
  if ( v16 != -440 && *(struct _KTHREAD **)(v16 + 448) == KeGetCurrentThread() )
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
  DXGPUSHLOCK::AcquireExclusive(v57);
  v58 = 2;
  v54 = *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v54 + 3);
  v23 = v54;
  v53 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v23 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v23 + 38);
  v55 = 1;
  v24 = *(_QWORD *)(v16 + 16);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
  v68 = v25;
  v69 = 0;
  v70 = 0LL;
  if ( v25 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v25 + 24));
    v67 = -1LL;
  }
  v26 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
  v73 = v26;
  v74 = 0;
  v75 = 0LL;
  if ( v26 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v26 + 24));
    v72 = -1LL;
  }
  v27 = v62;
  v76 = v24;
  v77 = 0;
  v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, v62);
  v29 = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry3(4LL, v28, v16, v14);
    WdLogGlobalForLineNumber = 3117;
    COREACCESS::~COREACCESS((COREACCESS *)v71, v45);
    COREACCESS::~COREACCESS((COREACCESS *)v66, v46);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v53);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v56);
    goto LABEL_47;
  }
  v63.QuadPart = -100000LL;
  v29 = SubmitPresentHistoryToken(
          v64,
          (struct COREDEVICEACCESS *)v65,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v53,
          0LL,
          0,
          &v63,
          0LL,
          0LL,
          (struct DXGCONTEXT *)v16,
          0LL,
          v27);
  COREACCESS::~COREACCESS((COREACCESS *)v71, v30);
  COREACCESS::~COREACCESS((COREACCESS *)v66, v31);
  if ( v55 )
  {
    v32 = (char *)v54 + 136;
    v55 = 0;
    _InterlockedAdd((volatile signed __int32 *)v54 + 38, 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v32, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(v54);
  }
  if ( v58 == 1 )
  {
    v33 = v57;
    v58 = 0;
    _InterlockedAdd((volatile signed __int32 *)v57 + 4, 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v33, 0LL);
  }
  else
  {
    if ( v58 != 2 )
      goto LABEL_47;
    v41 = v57;
    v58 = 0;
    *((_QWORD *)v57 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v41, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_47:
  ExReleaseResourceLite(*(PERESOURCE *)(v21 + 136));
  KeLeaveCriticalRegion();
LABEL_48:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v51);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
  v35 = v50 == 0;
LABEL_49:
  if ( !v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
  return v29;
}
