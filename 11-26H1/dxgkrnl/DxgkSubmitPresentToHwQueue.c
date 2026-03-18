/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x1402B6190
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1400111D0 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x140033220 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x14003C470 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x14003D504 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x140045444 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x140045C28 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x14005C010 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140192DA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     RtlWriteUCharToUser @ 0x1401967C8 (RtlWriteUCharToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1402B5714 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     _DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE @ 0x1402B8408 (_DxgkSubmitPresentToHwQueue_--_3_--ENSURE_CONTEXT_DEREFERENCE--_ENSURE_CONTEXT_DEREFERENCE.c)
 *     _DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1402BD89C (_DxgkPresent_--_3_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 */

__int64 __fastcall DxgkSubmitPresentToHwQueue(__int64 a1)
{
  int v2; // r12d
  struct _LOOKASIDE_LIST_EX *Global; // rax
  _DWORD *v4; // rax
  unsigned __int64 v5; // r15
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbx
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  struct DXGDEVICE *v21; // rdx
  _QWORD *v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // r10d
  unsigned int i; // edx
  __int64 v26; // r9
  int v27; // edx
  struct DXGADAPTER *v28; // rcx
  __int64 v29; // r9
  char *v30; // rcx
  struct DXGDEVICE *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct _LOOKASIDE_LIST_EX *v35; // rax
  struct DXGPROCESS *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 CurrentProcess; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  struct _LOOKASIDE_LIST_EX *v47; // rax
  __int64 v48; // rax
  const wchar_t *v49; // r9
  struct DXGPROCESS *v50; // rbx
  unsigned int v51; // eax
  __int64 v52; // r8
  unsigned int v53; // ecx
  int v54; // ecx
  signed __int64 v55; // rax
  ADAPTER_RENDER **v56; // rcx
  signed __int64 v57; // rtt
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  struct _LOOKASIDE_LIST_EX *v61; // rax
  struct DXGPROCESS *v62; // r15
  __int64 v63; // rcx
  unsigned int *v64; // r8
  unsigned int v65; // r11d
  __int64 v66; // rax
  __int64 v67; // r9
  int v68; // r8d
  __int64 v69; // r8
  _QWORD *v70; // r9
  char *v71; // rcx
  _QWORD *v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rbx
  unsigned int *v75; // rdx
  __int64 v76; // rbx
  unsigned int *v77; // rcx
  __int64 v78; // rcx
  struct CWin32kLocks *v79; // [rsp+20h] [rbp-308h]
  struct CWin32kLocks *v80; // [rsp+20h] [rbp-308h]
  int v81; // [rsp+28h] [rbp-300h]
  int v82; // [rsp+28h] [rbp-300h]
  int v83; // [rsp+30h] [rbp-2F8h]
  int v84; // [rsp+30h] [rbp-2F8h]
  int v85; // [rsp+38h] [rbp-2F0h]
  int v86; // [rsp+38h] [rbp-2F0h]
  int v87; // [rsp+40h] [rbp-2E8h]
  int v88; // [rsp+40h] [rbp-2E8h]
  struct _PRESENT_REDIRECTED_PARAMS *v89; // [rsp+48h] [rbp-2E0h]
  char *v90; // [rsp+50h] [rbp-2D8h]
  int v91; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v92; // [rsp+68h] [rbp-2C0h]
  __int64 v93; // [rsp+70h] [rbp-2B8h]
  int *v94; // [rsp+78h] [rbp-2B0h]
  char v95; // [rsp+80h] [rbp-2A8h]
  int AllocationInfo; // [rsp+88h] [rbp-2A0h] BYREF
  __int64 v97; // [rsp+90h] [rbp-298h] BYREF
  PVOID P; // [rsp+98h] [rbp-290h]
  _BYTE v99[32]; // [rsp+A0h] [rbp-288h] BYREF
  unsigned int v100; // [rsp+C0h] [rbp-268h]
  PVOID v101; // [rsp+C8h] [rbp-260h]
  _BYTE v102[32]; // [rsp+D0h] [rbp-258h] BYREF
  unsigned int v103; // [rsp+F0h] [rbp-238h]
  struct DXGPROCESS *Current; // [rsp+F8h] [rbp-230h]
  struct DXGDEVICE *v105; // [rsp+100h] [rbp-228h] BYREF
  int v106; // [rsp+108h] [rbp-220h]
  struct DXGDEVICE *v107; // [rsp+110h] [rbp-218h] BYREF
  _BYTE v108[16]; // [rsp+118h] [rbp-210h] BYREF
  unsigned int v109; // [rsp+128h] [rbp-200h]
  struct DXGDEVICE *v110; // [rsp+130h] [rbp-1F8h] BYREF
  struct DXGADAPTER *v111; // [rsp+138h] [rbp-1F0h]
  unsigned __int64 v112; // [rsp+140h] [rbp-1E8h] BYREF
  unsigned __int64 v113; // [rsp+148h] [rbp-1E0h] BYREF
  DXGADAPTER *v114; // [rsp+150h] [rbp-1D8h]
  char v115; // [rsp+158h] [rbp-1D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v116[2]; // [rsp+160h] [rbp-1C8h] BYREF
  void *Src; // [rsp+170h] [rbp-1B8h]
  _QWORD v118[6]; // [rsp+178h] [rbp-1B0h] BYREF
  char v119; // [rsp+1A8h] [rbp-180h]
  _BYTE v120[24]; // [rsp+1B0h] [rbp-178h] BYREF
  _BYTE v121[24]; // [rsp+1C8h] [rbp-160h] BYREF
  _BYTE v122[80]; // [rsp+1E0h] [rbp-148h] BYREF
  PVOID Pool2; // [rsp+230h] [rbp-F8h]
  _BYTE v124[16]; // [rsp+238h] [rbp-F0h] BYREF
  unsigned int v125; // [rsp+248h] [rbp-E0h]
  _BYTE v126[24]; // [rsp+250h] [rbp-D8h] BYREF
  DXGADAPTER *v127; // [rsp+268h] [rbp-C0h]

  Src = (void *)a1;
  v2 = -1073741811;
  AllocationInfo = -1073741811;
  Global = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
  v4 = ExAllocateFromLookasideListEx(Global + 12);
  v5 = (unsigned __int64)v4;
  if ( !v4 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2796;
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
  v112 = v5;
  v92 = 0LL;
  v91 = 2020;
  v94 = &AllocationInfo;
  v95 = 0;
  v93 = v5 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v5 & -(__int64)(bTracingEnabled != 0), (__int64)&EventProfilerEnter);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v91, 2020);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 2824;
    v43 = PsGetCurrentProcess(v42);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x, returning 0x%I64x",
      v43,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_123;
  }
  Pool2 = 0LL;
  v125 = 0;
  P = 0LL;
  v100 = 0;
  RtlCopyFromUser((void *)v5, (void *)(a1 + 8), 0x5D8uLL);
  v7 = *(_DWORD *)(v5 + 92);
  v8 = v7 + 1;
  v109 = v7 + 1;
  v9 = v8;
  if ( v7 > 0x40 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2843;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SubmitPresentToHwQueue passed a wrong number of broadcast contexts 0x%d",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v99 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v100 = 0;
    if ( Pool2 != v124 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v125 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
    v19 = v93;
    if ( v95 )
    {
      if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v16,
          v18,
          *(_DWORD *)v93,
          *(_DWORD *)(v93 + 56),
          *(_QWORD *)(v93 + 80),
          *(_QWORD *)(v93 + 88),
          *(_DWORD *)(v93 + 1096),
          *v94);
    }
    else if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      v90 = (char *)*(unsigned int *)(v93 + 24);
      v89 = (struct _PRESENT_REDIRECTED_PARAMS *)*(unsigned int *)(v93 + 20);
      v88 = *v94;
      v86 = *(_DWORD *)(v93 + 88);
      v84 = *(_DWORD *)(v93 + 84);
      v82 = *(_DWORD *)(v93 + 16);
      v80 = *(struct CWin32kLocks **)(v93 + 8);
      McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
    }
    if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v112, v16, v18, v19, v80, v82, v84, v86, v88, v89, v90);
    return 3221225485LL;
  }
  if ( (unsigned int)v8 <= 4 )
  {
    Pool2 = v124;
    memset(v124, 0, 4 * v8);
LABEL_9:
    v125 = v8;
    v10 = Pool2;
    v9 = (unsigned int)v8;
    goto LABEL_10;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v8 >= 4 )
  {
    Pool2 = (PVOID)ExAllocatePool2(256LL, 4 * v8, 1265072196LL);
    goto LABEL_9;
  }
  v10 = 0LL;
