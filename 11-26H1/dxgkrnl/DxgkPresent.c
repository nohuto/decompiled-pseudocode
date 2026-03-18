/*
 * XREFs of DxgkPresent @ 0x140323BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z @ 0x14000C074 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1400111D0 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x140016630 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x14003C470 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14003D6E8 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x140045C28 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x14005C010 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x14007C840 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140192DA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1402B5714 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     _DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1402BD89C (_DxgkPresent_--_3_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x140323530 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x140323610 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 */

__int64 __fastcall DxgkPresent(char *Src)
{
  char CurrentThreadPreviousMode; // si
  struct _LOOKASIDE_LIST_EX *Global; // rax
  unsigned int *v4; // rax
  unsigned int *v5; // r14
  unsigned int *v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rdi
  struct DXGPROCESS *v12; // r13
  __int64 v13; // rcx
  struct DXGCONTEXT *v14; // rdi
  __int64 v15; // rsi
  struct _KEVENT *v16; // rbx
  struct _KEVENT *v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rbx
  _QWORD *Pool2; // rcx
  _QWORD *v21; // rbx
  unsigned int i; // esi
  __int64 v23; // r9
  __int64 v24; // r12
  unsigned int v25; // eax
  int v26; // ebx
  unsigned int v27; // ecx
  struct DXGADAPTER *v28; // r8
  DXGADAPTER *v29; // rbx
  __int64 v30; // r9
  __int64 v31; // rcx
  int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned int *v35; // rsi
  __int64 v36; // rax
  int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rax
  int v40; // ecx
  unsigned int v41; // r8d
  bool v42; // al
  int v43; // eax
  __int64 v44; // rcx
  char *v45; // rcx
  struct DXGCONTEXT *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct _LOOKASIDE_LIST_EX *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  struct DXGPROCESS *v54; // rdi
  struct DXGPROCESS *v55; // rax
  __int64 v56; // rdi
  PLIST_ENTRY j; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  struct _LOOKASIDE_LIST_EX *v65; // rax
  DXGPRESENT *v66; // rax
  DXGADAPTER *v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  char *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  struct _LOOKASIDE_LIST_EX *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rbx
  struct DXGCONTEXT *v84; // rdx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *v87; // rax
  struct DXGTHREAD *v88; // rax
  struct _ETHREAD *v89; // rbx
  KSPIN_LOCK *v90; // rax
  __int64 v91; // rcx
  unsigned int v92; // r8d
  __int64 v93; // rax
  __int64 v94; // r9
  int v95; // edx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  DXGPRESENT *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  struct _LOOKASIDE_LIST_EX *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r8
  int *v114; // r9
  unsigned int v115; // ebx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  int *v120; // r9
  __int64 v121; // rdx
  __int64 v122; // r8
  PVOID v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // rbx
  int v134; // edi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v136; // r8
  int v137; // [rsp+60h] [rbp-248h] BYREF
  __int64 v138; // [rsp+68h] [rbp-240h]
  int *v139; // [rsp+70h] [rbp-238h]
  int *v140; // [rsp+78h] [rbp-230h]
  char v141; // [rsp+80h] [rbp-228h]
  int AllocationInfo; // [rsp+88h] [rbp-220h] BYREF
  PVOID P; // [rsp+90h] [rbp-218h]
  _BYTE v144[32]; // [rsp+98h] [rbp-210h] BYREF
  unsigned int v145; // [rsp+B8h] [rbp-1F0h]
  PVOID v146; // [rsp+C0h] [rbp-1E8h] BYREF
  DXGCONTEXT *v147; // [rsp+C8h] [rbp-1E0h] BYREF
  char v148; // [rsp+D0h] [rbp-1D8h]
  struct DXGCONTEXT *v149; // [rsp+D8h] [rbp-1D0h] BYREF
  __int64 v150; // [rsp+E0h] [rbp-1C8h] BYREF
  int v151; // [rsp+E8h] [rbp-1C0h]
  unsigned __int64 v152; // [rsp+F0h] [rbp-1B8h] BYREF
  DXGADAPTER *v153; // [rsp+F8h] [rbp-1B0h]
  char v154; // [rsp+100h] [rbp-1A8h]
  __int128 v155; // [rsp+110h] [rbp-198h] BYREF
  struct DXGPROCESS *v156; // [rsp+120h] [rbp-188h]
  int v157; // [rsp+128h] [rbp-180h]
  struct DXGPROCESS *v158; // [rsp+130h] [rbp-178h]
  _QWORD v159[6]; // [rsp+138h] [rbp-170h] BYREF
  char v160; // [rsp+168h] [rbp-140h]
  char *v161; // [rsp+170h] [rbp-138h]
  _BYTE v162[80]; // [rsp+180h] [rbp-128h] BYREF
  char v163[8]; // [rsp+1D0h] [rbp-D8h] BYREF
  _BYTE v164[16]; // [rsp+1D8h] [rbp-D0h] BYREF
  DXGADAPTER *v165; // [rsp+1E8h] [rbp-C0h]
  char v166; // [rsp+1F0h] [rbp-B8h]
  __int64 v167; // [rsp+1F8h] [rbp-B0h]
  _BYTE v168[16]; // [rsp+218h] [rbp-90h] BYREF
  DXGADAPTER *v169; // [rsp+228h] [rbp-80h]
  char v170; // [rsp+230h] [rbp-78h]
  __int64 v171; // [rsp+238h] [rbp-70h]
  __int64 v172; // [rsp+258h] [rbp-50h]
  char v173; // [rsp+260h] [rbp-48h]

  v161 = Src;
  AllocationInfo = -1073741811;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Global = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
  v4 = (unsigned int *)ExAllocateFromLookasideListEx(Global + 12);
  v5 = v4;
  if ( !v4 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1276;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for present parameters. Returing 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  memset(v4, 0, 0x5F8uLL);
  v146 = v5;
  v6 = 0LL;
  if ( bTracingEnabled )
    v6 = v5;
  v138 = 0LL;
  v137 = 2020;
  v140 = &AllocationInfo;
  v141 = 0;
  v139 = (int *)v6;
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)&AllocationInfo, (__int64)&EventProfilerEnter);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v137, 2020);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_9;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    v158 = v12;
    if ( !v12 )
      goto LABEL_9;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v87 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::SearchDxgThreadList(v87, CurrentThread);
    v158 = v12;
    if ( !v12 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
      v12 = v11;
      v158 = v11;
    }
  }
  v156 = v12;
  if ( !v12 )
  {
    v59 = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, -1073741811LL, v59);
    WdLogGlobalForLineNumber = 1305;
    v61 = PsGetCurrentProcess(v60);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v61,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v62,
          v64,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
    }
    if ( (qword_1401664C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_104;
LABEL_149:
    McTemplateK0q_EtwWriteTransfer(v63, (__int64)&EventProfilerExit);
LABEL_104:
    v65 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx(v65 + 12, v5);
    return 3221225485LL;
  }
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(v5, Src, 0x5D8uLL);
  else
    memmove(v5, Src, 0x5D8uLL);
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v12 + 11) + 416LL))() && (v5[22] & 0x8000) == 0 )
  {
    AllocationInfo = -1071775738;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v69,
          v71,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
    }
    if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v70, (__int64)&EventProfilerExit);
    DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v146);
    return 3223191558LL;
  }
  if ( (v5[22] & 0x10000000) != 0 )
  {
    v149 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155, *v5, (struct _KTHREAD **)v12, &v149, 0, 1);
    v83 = v5[362];
    v84 = v149;
    if ( !v149 )
    {
      v111 = PsGetCurrentProcess(v82);
      WdLogSingleEntry3(3LL, -1073741811LL, v111, v83);
      WdLogGlobalForLineNumber = 1351;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
      v114 = v139;
      if ( !v141 )
      {
        if ( !v139 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
          goto LABEL_275;
LABEL_274:
        McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
        goto LABEL_275;
      }
      goto LABEL_278;
    }
    *v5 = v83;
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       v12,
                       *((struct _EX_RUNDOWN_REF **)v84 + 2),
                       v5[5],
                       (struct INDIRECT_RESOURCE_INFO *)(v5 + 379));
    if ( AllocationInfo < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1362;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
  }
  v149 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147, *v5, (struct _KTHREAD **)v12, &v149, 0, 1);
  v14 = v149;
  if ( !v149 )
  {
    v115 = *v5;
    v116 = PsGetCurrentProcess(v13);
    WdLogSingleEntry3(3LL, -1073741811LL, v116, v115);
    WdLogGlobalForLineNumber = 1374;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    v114 = v139;
    if ( !v141 )
    {
LABEL_282:
      if ( !v114 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
        goto LABEL_275;
      goto LABEL_274;
    }
LABEL_278:
    if ( v114 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v112,
        v113,
        *v114,
        v114[14],
        *((_QWORD *)v114 + 10),
        *((_QWORD *)v114 + 11),
        v114[274],
        *v140);
LABEL_275:
    if ( (qword_1401664C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_332;
    goto LABEL_366;
  }
  if ( *((_BYTE *)v149 + 434) && v5[23] )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v101,
          v103,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
    }
    if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v102, (__int64)&EventProfilerExit);
    DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v146);
    return 3221225474LL;
  }
  if ( (*((_DWORD *)v149 + 98) & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1387;
    goto LABEL_295;
  }
  v15 = *((_QWORD *)v149 + 2);
  v149 = (struct DXGCONTEXT *)v15;
  v16 = *(struct _KEVENT **)(v15 + 16);
  if ( ((__int64)v16->Header.WaitListHead.Blink[188].Blink & 8) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1393;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      *v5,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_295;
  }
  v150 = v15;
  v151 = 0;
  if ( v15 )
  {
    if ( *(_DWORD *)(v15 + 464) == 2 )
    {
      if ( KeReadStateEvent(v16 + 5) )
        goto LABEL_25;
      v17 = v16 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v16 + 4) )
      {
LABEL_25:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v91, (__int64)"g");
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
        }
        v151 = 1;
        goto LABEL_27;
      }
      v17 = v16 + 4;
    }
    KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
    goto LABEL_25;
  }
