/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x14028C280
 * Callers:
 *     DxgkMakeResident @ 0x14028C200 (DxgkMakeResident.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z @ 0x140433930 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140441030 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1400102C4 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     McTemplateK0qxx_EtwWriteTransfer @ 0x140012AF8 (McTemplateK0qxx_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013530 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001628C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14002EE60 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14003BB64 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x14004240C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x14028BDDC (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x14042B398 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *Src, int a2, const char *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rsi
  struct DXGPROCESS *v11; // rax
  struct D3DDDI_MAKERESIDENT *v12; // r12
  struct DXGPAGINGQUEUE *v13; // r13
  unsigned __int64 NumAllocations; // rsi
  DXGALLOCATIONREFERENCE *v15; // rsi
  unsigned __int64 v16; // rbx
  _BYTE *Pool2; // rcx
  unsigned int *AllocationList; // r14
  __int64 v19; // r13
  __int64 v20; // rcx
  int v21; // esi
  struct _KEVENT *v22; // rbx
  struct _KEVENT *v23; // rcx
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  struct _KTHREAD **v30; // rsi
  struct _KTHREAD **v31; // r15
  __int64 v32; // r8
  struct DXGPAGINGQUEUE *v33; // r15
  __int64 v34; // rsi
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  int Resident; // ebx
  __int64 v39; // r8
  struct D3DDDI_MAKERESIDENT *v40; // r14
  DXGALLOCATIONREFERENCE *v41; // rcx
  __int64 v42; // rcx
  unsigned int ULongFromUser; // eax
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rbx
  _QWORD *v48; // rcx
  _QWORD *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  bool v53; // zf
  DXGADAPTER *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v61; // rax
  struct _ETHREAD *v62; // rbx
  KSPIN_LOCK *v63; // rax
  __int64 v64; // rax
  bool v65; // cf
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  DXGALLOCATIONREFERENCE *v68; // rbx
  __int64 v69; // rsi
  unsigned int v70; // r14d
  struct D3DDDI_MAKERESIDENT_FLAGS v71; // ebx
  unsigned int v72; // r15d
  unsigned int HostProcess; // eax
  __int64 v74; // rcx
  unsigned int v75[2]; // [rsp+28h] [rbp-490h]
  struct DXGALLOCATIONREFERENCE *v76; // [rsp+30h] [rbp-488h]
  char v77; // [rsp+50h] [rbp-468h]
  int v78; // [rsp+58h] [rbp-460h] BYREF
  __int64 v79; // [rsp+60h] [rbp-458h]
  char v80; // [rsp+68h] [rbp-450h]
  __int64 v81; // [rsp+70h] [rbp-448h] BYREF
  _BYTE v82[8]; // [rsp+78h] [rbp-440h] BYREF
  _BYTE *v83; // [rsp+80h] [rbp-438h]
  struct DXGPAGINGQUEUE *v84; // [rsp+88h] [rbp-430h] BYREF
  struct DXGPROCESS *v85; // [rsp+90h] [rbp-428h]
  __int64 v86; // [rsp+98h] [rbp-420h] BYREF
  int v87; // [rsp+A0h] [rbp-418h]
  struct D3DDDI_MAKERESIDENT *v88; // [rsp+A8h] [rbp-410h]
  struct D3DDDI_MAKERESIDENT *v89; // [rsp+B0h] [rbp-408h]
  _QWORD *v90; // [rsp+B8h] [rbp-400h]
  struct _EX_RUNDOWN_REF **v91; // [rsp+C0h] [rbp-3F8h]
  struct DXGALLOCATIONREFERENCE *v92; // [rsp+C8h] [rbp-3F0h]
  __int64 v93; // [rsp+D0h] [rbp-3E8h]
  unsigned int v94; // [rsp+D8h] [rbp-3E0h]
  unsigned int *v95; // [rsp+E0h] [rbp-3D8h]
  struct D3DDDI_MAKERESIDENT *v96; // [rsp+E8h] [rbp-3D0h]
  _BYTE v97[24]; // [rsp+F0h] [rbp-3C8h] BYREF
  _OWORD v98[3]; // [rsp+108h] [rbp-3B0h] BYREF
  PVOID P; // [rsp+140h] [rbp-378h]
  _BYTE v100[320]; // [rsp+148h] [rbp-370h] BYREF
  int v101; // [rsp+288h] [rbp-230h]
  _BYTE v102[8]; // [rsp+290h] [rbp-228h] BYREF
  _BYTE v103[16]; // [rsp+298h] [rbp-220h] BYREF
  DXGADAPTER *v104; // [rsp+2A8h] [rbp-210h]
  char v105; // [rsp+2B0h] [rbp-208h]
  char *v106; // [rsp+2B8h] [rbp-200h]
  char v107[24]; // [rsp+2C0h] [rbp-1F8h] BYREF
  _BYTE v108[16]; // [rsp+2D8h] [rbp-1E0h] BYREF
  DXGADAPTER *v109; // [rsp+2E8h] [rbp-1D0h]
  char v110; // [rsp+2F0h] [rbp-1C8h]
  __int64 v111; // [rsp+2F8h] [rbp-1C0h]
  __int64 v112; // [rsp+318h] [rbp-1A0h]
  char v113; // [rsp+320h] [rbp-198h]
  DXGALLOCATIONREFERENCE *v114; // [rsp+330h] [rbp-188h] BYREF
  _BYTE v115[320]; // [rsp+338h] [rbp-180h] BYREF
  unsigned int v116; // [rsp+478h] [rbp-40h]

  v89 = Src;
  v96 = Src;
  v78 = -1;
  v6 = 0;
  v79 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v80 = 1;
    v78 = 2115;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v80 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v78, 2115);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      v85 = v11;
      if ( v11 )
        goto LABEL_8;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      v85 = v11;
      if ( v11 )
        goto LABEL_8;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v10;
  v85 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 463;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    v53 = v80 == 0;
    goto LABEL_91;
  }
LABEL_8:
  memset(v98, 0, sizeof(v98));
  v88 = 0LL;
  if ( a2 )
  {
    RtlCopyFromUser(v98, Src, 0x30uLL);
    v12 = (struct D3DDDI_MAKERESIDENT *)v98;
    v88 = (struct D3DDDI_MAKERESIDENT *)v98;
    v11 = v85;
  }
  else
  {
    v12 = Src;
    v88 = Src;
  }
  if ( !v12->NumAllocations )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 496;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    v53 = v80 == 0;
    goto LABEL_91;
  }
  if ( !v12->AllocationList )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 503;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    v53 = v80 == 0;
    goto LABEL_91;
  }
  if ( v12->Flags.Value >= 4 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 510;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    v53 = v80 == 0;
    goto LABEL_91;
  }
  v84 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v82, v12->hPagingQueue, (struct _KTHREAD **)v11, &v84, 1);
  v13 = v84;
  if ( !v84 )
  {
    WdLogSingleEntry2(3LL, v12->hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 521;
LABEL_90:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v82);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    v53 = v80 == 0;
LABEL_91:
    if ( v53 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_156;
  }
  v114 = 0LL;
  v116 = 0;
  P = 0LL;
  v101 = 0;
  NumAllocations = v12->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v114 = (DXGALLOCATIONREFERENCE *)v115;
    if ( (_DWORD)NumAllocations )
      memset(v115, 0, 8LL * (unsigned int)NumAllocations);
LABEL_17:
    v116 = NumAllocations;
    v15 = v114;
    v92 = v114;
    goto LABEL_18;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations >= 8 )
  {
    v64 = 8 * NumAllocations;
    if ( !is_mul_ok(NumAllocations, 8uLL) )
      v64 = -1LL;
    v65 = __CFADD__(v64, 8LL);
    v66 = v64 + 8;
    if ( v65 )
      v66 = -1LL;
    v67 = operator new[](v66, 0x4B677844u, 256LL);
    if ( v67 )
    {
      *(_QWORD *)v67 = NumAllocations;
      v68 = (DXGALLOCATIONREFERENCE *)(v67 + 8);
      `vector constructor iterator'(
        (char *)(v67 + 8),
        8LL,
        NumAllocations,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v114 = v68;
    }
    goto LABEL_17;
  }
  v15 = 0LL;
  v92 = 0LL;
LABEL_18:
  v16 = v12->NumAllocations;
  if ( (unsigned int)v16 > 0x28 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v16 < 8 )
    {
      Pool2 = 0LL;
      v83 = 0LL;
      goto LABEL_23;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v16, 1265072196LL);
    P = Pool2;
    goto LABEL_21;
  }
  Pool2 = v100;
  v83 = v100;
  P = v100;
  if ( (_DWORD)v16 )
  {
    memset(v100, 0, 8LL * (unsigned int)v16);
    Pool2 = P;
LABEL_21:
    v83 = Pool2;
  }
  v101 = v16;
LABEL_23:
  if ( v15 && Pool2 )
  {
    AllocationList = (unsigned int *)v12->AllocationList;
    v95 = &AllocationList[v12->NumAllocations];
    v91 = (struct _EX_RUNDOWN_REF **)v15;
    v90 = Pool2;
    v19 = *((_QWORD *)v13 + 2);
    v93 = v19;
    v86 = v19;
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    if ( *(int *)(v20 + 2776) >= 0x2000 || *(_BYTE *)(v20 + 3076) )
    {
      v21 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
      v87 = v21;
    }
    else
    {
      v21 = 0;
      v87 = 0;
    }
    v22 = *(struct _KEVENT **)(v19 + 16);
    if ( *(_DWORD *)(v19 + 464) == 2 )
    {
      if ( KeReadStateEvent(v22 + 5) )
      {
LABEL_31:
        if ( v21 )
        {
          KeEnterCriticalRegion();
          if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 144, 0LL) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v19 + 160));
            v25 = 1;
          }
          else
          {
            KeLeaveCriticalRegion();
            v25 = 0;
          }
          if ( !v25 )
          {
            KeEnterCriticalRegion();
            DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 144, 0LL) )
            {
              DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(v19 + 144), v50, v51);
              ExAcquirePushLockSharedEx(v19 + 144, 0LL);
            }
            _InterlockedIncrement((volatile signed __int32 *)(v19 + 160));
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
          {
            DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v57, (__int64)"g");
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
          }
        }
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, v19, 0, v24, 0);
        if ( v113 )
        {
          if ( v110 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v108, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7648;
          }
          v54 = v109;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v109 + 23) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v109 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v55, (__int64)"g");
              KeWaitForSingleObject((char *)v109 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v109, 0LL);
            v54 = v109;
          }
          v111 = 0LL;
          v110 = 1;
          if ( *((_DWORD *)v54 + 50) != 1 )
            goto LABEL_101;
        }
        if ( v105 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v103, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7648;
        }
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v104 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v104 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v26, (__int64)"g");
            KeWaitForSingleObject((char *)v104 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v104, a3);
        }
        v106 = 0LL;
        if ( a3 && (int)RtlStringCbCopyA(v107, 17LL, a3) >= 0 )
          v106 = v107;
        v105 = 1;
        if ( *(_DWORD *)(v112 + 608) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v103);
          if ( !v113 )
          {
LABEL_102:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v102);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v86);
            if ( P != v100 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v101 = 0;
            PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>((__int64)&v114);
            DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v82);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
            if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v56, (__int64)&EventProfilerExit);
            return 3221226166LL;
          }
LABEL_101:
          COREACCESS::Release((COREACCESS *)v108);
          goto LABEL_102;
        }
        v27 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
        v77 = *(_BYTE *)(v27 + 209);
        v28 = PsGetCurrentProcess(v27);
        v29 = PsGetProcessDxgProcess(v28);
        v30 = (struct _KTHREAD **)v29;
        if ( v29 && (*(_DWORD *)(v29 + 408) & 0x80) == 0 )
          goto LABEL_45;
        v61 = DXGTHREAD::GetCurrent();
        if ( v61 )
        {
          v31 = (struct _KTHREAD **)*((_QWORD *)v61 + 3);
          if ( !v31 )
            goto LABEL_45;
        }
        else
        {
          v62 = KeGetCurrentThread();
          v63 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
          v31 = (struct _KTHREAD **)DXGGLOBAL::SearchDxgThreadList(v63, v62);
          if ( !v31 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3080;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to find DXGPROCESS",
              3080LL,
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_45:
            v31 = v30;
          }
        }
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v97, v31);
        while ( 1 )
        {
          if ( AllocationList == v95 )
          {
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v97);
            v33 = v84;
            if ( v77 )
            {
              v69 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
              v70 = v12->NumAllocations;
              v71.0 = (struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B)v12->Flags.Value;
              v72 = *((_DWORD *)v84 + 7);
              HostProcess = DXGPROCESS::GetHostProcess(v85);
              Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v69 + 4712),
                           HostProcess,
                           0,
                           v72,
                           v71,
                           v70,
                           v92,
                           &v12->PagingFenceValue,
                           &v12->NumBytesToTrim);
            }
            else
            {
              v34 = *((_QWORD *)v84 + 2);
              if ( *(_BYTE *)(v34 + 1919)
                || *(_DWORD *)(v34 + 464) == 2 && *(int *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 3044LL) >= 2000 )
              {
                v35 = v12->Flags.Value & 1 | 2;
                if ( (v12->Flags.Value & 2) == 0 )
                  v35 = v12->Flags.Value & 1;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
                {
                  LODWORD(v76) = v12->Flags.0;
                  v75[0] = v12->NumAllocations;
                  McTemplateK0pxqt_EtwWriteTransfer(
                    *((_QWORD *)v84 + 5),
                    &EventMakeResidentBegin,
                    v32,
                    v84,
                    *(_QWORD *)(*((_QWORD *)v84 + 5) + 32LL),
                    *(_QWORD *)v75,
                    v76);
                }
                Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 760LL) + 8LL) + 728LL))(
                             *(_QWORD *)(*(_QWORD *)(v34 + 16) + 768LL),
                             *((_QWORD *)v33 + 4),
                             v83,
                             v12->NumAllocations,
                             v35,
                             &v12->PagingFenceValue,
                             &v12->NumBytesToTrim);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
                  McTemplateK0qxx_EtwWriteTransfer(v37, v36, v39, Resident, v12->NumBytesToTrim, v12->PagingFenceValue);
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 227;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Calling MakeResident on a device that was not created with the UMD residency flag. Device=0x%p",
                  (__int64)v33,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                Resident = -1073741637;
              }
            }
            if ( Resident >= 0 && a2 )
            {
              v40 = v89;
              RtlCopyToUser(&v89->PagingFenceValue, &v12->PagingFenceValue, 8uLL);
            }
            else
            {
              v40 = v89;
            }
            if ( a2 )
              RtlCopyToUser(&v40->NumBytesToTrim, &v12->NumBytesToTrim, 8uLL);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v102);
            if ( v87 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v19 + 160));
              ExReleasePushLockSharedEx(v19 + 144, 0LL);
            }
            else
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
            }
            KeLeaveCriticalRegion();
            if ( P != v100 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v101 = 0;
            v41 = v114;
            if ( v114 == (DXGALLOCATIONREFERENCE *)v115 )
            {
              if ( v116 )
              {
                while ( 1 )
                {
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((char *)v41 + 8 * v6++));
                  if ( v6 >= v116 )
                    break;
                  v41 = v114;
                }
              }
            }
            else if ( v114 )
            {
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v114);
            }
            DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v82);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
            if ( v80 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit);
            }
            return (unsigned int)Resident;
          }
          if ( a2 )
          {
            ULongFromUser = RtlReadULongFromUser(AllocationList);
            v94 = ULongFromUser;
          }
          else
          {
            ULongFromUser = *AllocationList;
          }
          DXGPROCESS::GetAllocationUnsafe((__int64)v31, (DXGALLOCATIONREFERENCE *)&v81, ULongFromUser);
          v45 = v81;
          if ( !v81 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 605;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid hAllocation specified: 0x%I64x, returning 0x%I64x",
              v81,
              0LL,
              0LL,
              0LL,
              0LL);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81);
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v97);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v102);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v86);
            if ( P != v100 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v101 = 0;
            PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>((__int64)&v114);
            goto LABEL_90;
          }
          v46 = *(_QWORD *)(v81 + 8);
          if ( v46 != v19 )
            break;
          if ( !v77 )
          {
            v47 = *(_QWORD *)(v81 + 24);
            if ( !v47 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 624;
              v45 = v81;
            }
            v48 = v90;
            *v90 = v47;
            v90 = v48 + 1;
          }
          v49 = v91;
          if ( *v91 )
          {
            ExReleaseRundownProtection(*v91 + 11);
            v45 = v81;
          }
          *v49 = v45;
          v81 = 0LL;
          v91 = (struct _EX_RUNDOWN_REF **)(v49 + 1);
          ++AllocationList;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81);
        }
        WdLogSingleEntry2(2LL, v19, v46);
        WdLogGlobalForLineNumber = 613;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch between paging queue device and allocation device. Paging Queue Device: 0x%I64x, Allocation Device: 0x%I64x",
          v19,
          *(_QWORD *)(v81 + 8),
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81);
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v97);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v102);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v86);
        if ( P != v100 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v101 = 0;
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>((__int64)&v114);
        DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v82);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
        if ( !v80 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
          return 3221225485LL;
LABEL_156:
        McTemplateK0q_EtwWriteTransfer(v52, (__int64)&EventProfilerExit);
        return 3221225485LL;
      }
      v23 = v22 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v22 + 4) )
        goto LABEL_31;
      v23 = v22 + 4;
    }
    KeWaitForSingleObject(v23, Executive, 0, 0, 0LL);
    goto LABEL_31;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 545;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate storage to validate input",
    545LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v100 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v101 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>((__int64)&v114);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v82);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
  if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v74, (__int64)&EventProfilerExit);
  return 3221225495LL;
}