LABEL_10:
  if ( !v10 )
    goto LABEL_21;
  if ( (unsigned int)v8 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
    {
LABEL_21:
      if ( P != v99 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v100 = 0;
      if ( Pool2 != v124 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
      v125 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
      v14 = v93;
      if ( v95 )
      {
        if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v11,
            v13,
            *(_DWORD *)v93,
            *(_DWORD *)(v93 + 56),
            *(_QWORD *)(v93 + 80),
            *(_QWORD *)(v93 + 88),
            *(_DWORD *)(v93 + 1096),
            *v94);
      }
      else if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        v90 = (char *)*(unsigned int *)(v93 + 24);
        v89 = (struct _PRESENT_REDIRECTED_PARAMS *)*(unsigned int *)(v93 + 20);
        v87 = *v94;
        v85 = *(_DWORD *)(v93 + 88);
        v83 = *(_DWORD *)(v93 + 84);
        v81 = *(_DWORD *)(v93 + 16);
        v79 = *(struct CWin32kLocks **)(v93 + 8);
        McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
      }
      if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
      DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v112, v11, v13, v14, v79, v81, v83, v85, v87, v89, v90);
      return 3221225495LL;
    }
    P = (PVOID)ExAllocatePool2(256LL, 8 * v9, 1265072196LL);
  }
  else
  {
    P = v99;
    if ( (_DWORD)v8 )
      memset(v99, 0, 8 * v9);
  }
  v100 = v8;
  if ( !P )
    goto LABEL_21;
  v107 = 0LL;
  RtlCopyFromUser(&v107, Src, 8uLL);
  RtlCopyFromUser(Pool2, v107, 4 * v9);
  v20 = 0LL;
  v97 = 0LL;
  if ( (*(_DWORD *)(v5 + 88) & 0x10000000) == 0 )
    goto LABEL_56;
  v50 = Current;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v121, (struct _KTHREAD **)Current);
  v51 = (*(_DWORD *)(v5 + 1448) >> 6) & 0xFFFFFF;
  if ( v51 >= *((_DWORD *)v50 + 74) )
    goto LABEL_190;
  v52 = *((_QWORD *)v50 + 35);
  v53 = *(_DWORD *)(v52 + 16LL * v51 + 8);
  if ( *(_DWORD *)(v5 + 1448) >> 30 != ((v53 >> 5) & 3) )
    goto LABEL_190;
  if ( (v53 & 0x2000) != 0 )
    goto LABEL_190;
  v54 = v53 & 0x1F;
  if ( !v54 )
    goto LABEL_190;
  if ( v54 != 7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_190:
    v20 = 0LL;
    goto LABEL_165;
  }
  v20 = *(_QWORD *)(v52 + 16LL * v51);