LABEL_27:
  v18 = v5[23];
  if ( v18 > 0x40 )
  {
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
    WdLogGlobalForLineNumber = 1410;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
LABEL_295:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    v114 = v139;
    if ( v141 )
      goto LABEL_278;
    goto LABEL_282;
  }
  v19 = v18 + 1;
  Pool2 = 0LL;
  P = 0LL;
  v145 = 0;
  if ( (unsigned int)v19 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v19 < 8 )
      goto LABEL_32;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v19, 1265072196LL);
    P = Pool2;
  }
  else
  {
    Pool2 = v144;
    P = v144;
    if ( (_DWORD)v19 )
    {
      memset(v144, 0, 8LL * (unsigned int)v19);
      Pool2 = P;
    }
  }
  v145 = v19;
LABEL_32:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1419;
    if ( P != v144 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v145 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    v120 = v139;
    if ( !v141 )
    {
      if ( !v139 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
        goto LABEL_306;
LABEL_305:
      McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
LABEL_306:
      if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v118, (__int64)&EventProfilerExit);
      DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v146);
      return 3221225495LL;
    }
    goto LABEL_310;
  }
  *Pool2 = v14;
  v21 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)&v152, (struct _KTHREAD **)v12);
  for ( i = 0; ; i = v97 )
  {
    if ( i >= v5[23] )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v152);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v159,
        P,
        v145,
        v23,
        1);
      if ( !v160 )
      {
        *((_QWORD *)v5 + 187) = P;
        *((_BYTE *)v5 + 1512) = 1;
        v24 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 1896LL);
        v25 = v5[22];
        if ( (v25 & 0x8000) != 0 )
        {
          if ( (v25 & 0x400000) != 0 || *((_QWORD *)v5 + 180) )
          {
            WdLogSingleEntry4(2LL, -1073741811LL, v14, v5[22], *((_QWORD *)v5 + 180));
            WdLogGlobalForLineNumber = 492;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
              -1073741811LL,
              (__int64)v14,
              v5[22],
              *((_QWORD *)v5 + 180),
              0LL);
            v26 = -1073741811;
          }
          else
          {
            v26 = 0;
          }
        }
        else
        {
          v66 = (DXGPRESENT *)*((_QWORD *)v14 + 19);
          if ( v66
            || ((v100 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL)) == 0LL
              ? (v66 = 0LL)
              : (v66 = DXGPRESENT::DXGPRESENT(v100, *(_DWORD *)(*((_QWORD *)v14 + 2) + 1904LL))),
                (*((_QWORD *)v14 + 19) = v66) != 0LL) )
          {
            *((_BYTE *)v14 + 435) = 1;
            v26 = DXGPRESENT::CopyPresentArgs(v66, v14, (struct _D3DKMT_PRESENT *)v5);
          }
          else
          {
            WdLogSingleEntry4(
              6LL,
              -1073741801LL,
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL),
              v12,
              v14);
            WdLogGlobalForLineNumber = 507;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
              -1073741801LL,
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL),
              (__int64)v12,
              (__int64)v14,
              0LL);
            v26 = -1073741801;
          }
        }
        AllocationInfo = v26;
        if ( v26 < 0 )
        {
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
          if ( P != v144 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v145 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
          if ( v141 )
          {
            if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qqxxqq_EtwWriteTransfer(
                (REGHANDLE *)&DxgkControlGuid_Context,
                v124,
                v126,
                *v139,
                v139[14],
                *((_QWORD *)v139 + 10),
                *((_QWORD *)v139 + 11),
                v139[274],
                *v140);
          }
          else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          {
            McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
          }
          if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v125, (__int64)&EventProfilerExit);
          goto LABEL_396;
        }
        v27 = v5[22];
        if ( (v27 & 0x10000000) == 0 )
        {
          if ( !v24 )
          {
            v28 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL);
LABEL_45:
            CWin32kLocks::CWin32kLocks(
              (CWin32kLocks *)v162,
              *((const struct _DXGKWIN32KENG_INTERFACE *const *)v12 + 11),
              v28);
            v153 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL);
            _InterlockedIncrement64((volatile signed __int64 *)v153 + 3);
            v152 = -1LL;
            v29 = v153;
            KeEnterCriticalRegion();
            ExAcquirePushLockSharedEx((char *)v29 + 136, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)v29 + 38);
            v154 = 1;
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v163, *((_QWORD *)v14 + 2), 2, v30, 0);
            if ( !v173 )
              goto LABEL_46;
            if ( v170 )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, v168, 0LL, 0LL);
              WdLogGlobalForLineNumber = 7648;
            }
            v67 = v169;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v169 + 23) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v169 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v68, (__int64)"g");
                KeWaitForSingleObject((char *)v169 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v169, 0LL);
              v67 = v169;
            }
            v171 = 0LL;
            v170 = 1;
            if ( *((_DWORD *)v67 + 50) == 1 )
            {
LABEL_46:
              if ( v166 )
              {
                WdLogSingleEntry5(0LL, 275LL, 4LL, v164, 0LL, 0LL);
                WdLogGlobalForLineNumber = 7648;
              }
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v165 + 23) )
              {
                if ( !KeReadStateEvent((PRKEVENT)v165 + 2) )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0q_EtwWriteTransfer(v31, (__int64)"g");
                  KeWaitForSingleObject((char *)v165 + 48, Executive, 0, 0, 0LL);
                }
                DXGADAPTER::AcquireCoreResourceShared(v165, 0LL);
              }
              v167 = 0LL;
              v166 = 1;
              if ( *(_DWORD *)(v172 + 608) == 1 )
              {
                v32 = 0;
              }
              else
              {
                COREACCESS::Release((COREACCESS *)v164);
                if ( v173 )
                  COREACCESS::Release((COREACCESS *)v168);
                v32 = -1073741130;
              }
            }
            else
            {
              v170 = 0;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v169 + 23) )
                DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v169, 0LL);
              v171 = 0LL;
              v32 = -1073741130;
            }
            AllocationInfo = v32;
            if ( v32 < 0 )
            {
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v152);
              CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v162);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
              if ( P != v144 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v145 = 0;
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
              if ( v141 )
              {
                if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0qqxxqq_EtwWriteTransfer(
                    (REGHANDLE *)&DxgkControlGuid_Context,
                    v104,
                    v106,
                    *v139,
                    v139[14],
                    *((_QWORD *)v139 + 10),
                    *((_QWORD *)v139 + 11),
                    v139[274],
                    *v140);
              }
              else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
              {
                McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
              }
              if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v105, (__int64)&EventProfilerExit);
              v107 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
              ExFreeToLookasideListEx(v107 + 12, v5);
              return (unsigned int)v32;
            }
            v33 = *((_QWORD *)v14 + 2);
            if ( (v5[22] & 0x200000) == 0 )
            {
              v34 = *(_QWORD *)(v33 + 16);
              *((_QWORD *)&v155 + 1) = v34;
              v35 = (unsigned int *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v34 + 1424));
              *(_QWORD *)&v155 = v35;
              if ( v35 )
              {
                v36 = *(_QWORD *)(v34 + 16);
                v37 = *(int *)(v36 + 2776) < 0x2000 ? 1 : *(_DWORD *)(v36 + 296);
                v38 = *(int *)(v36 + 2776) >= 0x2000 || *(_BYTE *)(v36 + 3076)
                    ? *(_DWORD *)(v36 + 2984) * (72 * v37 + 224) + 8 * v37 + 624
                    : 1304;
                memset(v35, 0, v38);
                v39 = *(_QWORD *)(v34 + 16);
                v40 = *(int *)(v39 + 2776) < 0x2000 ? 1 : *(_DWORD *)(v39 + 296);
                v41 = *(_DWORD *)(v39 + 2984);
                v42 = *(int *)(v39 + 2776) >= 0x2000 || *(_BYTE *)(v39 + 3076);
                *((_BYTE *)v35 + 356) = v42;
                if ( v42 )
                {
                  v35[151] = v41;
                  v35[152] = v40;
                  v35[153] = v41 * (72 * v40 + 224) + 24;
                  v43 = v41 * (72 * v40 + 224) + 624;
                  v35[138] = v43;
                  v35[139] = v43 + 8 * v40;
                }
              }
              if ( v35 )
              {
                AllocationInfo = DXGCONTEXT::Present(
                                   v14,
                                   (struct _D3DKMT_PRESENT *)v5,
                                   (struct COREDEVICEACCESS *)v163,
                                   (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v152,
                                   (struct CWin32kLocks *)v162,
                                   (struct DXGCONTEXT **)P,
                                   (struct VIDSCH_SUBMIT_DATA_BASE *)v35);
                if ( AllocationInfo == -1071775482 )
                {
                  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v165) )
                  {
                    v157 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v163, 0LL);
                    if ( v157 < 0 )
                    {
                      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&v155);
                      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
                      if ( v154 )
                      {
                        v154 = 0;
                        v72 = (char *)v153 + 136;
                        _InterlockedDecrement((volatile signed __int32 *)v153 + 38);
                        ExReleasePushLockSharedEx(v72, 0LL);
                        KeLeaveCriticalRegion();
                        DXGADAPTER::ReleaseReference(v153);
                      }
                      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v162);
                      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
                      if ( P != v144 && P )
                        ExFreePoolWithTag(P, 0);
                      P = 0LL;
                      v145 = 0;
                      if ( v149 && v151 )
                      {
                        ExReleaseResourceLite(*((PERESOURCE *)v149 + 17));
                        KeLeaveCriticalRegion();
                      }
                      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
                      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
                      if ( v141 )
                      {
                        if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                          McTemplateK0qqxxqq_EtwWriteTransfer(
                            (REGHANDLE *)&DxgkControlGuid_Context,
                            v73,
                            v75,
                            *v139,
                            v139[14],
                            *((_QWORD *)v139 + 10),
                            *((_QWORD *)v139 + 11),
                            v139[274],
                            *v140);
                      }
                      else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                      {
                        McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
                      }
                      if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                        McTemplateK0q_EtwWriteTransfer(v74, (__int64)&EventProfilerExit);
                      v76 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
                      ExFreeToLookasideListEx(v76 + 12, v5);
                      return (unsigned int)v157;
                    }
                  }
                  DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v14 + 2), (struct COREDEVICEACCESS *)v163);
                }
                if ( v24 )
                {
                  v44 = *(_QWORD *)(v24 + 3160);
                  if ( v44 )
                  {
                    if ( (v5[22] & 4) != 0 && v5[4] < *(_DWORD *)(v44 + 96) )
                    {
                      v133 = MEMORY[0xFFFFF78000000320];
                      v134 = AllocationInfo;
                      *(_QWORD *)&v155 = v133 * KeQueryTimeIncrement();
                      DWORD2(v155) = v134;
                      HIDWORD(v155) = (*((_DWORD *)v158 + 102) & 4 | 0x10u) >> 2;
                      DISPLAY_SOURCE::RecordPresentDiagHistory(
                        *(_QWORD *)(*(_QWORD *)(v24 + 3160) + 128LL) + 4024LL * v5[4],
                        &v155);
                    }
                  }
                }
                if ( *((_BYTE *)v35 + 356) && (v35[84] || v35[154]) )
                {
                  IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline();
                  v136 = v35[84];
                  if ( IsEnabledDeviceUsageNoInline )
                  {
                    WdLogSingleEntry5(0LL, 275LL, 57LL, v35, v136, v35[154]);
                    WdLogGlobalForLineNumber = 8482;
                  }
                  else
                  {
                    WdLogSingleEntry3(2LL, v35, v136, v35[154]);
                    WdLogGlobalForLineNumber = 8490;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"dxgkrnl has detected a present queue reference leak.",
                      (__int64)v35,
                      v35[84],
                      v35[154],
                      0LL,
                      0LL);
                  }
                }
                ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v34 + 1424), v35);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
                if ( v154 )
                {
                  v154 = 0;
                  v45 = (char *)v153 + 136;
                  _InterlockedDecrement((volatile signed __int32 *)v153 + 38);
                  ExReleasePushLockSharedEx(v45, 0LL);
                  KeLeaveCriticalRegion();
                  DXGADAPTER::ReleaseReference(v153);
                }
                if ( AllocationInfo >= 0 )
                  RtlCopyToUser(v161 + 1488, v5 + 378, 1uLL);
                v46 = v149;
                CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v162);
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
                if ( P != v144 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v145 = 0;
                if ( v46 && v151 )
                {
                  ExReleaseResourceLite(*((PERESOURCE *)v46 + 17));
                  KeLeaveCriticalRegion();
                }
                if ( v147 && !v148 )
                  DXGCONTEXT::ReleaseReference(v147);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
                if ( v141 )
                {
                  if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0qqxxqq_EtwWriteTransfer(
                      (REGHANDLE *)&DxgkControlGuid_Context,
                      v47,
                      v49,
                      *v139,
                      v139[14],
                      *((_QWORD *)v139 + 10),
                      *((_QWORD *)v139 + 11),
                      v139[274],
                      *v140);
                }
                else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                {
                  McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
                }
                if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v48, (__int64)&EventProfilerExit);
                v50 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
                ExFreeToLookasideListEx(v50 + 12, v5);
                v52 = PsGetCurrentProcess(v51);
                v53 = PsGetProcessDxgProcess(v52);
                v54 = (struct DXGPROCESS *)v53;
                if ( !v53 || (*(_DWORD *)(v53 + 408) & 0x80) != 0 )
                {
                  v88 = DXGTHREAD::GetCurrent();
                  if ( v88 )
                  {
                    v55 = (struct DXGPROCESS *)*((_QWORD *)v88 + 3);
                    if ( v55 )
                      goto LABEL_95;
                  }
                  else
                  {
                    v89 = KeGetCurrentThread();
                    v90 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
                    v55 = DXGGLOBAL::SearchDxgThreadList(v90, v89);
                    if ( v55 )
                      goto LABEL_95;
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
                  }
                }
                v55 = v54;
