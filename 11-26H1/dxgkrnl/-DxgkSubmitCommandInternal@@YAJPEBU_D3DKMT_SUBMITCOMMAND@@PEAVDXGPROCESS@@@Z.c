/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050
 * Callers:
 *     DxgkSubmitCommand @ 0x140373650 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14040A7B0 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x140016630 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x140017500 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x14004240C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x140192968 (-AllocateElements@-$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAUVIDMM_MULTI_ALLOC@@I.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x14028C21C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x140295E70 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x140296ACC (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x14038DD84 (--1-$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x140395050 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403C9104 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(struct _D3DKMT_SUBMITCOMMAND *Src, struct DXGPROCESS *a2)
{
  char CurrentThreadPreviousMode; // r12
  _D3DKMT_SUBMITCOMMAND *v5; // rsi
  D3DKMT_SUBMITCOMMANDFLAGS Flags; // ecx
  struct DXGCONTEXT *v7; // r14
  int v8; // eax
  __int64 BroadcastContextCount; // rbx
  __int64 v10; // rcx
  DXGCONTEXT **Pool2; // rdi
  int v12; // ecx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15; // r13
  __int64 v16; // rcx
  struct _KEVENT *v17; // rbx
  struct _KEVENT *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r9
  DXGADAPTER *v21; // rbx
  __int64 v22; // r9
  struct VIDMM_MULTI_ALLOC **v23; // rbx
  __int64 v24; // rcx
  int v25; // r15d
  __int64 v26; // r8
  unsigned __int64 PresentHistoryToken; // rdx
  D3DKMT_SUBMITCOMMANDFLAGS v28; // ecx
  char *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  bool v32; // zf
  __int64 v34; // rcx
  __int64 v35; // rcx
  bool v36; // zf
  DXGADAPTER *v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // ebx
  __int64 v40; // rcx
  __int64 i; // rbx
  __int64 v42; // rcx
  __int64 Elements; // rax
  UINT j; // eax
  D3DKMT_HANDLE *HistoryBufferArray; // rax
  unsigned int *v46; // rcx
  unsigned int v47; // r8d
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned int v52; // eax
  unsigned int *v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r9
  unsigned int v57; // edx
  bool v58; // al
  int v59; // r9d
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // ecx
  signed __int64 v64; // rax
  signed __int64 v65; // rtt
  PVOID v66; // rcx
  int v67; // [rsp+50h] [rbp-4A8h] BYREF
  __int64 v68; // [rsp+58h] [rbp-4A0h]
  char v69; // [rsp+60h] [rbp-498h]
  char v70; // [rsp+68h] [rbp-490h]
  DXGCONTEXT *v71; // [rsp+70h] [rbp-488h] BYREF
  char v72; // [rsp+78h] [rbp-480h]
  PVOID P; // [rsp+80h] [rbp-478h]
  _BYTE v74[32]; // [rsp+88h] [rbp-470h] BYREF
  unsigned int v75; // [rsp+A8h] [rbp-450h]
  __int64 v76; // [rsp+B0h] [rbp-448h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-440h] BYREF
  int v78; // [rsp+C0h] [rbp-438h]
  UINT v79; // [rsp+C8h] [rbp-430h]
  DXGCONTEXT **v80; // [rsp+D0h] [rbp-428h] BYREF
  int v81; // [rsp+D8h] [rbp-420h]
  struct DXGCONTEXT *v82; // [rsp+E0h] [rbp-418h] BYREF
  unsigned int v83; // [rsp+E8h] [rbp-410h]
  unsigned __int64 v84; // [rsp+F0h] [rbp-408h] BYREF
  DXGADAPTER *v85; // [rsp+F8h] [rbp-400h]
  char v86; // [rsp+100h] [rbp-3F8h]
  __int64 v87; // [rsp+108h] [rbp-3F0h]
  __int64 v88; // [rsp+110h] [rbp-3E8h]
  __int64 v89; // [rsp+118h] [rbp-3E0h]
  struct DXGPROCESS *v90; // [rsp+120h] [rbp-3D8h]
  struct _EX_RUNDOWN_REF *v91; // [rsp+128h] [rbp-3D0h] BYREF
  _QWORD v92[6]; // [rsp+130h] [rbp-3C8h] BYREF
  char v93; // [rsp+160h] [rbp-398h]
  _BYTE v94[24]; // [rsp+168h] [rbp-390h] BYREF
  char v95[8]; // [rsp+180h] [rbp-378h] BYREF
  _BYTE v96[16]; // [rsp+188h] [rbp-370h] BYREF
  DXGADAPTER *v97; // [rsp+198h] [rbp-360h]
  char v98; // [rsp+1A0h] [rbp-358h]
  __int64 v99; // [rsp+1A8h] [rbp-350h]
  _BYTE v100[16]; // [rsp+1C8h] [rbp-330h] BYREF
  DXGADAPTER *v101; // [rsp+1D8h] [rbp-320h]
  char v102; // [rsp+1E0h] [rbp-318h]
  __int64 v103; // [rsp+1E8h] [rbp-310h]
  __int64 v104; // [rsp+208h] [rbp-2F0h]
  char v105; // [rsp+210h] [rbp-2E8h]
  DXGALLOCATIONREFERENCE *v106; // [rsp+220h] [rbp-2D8h] BYREF
  char v107; // [rsp+228h] [rbp-2D0h] BYREF
  unsigned int v108; // [rsp+2A8h] [rbp-250h]
  void *v109; // [rsp+2B0h] [rbp-248h] BYREF
  _BYTE v110[128]; // [rsp+2B8h] [rbp-240h] BYREF
  int v111; // [rsp+338h] [rbp-1C0h]
  _D3DKMT_SUBMITCOMMAND v112; // [rsp+340h] [rbp-1B8h] BYREF

  v90 = a2;
  v67 = -1;
  v68 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v67, 2102);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v70 = CurrentThreadPreviousMode == 1;
  memset(&v112, 0, sizeof(v112));
  v5 = &v112;
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(&v112, Src, 0x180uLL);
  else
    v5 = Src;
  Flags = v5->Flags;
  if ( (*(_BYTE *)&Flags & 4) != 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1690;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess can be used only with testsigning",
      1690LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_87;
  }
  if ( (*((_DWORD *)a2 + 102) & 0x100) != 0 && (*(_BYTE *)&Flags & 2) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1698;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PresentRedirected is invalid from virtual machine",
      1698LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_87;
  }
  v82 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v71,
    v5->BroadcastContext[0],
    (struct _KTHREAD **)a2,
    &v82,
    0,
    1);
  v7 = v82;
  if ( !v82 )
  {
    WdLogSingleEntry3(2LL, a2, v5->BroadcastContext[0], -1073741811LL);
    WdLogGlobalForLineNumber = 1708;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)a2,
      v5->BroadcastContext[0],
      -1073741811LL,
      0LL,
      0LL);
    if ( v71 && !v72 )
      DXGCONTEXT::ReleaseReference(v71);
    goto LABEL_87;
  }
  v8 = *((_DWORD *)v82 + 98);
  if ( (v8 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1715;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.",
      (__int64)v7,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_76;
  }
  if ( (v8 & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1722;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
    goto LABEL_87;
  }
  BroadcastContextCount = v5->BroadcastContextCount;
  if ( !(_DWORD)BroadcastContextCount || (unsigned int)BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry4(2LL, v82, v5->BroadcastContextCount, 64LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1735;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x fails as specified BroadcastContextCount 0x%I64x exceeds limit 0x%I64x or is zero. returning 0x%I64x",
      (__int64)v7,
      v5->BroadcastContextCount,
      64LL,
      -1073741811LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_183;
  }
  if ( v5->NumPrimaries > 0x10 )
  {
    WdLogSingleEntry4(2LL, v82, v5->NumPrimaries, 16LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1743;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x fails as specified NumWrittenPrimaries 0x%I64x exceeds limit 0x%I64x returning 0x%I64x",
      (__int64)v7,
      v5->NumPrimaries,
      16LL,
      -1073741811LL,
      0LL);
    goto LABEL_76;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v10 + 209) )
  {
    v39 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v10 + 4712), a2, v5);
    if ( v71 && !v72 )
      DXGCONTEXT::ReleaseReference(v71);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit);
    return v39;
  }
  Pool2 = 0LL;
  P = 0LL;
  v75 = 0;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    P = v74;
    memset(v74, 0, 8 * BroadcastContextCount);
    Pool2 = (DXGCONTEXT **)P;