LABEL_165:
  v97 = v20;
  if ( !v20 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v121);
    goto LABEL_278;
  }
  _m_prefetchw((const void *)(v20 + 32));
  v55 = *(_QWORD *)(v20 + 32);
  do
  {
    if ( !v55 )
      break;
    v57 = v55;
    v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 32), v55 + 1, v55);
  }
  while ( v57 != v55 );
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v121);
  v107 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v110, *(_DWORD *)v5, (struct _KTHREAD **)Current, &v107);
  if ( !v107 )
  {
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v110);
    goto LABEL_278;
  }
  AllocationInfo = PreIndirectPresentReadAllocationInfo(
                     Current,
                     (struct _EX_RUNDOWN_REF *)v107,
                     *(_DWORD *)(v5 + 20),
                     (struct INDIRECT_RESOURCE_INFO *)(v5 + 1516));
  if ( AllocationInfo < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2911;
  }
  v56 = (ADAPTER_RENDER **)v110;
  if ( v110 && _InterlockedExchangeAdd64((volatile signed __int64 *)v110 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(v56[2], (struct DXGDEVICE *)v56);
LABEL_56:
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v108,
    *(_DWORD *)Pool2,
    (struct _KTHREAD **)Current,
    (struct DXGHWQUEUE **)P,
    0,
    1);
  if ( !*(_QWORD *)P )
  {
    v62 = Current;
    WdLogSingleEntry3(2LL, Current, *(unsigned int *)Pool2, -1073741811LL);
    WdLogGlobalForLineNumber = 2919;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)v62,
      *(unsigned int *)Pool2,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_277;
  }
  *(_QWORD *)(v5 + 1504) = P;
  if ( (*(_DWORD *)(v5 + 88) & 0x10000000) == 0 )
    v20 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_BYTE *)(v20 + 434) && *(_DWORD *)(v5 + 92) )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v108);
    DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE(&v97);
    if ( P != v99 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v100 = 0;
    if ( Pool2 != v124 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v125 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
    v40 = v93;
    if ( v95 )
    {
      if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v37,
          v39,
          *(_DWORD *)v93,
          *(_DWORD *)(v93 + 56),
          *(_QWORD *)(v93 + 80),
          *(_QWORD *)(v93 + 88),
          *(_DWORD *)(v93 + 1096),
          *v94);
    }
    else if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      v90 = (char *)*(unsigned int *)(v93 + 24);
      v89 = (struct _PRESENT_REDIRECTED_PARAMS *)*(unsigned int *)(v93 + 20);
      v87 = *v94;
      v85 = *(_DWORD *)(v93 + 88);
      v83 = *(_DWORD *)(v93 + 84);
      v81 = *(_DWORD *)(v93 + 16);
      v79 = *(struct CWin32kLocks **)(v93 + 8);
      McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
    }
    if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v63, (__int64)&EventProfilerExit);
    v2 = -1073741822;
    goto LABEL_294;
  }
  v21 = *(struct DXGDEVICE **)(v20 + 16);
  v107 = v21;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL) + 3016LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2936;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_277;
  }
  v105 = v21;
  v106 = 0;
  if ( v21 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    v107 = v105;
  }
  v22 = 0LL;
  v101 = 0LL;
  v103 = 0;
  v23 = v109;
  if ( v109 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v109 < 8 )
      goto LABEL_68;
    v22 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v109, 1265072196LL);
    v101 = v22;
    goto LABEL_66;
  }
  v22 = v102;
  v101 = v102;
  if ( v109 )
  {
    memset(v102, 0, 8LL * v109);
    v22 = v101;
LABEL_66:
    v23 = v109;
  }
  v103 = v23;
