/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x140298100
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140221FC0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14002EE60 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140297258 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1402997C0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x14042C2D0 (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *a1, char *a2)
{
  const struct _D3DKMT_RENDER *v3; // r12
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // r15
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // r14
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  D3DKMT_HANDLE hDevice; // esi
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdi
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rax
  void *v29; // rbx
  __int64 v30; // rsi
  DXGADAPTER *v31; // rbx
  unsigned int BroadcastContextCount; // eax
  __int64 v33; // rbx
  _BYTE *Pool2; // rax
  int v35; // r14d
  unsigned int v36; // ebx
  _BYTE *v37; // rcx
  void *v38; // rsi
  unsigned int v39; // r9d
  unsigned __int64 v40; // rdx
  _QWORD *v41; // rcx
  unsigned __int64 i; // rbx
  DXGADAPTER *v43; // rbx
  __int64 v44; // rdx
  volatile signed __int64 *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // r15
  struct _D3DKMT_RENDER *v50; // r10
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rsi
  unsigned __int64 AllocationCount; // r14
  struct _EX_RUNDOWN_REF **v53; // rbx
  int v54; // eax
  unsigned __int64 v55; // rdx
  int v56; // esi
  int v57; // eax
  unsigned __int64 v58; // rdx
  char *v59; // rcx
  _QWORD *v60; // rcx
  unsigned __int64 j; // rbx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v65; // rcx
  int v66; // eax
  unsigned int v67; // ebx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  bool v71; // zf
  struct _ERESOURCE *v72; // rcx
  __int64 v73; // rcx
  bool v74; // zf
  __int64 v75; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  _QWORD *v77; // r15
  _QWORD **v78; // rsi
  int v79; // r10d
  _QWORD *v80; // rdx
  _QWORD *v81; // rax
  _QWORD *v82; // r8
  __int64 v83; // r9
  _QWORD *v84; // rax
  _QWORD *v85; // r8
  _QWORD *v86; // rcx
  __int64 CurrentProcess; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  D3DKMT_HANDLE v90; // ebx
  __int64 v91; // rax
  __int64 v92; // rbx
  __int64 v93; // rcx
  __int64 v94; // rax
  const wchar_t *v95; // r9
  __int64 v96; // r14
  char v97; // [rsp+58h] [rbp-B0h]
  _QWORD v98[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v99; // [rsp+70h] [rbp-98h]
  void *Src; // [rsp+78h] [rbp-90h]
  _BYTE v101[32]; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v102; // [rsp+A0h] [rbp-68h]
  __int64 v103; // [rsp+A8h] [rbp-60h] BYREF
  char v104; // [rsp+B0h] [rbp-58h]
  __int64 v105; // [rsp+B8h] [rbp-50h] BYREF
  char v106; // [rsp+C0h] [rbp-48h]
  PVOID P; // [rsp+C8h] [rbp-40h]
  _BYTE v108[32]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v109; // [rsp+F0h] [rbp-18h]
  char *v110; // [rsp+F8h] [rbp-10h] BYREF
  struct DXGPROCESS *v111; // [rsp+100h] [rbp-8h]
  void *Base; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v113[32]; // [rsp+110h] [rbp+8h] BYREF
  size_t NumOfElements; // [rsp+130h] [rbp+28h]
  __int16 v115; // [rsp+138h] [rbp+30h]
  __int64 v116; // [rsp+140h] [rbp+38h] BYREF
  char v117; // [rsp+148h] [rbp+40h]
  unsigned __int64 v118; // [rsp+150h] [rbp+48h] BYREF
  DXGADAPTER *v119; // [rsp+158h] [rbp+50h]
  char v120; // [rsp+160h] [rbp+58h]
  struct _D3DKMT_RENDER *v121; // [rsp+168h] [rbp+60h]
  __int64 v122; // [rsp+170h] [rbp+68h]
  PVOID v123; // [rsp+178h] [rbp+70h]
  struct DXGALLOCATION *v124[32]; // [rsp+180h] [rbp+78h] BYREF
  int v125; // [rsp+280h] [rbp+178h]
  char v126[8]; // [rsp+288h] [rbp+180h] BYREF
  char v127[8]; // [rsp+290h] [rbp+188h] BYREF
  __int64 v128; // [rsp+298h] [rbp+190h]
  DXGADAPTER *v129; // [rsp+2A0h] [rbp+198h]
  char v130; // [rsp+2A8h] [rbp+1A0h]
  char *v131; // [rsp+2B0h] [rbp+1A8h]
  char v132[24]; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v133[8]; // [rsp+2D0h] [rbp+1C8h] BYREF
  __int64 v134; // [rsp+2D8h] [rbp+1D0h]
  __int64 v135; // [rsp+2E0h] [rbp+1D8h]
  char v136; // [rsp+2E8h] [rbp+1E0h]
  __int64 v137; // [rsp+2F0h] [rbp+1E8h]
  __int64 v138; // [rsp+310h] [rbp+208h]
  char v139; // [rsp+318h] [rbp+210h]
  char v140[8]; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v141[64]; // [rsp+330h] [rbp+228h] BYREF
  _BYTE v142[64]; // [rsp+370h] [rbp+268h] BYREF
  __int64 v143; // [rsp+3B0h] [rbp+2A8h]
  char v144; // [rsp+3B8h] [rbp+2B0h]

  v110 = a2;
  LODWORD(v98[0]) = -1;
  v98[1] = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    LOBYTE(v99) = 1;
    LODWORD(v98[0]) = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    LOBYTE(v99) = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v98, 3020);
  v3 = (const struct _D3DKMT_RENDER *)((char *)a1 + 8);
  v121 = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  Current = DXGPROCESS::GetCurrent();
  v111 = Current;
  v6 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 2818;
    v89 = PsGetCurrentProcess(v88);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v89,
      0LL,
      0LL,
      0LL);
