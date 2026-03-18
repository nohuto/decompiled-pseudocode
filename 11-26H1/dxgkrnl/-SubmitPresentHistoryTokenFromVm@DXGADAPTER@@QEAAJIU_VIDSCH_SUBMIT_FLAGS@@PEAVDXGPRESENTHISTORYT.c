/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403358AC
 * Callers:
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234070 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140424380 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer @ 0x140011348 (McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x140012B80 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001D25C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x140033350 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1400359F0 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1402E5630 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402E5CE4 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403356D0 (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x14033692C (-GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x14033698C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140336B0C (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        void *a10,
        unsigned int a11)
{
  struct _KTHREAD **Current; // rax
  __int64 v16; // rcx
  struct _KTHREAD **v17; // r12
  __int64 v18; // rcx
  int v19; // r8d
  struct _KTHREAD *v20; // r14
  __int64 v21; // r14
  __int64 v22; // r14
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  struct DXGADAPTER *v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  struct ADAPTER_RENDER *v29; // rdx
  __int64 v30; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v31; // rsi
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int SizeOfPresentToken; // eax
  size_t v35; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v37; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  PRKPROCESS v39; // rdi
  struct ADAPTER_RENDER *v40; // r13
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int ProcessSessionId; // eax
  union _SLIST_HEADER *v44; // rbx
  void *Alignment; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *PresentHistoryTokenSlot; // r13
  const char *v47; // rdx
  struct _LOOKASIDE_LIST_EX *v48; // rax
  _DWORD *v49; // rax
  _DWORD *v50; // r15
  volatile signed __int32 *v51; // r12
  __int64 v52; // rax
  struct _LOOKASIDE_LIST_EX *v53; // rax
  DXGCONTEXT *v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rdx
  union _LARGE_INTEGER v59; // r11
  __int64 v60; // r8
  int v61; // ebx
  int v62; // edi
  int v63; // r10d
  __int64 v64; // r9
  int v65; // edx
  int v66; // r12d
  int v67; // eax
  int v68; // r9d
  int v69; // r9d
  int v70; // r9d
  unsigned int *v71; // r11
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  int v74; // ebx
  __int128 v75; // xmm0
  unsigned int v76; // r9d
  int *v77; // r11
  __int64 v78; // rbx
  __int64 v79; // rdx
  int v80; // ecx
  int v81; // r9d
  int v82; // r9d
  int v83; // r9d
  int v84; // r9d
  struct DXGGLOBAL *v85; // rax
  struct _KTHREAD **v86; // rbx
  struct _KTHREAD **v87; // rdi
  __int64 v88; // rax
  struct _KTHREAD *v89; // rbx
  int v90; // edx
  DXGDEVICESYNCOBJECT *v91; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGK_PRESENT_PARAMS *v93; // [rsp+28h] [rbp-3F0h]
  bool v94[8]; // [rsp+30h] [rbp-3E8h]
  __int64 v95; // [rsp+40h] [rbp-3D8h]
  char v96; // [rsp+100h] [rbp-318h]
  DXGCONTEXT *v97[2]; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v98; // [rsp+130h] [rbp-2E8h] BYREF
  PRKPROCESS PROCESS; // [rsp+138h] [rbp-2E0h] BYREF
  int v100; // [rsp+140h] [rbp-2D8h]
  int v101; // [rsp+144h] [rbp-2D4h]
  union _LARGE_INTEGER Timeout; // [rsp+148h] [rbp-2D0h] BYREF
  _BYTE v103[16]; // [rsp+150h] [rbp-2C8h] BYREF
  __int128 v104; // [rsp+160h] [rbp-2B8h] BYREF
  unsigned int v105; // [rsp+178h] [rbp-2A0h]
  __int64 v106; // [rsp+180h] [rbp-298h]
  _BYTE v107[16]; // [rsp+188h] [rbp-290h] BYREF
  char v108[8]; // [rsp+198h] [rbp-280h] BYREF
  __int64 v109; // [rsp+1A0h] [rbp-278h]
  char v110; // [rsp+1A8h] [rbp-270h]
  char v111[8]; // [rsp+1B0h] [rbp-268h] BYREF
  char *v112; // [rsp+1B8h] [rbp-260h]
  int v113; // [rsp+1C0h] [rbp-258h]
  __int128 v114; // [rsp+1C8h] [rbp-250h]
  struct VIDSCH_SUBMIT_DATA_BASE *v115[2]; // [rsp+1D8h] [rbp-240h] BYREF
  struct ADAPTER_RENDER *v116; // [rsp+1E8h] [rbp-230h]
  PVOID Entry; // [rsp+1F0h] [rbp-228h]
  struct _KTHREAD **v118; // [rsp+1F8h] [rbp-220h]
  __int128 v119; // [rsp+200h] [rbp-218h]
  _BYTE v120[32]; // [rsp+210h] [rbp-208h] BYREF
  char v121[8]; // [rsp+230h] [rbp-1E8h] BYREF
  _BYTE v122[64]; // [rsp+238h] [rbp-1E0h] BYREF
  _BYTE v123[64]; // [rsp+278h] [rbp-1A0h] BYREF
  __int64 v124; // [rsp+2B8h] [rbp-160h]
  char v125; // [rsp+2C0h] [rbp-158h]
  int v126; // [rsp+2CCh] [rbp-14Ch]
  struct _KAPC_STATE ApcState; // [rsp+2D0h] [rbp-148h] BYREF
  char v128; // [rsp+300h] [rbp-118h]
  _DWORD v129[49]; // [rsp+30Ch] [rbp-10Ch]

  Entry = a10;
  v96 = 0;
  v97[0] = 0LL;
  v106 = a1;
  v105 = a8;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v103, a2, Current, v97, 0, 1);
  v118 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v16);
  v17 = v118;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v120, v118);
  v18 = (a8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *((_DWORD *)v17 + 74) )
  {
    v19 = *((_DWORD *)v17[35] + 4 * v18 + 2);
    if ( ((a8 >> 25) & 0x60) == (v19 & 0x60) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
    {
      v20 = v17[35];
      if ( (*((_BYTE *)v20 + 16 * (unsigned int)v18 + 8) & 0x1F) == 0xB )
      {
        v21 = *((_QWORD *)v20 + 2 * (unsigned int)v18);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 16);
          if ( v22 )
            goto LABEL_10;
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  if ( v97[0] )
  {
    v22 = *((_QWORD *)v97[0] + 2);
LABEL_10:
    _m_prefetchw((const void *)(v22 + 64));
    v23 = *(_QWORD *)(v22 + 64);
    do
    {
      if ( !v23 )
        goto LABEL_54;
      v24 = v23;
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 64), v23 + 1, v23);
    }
    while ( v24 != v23 );
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v120);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v107,
      (struct DXGDEVICE *)v22);
    v112 = 0LL;
    v113 = 0;
    if ( v97[0] )
    {
      v112 = (char *)v97[0] + 440;
      DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v111);
    }
    v109 = a1;
    v110 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
    if ( *(_DWORD *)(a1 + 200) == 1 )
    {
      COREACCESS::COREACCESS((COREACCESS *)v122, *(struct DXGADAPTER *const *)(*(_QWORD *)(v22 + 16) + 16LL));
      v25 = *(struct DXGADAPTER **)(v22 + 1896);
      if ( !v25 )
        v25 = *(struct DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v123, v25);
      v124 = v22;
      v26 = *(_QWORD *)(v22 + 1896);
      if ( v26 == *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) || (v125 = 1, !v26) )
        v125 = 0;
      LODWORD(v28) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v121, 0LL);
      if ( (int)v28 < 0 )
        goto LABEL_49;
      v29 = *(struct ADAPTER_RENDER **)(a1 + 3168);
      v98 = 0LL;
      v116 = v29;
      CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v115, v29, 1);
      v31 = v115[0];
      if ( v115[0] )
      {
        *((_DWORD *)v115[0] + 1) |= 8u;
        v32 = *(_DWORD *)v31 & 0xFFFFFFDF;
        *((_DWORD *)v31 + 29) = -1;
        *(_DWORD *)v31 = a3 & 0x20 | v32 | 0x40000;
        *((_QWORD *)v31 + 70) = *(_QWORD *)(*(_QWORD *)(v22 + 112) + 104LL) + 160LL;
        v33 = a5;
        *((_DWORD *)v31 + 142) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 112) + 104LL) + 392LL);
        *((_QWORD *)v31 + 74) = a7;
        *((_QWORD *)v31 + 72) = a4;
        *((_QWORD *)v31 + 73) = a5;
        *((_QWORD *)v31 + 12) = a4;
        *((_QWORD *)v31 + 13) = a5;
        if ( a11 == -1 )
          goto LABEL_44;
        if ( !v17 )
          goto LABEL_44;
        if ( !a9 )
          goto LABEL_44;
        if ( !a6 )
          goto LABEL_44;
        SizeOfPresentToken = GetSizeOfPresentToken(a6);
        v35 = SizeOfPresentToken;
        if ( !SizeOfPresentToken )
          goto LABEL_44;
        PROCESS = 0LL;
        Global = DXGGLOBAL::GetGlobal();
        LODWORD(v28) = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(*((DXGSESSIONMGR **)Global + 123), a11, &PROCESS);
        if ( (int)v28 < 0 )
          goto LABEL_48;
        v128 = 0;
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v37);
        v39 = PROCESS;
        if ( CurrentProcess != PROCESS )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          v128 = 1;
        }
        v40 = v116;
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v104, (struct _KTHREAD **)v116 + 122, 0);
        DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)&v104);
        v42 = PsGetCurrentProcess(v41);
        ProcessSessionId = PsGetProcessSessionId(v42);
        if ( ProcessSessionId < *((_DWORD *)v40 + 252) && *(_QWORD *)(*((_QWORD *)v40 + 127) + 8LL * ProcessSessionId) )
        {
          _mm_lfence();
          v44 = *(union _SLIST_HEADER **)(*((_QWORD *)v40 + 127) + 8LL * ProcessSessionId);
        }
        else
        {
          v44 = 0LL;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v104);
        ObfDereferenceObject(v39);
        if ( v128 )
        {
          KeUnstackDetachProcess(&ApcState);
          v128 = 0;
        }
        if ( !v44 )
          goto LABEL_44;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v121);
        Alignment = (void *)v44[4].Alignment;
        Timeout.QuadPart = -20000000LL;
        KeWaitForSingleObject(Alignment, Executive, 0, 1u, &Timeout);
        PresentHistoryTokenSlot = DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot((DXGPRESENTHISTORYTOKENQUEUE *)v44);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v121, v47);
        if ( !PresentHistoryTokenSlot )
        {
LABEL_44:
          if ( !bTracingEnabled )
            goto LABEL_45;
          if ( (*((_DWORD *)v31 + 1) & 0x10) == 0 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
            {
              LODWORD(v95) = 0;
              *(_DWORD *)v94 = 0;
              LODWORD(v93) = 2;
              McTemplateK0ppqqxdqp_EtwWriteTransfer(
                v33,
                &EventSubmitPresentHistory,
                v30,
                v106,
                *((_QWORD *)v31 + 13),
                v93,
                *(_QWORD *)v94,
                0LL,
                v95,
                0,
                *((_QWORD *)v31 + 70));
            }
LABEL_45:
            v54 = v97[0];
            if ( v97[0] )
            {
              if ( (*((_DWORD *)v97[0] + 98) & 0x10) != 0 )
              {
                v67 = DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v97[0], 0LL, 0, 1, 0LL, 0LL, 1);
                v28 = v67;
                if ( v67 < 0 )
                {
                  WdLogSingleEntry2(2LL, v97[0], v67);
                  WdLogGlobalForLineNumber = 3719;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"DXGCONTEXT: 0x%I64x Failed to SynchronizeImplicitQueueWithRenderQueues, returning",
                    (__int64)v97[0],
                    v28,
                    0LL,
                    0LL,
                    0LL);
                  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v115);
                  CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v98);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111);