LABEL_95:
                v56 = *((_QWORD *)v55 + 8);
                for ( j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v56 + 104), (PKSPIN_LOCK)(v56 + 120));
                      j;
                      j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v56 + 104), (PKSPIN_LOCK)(v56 + 120)) )
                {
                  ((void (__fastcall *)(struct _LIST_ENTRY *))j[1].Flink)(j[1].Blink);
                  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(j);
                }
                return (unsigned int)AllocationInfo;
              }
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 1581;
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Failed to allocate VidSchSubmitData",
                1581LL,
                0LL,
                0LL,
                0LL,
                0LL);
              CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&v155);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v152);
              CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v162);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
              if ( P != v144 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v145 = 0;
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
              v120 = v139;
              if ( v141 )
                goto LABEL_310;
LABEL_341:
              if ( !v120 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
                goto LABEL_306;
              goto LABEL_305;
            }
            v26 = SubmitPresentHistoryTokenPreparation(
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v152,
                    (struct COREDEVICEACCESS *)v163,
                    *(struct DXGADAPTER **)(*(_QWORD *)(v33 + 16) + 16LL),
                    (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 90),
                    *((void **)v5 + 44),
                    (v5[22] & 0x10) != 0);
            AllocationInfo = v26;
            if ( v26 >= 0 )
            {
              v26 = SubmitPresentHistoryToken(
                      (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 90),
                      (struct COREDEVICEACCESS *)v163,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v152,
                      (struct CWin32kLocks *)v162,
                      0,
                      0LL,
                      (struct DXGK_PRESENT_PARAMS *)v5,
                      0LL,
                      v14,
                      0LL,
                      0LL);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v152);
              CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v162);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
              if ( P != v144 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v145 = 0;
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
              if ( v141 )
              {
                if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0qqxxqq_EtwWriteTransfer(
                    (REGHANDLE *)&DxgkControlGuid_Context,
                    v130,
                    v132,
                    *v139,
                    v139[14],
                    *((_QWORD *)v139 + 10),
                    *((_QWORD *)v139 + 11),
                    v139[274],
                    *v140);
              }
              else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
              {
                McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
              }
              if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v131, (__int64)&EventProfilerExit);
            }
            else
            {
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v152);
              CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v162);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
              if ( P != v144 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v145 = 0;
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
              if ( v141 )
              {
                if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0qqxxqq_EtwWriteTransfer(
                    (REGHANDLE *)&DxgkControlGuid_Context,
                    v127,
                    v129,
                    *v139,
                    v139[14],
                    *((_QWORD *)v139 + 10),
                    *((_QWORD *)v139 + 11),
                    v139[274],
                    *v140);
              }
              else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
              {
                McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
              }
              if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v128, (__int64)&EventProfilerExit);
            }