LABEL_68:
  if ( !v22 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2948;
LABEL_103:
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    v101 = 0LL;
    v103 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v108);
    DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE(&v97);
    if ( P != v99 && P )
      ExFreePoolWithTag(P, 0);
    v100 = 0;
    P = 0LL;
    if ( Pool2 != v124 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v125 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
    v40 = v93;
    if ( v95 )
    {
      if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v37,
          v39,
          *(_DWORD *)v93,
          *(_DWORD *)(v93 + 56),
          *(_QWORD *)(v93 + 80),
          *(_QWORD *)(v93 + 88),
          *(_DWORD *)(v93 + 1096),
          *v94);
    }
    else if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      v90 = (char *)*(unsigned int *)(v93 + 24);
      v89 = (struct _PRESENT_REDIRECTED_PARAMS *)*(unsigned int *)(v93 + 20);
      v87 = *v94;
      v85 = *(_DWORD *)(v93 + 88);
      v83 = *(_DWORD *)(v93 + 84);
      v81 = *(_DWORD *)(v93 + 16);
      v79 = *(struct CWin32kLocks **)(v93 + 8);
      McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
    }
    if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit);
    v2 = -1073741801;
    goto LABEL_294;
  }
  *v22 = v20;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v120, (struct _KTHREAD **)Current);
  v116[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)v101;
  v24 = 0;
  LODWORD(v111) = 0;
  for ( i = 1; ; ++i )
  {
    LODWORD(v110) = i;
    if ( v24 >= *(_DWORD *)(v5 + 92) )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v120);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v118,
        v101,
        v103,
        v26,
        1);
      if ( v119 )
      {
        if ( v118[0] )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 3025;
LABEL_272:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v118);
          goto LABEL_273;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3020;
        goto LABEL_102;
      }
      *(_QWORD *)(v5 + 1496) = v101;
      *(_BYTE *)(v5 + 1512) = 1;
      v111 = *(struct DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 1896LL);
      LODWORD(v110) = DXGCONTEXT::CopyPresentArgs((DXGCONTEXT *)v20, (struct _D3DKMT_PRESENT *)v5, Current);
      AllocationInfo = (int)v110;
      if ( (int)v110 < 0 )
      {
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v118);
        if ( v101 != v102 && v101 )
          ExFreePoolWithTag(v101, 0);
        v101 = 0LL;
        v103 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v108);
        DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE(&v97);
        if ( P != v99 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v100 = 0;
        if ( Pool2 != v124 && Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
        v125 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
        if ( v95 )
        {
          if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v58,
              v60,
              *(_DWORD *)v93,
              *(_DWORD *)(v93 + 56),
              *(_QWORD *)(v93 + 80),
              *(_QWORD *)(v93 + 88),
              *(_DWORD *)(v93 + 1096),
              *v94);
        }
        else if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
        }
        if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v59, (__int64)&EventProfilerExit);
        v61 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
        ExFreeToLookasideListEx(v61 + 12, (PVOID)v5);
        return (unsigned int)v110;
      }
      v27 = *(_DWORD *)(v5 + 88);
      if ( (v27 & 0x10000000) == 0 )
      {
        v28 = v111;
        if ( !v111 )
          goto LABEL_120;
        if ( (*((_DWORD *)v111 + 111) & 0x100) != 0 && (v27 & 0x18000) == 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 3062;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"No non-direct display presents can go to indirect display device",
            3062LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_272;
        }
LABEL_76:
        if ( v28 )
        {
LABEL_77:
          CWin32kLocks::CWin32kLocks(
            (CWin32kLocks *)v122,
            *((const struct _DXGKWIN32KENG_INTERFACE *const *)Current + 11),
            v28);
          v114 = *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL);
          v115 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v126, *(_QWORD *)(v20 + 16), 2, v29, 0);
          v2 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v126, 0LL);
          AllocationInfo = v2;
          if ( v2 < 0 )
            goto LABEL_271;
          if ( (*(_DWORD *)(v5 + 88) & 0x200000) != 0 )
          {
            AllocationInfo = SubmitPresentHistoryTokenPreparation(
                               (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v113,
                               (struct COREDEVICEACCESS *)v126,
                               *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL),
                               (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 360),
                               *(void **)(v5 + 352),
                               (*(_DWORD *)(v5 + 88) & 0x10) != 0);
            if ( AllocationInfo >= 0 )
            {
              v2 = SubmitPresentHistoryToken(
                     (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 360),
                     (struct COREDEVICEACCESS *)v126,
                     (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v113,
                     (struct CWin32kLocks *)v122,
                     0,
                     0LL,
                     (struct DXGK_PRESENT_PARAMS *)v5,
                     0LL,
                     (struct DXGCONTEXT *)v20,
                     0LL,
                     0LL);
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 3104;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DxgkSubmitPresentToHwQueue failed, SubmitPresentHistoryTokenPreparation returned 0x%I64x",
                AllocationInfo,
                0LL,
                0LL,
                0LL,
                0LL);
              v2 = AllocationInfo;
            }
            goto LABEL_271;
          }
          v116[0] = 0LL;
          v116[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*(_QWORD *)(v20 + 16) + 16LL);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v116);
          if ( v116[0] )
          {
            AllocationInfo = DXGCONTEXT::Present(
                               (DXGCONTEXT *)v20,
                               (struct _D3DKMT_PRESENT *)v5,
                               (struct COREDEVICEACCESS *)v126,
                               (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v113,
                               (struct CWin32kLocks *)v122,
                               (struct DXGCONTEXT **)v101,
                               v116[0]);
            if ( AllocationInfo != -1071775482 )
            {
LABEL_81:
              CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v116);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v126);
              if ( v115 )
              {
                v115 = 0;
                v30 = (char *)v114 + 136;
                _InterlockedDecrement((volatile signed __int32 *)v114 + 38);
                ExReleasePushLockSharedEx(v30, 0LL);
                KeLeaveCriticalRegion();
                DXGADAPTER::ReleaseReference(v114);
              }
              if ( AllocationInfo >= 0 )
                RtlWriteUCharToUser((_BYTE *)Src + 1496, *(_BYTE *)(v5 + 1512));
              v31 = v107;
              CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v122);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v118);
              if ( v101 != v102 && v101 )
                ExFreePoolWithTag(v101, 0);
              v101 = 0LL;
              v103 = 0;
              if ( v31 && v106 )
              {
                ExReleaseResourceLite(*((PERESOURCE *)v31 + 17));
                KeLeaveCriticalRegion();
              }
              DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v108);
              DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE(&v97);
              if ( P != v99 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v100 = 0;
              if ( Pool2 != v124 && Pool2 )
                ExFreePoolWithTag(Pool2, 0);
              Pool2 = 0LL;
              v125 = 0;
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
              if ( v95 )
              {
                if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0qqxxqq_EtwWriteTransfer(
                    (REGHANDLE *)&DxgkControlGuid_Context,
                    v32,
                    v34,
                    *(_DWORD *)v93,
                    *(_DWORD *)(v93 + 56),
                    *(_QWORD *)(v93 + 80),
                    *(_QWORD *)(v93 + 88),
                    *(_DWORD *)(v93 + 1096),
                    *v94);
              }
              else if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
              {
                McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
              }
              if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit);
              v35 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
              ExFreeToLookasideListEx(v35 + 12, (PVOID)v5);
              v36 = DXGPROCESS::GetCurrent();
              DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v36 + 8) + 104LL));
              return (unsigned int)AllocationInfo;
            }
            if ( DXGADAPTER::IsCoreResourceSharedOwner(v127)
              || (v2 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v126, 0LL), v2 >= 0) )
            {
              DXGDEVICE::CloseInternalCddPrimaryHandle(*(DXGDEVICE **)(v20 + 16), (struct COREDEVICEACCESS *)v126);
              goto LABEL_81;
            }
            CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v116);