LABEL_50:
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v107);
                  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v103);
                  if ( (int)v28 >= 0 )
                  {
LABEL_51:
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v22 + 16), (struct DXGDEVICE *)v22);
                    return (unsigned int)v28;
                  }
LABEL_124:
                  if ( v96 )
                    CRefCountedBuffer::RefCountedBufferRelease(Entry);
                  goto LABEL_51;
                }
                v54 = v97[0];
              }
              LODWORD(v28) = DXGCONTEXT::SubmitCommandToImplicitQueue(v54, v31);
              goto LABEL_48;
            }
            v85 = DXGGLOBAL::GetGlobal();
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v104, v85, 0);
            DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v104);
            v86 = v118;
            v87 = v118 + 31;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v118 + 31));
            v88 = (v105 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v88 < *((_DWORD *)v86 + 74) )
            {
              v89 = v86[35];
              v90 = *((_DWORD *)v89 + 4 * v88 + 2);
              if ( ((v105 >> 25) & 0x60) == (*((_BYTE *)v89 + 16 * v88 + 8) & 0x60)
                && (v90 & 0x2000) == 0
                && (v90 & 0x1F) != 0 )
              {
                if ( (*((_BYTE *)v89 + 16 * (((unsigned __int64)v105 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
                {
                  v91 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)v89 + 2 * (((unsigned __int64)v105 >> 6) & 0xFFFFFF));
LABEL_121:
                  _InterlockedDecrement((volatile signed __int32 *)v87 + 4);
                  ExReleasePushLockSharedEx(v87, 0LL);
                  KeLeaveCriticalRegion();
                  if ( v91 && *((_QWORD *)v91 + 2) != v22 )
                  {
                    LODWORD(v28) = -1073741811;
                    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v104);
                    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v115);
                    CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v98);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
                    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111);
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v107);
                    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v103);
                    goto LABEL_124;
                  }
                  VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(v91);
                  LODWORD(v28) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*((_QWORD *)v116 + 92) + 8LL) + 1032LL))(
                                   v31,
                                   *(_QWORD *)(*((_QWORD *)v91 + 2) + 800LL),
                                   VidSchSyncObject);
                  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v104);
                  goto LABEL_48;
                }
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 318;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Handle type mismatch",
                  318LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            v91 = 0LL;
            goto LABEL_121;
          }
          v59 = *(union _LARGE_INTEGER *)((char *)v31 + 560);
          v60 = *((_QWORD *)v31 + 13);
          Timeout = v59;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
            goto LABEL_45;
          v61 = 0;
          PROCESS = 0LL;
          v62 = 0;
          v63 = 0;
          v64 = 0LL;
          v65 = 0;
          v66 = 0;
          v114 = 0LL;
          v104 = 0LL;
          v119 = 0LL;
          if ( !v60 )
            goto LABEL_61;
          v62 = *(_DWORD *)v60;
          v68 = *(_DWORD *)v60;
          v101 = *(_DWORD *)(v60 + 4);
          v69 = v68 - 1;
          if ( v69 )
          {
            v70 = v69 - 1;
            if ( !v70 )
            {
              v64 = *(_QWORD *)(v60 + 24);
LABEL_68:
              v71 = (unsigned int *)(v60 + 812);
              goto LABEL_69;
            }
            v81 = v70 - 1;
            if ( !v81 )
            {
              v64 = *(_QWORD *)(v60 + 16);
LABEL_93:
              v71 = (unsigned int *)(v60 + 40);
              goto LABEL_75;
            }
            v82 = v81 - 1;
            if ( !v82 || (v83 = v82 - 1) == 0 || (v84 = v83 - 1) == 0 || (unsigned int)(v84 - 1) < 2 )
            {
              v64 = *(_QWORD *)(v60 + 16);
LABEL_107:
              v71 = 0LL;
              if ( v62 != 1 )
              {
                if ( v62 != 2 )
                {
LABEL_70:
                  v100 = v61;
                  v74 = v62;
                  switch ( v62 )
                  {
                    case 2:
                      v65 = *(_DWORD *)(v60 + 60);
LABEL_77:
                      v66 = *(_DWORD *)(v60 + 796);
                      goto LABEL_78;
                    case 6:
                      v65 = *(_DWORD *)(v60 + 24);
                      goto LABEL_78;
                    case 9:
                      v65 = *(_DWORD *)(v60 + 32);
                      goto LABEL_78;
                  }
LABEL_76:
                  v65 = 0;
                  if ( v74 == 2 )
                    goto LABEL_77;
LABEL_78:
                  if ( !v71 )
                  {
                    v63 = v101;
                    v59 = Timeout;
LABEL_61:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                    {
                      LODWORD(v95) = v65;
                      *(_DWORD *)v94 = v63;
                      LODWORD(v93) = v62;
                      McTemplateK0ppqqxdqp_EtwWriteTransfer(
                        Microsoft_Windows_DxgKrnlEnableBits,
                        &EventSubmitPresentHistory,
                        v60,
                        v106,
                        v60,
                        v93,
                        *(_QWORD *)v94,
                        v64,
                        v95,
                        v66,
                        v59.QuadPart);
                    }
                    goto LABEL_45;
                  }
                  v76 = *v71;
                  if ( *v71 >= 0x10 )
                  {
                    v76 = 16;
                  }
                  else if ( !v76 )
                  {
                    goto LABEL_85;
                  }
                  v77 = (int *)(v71 + 3);
                  v78 = v76;
                  v79 = 0LL;
                  do
                  {
                    v129[v79 + 33] = *(v77 - 2);
                    ++v79;
                    v80 = *v77;
                    v77 += 4;
                    v129[v79 + 16] = v80;
                    v129[v79] = *(v77 - 5);
                    *(int *)((char *)&v126 + v79 * 4) = *(v77 - 3);
                    --v78;
                  }
                  while ( v78 );
LABEL_85:
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                    McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer();
                  goto LABEL_45;
                }
LABEL_69:
                v72 = *(_OWORD *)(v60 + 96);
                PROCESS = *(PRKPROCESS *)(v60 + 112);
                v114 = v72;
                v61 = *(_DWORD *)(v60 + 748);
                v73 = *(_OWORD *)(v60 + 756);
                v104 = *(_OWORD *)(v60 + 732);
                v119 = v73;
                goto LABEL_70;
              }
              goto LABEL_74;
            }
            v64 = 0LL;
            if ( v62 != 1 )
            {
              if ( v62 == 2 )
                goto LABEL_68;
              if ( v62 == 3 )
                goto LABEL_93;
              goto LABEL_107;
            }
          }
          else
          {
            v64 = *(_QWORD *)(v60 + 16);
          }
          v71 = (unsigned int *)(v60 + 56);