LABEL_211:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v98);
    v74 = (_BYTE)v99 == 0;
    goto LABEL_157;
  }
  v7 = *(_DWORD *)a1;
  v8 = (volatile signed __int32 *)((char *)Current + 248);
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v8, v9, v10);
    ExAcquirePushLockSharedEx(v8, 0LL);
  }
  _InterlockedIncrement(v8 + 4);
  v11 = (v7 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)v6 + 74) )
  {
    v12 = *(_DWORD *)(*((_QWORD *)v6 + 35) + 16LL * v11 + 8);
    if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v6 + 35) + 16LL * v11 + 8) & 0x60)
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) != 0 )
    {
      v13 = *((_QWORD *)v6 + 35);
      if ( (*(_BYTE *)(v13 + 16LL * v11 + 8) & 0x1F) == 0xF )
      {
        v14 = *(_QWORD *)(v13 + 16LL * v11);
        goto LABEL_17;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v14 = 0LL;
LABEL_17:
  v105 = v14;
  v106 = 0;
  if ( v14 )
  {
    _m_prefetchw((const void *)(v14 + 112));
    v15 = *(_QWORD *)(v14 + 112);
    while ( v15 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 112), v15 + 1, v15);
      if ( v16 == v15 )
        goto LABEL_23;
    }
    v14 = 0LL;
    v105 = 0LL;
  }
LABEL_23:
  _InterlockedDecrement(v8 + 4);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  hDevice = v3->hDevice;
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
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v8, v18, v19);
    ExAcquirePushLockSharedEx(v8, 0LL);
  }
  _InterlockedIncrement(v8 + 4);
  v20 = (hDevice >> 6) & 0xFFFFFF;
  if ( v20 < *((_DWORD *)v6 + 74) )
  {
    v21 = *(_DWORD *)(*((_QWORD *)v6 + 35) + 16LL * v20 + 8);
    if ( ((hDevice >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v6 + 35) + 16LL * v20 + 8) & 0x60)
      && (v21 & 0x2000) == 0
      && (v21 & 0x1F) != 0 )
    {
      v22 = *((_QWORD *)v6 + 35);
      if ( (*(_BYTE *)(v22 + 16LL * v20 + 8) & 0x1F) == 7 )
      {
        v23 = *(_QWORD *)(v22 + 16LL * v20);
        goto LABEL_34;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v23 = 0LL;
LABEL_34:
  v103 = v23;
  v104 = 0;
  if ( v23 )
  {
    _m_prefetchw((const void *)(v23 + 32));
    v24 = *(_QWORD *)(v23 + 32);
    while ( v24 )
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 32), v24 + 1, v24);
      if ( v25 == v24 )
        goto LABEL_40;
    }
    v23 = 0LL;
    v103 = 0LL;
  }
