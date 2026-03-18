/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x140415A90 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0iiiiii_EtwWriteTransfer @ 0x140013C24 (McTemplateK0iiiiii_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x14003D0D0 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x14004B5C4 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x14004D29C (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1400563EC (-VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGN.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14009B4C0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0xqttt_EtwWriteTransfer @ 0x14009B90C (McTemplateK0xqttt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14018F994 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140192B40 (-StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x140195570 (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ @ 0x14028230C (-AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ.c)
 *     ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14028267C (-CleanupWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x140283020 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ @ 0x1402833D4 (-GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14028346C (-HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ @ 0x140283504 (-LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1402837AC (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x140283A74 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140283D74 (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?BltQueueWorkerDecodeEvent@BLTQUEUE@@AEAAX_NJPEAU_BltQueueWaitEvent@1@@Z @ 0x14038F658 (-BltQueueWorkerDecodeEvent@BLTQUEUE@@AEAAX_NJPEAU_BltQueueWaitEvent@1@@Z.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x140446010 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140446230 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?RestartQueueWorker@BLTQUEUE@@AEAAXXZ @ 0x140446740 (-RestartQueueWorker@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  struct _KTHREAD **v2; // r12
  char v3; // r15
  struct _KTHREAD **v4; // r14
  struct _KMUTANT *v5; // rsi
  __int32 v6; // ebx
  struct _KEVENT *v7; // rax
  ULONG v8; // r13d
  __int64 v9; // r8
  _BYTE *v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  ULONG v15; // r13d
  __int64 v16; // r12
  LONGLONG v17; // r15
  LARGE_INTEGER v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r10
  LONGLONG v25; // rdx
  __int64 v26; // r15
  LONGLONG v27; // r14
  LARGE_INTEGER v28; // rax
  LARGE_INTEGER v29; // rdx
  LARGE_INTEGER v30; // rcx
  LARGE_INTEGER v31; // r8
  __int64 v32; // r9
  LARGE_INTEGER v33; // rbx
  __int64 v34; // r10
  LONGLONG v35; // rdx
  NTSTATUS v36; // eax
  BLTQUEUE *v37; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int v39; // ebx
  int v40; // r8d
  int v41; // r8d
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx
  const wchar_t *v46; // r9
  PVOID v47; // rbx
  unsigned __int64 v48; // rsi
  __int64 v49; // rax
  unsigned __int64 v50; // rbx
  struct DXGADAPTER *v51; // r14
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // rdx
  BLTQUEUE *v56; // rcx
  unsigned int v57; // eax
  __int64 v58; // rdx
  unsigned __int64 i; // rbx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  char v66; // bl
  bool v67; // zf
  __int32 v68; // eax
  __int64 Timeout; // [rsp+28h] [rbp-E0h]
  _QWORD v70[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v71; // [rsp+78h] [rbp-90h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp-78h] BYREF
  union _LARGE_INTEGER v73; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v74[48]; // [rsp+A0h] [rbp-68h] BYREF
  struct _KEVENT v75; // [rsp+D0h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v77[144]; // [rsp+108h] [rbp+0h] BYREF
  PVOID Object[12]; // [rsp+198h] [rbp+90h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+1F8h] [rbp+F0h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(&v75, 0, sizeof(v75));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v75, SynchronizationEvent, 0);
  *((_QWORD *)this + 90) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)this + 22, 0, 0);
  v2 = (struct _KTHREAD **)((char *)this + 424);
  v71 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v4 = (struct _KTHREAD **)((char *)this + 2984);
    v5 = (struct _KMUTANT *)((char *)this + 600);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            memset(Object, 0, sizeof(Object));
            if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
            {
              KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
              v6 = _InterlockedExchange((volatile __int32 *)this + 167, 0);
              KeReleaseMutex(v5, 0);
            }
            else
            {
              v6 = _InterlockedExchange((volatile __int32 *)this + 167, 0);
            }
            if ( v6 )
              BLTQUEUE::DisableHwVSyncWorker(this);
            v7 = &v75;
            Object[0] = (char *)this + 552;
            if ( (v71 & 1) != 0 )
              v7 = (struct _KEVENT *)*((_QWORD *)&v71 + 1);
            Object[1] = v7;
            if ( (((unsigned int)v71 >> 1) & 1) != 0 || (v71 & 1) != 0 )
              BLTQUEUE::StartVSync(this, 0LL, (unsigned int)((v71 & 2) == 0) + 1);
            v8 = 2;
            if ( (*((_DWORD *)this + 268) & 2) != 0 )
            {
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v71, v4, 0);
              DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)&v71);
              v9 = 8LL;
              v10 = (_BYTE *)(*((_QWORD *)this + 379) + 56LL);
              v11 = 0LL;
              do
              {
                if ( *((_QWORD *)v10 - 1) && !*v10 && v10[1] == 1 )
                {
                  v12 = v8++;
                  Object[v12] = (PVOID)*((_QWORD *)v10 - 7);
                }
                v10 += 64;
                --v9;
              }
              while ( v9 );
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v71);
              if ( v8 <= 2 )
              {
                LOBYTE(v70[0]) = 1;
                v13 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 16LL))(*((_QWORD *)this + 16));
                v14 = v8;
                v15 = v8 + 1;
                Object[v14] = v13;
                Object[v15] = (PVOID)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
                v8 = v15 + 1;
              }
              else
              {
                LOBYTE(v70[0]) = 0;
              }
              if ( v8 > 0xC )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2423;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"nObjects <= NumWaitBlocks",
                  2423LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline()
                && (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
              {
                DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v70[1], v2, 0);
                DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)&v70[1]);
                DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)&v71);
                PerformanceFrequency.QuadPart = 0LL;
                v16 = 0LL;
                v17 = 0LL;
                v18 = KeQueryPerformanceCounter(&PerformanceFrequency);
                DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v74, (KSPIN_LOCK *)this + 57, 1);
                v19 = *((_QWORD *)this + 62);
                v20 = *((_QWORD *)this + 60);
                if ( v19 > 0 && v20 > 0 && v18.QuadPart > v20 )
                {
                  v16 = v19 + v18.QuadPart - (v18.QuadPart - v20) % v19;
                  v17 = 10000000 * ((v18.QuadPart - v20) % v19 - v19) / PerformanceFrequency.QuadPart;
                }
                DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v74);
                do
                {
                  v24 = *((_QWORD *)this + 379);
                  if ( *(_QWORD *)(v24 + v11 + 48) && !*(_BYTE *)(v24 + v11 + 56) && *(_BYTE *)(v24 + v11 + 57) == 1 )
                  {
                    v25 = 0LL;
                    if ( v17 + *(_QWORD *)(v24 + v11 + 32) <= 0 )
                      v25 = v17 + *(_QWORD *)(v24 + v11 + 32);
                    ExSetTimer(*(_QWORD *)(v24 + v11), v25, 0LL, 0LL);
                  }
                  v11 += 64LL;
                }
                while ( v11 < 0x200 );
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0iiiiii_EtwWriteTransfer(
                    v22,
                    v21,
                    v23,
                    v17,
                    v16,
                    v18.QuadPart,
                    PerformanceFrequency.QuadPart,
                    v20,
                    *((_QWORD *)this + 62));
                (*(void (__fastcall **)(_QWORD, LONGLONG))(**((_QWORD **)this + 16) + 56LL))(
                  *((_QWORD *)this + 16),
                  v17);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v71);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v70[1]);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v70[1]);
                v2 = (struct _KTHREAD **)((char *)this + 424);
              }
              else
              {
                DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v70[1], v2, 0);
                DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)&v70[1]);
                DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)&v71);
                v73.QuadPart = 0LL;
                v26 = 0LL;
                v27 = 0LL;
                v28 = KeQueryPerformanceCounter(&v73);
                v32 = *((_QWORD *)this + 62);
                v33 = v28;
                if ( v32 > 0 )
                {
                  v31 = *(LARGE_INTEGER *)((char *)this + 480);
                  if ( v31.QuadPart > 0 && v28.QuadPart > v31.QuadPart )
                  {
                    v30.QuadPart = v28.QuadPart - v31.QuadPart - (v28.QuadPart - v31.QuadPart) % v32;
                    v26 = v32 + v28.QuadPart - (v28.QuadPart - v31.QuadPart) % v32;
                    v29.QuadPart = 10000000 * ((v28.QuadPart - v31.QuadPart) % v32 - v32) % v73.QuadPart;
                    v27 = 10000000 * ((v28.QuadPart - v31.QuadPart) % v32 - v32) / v73.QuadPart;
                  }
                }
                do
                {
                  v34 = *((_QWORD *)this + 379);
                  if ( *(_QWORD *)(v34 + v11 + 48) && !*(_BYTE *)(v34 + v11 + 56) && *(_BYTE *)(v34 + v11 + 57) == 1 )
                  {
                    v35 = 0LL;
                    if ( v27 + *(_QWORD *)(v34 + v11 + 32) <= 0 )
                      v35 = v27 + *(_QWORD *)(v34 + v11 + 32);
                    ExSetTimer(*(_QWORD *)(v34 + v11), v35, 0LL, 0LL);
                  }
                  v11 += 64LL;
                }
                while ( v11 < 0x200 );
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0iiiiii_EtwWriteTransfer(
                    v30.QuadPart,
                    v29.QuadPart,
                    v31.QuadPart,
                    v27,
                    v26,
                    v33.QuadPart,
                    v73.QuadPart,
                    *((_QWORD *)this + 60),
                    *((_QWORD *)this + 62));
                (*(void (__fastcall **)(_QWORD, LONGLONG))(**((_QWORD **)this + 16) + 56LL))(
                  *((_QWORD *)this + 16),
                  v27);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v71);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v70[1]);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v70[1]);
              }
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v71);
              v3 = v70[0];
              v5 = (struct _KMUTANT *)((char *)this + 600);
              v4 = (struct _KTHREAD **)((char *)this + 2984);
            }
            v36 = KeWaitForMultipleObjects(v8, Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
            v71 = 0LL;
            *(_OWORD *)&v70[1] = 0LL;
            BLTQUEUE::BltQueueWorkerDecodeEvent(v37, v3, v36, (struct BLTQUEUE::_BltQueueWaitEvent *)&v70[1]);
            IsEnabledDeviceUsageNoInline = Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline();
            v39 = v70[1];
            if ( IsEnabledDeviceUsageNoInline )
            {
              KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0xqttt_EtwWriteTransfer(
                  (*((_DWORD *)this + 169) >> 2) & 1,
                  (*((_DWORD *)this + 169) >> 3) & 1,
                  v40,
                  *((_QWORD *)this + 31),
                  v39,
                  (*((_DWORD *)this + 169) & 8) != 0,
                  (*((_DWORD *)this + 169) & 4) != 0,
                  *((_BYTE *)this + 661));
              KeReleaseMutex(v5, 0);
            }
            else if ( (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0xqttt_EtwWriteTransfer(
                  *((unsigned __int8 *)this + 661),
                  *((unsigned __int8 *)this + 658),
                  v41,
                  *((_QWORD *)this + 31),
                  v39,
                  _InterlockedCompareExchange((volatile signed __int32 *)this + 168, 0, 0),
                  *((_BYTE *)this + 658),
                  *((_BYTE *)this + 661));
            }
            else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              McTemplateK0xqttt_EtwWriteTransfer(
                *((unsigned __int8 *)this + 658),
                *((unsigned __int8 *)this + 659),
                v41,
                *((_QWORD *)this + 31),
                v39,
                *((_BYTE *)this + 659),
                *((_BYTE *)this + 658),
                *((_BYTE *)this + 661));
            }
            if ( v39 )
              break;
            if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
            {
              KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
              v64 = *((_OWORD *)this + 42);
              *((_OWORD *)this + 56) = *((_OWORD *)this + 41);
              v65 = *((_OWORD *)this + 43);
              *((_OWORD *)this + 57) = v64;
              *(_QWORD *)&v64 = *((_QWORD *)this + 88);
              *((_OWORD *)this + 58) = v65;
              *((_QWORD *)this + 118) = v64;
              KeReleaseMutex(v5, 0);
            }
            else
            {
              v62 = *((_OWORD *)this + 42);
              *((_OWORD *)this + 56) = *((_OWORD *)this + 41);
              v63 = *((_OWORD *)this + 43);
              *((_OWORD *)this + 57) = v62;
              *(_QWORD *)&v62 = *((_QWORD *)this + 88);
              *((_OWORD *)this + 58) = v63;
              *((_QWORD *)this + 118) = v62;
            }
            *((LARGE_INTEGER *)this + 111) = KeQueryPerformanceCounter(0LL);
            if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
            {
              KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
              v70[1] = *(_QWORD *)((char *)this + 676);
              KeReleaseMutex(v5, 0);
              v66 = v70[1];
              if ( (v70[1] & 1) != 0 )
              {
                BLTQUEUE::AcquireOwnershipWorker(this);
              }
              else if ( (v70[1] & 2) != 0 )
              {
                BLTQUEUE::ResetWorker(this);
              }
              else if ( (v70[1] & 0x10) != 0 )
              {
                BLTQUEUE::CleanupWorker(this);
              }
              else if ( (v70[1] & 4) != 0 )
              {
                BLTQUEUE::UpdateDisplayModeInfoWorker(this);
              }
              else if ( (v70[1] & 8) != 0 )
              {
                BLTQUEUE::EnableVSyncEventWorker(this);
              }
              else if ( (v70[1] & 0x100) != 0 )
              {
                BLTQUEUE::GlobalVmBusStatusChangeWorker(this);
              }
              else if ( (v70[1] & 0x200) != 0 )
              {
                BLTQUEUE::HostMonitorPowerStateWorker(this);
              }
              if ( v66 >= 0 )
                goto LABEL_130;
LABEL_154:
              BLTQUEUE::RestartQueueWorker(this);
            }
            else
            {
              if ( (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
              {
                v68 = _InterlockedExchange((volatile __int32 *)this + 168, 0);
                if ( *((_BYTE *)this + 656) )
                {
LABEL_152:
                  BLTQUEUE::AcquireOwnershipWorker(this);
                  goto LABEL_153;
                }
                if ( *((_BYTE *)this + 657) )
                {
LABEL_151:
                  BLTQUEUE::ResetWorker(this);
                  goto LABEL_153;
                }
                if ( *((_BYTE *)this + 660) )
                {
LABEL_150:
                  BLTQUEUE::CleanupWorker(this);
                  goto LABEL_153;
                }
                if ( *((_BYTE *)this + 658) )
                {
LABEL_149:
                  BLTQUEUE::UpdateDisplayModeInfoWorker(this);
                  goto LABEL_153;
                }
                v67 = v68 == 0;
              }
              else
              {
                if ( *((_BYTE *)this + 656) )
                  goto LABEL_152;
                if ( *((_BYTE *)this + 657) )
                  goto LABEL_151;
                if ( *((_BYTE *)this + 660) )
                  goto LABEL_150;
                if ( *((_BYTE *)this + 658) )
                  goto LABEL_149;
                v67 = *((_BYTE *)this + 659) == 0;
              }
              if ( v67 )
              {
                if ( *((_BYTE *)this + 664) )
                {
                  BLTQUEUE::GlobalVmBusStatusChangeWorker(this);
                }
                else if ( *((_BYTE *)this + 665) )
                {
                  BLTQUEUE::HostMonitorPowerStateWorker(this);
                }
              }
              else
              {
                BLTQUEUE::EnableVSyncEventWorker(this);
              }
LABEL_153:
              if ( *((_BYTE *)this + 663) )
                goto LABEL_154;
LABEL_130:
              v61 = 0LL;
LABEL_131:
              BLTQUEUE::ProcessBltQueue(this, v61, &v71);
            }
          }
          v42 = v39 - 1;
          if ( !v42 )
          {
            v61 = 2LL;
            goto LABEL_131;
          }
          v43 = v42 - 1;
          if ( v43 )
            break;
          if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
          {
            BLTQUEUE::ProcessVSyncTdrWorker(this, 1u);
          }
          else
          {
            BLTQUEUE::ProcessBltQueue(this, 1LL, &v71);
            if ( !*((_DWORD *)this + 103) && (v71 & 3) == 0 )
            {
              v57 = *((_DWORD *)this + 104) + 1;
              *((_DWORD *)this + 104) = v57;
              if ( v57 > 0xA )
                BLTQUEUE::StopVSync(this, 0LL, 8LL);
            }
          }
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74, v4, 0);
          DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v74);
          for ( i = 0LL; i < 0x200; i += 64LL )
          {
            v60 = *((_QWORD *)this + 379);
            if ( *(_QWORD *)(v60 + i + 48) )
            {
              if ( *(_BYTE *)(v60 + i + 56) == 1 )
              {
                *(_QWORD *)(v60 + i + 48) = 0LL;
                LOBYTE(v58) = 1;
                *(_BYTE *)(*((_QWORD *)this + 379) + i + 56) = 0;
                ExDeleteTimer(*(_QWORD *)(*((_QWORD *)this + 379) + i), v58, 0LL, 0LL);
              }
              else
              {
                *(_BYTE *)(v60 + i + 57) = 1;
              }
            }
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74);
        }
        v44 = v43 - 1;
        if ( v44 )
          break;
        v54 = *((_DWORD *)this + 34);
        if ( v54 == 1 )
        {
          BLTQUEUE::ProcessVSyncTdrWorker(this, 0);
        }
        else if ( v54 == 3 )
        {
          BLTQUEUE::StopVSync(this, 0LL, 3LL);
          LOBYTE(v55) = 1;
          BLTQUEUE::RecreateVsyncSource(this, v55, 3LL);
          BLTQUEUE::StartVSync(this, 0LL, 3LL);
          BLTQUEUE::LogRemoteVsyncTimeout(v56);
        }
        else
        {
          WdLogSingleEntry1(1LL);
          Timeout = *((int *)this + 34);
          WdLogGlobalForLineNumber = 2862;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Not expecting Vsync TDR for type 0x%I64x",
            Timeout,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v45 = v44 - 1;
      if ( !v45 )
        break;
      WdLogSingleEntry1(2LL);
      if ( v45 == 1 )
      {
        v46 = L"BLTQUEUE 0x%I64x : worker thread alerted";
        WdLogGlobalForLineNumber = 2875;
      }
      else
      {
        v46 = L"BLTQUEUE 0x%I64x : Received invalid WaitStatus";
        WdLogGlobalForLineNumber = 2929;
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v46, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    }
    v47 = Object[v70[2]];
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74, v4, 0);
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v74);
    v48 = 0LL;
    v49 = *((_QWORD *)this + 379);
    while ( *(PVOID *)v49 != v47 || *(_BYTE *)(v49 + 57) != 1 )
    {
      ++v48;
      v49 += 64LL;
      if ( v48 >= 8 )
        goto LABEL_90;
    }
    v50 = v48 << 6;
    v51 = *(struct DXGADAPTER **)((v48 << 6) + *((_QWORD *)this + 379) + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v77, v51, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v77, 0LL) >= 0 )
    {
      v52 = *((_QWORD *)v51 + 396);
      v53 = *((_QWORD *)this + 379);
      v70[1] = (unsigned int)(*((_DWORD *)this + 744) + 1);
      if ( (int)VIDSCH_EXPORT::VidSchSignalSyncObjectsFromCpu(
                  *(VIDSCH_EXPORT **)(v52 + 736),
                  1u,
                  (struct _VIDSCH_SYNC_OBJECT **)(v50 + v53 + 8),
                  0,
                  &v70[1]) < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2915;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to signal pending dod periodic frame notification id: %lu",
          v48,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 379) + v50 + 40) = v70[1];
      }
    }
    *(_BYTE *)(*((_QWORD *)this + 379) + v50 + 57) = 0;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
LABEL_90:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74);
  }
}