LABEL_396:
            DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v146);
            return (unsigned int)v26;
          }
          if ( (*(_DWORD *)(v24 + 444) & 0x100) != 0 && (v27 & 0x18000) == 0 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 1526;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"No non-direct display presents can go to indirect display device",
              1526LL,
              0LL,
              0LL,
              0LL,
              0LL);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
            if ( P != v144 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v145 = 0;
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
            if ( v141 )
            {
              if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0qqxxqq_EtwWriteTransfer(
                  (REGHANDLE *)&DxgkControlGuid_Context,
                  v77,
                  v78,
                  *v139,
                  v139[14],
                  *((_QWORD *)v139 + 10),
                  *((_QWORD *)v139 + 11),
                  v139[274],
                  *v140);
            }
            else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
            {
              McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
            }
            if ( (qword_1401664C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
              goto LABEL_104;
            goto LABEL_149;
          }
LABEL_44:
          v28 = (struct DXGADAPTER *)v24;
          goto LABEL_45;
        }
        if ( v24 )
        {
          if ( (*(_DWORD *)(v24 + 444) & 0x100) != 0 )
            goto LABEL_44;
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1516;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Indirect Display present can only be used with a indirect display Dod driver",
            1516LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
          if ( P != v144 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v145 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
          if ( v141 )
          {
            if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qqxxqq_EtwWriteTransfer(
                (REGHANDLE *)&DxgkControlGuid_Context,
                v79,
                v81,
                *v139,
                v139[14],
                *((_QWORD *)v139 + 10),
                *((_QWORD *)v139 + 11),
                v139[274],
                *v140);
          }
          else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          {
            McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
          }
          if ( (qword_1401664C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
            goto LABEL_332;
LABEL_366:
          McTemplateK0q_EtwWriteTransfer(v80, (__int64)&EventProfilerExit);
          goto LABEL_332;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1510;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Indirect Display present has to be on a context associated with Dod",
          1510LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
        v123 = P;
        if ( P == v144 || !P )
        {
LABEL_294:
          P = 0LL;
          v145 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
          goto LABEL_295;
        }
LABEL_293:
        ExFreePoolWithTag(v123, 0);
        goto LABEL_294;
      }
      if ( v159[0] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1489;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
        v123 = P;
        if ( P == v144 || !P )
          goto LABEL_294;
        goto LABEL_293;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1484;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v159);
      if ( P != v144 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v145 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
      v120 = v139;
      if ( !v141 )
        goto LABEL_341;
LABEL_310:
      if ( v120 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v117,
          v119,
          *v120,
          v120[14],
          *((_QWORD *)v120 + 10),
          *((_QWORD *)v120 + 11),
          v120[274],
          *v140);
      goto LABEL_306;
    }
    v92 = v5[i + 24];
    v93 = (v92 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v93 >= *((_DWORD *)v12 + 74) )
      goto LABEL_255;
    v94 = *((_QWORD *)v12 + 35);
    v95 = *(_DWORD *)(v94 + 16 * v93 + 8);
    if ( ((v92 >> 25) & 0x60) != (*(_BYTE *)(v94 + 16 * v93 + 8) & 0x60) || (v95 & 0x2000) != 0 || (v95 & 0x1F) == 0 )
      goto LABEL_255;
    if ( (*(_BYTE *)(v94 + 16LL * ((v92 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_255:
      v96 = 0LL;
      goto LABEL_201;
    }
    v96 = *(_QWORD *)(v94 + 16LL * ((v92 >> 6) & 0xFFFFFF));
LABEL_201:
    v97 = i + 1;
    *((_QWORD *)P + v97) = v96;
    v98 = *((_QWORD *)P + v97);
    if ( !v98 )
      break;
    if ( (*(_DWORD *)(v98 + 392) & 8) != 0 )
      break;
    v99 = *((_QWORD *)v14 + 2);
    if ( *(_QWORD *)(v98 + 16) != v99 )
      break;
    if ( i
      && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v99 + 16) + 16LL))
      && *(_DWORD *)(v21[i] + 388LL) <= *(_DWORD *)(v21[i - 1] + 388LL) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1466;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Context physical adapters must be in the increasing adapter ordinal order, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v152);
      if ( P != v144 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v145 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
      if ( v141 )
      {
        if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v108,
            v110,
            *v139,
            v139[14],
            *((_QWORD *)v139 + 10),
            *((_QWORD *)v139 + 11),
            v139[274],
            *v140);
      }
      else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
      }
      if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        goto LABEL_331;
      goto LABEL_332;
    }
  }
  WdLogSingleEntry4(2LL, v14, v5[i + 24], i, -1073741811LL);
  WdLogGlobalForLineNumber = 1457;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v14,
    v5[i + 24],
    i,
    -1073741811LL,
    0LL);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v152);
  if ( P != v144 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v145 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v150);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v147);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
  if ( v141 )
  {
    if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v121,
        v122,
        *v139,
        v139[14],
        *((_QWORD *)v139 + 10),
        *((_QWORD *)v139 + 11),
        v139[274],
        *v140);
  }
  else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
  }
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
LABEL_331:
    McTemplateK0q_EtwWriteTransfer(v109, (__int64)&EventProfilerExit);
LABEL_332:
  DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v146);
  return 3221225485LL;
}