LABEL_74:
          v75 = *(_OWORD *)(v60 + 32);
          PROCESS = *(PRKPROCESS *)(v60 + 48);
          v114 = v75;
LABEL_75:
          v74 = v62;
          goto LABEL_76;
        }
        memmove(PresentHistoryTokenSlot, a6, v35);
        *((_DWORD *)v31 + 1) |= 0x10u;
        *((_QWORD *)v31 + 12) = v44;
        *((_QWORD *)v31 + 13) = PresentHistoryTokenSlot;
        v48 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
        v49 = ExAllocateFromLookasideListEx(v48 + 12);
        v50 = v49;
        if ( v49 )
        {
          memset(v49, 0, 0x5F8uLL);
          v50[5] = a9;
          v51 = (volatile signed __int32 *)Entry;
          *((_QWORD *)v50 + 187) = v97;
          *((_BYTE *)v50 + 1512) = 1;
          LODWORD(v28) = PrepareIndependentFlipToken(
                           PresentHistoryTokenSlot,
                           (struct DXGK_PRESENT_PARAMS *)v50,
                           v31,
                           (unsigned int **)v97[0],
                           0LL,
                           (struct CRefCountedBuffer *)v51);
          if ( (int)v28 >= 0 )
          {
            *((_DWORD *)v31 + 1) |= 0x20u;
            if ( v51 )
            {
              _InterlockedIncrement(v51 + 3);
              v96 = 1;
            }
            *((_QWORD *)v31 + 101) = v51;
          }
          else
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 3666;
            ExpInterlockedPushEntrySList(
              v44 + 3,
              (PSLIST_ENTRY)(&PresentHistoryTokenSlot[-1].Token.SurfaceComplete + 131));
            v52 = *((_QWORD *)v31 + 72);
            *((_DWORD *)v31 + 1) &= ~0x10u;
            *((_QWORD *)v31 + 12) = v52;
            *((_QWORD *)v31 + 13) = *((_QWORD *)v31 + 73);
          }
          v98 = *((_QWORD *)v31 + 4);
          v53 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
          ExFreeToLookasideListEx(v53 + 12, v50);
          if ( (int)v28 >= 0 )
            goto LABEL_44;
LABEL_48:
          CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v115);
          CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v98);
LABEL_49:
          COREACCESS::~COREACCESS((COREACCESS *)v123, v27);
          COREACCESS::~COREACCESS((COREACCESS *)v122, v55);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111);
          goto LABEL_50;
        }
      }
      LODWORD(v28) = -1073741801;
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v115);
      CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v98);
      COREACCESS::~COREACCESS((COREACCESS *)v123, v57);
      COREACCESS::~COREACCESS((COREACCESS *)v122, v58);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111);
    }
    else
    {
      LODWORD(v28) = -1073741130;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111);
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v107);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v103);
    goto LABEL_51;
  }
LABEL_54:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v120);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v103);
  return 3221225485LL;
}