LABEL_40:
  _InterlockedDecrement(v8 + 4);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( !v23 )
  {
    v90 = v3->hDevice;
    v91 = PsGetCurrentProcess(v26);
    WdLogSingleEntry3(2LL, -1073741811LL, v91, v90);
    v92 = v3->hDevice;
    WdLogGlobalForLineNumber = 2839;
    v94 = PsGetCurrentProcess(v93);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v94,
      v92,
      0LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v103);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v105);
    goto LABEL_211;
  }
  v27 = *(_QWORD *)(v23 + 16);
  v28 = *(_QWORD *)(v27 + 16);
  if ( *(_BYTE *)(v23 + 434) )
  {
    COREACCESS::COREACCESS((COREACCESS *)v141, *(struct DXGADAPTER *const *)(v28 + 16));
    COREACCESS::COREACCESS((COREACCESS *)v142, *(struct DXGADAPTER *const *)(*(_QWORD *)(v27 + 16) + 16LL));
    v143 = v27;
    v144 = 0;
    v66 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v140, 0LL);
    v67 = v66;
    if ( v66 >= 0 )
    {
      v67 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 16LL) + 4712LL),
              v6,
              (struct DXGCONTEXT *)v23,
              v3);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v140);
    }
    else
    {
      WdLogSingleEntry3(4LL, v66, v23, v6);
      WdLogGlobalForLineNumber = 2850;
      COREACCESS::~COREACCESS((COREACCESS *)v142, v68);
      COREACCESS::~COREACCESS((COREACCESS *)v141, v69);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v103);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v98);
    v71 = (_BYTE)v99 == 0;
LABEL_152:
    if ( !v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v70, (__int64)&EventProfilerExit);
    return v67;
  }
  v29 = (void *)(v28 + 120);
  v116 = *(_QWORD *)(v23 + 16);
  v117 = 1;
  if ( !KeReadStateEvent((PRKEVENT)(v28 + 120)) )
    KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v75, (__int64)"g");
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
  }
  v30 = *(_QWORD *)(v23 + 16);
  v122 = v30;
  v31 = *(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL);
  if ( !*((_BYTE *)v31 + 3062)
    || (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 0x180) != 0
    || (*(_DWORD *)&v3->Flags & 0x40) != 0
    || (NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v31),
        NumDifferentPhysicalAdapters <= 1) )
  {
    v97 = 0;
  }
  else
  {
    v97 = 1;
    v3->BroadcastContextCount = NumDifferentPhysicalAdapters - 1;
  }
  BroadcastContextCount = v3->BroadcastContextCount;
  v33 = BroadcastContextCount + 1;
  if ( BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry2(3LL, v23, -1073741811LL);
    v72 = *(struct _ERESOURCE **)(v27 + 136);
    WdLogGlobalForLineNumber = 2887;
    ExReleaseResourceLite(v72);
    KeLeaveCriticalRegion();
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v103);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v98);
    v74 = (_BYTE)v99 == 0;
    goto LABEL_157;
  }
  Src = 0LL;
  v102 = 0;
  if ( (unsigned int)v33 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v33 < 8 )
      goto LABEL_213;
    Src = (void *)ExAllocatePool2(256LL, 8 * v33, 1265072196LL);
  }
  else
  {
    Src = v101;
    memset(v101, 0, 8LL * (unsigned int)v33);
  }
  v102 = v33;
  if ( !Src )
  {
LABEL_213:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2894;
    if ( Src != v101 && Src )
      ExFreePoolWithTag(Src, 0);
    goto LABEL_240;
  }
  P = 0LL;
  v109 = 0;
  if ( (unsigned int)v33 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v33 < 8 )
      goto LABEL_144;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v33, 1265072196LL);
    P = Pool2;
  }
  else
  {
    Pool2 = v108;
    P = v108;
    if ( (_DWORD)v33 )
    {
      memset(v108, 0, 8LL * (unsigned int)v33);
      Pool2 = P;
    }
  }
  v109 = v33;
  if ( !Pool2 )
  {
LABEL_144:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2901;
    if ( P != v108 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v109 = 0;
    if ( Src == v101 || !Src )
      goto LABEL_121;
    goto LABEL_166;
  }
  *(_QWORD *)Src = v23;
  if ( v14 )
    *(_QWORD *)P = v14;
  v35 = 0;
  if ( !v97 )
  {
LABEL_59:
    v36 = v102;
    v37 = 0LL;
    v38 = Src;
    Base = 0LL;
    LODWORD(NumOfElements) = 0;
    if ( v102 > 4 )
    {
      v39 = 0;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v102 < 8 )
        goto LABEL_63;
      v37 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v102, 1265072196LL);
      Base = v37;
    }
    else
    {
      v37 = v113;
      Base = v113;
      if ( v102 )
      {
        memset(v113, 0, 8LL * v102);
        v37 = Base;
      }
    }
    LODWORD(NumOfElements) = v36;
    v39 = v36;