LABEL_18:
    v75 = BroadcastContextCount;
    v12 = BroadcastContextCount;
    v83 = BroadcastContextCount;
    goto LABEL_19;
  }
  v12 = 0;
  v83 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)BroadcastContextCount >= 8 )
  {
    Pool2 = (DXGCONTEXT **)ExAllocatePool2(256LL, 8 * BroadcastContextCount, 1265072196LL);
    P = Pool2;
    goto LABEL_18;
  }
LABEL_19:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1759;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory - failed to allocate the broadcast context array",
      1759LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v74 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v75 = 0;
    goto LABEL_194;
  }
  v80 = Pool2;
  v81 = v12;
  _m_prefetchw((char *)v7 + 32);
  v13 = *((_QWORD *)v7 + 4);
  do
  {
    if ( !v13 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1772;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGCONTEXT 0x%p failed to acquire reference.",
        (__int64)v7,
        0LL,
        0LL,
        0LL,
        0LL);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
      if ( P != v74 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v75 = 0;
      goto LABEL_76;
    }
    v14 = v13;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 4, v13 + 1, v13);
  }
  while ( v14 != v13 );
  *(_QWORD *)P = v7;
  v15 = *((_QWORD *)v7 + 2);
  v77 = v15;
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  if ( *(int *)(v16 + 2776) >= 0x2000 || *(_BYTE *)(v16 + 3076) )
    v78 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
  else
    v78 = 0;
  v17 = *(struct _KEVENT **)(v15 + 16);
  if ( *(_DWORD *)(v15 + 464) == 2 )
  {
    if ( !KeReadStateEvent(v17 + 5) )
    {
      v18 = v17 + 5;
LABEL_28:
      KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
    }
  }
  else if ( !KeReadStateEvent(v17 + 4) )
  {
    v18 = v17 + 4;
    goto LABEL_28;
  }
  if ( v78 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 160));
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 144, 0LL) )
      {
        if ( bTracingEnabled && *(_DWORD *)(v15 + 168) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, (__int64)"g");
        ExAcquirePushLockSharedEx(v15 + 144, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 160));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v42, (__int64)"g");
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v94, (struct _KTHREAD **)a2);
  v19 = 1;