LABEL_271:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v126);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
            CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v122);
            goto LABEL_272;
          }
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 3125;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate VidSchSubmitData",
            3125LL,
            0LL,
            0LL,
            0LL,
            0LL);
          CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v116);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v126);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
          CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v122);
LABEL_102:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v118);
          goto LABEL_103;
        }
LABEL_120:
        v28 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL);
        goto LABEL_77;
      }
      if ( v111 )
      {
        if ( (*((_DWORD *)v111 + 111) & 0x100) != 0 )
        {
          v28 = v111;
          goto LABEL_76;
        }
        WdLogSingleEntry0(2LL);
        v48 = 3052LL;
        v49 = L"Indirect Display present can only be used with a indirect display Dod driver";
      }
      else
      {
        WdLogSingleEntry0(2LL);
        v48 = 3046LL;
        v49 = L"Indirect Display present has to be on a context associated with Dod";
      }
      WdLogGlobalForLineNumber = v48;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v49, v48, 0LL, 0LL, 0LL, 0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v118);
      if ( v101 != v102 && v101 )
        ExFreePoolWithTag(v101, 0);
      v101 = 0LL;
      v103 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v108);
      DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE(&v97);
      if ( P != v99 && P )
        ExFreePoolWithTag(P, 0);
      v100 = 0;
      P = 0LL;
      if ( Pool2 != v124 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v125 = 0;
      Pool2 = 0LL;
LABEL_123:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
      if ( v95 )
      {
        if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v44,
            v46,
            *(_DWORD *)v93,
            *(_DWORD *)(v93 + 56),
            *(_QWORD *)(v93 + 80),
            *(_QWORD *)(v93 + 88),
            *(_DWORD *)(v93 + 1096),
            *v94);
      }
      else if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
      }
      if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit);
      v47 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx(v47 + 12, (PVOID)v5);
      return (unsigned int)v2;
    }
    if ( i >= v125 )
      v64 = (unsigned int *)Pool2;
    else
      v64 = (unsigned int *)((char *)Pool2 + 4 * i);
    v65 = *v64;
    v66 = (*v64 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v66 >= *((_DWORD *)Current + 74) )
      goto LABEL_231;
    v67 = *((_QWORD *)Current + 35);
    v68 = *(_DWORD *)(v67 + 16 * v66 + 8);
    if ( ((v65 >> 25) & 0x60) != (*(_BYTE *)(v67 + 16 * v66 + 8) & 0x60) || (v68 & 0x2000) != 0 || (v68 & 0x1F) == 0 )
      goto LABEL_231;
    if ( (*(_BYTE *)(v67 + 16LL * ((v65 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 0xF )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      i = (unsigned int)v110;
      v24 = (unsigned int)v111;
LABEL_231:
      v69 = 0LL;
      goto LABEL_232;
    }
    v69 = *(_QWORD *)(v67 + 16LL * ((v65 >> 6) & 0xFFFFFF));
LABEL_232:
    v70 = i >= v100 ? P : (char *)P + 8 * i;
    *v70 = v69;
    v71 = (char *)P;
    v72 = i >= v100 ? P : (char *)P + 8 * i;
    if ( !*v72 )
      break;
    if ( i < v100 )
      v71 = (char *)P + 8 * i;
    *((_QWORD *)v101 + i) = *(_QWORD *)(*(_QWORD *)v71 + 16LL);
    v73 = *((_QWORD *)v101 + i);
    if ( !v73 || *(_QWORD *)(v73 + 16) != *(_QWORD *)(v20 + 16) )
    {
      v74 = v24;
      WdLogSingleEntry4(2LL, v20, *(unsigned int *)(v5 + 4LL * v24 + 96), v24, -1073741811LL);
      WdLogGlobalForLineNumber = 2994;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        v20,
        *(unsigned int *)(v5 + 4 * v74 + 96),
        v74,
        -1073741811LL,
        0LL);
      goto LABEL_249;
    }
    if ( *(_DWORD *)(*((_QWORD *)v116[0] + i) + 388LL) <= *(_DWORD *)(*((_QWORD *)v116[0] + v24) + 388LL) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3002;
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
      goto LABEL_249;
    }
    LODWORD(v111) = ++v24;
  }
  if ( i >= v125 )
    v75 = (unsigned int *)Pool2;
  else
    v75 = (unsigned int *)((char *)Pool2 + 4 * i);
  v76 = v24 + 1;
  WdLogSingleEntry2(2LL, *v75, v76);
  WdLogGlobalForLineNumber = 2981;
  if ( (unsigned int)v76 >= v125 )
    v77 = (unsigned int *)Pool2;
  else
    v77 = (unsigned int *)((char *)Pool2 + 4 * v76);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DxgkSubmitPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d",
    *v77,
    (unsigned int)v76,
    0LL,
    0LL,
    0LL);