LABEL_63:
    v115 = 1;
    if ( v37 )
    {
      memmove(v37, v38, 8LL * v39);
      qsort(Base, (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
      v40 = 1LL;
      v41 = Base;
      while ( v40 < (unsigned int)NumOfElements )
      {
        if ( *((_QWORD *)Base + v40) == *((_QWORD *)Base + v40 - 1) )
          goto LABEL_69;
        ++v40;
      }
      for ( i = 0LL; i < (unsigned int)NumOfElements; v41 = Base )
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v41[i++] + 440LL));
      v115 = 256;
LABEL_69:
      if ( v41 )
      {
        v119 = *(DXGADAPTER **)(*(_QWORD *)(v122 + 16) + 16LL);
        _InterlockedIncrement64((volatile signed __int64 *)v119 + 3);
        v43 = v119;
        v118 = -1LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx((char *)v43 + 136, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)v43 + 38);
        v120 = 1;
        v44 = *(_QWORD *)(v23 + 16);
        v45 = *(volatile signed __int64 **)(*(_QWORD *)(v44 + 16) + 16LL);
        v129 = (DXGADAPTER *)v45;
        v130 = 0;
        v131 = 0LL;
        if ( v45 )
        {
          _InterlockedIncrement64(v45 + 3);
          v128 = -1LL;
        }
        v46 = *(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL);
        v135 = v46;
        v136 = 0;
        v137 = 0LL;
        if ( v46 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v46 + 24));
          v134 = -1LL;
        }
        v138 = v44;
        v139 = 0;
        if ( v130 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v127, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7648;
        }
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v129 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v129 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v47, (__int64)"g");
            KeWaitForSingleObject((char *)v129 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v129, v110);
        }
        v131 = 0LL;
        if ( v110 && (int)RtlStringCbCopyA(v132, 17LL, v110) >= 0 )
          v131 = v132;
        v130 = 1;
        if ( *(_DWORD *)(v138 + 608) == 1 )
        {
          v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 16LL);
          if ( *(int *)(v48 + 2776) >= 0x2000 || (v49 = 0, *(_BYTE *)(v48 + 3076)) )
            v49 = 1;
          v50 = v121;
          if ( (*(_DWORD *)&v121->Flags & 0x20) != 0 )
            pNewAllocationList = v121->pNewAllocationList;
          else
            pNewAllocationList = *(D3DDDI_ALLOCATIONLIST **)(v23 + 88);
          AllocationCount = v121->AllocationCount;
          LODWORD(v110) = v121->AllocationCount;
          v53 = 0LL;
          v123 = 0LL;
          v125 = 0;
          if ( !v49 )
            goto LABEL_92;
          if ( (unsigned int)AllocationCount > 0x20 )
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
            {
LABEL_231:
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 3014;
              if ( v123 != v124 && v123 )
                ExFreePoolWithTag(v123, 0);
              v123 = 0LL;
              v125 = 0;
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v126);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v118);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)&Base);
              if ( P != v108 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v109 = 0;
              if ( Src != v101 && Src )
                ExFreePoolWithTag(Src, 0);
LABEL_240:
              Src = 0LL;
              v102 = 0;
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v116);
LABEL_122:
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v103);
              DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v105);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v98);
              if ( (_BYTE)v99 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v65, (__int64)&EventProfilerExit);
              return 3221225495LL;
            }
            v53 = (struct _EX_RUNDOWN_REF **)ExAllocatePool2(256LL, 8 * AllocationCount, 1265072196LL);
            v123 = v53;
          }
          else
          {
            v53 = (struct _EX_RUNDOWN_REF **)v124;
            v123 = v124;
            if ( (_DWORD)AllocationCount )
            {
              memset(v124, 0, 8LL * (unsigned int)AllocationCount);
              v53 = (struct _EX_RUNDOWN_REF **)v123;
            }
          }
          v125 = AllocationCount;
          if ( v53 )
          {
            v54 = DxgkReferenceAllocationList(
                    (unsigned int *)&v110,
                    pNewAllocationList,
                    (struct DXGALLOCATION **)v53,
                    0LL);
            AllocationCount = (unsigned int)v110;
            v56 = v54;
            if ( v54 < 0 )
              goto LABEL_95;
            v50 = v121;
LABEL_92:
            if ( v97 )
              v57 = DXGCONTEXT::RenderKmLda(
                      v50,
                      (struct COREDEVICEACCESS *)v126,
                      (struct DXGCONTEXT **)Src,
                      (struct DXGALLOCATION **)v53,
                      (struct DXGHWQUEUE **)P);
            else
              v57 = DXGCONTEXT::Render(
                      (DXGCONTEXT *)v23,
                      v50,
                      (struct COREDEVICEACCESS *)v126,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v118,
                      (struct DXGCONTEXT **)Src,
                      (struct DXGALLOCATION **)v53,
                      (struct DXGHWQUEUE **)P);
            v56 = v57;
            if ( !v49 )
            {
LABEL_99:
              if ( v56 < 0 )
              {
                if ( v56 == -1073741811 || v56 == -1073741592 )
                {
                  v96 = (__int64)v111;
                  WdLogSingleEntry3(2LL, v56, v23, v111);
                  WdLogGlobalForLineNumber = 3050;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"0x%I64x RenderKm failed 0x%I64x 0x%I64x",
                    v56,
                    v23,
                    v96,
                    0LL,
                    0LL);
                }
                else
                {
                  v55 = -1071775482LL;
                  if ( v56 == -1071775482 )
                  {
                    WdLogSingleEntry3(4LL, -1071775482LL, v23, v111);
                    WdLogGlobalForLineNumber = 3056;
                  }
                  else if ( v56 != -1071774910 )
                  {
                    WdLogSingleEntry3(4LL, v56, v23, v111);
                    WdLogGlobalForLineNumber = 3062;
                  }
                }
              }
              if ( v123 != v124 && v123 )
                ExFreePoolWithTag(v123, 0);
              v123 = 0LL;
              v125 = 0;
              COREACCESS::~COREACCESS((COREACCESS *)v133, v55);
              COREACCESS::~COREACCESS((COREACCESS *)v127, v58);
              if ( v120 )
              {
                v59 = (char *)v119 + 136;
                v120 = 0;
                _InterlockedDecrement((volatile signed __int32 *)v119 + 38);
                ExReleasePushLockSharedEx(v59, 0LL);
                KeLeaveCriticalRegion();
                DXGADAPTER::ReleaseReference(v119);
              }
              v60 = Base;
              if ( Base )
              {
                if ( HIBYTE(v115) )
                {
                  if ( !(_BYTE)v115 )
                  {
                    for ( j = 0LL; j < (unsigned int)NumOfElements; v60 = Base )
                    {
                      v62 = v60[j];
                      *(_QWORD *)(v62 + 448) = 0LL;
                      ExReleasePushLockExclusiveEx(v62 + 440, 0LL);
                      KeLeaveCriticalRegion();
                      ++j;
                    }
                  }
                }
              }
              if ( v60 != (_QWORD *)v113 && v60 )
                ExFreePoolWithTag(v60, 0);
              Base = 0LL;
              LODWORD(NumOfElements) = 0;
              if ( P != v108 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v109 = 0;
              if ( Src != v101 && Src )
                ExFreePoolWithTag(Src, 0);
              Src = 0LL;
              v102 = 0;
              ExReleaseResourceLite(*(PERESOURCE *)(v27 + 136));
              KeLeaveCriticalRegion();
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v103);
              DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v105);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v98);
              if ( (_BYTE)v99 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v63, (__int64)&EventProfilerExit);
              }
              return (unsigned int)v56;
            }
