/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1402C0A40
 * Callers:
 *     ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AC30 (-VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1400422B8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x14018CE88 (-VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYIN.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1402C2A04 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1402C2A24 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1402C30E8 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(unsigned int *a1)
{
  char CurrentThreadPreviousMode; // r12
  unsigned int *v3; // rsi
  struct _KTHREAD **Current; // rbx
  struct DXGPROCESS *Process; // r13
  struct DXGADAPTER *v6; // r14
  int PairingAdapters; // ebx
  struct DXGADAPTER *v8; // r14
  DXGADAPTER *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  int VideoMemoryInfo; // eax
  __int64 v16; // rcx
  __int64 v18; // rcx
  bool v19; // zf
  int v20; // eax
  unsigned int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  int HostProcess; // eax
  int v26; // [rsp+58h] [rbp-180h] BYREF
  __int64 v27; // [rsp+60h] [rbp-178h]
  char v28; // [rsp+68h] [rbp-170h]
  struct DXGADAPTER *v29; // [rsp+70h] [rbp-168h] BYREF
  DXGADAPTER *v30; // [rsp+78h] [rbp-160h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-150h] BYREF
  _OWORD Src[3]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-118h]
  _BYTE v34[8]; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v35[16]; // [rsp+D8h] [rbp-100h] BYREF
  DXGADAPTER *v36; // [rsp+E8h] [rbp-F0h]
  _BYTE v37[16]; // [rsp+118h] [rbp-C0h] BYREF
  DXGADAPTER *v38; // [rsp+128h] [rbp-B0h]
  char v39; // [rsp+130h] [rbp-A8h]
  __int64 v40; // [rsp+138h] [rbp-A0h]
  _BYTE v41[80]; // [rsp+160h] [rbp-78h] BYREF

  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2119;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(qword_1401664C0, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2119);
  memset(Src, 0, sizeof(Src));
  v33 = 0LL;
  v3 = (unsigned int *)Src;
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(Src, a1, 0x30uLL);
  else
    v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 14375;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    v19 = v28 == 0;
LABEL_40:
    if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v41, *(void **)v3, 0x400u);
  Process = (struct DXGPROCESS *)Current;
  if ( !*(_QWORD *)v3 )
  {
LABEL_9:
    v29 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v30, v3[2], Current, &v29, 1);
    v6 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v6, 0, &v29, &v31, 0LL, 0LL, 0);
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 14417;
LABEL_50:
        if ( v30 )
          DXGADAPTER::ReleaseReference(v30);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v41);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
        return (unsigned int)PairingAdapters;
      }
      v8 = v29;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v29, 0LL);
      PairingAdapters = 0;
      if ( v39 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v37, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7648;
      }
      v9 = v38;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v38 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v38 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
          KeWaitForSingleObject((char *)v38 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v38, 0LL);
        v9 = v38;
      }
      v40 = 0LL;
      v39 = 1;
      if ( *((_DWORD *)v9 + 50) == 1 )
      {
        if ( v36 == v38 || (COREACCESS::AcquireShared((COREACCESS *)v35, 0LL), *((_DWORD *)v36 + 50) == 1) )
        {
          v34[1] = 1;
LABEL_19:
          DXGADAPTER::ReleaseReference(v8);
          if ( PairingAdapters < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 14434;
          }
          else
          {
            if ( CurrentThreadPreviousMode == 1
              && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
            {
              v3[12] = RtlReadULongFromUser(a1 + 12);
            }
            if ( *((_BYTE *)v8 + 209) )
            {
              v24 = *((_DWORD *)v8 + 1200);
              HostProcess = DXGPROCESS::GetHostProcess(Process);
              VideoMemoryInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
                                  (struct DXGADAPTER *)((char *)v8 + 4712),
                                  HostProcess,
                                  v24,
                                  (struct _D3DKMT_QUERYVIDEOMEMORYINFO *)v3);
            }
            else
            {
              v11 = *((_QWORD *)v8 + 396);
              v12 = *(_QWORD *)(v11 + 760);
              v13 = *((_QWORD *)Process + 8);
              if ( v13 )
                v14 = *(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)v12 - 1));
              else
                v14 = 0LL;
              VideoMemoryInfo = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, unsigned int *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(v12 + 8) + 1008LL))(
                                  *(_QWORD *)(v11 + 768),
                                  v14,
                                  v3[12],
                                  v3[3],
                                  v3 + 4,
                                  v3 + 6,
                                  v3 + 10,
                                  v3 + 8);
            }
            PairingAdapters = VideoMemoryInfo;
            if ( VideoMemoryInfo >= 0 )
            {
              if ( CurrentThreadPreviousMode == 1 )
                RtlCopyToUser(a1, v3, 0x30uLL);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
              if ( v30 )
                DXGADAPTER::ReleaseReference(v30);
              DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v41);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
              if ( v28 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
              }
              return 0LL;
            }
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 14473;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
          goto LABEL_50;
        }
        COREACCESS::Release((COREACCESS *)v35);
      }
      COREACCESS::Release((COREACCESS *)v37);
      PairingAdapters = -1073741130;
      goto LABEL_19;
    }
    WdLogSingleEntry2(2LL, Current, v3[2]);
    WdLogGlobalForLineNumber = 14406;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v3[2],
      0LL,
      0LL,
      0LL);
    if ( v30 )
      DXGADAPTER::ReleaseReference(v30);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    v19 = v28 == 0;
    goto LABEL_40;
  }
  v20 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v41, 1);
  v21 = v20;
  if ( v20 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v41);
    goto LABEL_9;
  }
  WdLogSingleEntry2(3LL, *(_QWORD *)v3, v20);
  WdLogGlobalForLineNumber = 14393;
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
  return v21;
}