LABEL_249:
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v120);
LABEL_273:
  if ( v101 != v102 && v101 )
    ExFreePoolWithTag(v101, 0);
  v101 = 0LL;
  v103 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
LABEL_277:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v108);
LABEL_278:
  DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE(&v97);
  if ( P != v99 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v100 = 0;
  if ( Pool2 != v124 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  Pool2 = 0LL;
  v125 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
  v40 = v93;
  if ( v95 )
  {
    if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v37,
        v39,
        *(_DWORD *)v93,
        *(_DWORD *)(v93 + 56),
        *(_QWORD *)(v93 + 80),
        *(_QWORD *)(v93 + 88),
        *(_DWORD *)(v93 + 1096),
        *v94);
  }
  else if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
  {
    v90 = (char *)*(unsigned int *)(v93 + 24);
    v89 = (struct _PRESENT_REDIRECTED_PARAMS *)*(unsigned int *)(v93 + 20);
    v87 = *v94;
    v85 = *(_DWORD *)(v93 + 88);
    v83 = *(_DWORD *)(v93 + 84);
    v81 = *(_DWORD *)(v93 + 16);
    v79 = *(struct CWin32kLocks **)(v93 + 8);
    McTemplateK0qpqqqqpp_EtwWriteTransfer((__int64)&DxgkControlGuid_Context);
  }
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v78, (__int64)&EventProfilerExit);
LABEL_294:
  DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v112, v37, v39, v40, v79, v81, v83, v85, v87, v89, v90);
  return (unsigned int)v2;
}