LABEL_95:
            if ( (_DWORD)AllocationCount )
            {
              do
              {
                if ( *v53 )
                  ExReleaseRundownProtection(*v53 + 11);
                ++v53;
                --AllocationCount;
              }
              while ( AllocationCount );
            }
            goto LABEL_99;
          }
          goto LABEL_231;
        }
        COREACCESS::Release((COREACCESS *)v127);
        if ( v139 )
          COREACCESS::Release((COREACCESS *)v133);
        v67 = -1073741130;
        WdLogSingleEntry3(4LL, -1073741130LL, v23, v6);
        WdLogGlobalForLineNumber = 2987;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v126);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v118);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)&Base);
        if ( P != v108 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v109 = 0;
        if ( Src != v101 && Src )
          ExFreePoolWithTag(Src, 0);
        Src = 0LL;
        v102 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v116);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v103);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v105);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v98);
        v71 = (_BYTE)v99 == 0;
        goto LABEL_152;
      }
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2974;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)&Base);
    if ( P != v108 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v109 = 0;
    if ( Src == v101 || !Src )
    {
LABEL_121:
      Src = 0LL;
      v102 = 0;
      ExReleaseResourceLite(*(PERESOURCE *)(v27 + 136));
      KeLeaveCriticalRegion();
      goto LABEL_122;
    }
LABEL_166:
    ExFreePoolWithTag(Src, 0);
    goto LABEL_121;
  }
  v77 = Src;
  v78 = (_QWORD **)(v30 + 496);
  v79 = 0;
  v80 = *v78;
  while ( 1 )
  {
    v81 = 0LL;
    if ( v80 != v78 )
      v81 = v80;
    if ( !v81 )
      break;
    v82 = v80;
    if ( v80 == v78 )
      v82 = 0LL;
    v83 = *((unsigned int *)v82 + 97);
    if ( (unsigned int)v83 >= (unsigned int)v33 )
    {
      WdLogSingleEntry1(2LL);
      v95 = L"0x%I64x fails as context physical adapter index is invalid";
      WdLogGlobalForLineNumber = 2933;
      goto LABEL_222;
    }
    if ( ((1 << v83) & v35) != 0 )
    {
      WdLogSingleEntry1(2LL);
      v95 = L"0x%I64x fails as context for the same physical adapter is specified";
      WdLogGlobalForLineNumber = 2940;
      goto LABEL_222;
    }
    v35 |= 1 << v83;
    v77[v83] = v82;
    if ( (v82[49] & 0x10) != 0 )
    {
      v84 = v82 + 50;
      v85 = 0LL;
      if ( (_QWORD *)*v84 != v84 )
        v85 = (_QWORD *)*v84;
      if ( (unsigned int)v83 >= v109 )
        v86 = P;
      else
        v86 = (char *)P + 8 * v83;
      *v86 = v85;
    }
    v80 = (_QWORD *)*v80;
    ++v79;
  }
  if ( v79 == (_DWORD)v33 )
  {
    v6 = v111;
    goto LABEL_59;
  }
  WdLogSingleEntry1(2LL);
  v95 = L"0x%I64x fails as to few contexts are in the device";
  WdLogGlobalForLineNumber = 2963;
LABEL_222:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v95, v23, 0LL, 0LL, 0LL, 0LL);
  if ( P != v108 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v109 = 0;
  if ( Src != v101 && Src )
    ExFreePoolWithTag(Src, 0);
  Src = 0LL;
  v102 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v116);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v103);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)&v105);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v98);
  v74 = (_BYTE)v99 == 0;
LABEL_157:
  if ( !v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v73, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