LABEL_33:
  if ( v19 < v5->BroadcastContextCount )
  {
    v56 = v19;
    v87 = v19;
    v57 = (v5->BroadcastContext[v19] >> 6) & 0xFFFFFF;
    if ( v57 < *((_DWORD *)a2 + 74) )
    {
      v59 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v57 + 8);
      v58 = ((v5->BroadcastContext[v19] >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a2 + 35) + 16LL * v57 + 8) & 0x60)
         && (v59 & 0x2000) == 0
         && (v59 & 0x1F) != 0;
      v56 = v19;
    }
    else
    {
      v58 = 0;
    }
    if ( v58 )
    {
      v61 = 2LL * v57;
      v62 = *((_QWORD *)a2 + 35);
      if ( (*(_BYTE *)(v62 + 8 * v61 + 8) & 0x1F) == 7 )
      {
        v60 = *(_QWORD *)(v62 + 8 * v61);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v60 = 0LL;
        v56 = v19;
      }
    }
    else
    {
      v60 = 0LL;
    }
    v76 = v60;
    if ( v60 && (v63 = *(_DWORD *)(v60 + 392), (v63 & 8) == 0) && *(_QWORD *)(v60 + 16) == *((_QWORD *)v7 + 2) )
    {
      if ( (v63 & 0x10) == 0 )
      {
        _m_prefetchw((const void *)(v60 + 32));
        v64 = *(_QWORD *)(v60 + 32);
        while ( v64 )
        {
          v65 = v64;
          v64 = _InterlockedCompareExchange64((volatile signed __int64 *)(v60 + 32), v64 + 1, v64);
          if ( v65 == v64 )
          {
            *((_QWORD *)P + v56) = v60;
            ++v19;
            goto LABEL_33;
          }
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1825;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGCONTEXT 0x%p failed to acquire reference.",
          v76,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v94);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
        ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
        v66 = P;
        if ( P == v74 || !P )
          goto LABEL_221;
LABEL_220:
        ExFreePoolWithTag(v66, 0);
LABEL_221:
        P = 0LL;
        v75 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
        v36 = v69 == 0;
        goto LABEL_88;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1818;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.",
        v76,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry4(2LL, v7, v60, v56, -1073741811LL);
      WdLogGlobalForLineNumber = 1810;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v7,
        v76,
        v87,
        -1073741811LL,
        0LL);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v94);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
    v66 = P;
    if ( P == v74 || !P )
      goto LABEL_221;
    goto LABEL_220;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v94);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v92,
    P,
    v75,
    v20,
    1);
  if ( v93 )
  {
    if ( v92[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1847;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v92);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
      if ( P != v74 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v75 = 0;
      goto LABEL_76;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1842;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v92);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
    if ( P != v74 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v75 = 0;
LABEL_194:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225495LL;
    goto LABEL_244;
  }
  v87 = *((_QWORD *)v7 + 2);
  v85 = *(DXGADAPTER **)(*(_QWORD *)(v87 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v85 + 3);
  v84 = -1LL;
  v21 = v85;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v21 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v21 + 38);
  v86 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v95, v87, 0, v22, 0);
  if ( !v105 )
  {
    v23 = 0LL;
    goto LABEL_37;
  }
  v23 = 0LL;
  if ( v102 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v100, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v37 = v101;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v101 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v101 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, (__int64)"g");
      KeWaitForSingleObject((char *)v101 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v101, 0LL);
    v37 = v101;
  }
  v103 = 0LL;
  v102 = 1;
  if ( *((_DWORD *)v37 + 50) == 1 )
  {
LABEL_37:
    if ( v98 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v96, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v97 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v97 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)"g");
        KeWaitForSingleObject((char *)v97 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v97, 0LL);
    }
    v99 = 0LL;
    v98 = 1;
    if ( *(_DWORD *)(v104 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v96);
      if ( v105 )
        COREACCESS::Release((COREACCESS *)v100);
      goto LABEL_174;
    }
    if ( *((_BYTE *)v7 + 430) )
    {
      v106 = 0LL;
      v108 = 0;
      v109 = 0LL;
      v111 = 0;
      if ( !v5->NumHistoryBuffers )
      {
LABEL_45:
        if ( v5->CommandLength )
        {
          v25 = DXGCONTEXT::SubmitCommand(
                  v7,
                  v5,
                  (struct COREDEVICEACCESS *)v95,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v84,
                  (struct DXGCONTEXT **)P,
                  v23,
                  v5->NumHistoryBuffers,
                  v70);
          if ( v25 < 0 )
          {
LABEL_50:
            if ( v109 != v110 )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v109);
            if ( v106 == (DXGALLOCATIONREFERENCE *)&v107 )
            {
              for ( i = 0LL; (unsigned int)i < v108; i = (unsigned int)(i + 1) )
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v106 + i);
            }
            else if ( v106 )
            {
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v106);
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
            if ( v86 )
            {
              v86 = 0;
              v29 = (char *)v85 + 136;
              _InterlockedDecrement((volatile signed __int32 *)v85 + 38);
              ExReleasePushLockSharedEx(v29, 0LL);
              KeLeaveCriticalRegion();
              DXGADAPTER::ReleaseReference(v85);
            }
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v92);
            if ( v78 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v15 + 160));
              ExReleasePushLockSharedEx(v15 + 144, 0LL);
            }
            else
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v15 + 136));
            }
            KeLeaveCriticalRegion();
            if ( v83 )
            {
              v30 = v83;
              do
              {
                if ( *Pool2 )
                  DXGCONTEXT::ReleaseReference(*Pool2);
                ++Pool2;
                --v30;
              }
              while ( v30 );
            }
            if ( P != v74 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v75 = 0;
            if ( v71 && !v72 )
              DXGCONTEXT::ReleaseReference(v71);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
            v32 = v69 == 0;
LABEL_69:
            if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit);
            return (unsigned int)v25;
          }
        }
        else
        {
          v25 = 0;
        }
        v26 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1960LL);
        PresentHistoryToken = 0LL;
        v28 = v5->Flags;
        if ( (*(_BYTE *)&v28 & 2) != 0 )
        {
          PresentHistoryToken = v5->PresentHistoryToken;
        }
        else if ( v26 && *(_QWORD *)v26 && *(_DWORD *)(v26 + 12) != *((_DWORD *)v7 + 6) )
        {
          PresentHistoryToken = *(_QWORD *)v26;
        }
        if ( PresentHistoryToken )
        {
          v52 = v5->BroadcastContextCount;
          if ( v52 > 1 )
            v53 = &v5->BroadcastContext[1];
          else
            v53 = 0LL;
          v25 = DXGCONTEXT::HandleVistaBltStub(
                  v7,
                  PresentHistoryToken,
                  (*(unsigned int *)&v28 >> 1) & 1,
                  (struct COREDEVICEACCESS *)v95,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v84,
                  v52 - 1,
                  v53,
                  (struct DXGCONTEXT **)P);
        }
        goto LABEL_50;
      }
      v88 = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(&v106);
      Elements = PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::AllocateElements((__int64 *)&v109, v5->NumHistoryBuffers);
      v23 = (struct VIDMM_MULTI_ALLOC **)Elements;
      if ( v88 && Elements )
      {
        for ( j = 0; ; j = v79 + 1 )
        {
          v79 = j;
          if ( j >= v5->NumHistoryBuffers )
            break;
          LODWORD(v76) = 0;
          v89 = j;
          HistoryBufferArray = v5->HistoryBufferArray;
          v46 = &HistoryBufferArray[v89];
          if ( CurrentThreadPreviousMode == 1 )
          {
            RtlCopyFromUser(&v76, &HistoryBufferArray[v89], 4uLL);
            v47 = v76;
          }
          else
          {
            v47 = *v46;
            LODWORD(v76) = *v46;
          }
          v82 = (struct DXGCONTEXT *)(v88 + 8LL * v79);
          AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)a2, (DXGALLOCATIONREFERENCE *)&v91, v47);
          DXGALLOCATIONREFERENCE::MoveAssign(v82, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91);
          v49 = *(_QWORD *)v82;
          if ( !*(_QWORD *)v82 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1929;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid history buffer handle provided to SubmitCommand. D3DKMT_HANDLE=0x%8x",
              (unsigned int)v76,
              0LL,
              0LL,
              0LL,
              0LL);
            PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<VIDMM_MULTI_ALLOC *,16>(&v109);
            PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v106);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v92);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
            ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
            if ( P != v74 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v75 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
            if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v50, (__int64)&EventProfilerExit);
            return 3221225485LL;
          }
          if ( *(_QWORD *)(v49 + 8) != *((_QWORD *)v7 + 2) )
          {
            _mm_lfence();
            WdLogSingleEntry3(
              2LL,
              *(_QWORD *)(v88 + 8 * v89),
              *(_QWORD *)(*(_QWORD *)(v88 + 8 * v89) + 8LL),
              *((_QWORD *)v7 + 2));
            WdLogGlobalForLineNumber = 1937;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"History buffer 0x%p device 0x%p does not match context device 0x%p.",
              *(_QWORD *)v82,
              *(_QWORD *)(*(_QWORD *)v82 + 8LL),
              *((_QWORD *)v7 + 2),
              0LL,
              0LL);
            PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<VIDMM_MULTI_ALLOC *,16>(&v109);
            PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v106);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v92);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
            ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
            if ( P != v74 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v75 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
            if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventProfilerExit);
            return 3221225485LL;
          }
          v23[v89] = *(struct VIDMM_MULTI_ALLOC **)(v49 + 24);
        }
        v25 = (*(__int64 (__fastcall **)(struct VIDMM_MULTI_ALLOC **, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v87 + 16) + 760LL)
                                                                                         + 8LL)
                                                                             + 1032LL))(
                v23,
                v5->NumHistoryBuffers);
        if ( v25 >= 0 )
          goto LABEL_45;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1974;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid history buffer passed to SubmitCommand.",
          1974LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v109 != v110 )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v109);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v106);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v92);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
        ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
        if ( P != v74 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v75 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
        v32 = v69 == 0;
        goto LABEL_69;
      }
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1904;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to created paged pool array for history buffer array",
        1904LL,
        0LL,
        0LL,
        0LL,
        0LL);
      PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<VIDMM_MULTI_ALLOC *,16>(&v109);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v106);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v92);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
      if ( P != v74 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v75 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
      if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return 3221225495LL;
LABEL_244:
      McTemplateK0q_EtwWriteTransfer(v55, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
    WdLogSingleEntry3(2LL, a2, v5->BroadcastContext[0], -1073741811LL);
    WdLogGlobalForLineNumber = 1869;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x The context does not support virtual addressing. hContext 0x%I64x returning 0x%I64x",
      (__int64)a2,
      v5->BroadcastContext[0],
      -1073741811LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v92);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
    if ( P != v74 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v75 = 0;
LABEL_76:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
LABEL_87:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    v36 = v69 == 0;
LABEL_88:
    if ( v36 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_183:
    McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  v102 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v101 + 23) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v101, 0LL);
  v103 = 0LL;
LABEL_174:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v95);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v92);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v80);
  if ( P != v74 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v75 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v71);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v54, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
