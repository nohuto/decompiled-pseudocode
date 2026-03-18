/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x140295E70 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1402B6190 (DxgkSubmitPresentToHwQueue.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x140330FD0 (DxgkPresentRedirected.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEBD@Z @ 0x140332B20 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEBD@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer @ 0x140011348 (McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x140012B80 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001D25C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14002EE60 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x140033350 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x140035930 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1400359F0 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x140039654 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x14003DE60 (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@435555555@Z @ 0x140048204 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$_ea_140048204.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x14006B534 (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI@Z @ 0x14007C7B8 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x14018C8E4 (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1401919F0 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402BE420 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1402BE5B8 (-VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXG.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1402E5630 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1402F642C (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403356D0 (-GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x140336A28 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140336B0C (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall SubmitPresentHistoryToken(
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct DXGK_PRESENT_PARAMS *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT *a9,
        struct _PRESENT_REDIRECTED_PARAMS *a10,
        char *a11)
{
  DXGCONTEXT *v11; // r12
  __int64 v15; // rax
  struct _PRESENT_REDIRECTED_PARAMS *v16; // r13
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  DXGPRESENTHISTORYTOKENQUEUE *v25; // rax
  struct _KSEMAPHORE *v26; // rbx
  __int64 v27; // rcx
  union _LARGE_INTEGER *v28; // rbx
  NTSTATUS v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  char *v34; // rax
  union _SLIST_HEADER *v35; // rsi
  PSLIST_ENTRY v36; // rax
  struct _SLIST_ENTRY *v37; // rbx
  PRKSEMAPHORE v38; // r13
  DXGPUSHLOCK *v39; // rcx
  DXGPUSHLOCK *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  const char *v44; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v45; // rsi
  struct VIDSCH_SUBMIT_DATA_BASE *v46; // r15
  const void *v47; // rsi
  unsigned int SizeOfPresentToken; // eax
  int v49; // eax
  char v50; // cl
  int v51; // ecx
  DXGPRESENTHISTORYTOKENQUEUE *v52; // rax
  struct CRefCountedBuffer *v53; // rdx
  struct DXGADAPTER *v54; // rcx
  struct DXGK_PRESENT_PARAMS *v55; // r11
  unsigned int v56; // edx
  void *v57; // r8
  int PresentPrivateDriverData; // eax
  struct DXGK_PRESENT_PARAMS *v59; // r10
  struct _SLIST_ENTRY *v60; // rsi
  char *v61; // r13
  struct _KWAIT_BLOCK *v62; // r12
  struct DXGGLOBAL *Global; // rax
  unsigned int v64; // ebx
  unsigned int v65; // ebx
  struct DXGPROCESS *Current; // r13
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 v69; // rbx
  int v70; // edx
  unsigned int *v71; // r14
  struct DXGK_PRESENT_PARAMS *v72; // rbx
  int v73; // edx
  unsigned __int64 v74; // r9
  __int64 v75; // rcx
  unsigned int v76; // edi
  signed __int64 v77; // rax
  DXGDEVICE *v78; // rcx
  unsigned __int64 v79; // rbx
  struct _VIDSCH_CONTEXT **Pool2; // r8
  int v81; // r10d
  unsigned int Next_high; // edx
  int v83; // r8d
  int v84; // r12d
  int v85; // r8d
  int v86; // r8d
  __int64 v87; // r8
  unsigned int *v88; // r9
  struct _SLIST_ENTRY v89; // xmm0
  int v90; // edx
  __int128 v91; // xmm1
  int v92; // edx
  struct _SLIST_ENTRY v93; // xmm0
  int v94; // edx
  unsigned int v95; // r11d
  int *v96; // r9
  __int64 v97; // r13
  __int64 v98; // rdx
  int v99; // ecx
  int v100; // edx
  int v101; // r8d
  struct ADAPTER_RENDER *v102; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v104; // r8d
  int v105; // r8d
  int v106; // r8d
  __int64 v107; // r10
  const wchar_t *v108; // r9
  const char *v109; // rdx
  unsigned int LiveDumpWithWdLogs; // eax
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  int v115; // eax
  unsigned int v116; // r8d
  struct DXGCONTEXT **v117; // rdx
  struct DXGK_PRESENT_PARAMS *v118; // rbx
  unsigned int i; // edx
  __int64 v120; // r9
  unsigned int v121; // r9d
  struct ADAPTER_RENDER *v122; // rbx
  unsigned int v123; // ebx
  struct DXGK_PRESENT_PARAMS *v124; // r13
  __int64 v125; // rsi
  struct ADAPTER_RENDER *v126; // rdi
  int v127; // r8d
  struct DXGPROCESS *v128; // r13
  volatile signed __int32 *v129; // r14
  __int64 v130; // r13
  __int64 v131; // rax
  __int64 v132; // rbx
  int v133; // edx
  DXGGLOBAL *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // r14
  unsigned int v139; // eax
  unsigned __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // r8
  int v143; // edx
  __int64 v144; // rbx
  struct _EX_RUNDOWN_REF *v145; // rdx
  struct _SLIST_ENTRY *Next; // rcx
  __int64 v147; // rcx
  unsigned int v148; // esi
  char *v149; // r14
  __int64 v150; // rbx
  struct DXGPROCESS *v151; // rax
  __int64 v152; // r9
  DXGCONTEXT *v153; // rbx
  __int64 v154; // rsi
  PVOID v155; // r14
  DXGPRESENTHISTORYTOKENQUEUE *v156; // r13
  bool v157; // zf
  __int64 v158; // rbx
  DXGPROCESS *v159; // rax
  struct VIDMM_ALLOC **v160; // r9
  bool WaitMode; // [rsp+20h] [rbp-3C8h]
  struct DXGK_PRESENT_PARAMS *Alertable; // [rsp+28h] [rbp-3C0h]
  bool Timeout; // [rsp+30h] [rbp-3B8h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-3B0h]
  PKWAIT_BLOCK WaitBlockArraya; // [rsp+38h] [rbp-3B0h]
  unsigned __int64 *v166; // [rsp+40h] [rbp-3A8h]
  unsigned int v167; // [rsp+48h] [rbp-3A0h]
  int v168; // [rsp+100h] [rbp-2E8h] BYREF
  DXGCONTEXT *v169; // [rsp+108h] [rbp-2E0h]
  __int64 v170; // [rsp+110h] [rbp-2D8h] BYREF
  struct _SLIST_ENTRY *v171; // [rsp+118h] [rbp-2D0h] BYREF
  int v172; // [rsp+120h] [rbp-2C8h] BYREF
  PVOID Entry; // [rsp+128h] [rbp-2C0h] BYREF
  unsigned int IsDebuggerPresent; // [rsp+130h] [rbp-2B8h] BYREF
  int v175; // [rsp+134h] [rbp-2B4h] BYREF
  DXGPRESENTHISTORYTOKENQUEUE *v176; // [rsp+138h] [rbp-2B0h]
  unsigned int v177; // [rsp+140h] [rbp-2A8h]
  PRKSEMAPHORE Semaphore; // [rsp+148h] [rbp-2A0h]
  char *v179; // [rsp+150h] [rbp-298h] BYREF
  unsigned int v180[2]; // [rsp+158h] [rbp-290h] BYREF
  int v181; // [rsp+160h] [rbp-288h] BYREF
  struct DXGK_PRESENT_PARAMS *v182; // [rsp+168h] [rbp-280h]
  struct ADAPTER_RENDER *v183; // [rsp+170h] [rbp-278h]
  __int64 v184; // [rsp+178h] [rbp-270h]
  void *v185; // [rsp+180h] [rbp-268h] BYREF
  struct CRefCountedBuffer *v186; // [rsp+188h] [rbp-260h] BYREF
  PLARGE_INTEGER v187; // [rsp+190h] [rbp-258h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+198h] [rbp-250h] BYREF
  void *Src[2]; // [rsp+1A0h] [rbp-248h] BYREF
  struct _PRESENT_REDIRECTED_PARAMS *v190; // [rsp+1B0h] [rbp-238h] BYREF
  struct _SLIST_ENTRY v191; // [rsp+1B8h] [rbp-230h] BYREF
  __int64 v192; // [rsp+1C8h] [rbp-220h] BYREF
  char v193; // [rsp+1D0h] [rbp-218h]
  int v194; // [rsp+1D8h] [rbp-210h] BYREF
  int v195; // [rsp+1DCh] [rbp-20Ch] BYREF
  int v196; // [rsp+1E0h] [rbp-208h] BYREF
  unsigned int v197; // [rsp+1E4h] [rbp-204h] BYREF
  DWORD LowPart; // [rsp+1E8h] [rbp-200h] BYREF
  __int128 v199; // [rsp+1F0h] [rbp-1F8h] BYREF
  char v200[8]; // [rsp+200h] [rbp-1E8h] BYREF
  DXGPUSHLOCK *v201; // [rsp+208h] [rbp-1E0h]
  int v202; // [rsp+210h] [rbp-1D8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v203; // [rsp+218h] [rbp-1D0h]
  PVOID P; // [rsp+220h] [rbp-1C8h]
  _BYTE v205[64]; // [rsp+228h] [rbp-1C0h] BYREF
  int v206; // [rsp+268h] [rbp-180h]
  struct VIDSCH_SUBMIT_DATA_BASE *v207[2]; // [rsp+270h] [rbp-178h] BYREF
  __int64 v208; // [rsp+280h] [rbp-168h] BYREF
  PVOID Object[35]; // [rsp+288h] [rbp-160h] BYREF

  v11 = a9;
  v187 = a6;
  v182 = a7;
  v203 = a8;
  Src[0] = (void *)a1;
  v179 = a11;
  v190 = a10;
  v169 = a9;
  if ( !a9 )
  {
    if ( a10 && *((_DWORD *)a10 + 2) && *(_QWORD *)a10 )
    {
      v16 = a10;
      BroadcastPresentSyncObject = *(struct _VIDSCH_SYNC_OBJECT **)a10;
      v177 = *((_DWORD *)a10 + 2);
      goto LABEL_4;
    }
    LODWORD(v31) = -1073741811;
    WdLogSingleEntry1(2LL);
    v108 = L"Sync Object and pPresentRedirected must be specified when context is null, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3090;
LABEL_175:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v108, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v31;
  }
  if ( a10 )
  {
    LODWORD(v31) = -1073741811;
    WdLogSingleEntry1(2LL);
    v108 = L"Context can not be with sync object, returning 0x%I64x";
    WdLogGlobalForLineNumber = 3082;
    goto LABEL_175;
  }
  v15 = *((_QWORD *)a9 + 2);
  v177 = 0;
  BroadcastPresentSyncObject = 0LL;
  v16 = *(struct _PRESENT_REDIRECTED_PARAMS **)(v15 + 16);
LABEL_4:
  v17 = *((_QWORD *)v16 + 2);
  v184 = v17;
  v18 = *(_QWORD *)(v17 + 3168);
  v183 = (struct ADAPTER_RENDER *)v18;
  v19 = *(_QWORD *)(v18 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3111;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderCore->IsCoreResourceSharedOwner()",
      3111LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v201 = (DXGPUSHLOCK *)(v18 + 976);
  if ( v18 != -976 && *(struct _KTHREAD **)(v18 + 984) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v201, 0LL) )
  {
    DXGPUSHLOCK::LogEvent(v201, v20, v22);
    ExAcquirePushLockSharedEx(v201, 0LL);
  }
  _InterlockedAdd((volatile signed __int32 *)v201 + 4, 1u);
  v202 = 1;
  CurrentProcess = PsGetCurrentProcess(v21);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *((_DWORD *)v183 + 252)
    || !*(_QWORD *)(*((_QWORD *)v183 + 127) + 8LL * ProcessSessionId)
    || (_mm_lfence(),
        v25 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)v183 + 127) + 8LL * ProcessSessionId),
        (v176 = v25) == 0LL) )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3119;
LABEL_52:
    LODWORD(v31) = -1073741811;
    goto LABEL_50;
  }
  v26 = (struct _KSEMAPHORE *)*((_QWORD *)v25 + 8);
  Semaphore = v26;
  ObfReferenceObject(v26);
  v202 = 0;
  _InterlockedDecrement((volatile signed __int32 *)v201 + 4);
  ExReleasePushLockSharedEx(v201, 0LL);
  KeLeaveCriticalRegion();
  COREDEVICEACCESS::Release(a2);
  if ( *((_BYTE *)a3 + 16) )
  {
    *((_BYTE *)a3 + 16) = 0;
    v27 = *((_QWORD *)a3 + 1) + 136LL;
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a3 + 1) + 152LL));
    ExReleasePushLockSharedEx(v27, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(*((DXGADAPTER **)a3 + 1));
  }
  if ( a4 )
    CWin32kLocks::Unlock(a4);
  Object[1] = v26;
  Object[0] = (PVOID)(v17 + 3136);
  v28 = (union _LARGE_INTEGER *)&v208;
  v208 = -200000000LL;
  if ( v187 )
    v28 = v187;
  v29 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, v28, 0LL);
  if ( !v29 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3151;
LABEL_179:
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
LABEL_181:
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v109);
    ObfDereferenceObject(Semaphore);
    LODWORD(v31) = -1073741130;
    goto LABEL_50;
  }
  if ( v29 != 258 )
    goto LABEL_23;
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v17 + 5028)) <= 2 )
  {
    LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(403LL, 2068LL);
    v186 = *(struct CRefCountedBuffer **)(v17 + 412);
    v180[0] = LiveDumpWithWdLogs;
    if ( (unsigned int)dword_140166660 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140166660, 0x400000040000LL) )
      {
        v175 = *(unsigned __int8 *)(v17 + 209);
        v192 = 0x1000000LL;
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(1LL);
        v194 = *(_DWORD *)(v17 + 3256);
        v195 = *(unsigned __int8 *)(v17 + 3093);
        v196 = *(_DWORD *)(v17 + 5028);
        v197 = v180[0];
        LowPart = v28->LowPart;
        LOWORD(v168) = *(_WORD *)(v17 + 3044);
        *(_QWORD *)&v199 = *(_QWORD *)(v17 + 2048);
        *(_QWORD *)v180 = *(_QWORD *)(v17 + 2040);
        LODWORD(v185) = *(_DWORD *)(v17 + 436);
        LODWORD(Entry) = *(_DWORD *)(v17 + 432);
        LODWORD(v170) = *(_DWORD *)(v17 + 428);
        LODWORD(v171) = *(_DWORD *)(v17 + 424);
        v181 = *(_DWORD *)(v17 + 420);
        v191.Next = (struct _SLIST_ENTRY *)v186;
        LOWORD(v172) = 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v111,
          (__int64)&unk_1401438EA,
          v112,
          v113,
          (__int64)&v172,
          (__int64)&v192,
          (__int64)&v191,
          (__int64)&v181,
          (__int64)&v171,
          (__int64)&v170,
          (__int64)&Entry,
          (__int64)&v185,
          (void **)v180,
          (__int64)&v199,
          (__int64)&v168,
          (__int64)&LowPart,
          (__int64)&v197,
          (__int64)&v196,
          (__int64)&v195,
          (__int64)&v194,
          (__int64)&IsDebuggerPresent,
          (__int64)&v175);
      }
    }
  }
  if ( v187 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(1LL, (__int64)&EventPerformanceWarning);
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3216;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a3);
    if ( (int)COREDEVICEACCESS::AcquireShared(a2, v179) >= 0 )
    {
      ObfDereferenceObject(Semaphore);
      LODWORD(v31) = 258;
      goto LABEL_50;
    }
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3224;
    goto LABEL_181;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0q_EtwWriteTransfer(1LL, (__int64)&EventPerformanceWarning);
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 3200;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Present token is not submitted due to default semaphore timeout of 20 seconds",
    3200LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3205;
    goto LABEL_179;
  }
LABEL_23:
  if ( !*((_BYTE *)a3 + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a3 + 1) + 24LL));
    v30 = *((_QWORD *)a3 + 1);
    *(_QWORD *)a3 = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v30 + 136, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(v30 + 152), 1u);
    *((_BYTE *)a3 + 16) = 1;
  }
  LODWORD(v31) = 0;
  if ( *((_BYTE *)a2 + 144) )
  {
    if ( *((_BYTE *)a2 + 96) )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 72, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v42 = *((_QWORD *)a2 + 11);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v42 + 184) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v42 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v43, (__int64)"g");
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 11) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 11), 0LL);
    }
    *((_QWORD *)a2 + 13) = 0LL;
    *((_BYTE *)a2 + 96) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 11) + 200LL) != 1 )
    {
LABEL_48:
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
LABEL_49:
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      LODWORD(v31) = -1073741130;
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 3240;
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v44);
      ObfDereferenceObject(Semaphore);
LABEL_50:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v200);
      return (unsigned int)v31;
    }
  }
  if ( *((_BYTE *)a2 + 32) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 8, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v32 = *((_QWORD *)a2 + 3);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v32 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v32 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, (__int64)"g");
      KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3), v179);
  }
  v34 = v179;
  *((_QWORD *)a2 + 5) = 0LL;
  if ( v34 && (int)RtlStringCbCopyA((char *)a2 + 48, 17LL, v34) >= 0 )
    *((_QWORD *)a2 + 5) = v107;
  *((_BYTE *)a2 + 32) = 1;
  if ( *(_DWORD *)(*((_QWORD *)a2 + 17) + 608LL) != 1 )
  {
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
    if ( !*((_BYTE *)a2 + 144) )
      goto LABEL_49;
    goto LABEL_48;
  }
  v35 = (union _SLIST_HEADER *)v176;
  v170 = 0LL;
  v36 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v176 + 3);
  if ( !v36
    && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer((DXGPRESENTHISTORYTOKENQUEUE *)v35)
     || (v36 = ExpInterlockedPopEntrySList(v35 + 3)) == 0LL)
    || (v37 = v36 + 1, v36 == (PSLIST_ENTRY)-16LL) )
  {
    v38 = Semaphore;
    LODWORD(v31) = -1073741801;
    KeReleaseSemaphore(Semaphore, 0, 1, 0);
    WdLogSingleEntry2(6LL, v35, -1073741801LL);
    WdLogGlobalForLineNumber = 3646;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Present token is not submitted due to no memory, PresentHistoryTokenQueue: 0x%I64x, returning 0x%I64x",
      (__int64)v35,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_36;
  }
  v45 = v203;
  CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v207, v183, v203 == 0LL);
  if ( v45 )
  {
    v46 = v45;
  }
  else
  {
    v46 = v207[0];
    if ( !v207[0] )
    {
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 3258;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate VidSchSubmitData",
        3258LL,
        0LL,
        0LL,
        0LL,
        0LL);
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v207);
      ObfDereferenceObject(Semaphore);
      LODWORD(v31) = -1073741801;
      goto LABEL_50;
    }
  }
  v47 = Src[0];
  IsDebuggerPresent = 1;
  SizeOfPresentToken = GetSizeOfPresentToken((const struct _D3DKMT_PRESENTHISTORYTOKEN *)Src[0]);
  if ( SizeOfPresentToken - 1 > 0x437 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3267;
    KeReleaseSemaphore(Semaphore, 0, 1, 0);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v207);
    ObfDereferenceObject(Semaphore);
    goto LABEL_52;
  }
  memmove(v37, v47, SizeOfPresentToken);
  if ( LODWORD(v37->Next) != 1
    && LODWORD(v37->Next) != 2
    && LODWORD(v37->Next) != 3
    && LODWORD(v37->Next) != 4
    && LODWORD(v37->Next) != 5
    && LODWORD(v37->Next) != 7
    && (unsigned int)(LODWORD(v37->Next) - 8) >= 2 )
  {
    LODWORD(v31) = -1071775733;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v176 + 3, v37 - 1);
    v38 = Semaphore;
    KeReleaseSemaphore(Semaphore, 0, 1, 0);
    DXGPROCESS::GetCurrent(v114);
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3636;
    goto LABEL_142;
  }
  v49 = *(_DWORD *)v46;
  v50 = *(_DWORD *)v46 ^ (32 * a5);
  *((_QWORD *)v46 + 13) = v37;
  *((_DWORD *)v46 + 29) = -1;
  v51 = v49 ^ v50 & 0x20;
  Entry = 0LL;
  v52 = v176;
  *(_DWORD *)v46 = v51 | 0x40000;
  *((_QWORD *)v46 + 12) = v52;
  v186 = 0LL;
  v187 = 0LL;
  if ( !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v17) )
  {
    v59 = v182;
    goto LABEL_69;
  }
  if ( a9 )
  {
    v59 = v182;
    if ( !v182 || *(_DWORD *)Src[0] == 1 || *(_DWORD *)Src[0] == 3 )
      goto LABEL_69;
    v56 = *((_DWORD *)v182 + 368);
    v57 = (void *)*((_QWORD *)v182 + 185);
  }
  else
  {
    v56 = *((_DWORD *)BroadcastPresentSyncObject + 276);
    v57 = (void *)*((_QWORD *)BroadcastPresentSyncObject + 139);
  }
  PresentPrivateDriverData = ReadPresentPrivateDriverData(v54, v56, v57, (struct CRefCountedBuffer **)&Entry);
  v55 = 0LL;
  v31 = PresentPrivateDriverData;
  v170 = PresentPrivateDriverData;
  if ( PresentPrivateDriverData < 0 )
  {
    WdLogSingleEntry1(2LL);
    v71 = 0LL;
    WdLogGlobalForLineNumber = 3318;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to read private driver data. Returning 0x%I64x",
      v31,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_213;
  }
  v53 = (struct CRefCountedBuffer *)Entry;
  v59 = v182;
  if ( Entry )
  {
    *((_QWORD *)v46 + 101) = Entry;
    *((_DWORD *)v46 + 1) |= 4u;
    v186 = v53;
    v170 = PresentPrivateDriverData;
  }
LABEL_69:
  if ( *(_BYTE *)(v17 + 209) == (_BYTE)v55 )
  {
    LODWORD(v31) = (_DWORD)v55;
    v170 = (unsigned int)v55;
    if ( !a9 && *(_BYTE *)(v17 + 3097) == (_BYTE)v55 )
    {
LABEL_71:
      v60 = v37;
      v171 = v37;
      if ( bTracingEnabled == (_BYTE)v55 || (v171 = v37, (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL) )
      {
LABEL_72:
        if ( !v11 )
          goto LABEL_73;
        v72 = v182;
        if ( v182 )
        {
          *((_BYTE *)v182 + 1512) = (*((_BYTE *)v46 + 3) & 1) == 0;
          if ( *(_BYTE *)(v17 + 209) != (_BYTE)v55 || (*((_DWORD *)v11 + 98) & 0x10) == 0 )
          {
            if ( !*((_DWORD *)v72 + 23) || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v17) )
              goto LABEL_73;
            v75 = *((_QWORD *)v11 + 2);
            v76 = v73 + 1;
            IsDebuggerPresent = v73 + 1;
            v77 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v75 + 1944), v74);
            v78 = (DXGDEVICE *)*((_QWORD *)v11 + 2);
            Src[0] = (void *)(v74 + v77);
            BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(v78);
            if ( BroadcastPresentSyncObject )
            {
              v79 = *((unsigned int *)v72 + 23);
              Pool2 = 0LL;
              P = 0LL;
              v206 = 0;
              if ( (unsigned int)v79 <= 8 )
              {
                Pool2 = (struct _VIDSCH_CONTEXT **)v205;
                P = v205;
                if ( (_DWORD)v79 )
                {
                  memset(v205, 0, 8 * v79);
                  Pool2 = (struct _VIDSCH_CONTEXT **)P;
                }
              }
              else
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / v79 < 8 )
                {
LABEL_217:
                  if ( !Pool2 )
                  {
                    LODWORD(v31) = -1073741801;
                    v71 = 0LL;
                    v170 = -1073741801LL;
LABEL_219:
                    P = 0LL;
                    v206 = 0;
                    goto LABEL_235;
                  }
                  v118 = v182;
                  for ( i = 1; i < v76; ++i )
                  {
                    v120 = *(_QWORD *)(*((_QWORD *)v118 + 187) + 8LL * i);
                    if ( (*(_DWORD *)(v120 + 392) & 0x10) != 0 )
                    {
                      LODWORD(v31) = -1073741811;
                      v170 = -1073741811LL;
LABEL_225:
                      v71 = 0LL;
                      if ( P != v205 && P )
                        ExFreePoolWithTag(P, 0);
                      goto LABEL_219;
                    }
                    Pool2[i - 1] = *(struct _VIDSCH_CONTEXT **)(v120 + 256);
                  }
                  v121 = *((_DWORD *)v118 + 23);
                  v122 = v183;
                  LODWORD(v31) = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
                                   *((VIDSCH_EXPORT **)v183 + 92),
                                   0,
                                   0LL,
                                   v121,
                                   Pool2,
                                   1u,
                                   &BroadcastPresentSyncObject,
                                   0,
                                   (const unsigned __int64 *)Src,
                                   0);
                  v170 = (unsigned int)v31;
                  if ( (int)v31 < 0 )
                    goto LABEL_225;
                  LODWORD(v31) = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                   *((VIDMM_EXPORT **)v122 + 92),
                                   *((struct VIDMM_GLOBAL **)v11 + 32),
                                   BroadcastPresentSyncObject,
                                   (unsigned int *)Src[0]);
                  v55 = 0LL;
                  v170 = (unsigned int)v31;
                  if ( (int)v31 < 0 )
                  {
                    if ( P != v205 && P )
                      ExFreePoolWithTag(P, 0);
                    P = 0LL;
                    v206 = 0;
                    goto LABEL_234;
                  }
                  if ( P != v205 && P )
                  {
                    ExFreePoolWithTag(P, 0);
                    v55 = 0LL;
                  }
                  P = 0LL;
                  v206 = 0;
LABEL_73:
                  v61 = (char *)v55;
                  v62 = (struct _KWAIT_BLOCK *)v55;
                  Global = DXGGLOBAL::GetGlobal();
                  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v192, Global, 0);
                  v64 = v177;
                  if ( !v177 )
                    goto LABEL_134;
                  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v192);
                  v65 = (v64 >> 6) & 0xFFFFFF;
                  if ( *(int *)(v184 + 3044) >= 2000 )
                  {
                    Current = DXGPROCESS::GetCurrent(v184);
                    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
                    if ( v65 >= *((_DWORD *)Current + 74) )
                    {
                      v69 = v177;
                    }
                    else
                    {
                      v67 = *((_QWORD *)Current + 35);
                      v68 = v65;
                      v69 = v177;
                      v70 = *(_DWORD *)(v67 + 16 * v68 + 8);
                      if ( ((v177 >> 25) & 0x60) == (*(_BYTE *)(v67 + 16 * v68 + 8) & 0x60)
                        && (v70 & 0x2000) == 0
                        && (v70 & 0x1F) != 0 )
                      {
                        if ( (*(_BYTE *)(v67 + 16LL * ((v177 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
                        {
                          v62 = *(struct _KWAIT_BLOCK **)(v67 + 16LL * ((v177 >> 6) & 0xFFFFFF));
                        }
                        else
                        {
                          WdLogSingleEntry0(2LL);
                          v62 = 0LL;
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
                        goto LABEL_81;
                      }
                    }
                    v62 = 0LL;
LABEL_81:
                    _InterlockedDecrement((volatile signed __int32 *)Current + 66);
                    ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
                    KeLeaveCriticalRegion();
                    v71 = 0LL;
                    if ( !v62 )
                    {
                      LODWORD(v31) = -1073741811;
                      WdLogSingleEntry2(2LL, v69, -1073741811LL);
                      WdLogGlobalForLineNumber = 3484;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"hSyncObj (0x%I64x) destroyed, returning 0x%I64x",
                        v69,
                        -1073741811LL,
                        0LL,
                        0LL,
                        0LL);
                      v170 = -1073741811LL;
                      if ( v193 )
                        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v192);
                      goto LABEL_84;
                    }
                    v61 = (char *)v62->Object;
                    goto LABEL_134;
                  }
                  v128 = DXGPROCESS::GetCurrent(v184);
                  v129 = (volatile signed __int32 *)((char *)v128 + 248);
                  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v128 + 248));
                  if ( v65 >= *((_DWORD *)v128 + 74) )
                  {
                    v132 = v177;
                  }
                  else
                  {
                    v130 = *((_QWORD *)v128 + 35);
                    v131 = v65;
                    v132 = v177;
                    v133 = *(_DWORD *)(v130 + 16 * v131 + 8);
                    if ( ((v177 >> 25) & 0x60) == (*(_BYTE *)(v130 + 16 * v131 + 8) & 0x60)
                      && (v133 & 0x2000) == 0
                      && (v133 & 0x1F) != 0 )
                    {
                      if ( (*(_BYTE *)(v130 + 16LL * ((v177 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 8 )
                      {
                        v61 = *(char **)(v130 + 16LL * ((v177 >> 6) & 0xFFFFFF));
                      }
                      else
                      {
                        WdLogSingleEntry0(2LL);
                        v61 = 0LL;
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
LABEL_259:
                      _InterlockedDecrement(v129 + 4);
                      ExReleasePushLockSharedEx(v129, 0LL);
                      KeLeaveCriticalRegion();
                      v71 = 0LL;
                      if ( !v61 )
                      {
                        LODWORD(v31) = -1073741811;
                        WdLogSingleEntry2(2LL, v132, -1073741811LL);
                        WdLogGlobalForLineNumber = 3497;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"hSyncObj (0x%I64x) destroyed, returning 0x%I64x",
                          v132,
                          -1073741811LL,
                          0LL,
                          0LL,
                          0LL);
                        v170 = -1073741811LL;
                        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v192);
LABEL_84:
                        v11 = v169;
                        goto LABEL_235;
                      }
LABEL_134:
                      if ( !*(_BYTE *)(v184 + 209) )
                      {
                        v11 = v169;
                        v71 = 0LL;
                        if ( v169 )
                        {
                          if ( *((struct _KTHREAD **)v169 + 56) != KeGetCurrentThread() )
                          {
                            WdLogSingleEntry0(1LL);
                            WdLogGlobalForLineNumber = 3509;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"pContext->GetContextLock()->IsExclusiveOwner()",
                              3509LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          LODWORD(v31) = DXGCONTEXT::SubmitCommandToImplicitQueue(v11, v46);
                          v170 = (unsigned int)v31;
                        }
                        else
                        {
                          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v191, (struct DXGFASTMUTEX *const)(v61 + 32), 0);
                          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v191);
                          v102 = v183;
                          VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v61, v183);
                          LODWORD(v31) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*((_QWORD *)v102 + 92) + 8LL) + 1032LL))(
                                           v46,
                                           *(_QWORD *)(*((_QWORD *)v190 + 3) + 800LL),
                                           VidSchSyncObject);
                          v170 = (unsigned int)v31;
                          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v191);
                        }
                        goto LABEL_137;
                      }
                      if ( Entry )
                        _InterlockedAdd((volatile signed __int32 *)Entry + 3, 1u);
                      LOBYTE(v168) = 1;
                      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x18u )
                      {
                        v134 = DXGGLOBAL::GetGlobal();
                        if ( *((_DWORD *)DXGGLOBAL::GetSessionData(v134, v135, v136, v137) + 4742) )
                        {
                          if ( LODWORD(v60->Next) == 2 )
                          {
                            if ( !v169 )
                            {
                              v153 = 0LL;
LABEL_293:
                              v154 = (__int64)v171;
                              v155 = Entry;
                              v156 = v176;
                              goto LABEL_294;
                            }
                            v138 = *(_QWORD *)(*((_QWORD *)v169 + 2) + 40LL);
                            if ( (*(_DWORD *)(v138 + 408) & 4) != 0 )
                            {
                              if ( v182 )
                              {
                                v139 = *((_DWORD *)v182 + 5);
                                v140 = v139;
                                if ( v139 )
                                {
                                  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v138 + 248));
                                  v141 = ((unsigned int)v140 >> 6) & 0xFFFFFF;
                                  if ( (unsigned int)v141 < *(_DWORD *)(v138 + 296) )
                                  {
                                    v142 = *(_QWORD *)(v138 + 280);
                                    v143 = *(_DWORD *)(v142 + 16 * v141 + 8);
                                    if ( (((unsigned int)v140 >> 25) & 0x60) == (*(_BYTE *)(v142 + 16 * v141 + 8) & 0x60)
                                      && (v143 & 0x2000) == 0
                                      && (v143 & 0x1F) != 0 )
                                    {
                                      v144 = 2 * ((v140 >> 6) & 0xFFFFFF);
                                      if ( (*(_BYTE *)(v142 + 8 * v144 + 8) & 0x1F) == 5 )
                                      {
                                        v145 = *(struct _EX_RUNDOWN_REF **)(v142 + 8 * v144);
                                        goto LABEL_281;
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
                                  v145 = 0LL;
LABEL_281:
                                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v179, v145);
                                  _InterlockedDecrement((volatile signed __int32 *)(v138 + 264));
                                  ExReleasePushLockSharedEx(v138 + 248, 0LL);
                                  KeLeaveCriticalRegion();
                                  if ( v179 )
                                  {
                                    v180[0] = 0;
                                    v190 = 0LL;
                                    if ( LODWORD(v171->Next) != 2 || (Next = v171[4].Next) == 0LL )
                                    {
                                      v154 = (__int64)v171;
LABEL_288:
                                      v156 = v176;
                                      v155 = Entry;
                                      v153 = v169;
LABEL_289:
                                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v179);
                                      if ( !(_BYTE)v168 )
                                      {
                                        v11 = v169;
LABEL_297:
                                        if ( (int)v31 < 0 && v155 )
                                          CRefCountedBuffer::RefCountedBufferRelease(v155);
                                        v71 = 0LL;
LABEL_137:
                                        if ( v193 )
                                          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v192);
                                        if ( (int)v31 >= 0 )
                                          goto LABEL_140;
                                        goto LABEL_235;
                                      }
LABEL_294:
                                      v31 = v184;
                                      v157 = v153 == 0LL;
                                      v158 = *(_QWORD *)v46;
                                      if ( !v157 )
                                        v62 = 0LL;
                                      v159 = DXGPROCESS::GetCurrent(0LL);
                                      WaitBlockArraya = v62;
                                      v11 = v169;
                                      LODWORD(v31) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                                       (struct DXG_VMBUS_CHANNEL_BASE *)(v31 + 4712),
                                                       v159,
                                                       (__int64)v169,
                                                       v158,
                                                       (__int64)v156,
                                                       v154,
                                                       (__int64)v155,
                                                       (__int64)WaitBlockArraya);
                                      v170 = (unsigned int)v31;
                                      goto LABEL_297;
                                    }
                                    LODWORD(v31) = DxgkQueryHostCompSurfInfo(Next, v180, (unsigned __int64 *)&v190);
                                    v170 = (unsigned int)v31;
                                    if ( (int)v31 >= 0 )
                                    {
                                      v31 = (__int64)v190;
                                      v148 = v180[0];
                                      v149 = v179;
                                      v150 = *(_QWORD *)v46;
                                      v151 = DXGPROCESS::GetCurrent(v147);
                                      v152 = v150;
                                      v153 = v169;
                                      v167 = v148;
                                      v154 = (__int64)v171;
                                      v166 = (unsigned __int64 *)v149;
                                      v155 = Entry;
                                      WaitBlockArray = (PKWAIT_BLOCK)v61;
                                      v156 = v176;
                                      LODWORD(v31) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
                                                       (struct DXG_VMBUS_CHANNEL_BASE *)(v184 + 4712),
                                                       (__int64)v151,
                                                       (__int64)v169,
                                                       v152,
                                                       (__int64)v176,
                                                       (__int64)v171,
                                                       (__int64)Entry,
                                                       (__int64)WaitBlockArray,
                                                       (__int64)v166,
                                                       v167,
                                                       v31);
                                      LOBYTE(v168) = 0;
                                      v170 = (unsigned int)v31;
                                      goto LABEL_289;
                                    }
                                  }
                                  v154 = (__int64)v171;
                                  goto LABEL_288;
                                }
                              }
                            }
                          }
                        }
                      }
                      v153 = v169;
                      goto LABEL_293;
                    }
                  }
                  v61 = 0LL;
                  goto LABEL_259;
                }
                Pool2 = (struct _VIDSCH_CONTEXT **)ExAllocatePool2(256LL, 8 * v79, 1265072196LL);
                P = Pool2;
              }
              v206 = v79;
              goto LABEL_217;
            }
            WdLogSingleEntry1(2LL);
            v71 = 0LL;
            WdLogGlobalForLineNumber = 3410;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to create present sync object. Returning 0x%I64x",
              -1073741801LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v31 = 3221225495LL;
LABEL_213:
            v170 = v31;
            goto LABEL_235;
          }
          v116 = *((_DWORD *)v72 + 23);
          v117 = (struct DXGCONTEXT **)*((_QWORD *)v72 + 187);
          Timeout = (char)v55;
          Alertable = v72;
          v115 = v116 + 1;
        }
        else
        {
          if ( *(_BYTE *)(v17 + 209) != (_BYTE)v55 || (*((_DWORD *)v11 + 98) & 0x10) == 0 )
            goto LABEL_73;
          v115 = 1;
          Timeout = (char)v55;
          v116 = 0;
          Alertable = v55;
          v117 = 0LL;
        }
        IsDebuggerPresent = v115;
        DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v11, v117, v116, 1, v46, Alertable, Timeout);
        v55 = 0LL;
        goto LABEL_73;
      }
      v81 = (int)v37->Next;
      Next_high = HIDWORD(v37->Next);
      v83 = (int)v37->Next;
      v172 = (int)v55;
      v185 = v55;
      v84 = (int)v55;
      v168 = (int)v55;
      v180[0] = Next_high;
      v191 = 0LL;
      *(_OWORD *)Src = 0LL;
      v199 = 0LL;
      v85 = v83 - 1;
      if ( v85 )
      {
        v86 = v85 - 1;
        if ( !v86 )
        {
          v87 = *((_QWORD *)&v37[1].Next + 1);
LABEL_98:
          v88 = (unsigned int *)&v37[50].Next + 3;
          goto LABEL_99;
        }
        v101 = v86 - 1;
        if ( !v101 )
        {
          v87 = (__int64)v37[1].Next;
LABEL_133:
          v88 = (unsigned int *)(&v37[2].Next + 1);
          goto LABEL_111;
        }
        v104 = v101 - 1;
        if ( !v104 || (v105 = v104 - 1) == 0 || (v106 = v105 - 1) == 0 || (unsigned int)(v106 - 1) < 2 )
        {
          v87 = (__int64)v37[1].Next;
LABEL_166:
          v88 = (unsigned int *)v55;
          if ( v81 != 1 )
          {
            if ( v81 != 2 )
            {
              v88 = 0LL;
              v90 = (int)v55;
              goto LABEL_100;
            }
LABEL_99:
            v89 = v37[6];
            v185 = v37[7].Next;
            v191 = v89;
            v90 = *((_DWORD *)&v37[46].Next + 3);
            v91 = *(__int128 *)((char *)&v37[47] + 4);
            v84 = (int)v37[47].Next;
            *(struct _SLIST_ENTRY *)Src = *(struct _SLIST_ENTRY *)((char *)v37 + 732);
            v172 = v90;
            v199 = v91;
            v168 = v84;
LABEL_100:
            v175 = v90;
            v92 = v81;
            v181 = v84;
            if ( v81 == 2 )
            {
              v55 = 0LL;
LABEL_113:
              v94 = *((_DWORD *)&v37[49].Next + 3);
              goto LABEL_114;
            }
            v172 = v175;
            v55 = 0LL;
            v168 = v84;
            if ( v81 == 6 )
            {
              v172 = v175;
              v100 = v181;
              goto LABEL_129;
            }
            if ( v81 == 9 )
            {
              v100 = v168;
LABEL_129:
              v168 = v100;
              goto LABEL_130;
            }
LABEL_112:
            if ( v92 == 2 )
              goto LABEL_113;
LABEL_130:
            v94 = (int)v55;
LABEL_114:
            v175 = v94;
            if ( !v88 )
            {
              v171 = v37;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
                goto LABEL_125;
              WaitMode = (char)v37;
              McTemplateK0ppqqxdqp_EtwWriteTransfer(
                Microsoft_Windows_DxgKrnlEnableBits,
                &EventSubmitPresentHistory,
                v87,
                v183);
              v171 = v37;
LABEL_124:
              v55 = 0LL;
LABEL_125:
              v11 = v169;
              goto LABEL_72;
            }
            v95 = *v88;
            if ( *v88 >= 0x10 )
            {
              v95 = 16;
            }
            else
            {
              v171 = v37;
              if ( !v95 )
                goto LABEL_122;
            }
            v96 = (int *)(v88 + 3);
            v97 = v95;
            v98 = 0LL;
            v171 = v37;
            v60 = v37;
            do
            {
              *(_DWORD *)((char *)&Object[27] + v98) = *(v96 - 2);
              v98 += 4LL;
              v99 = *v96;
              v96 += 4;
              *(_DWORD *)((char *)&Object[18] + v98 + 4) = v99;
              *(_DWORD *)((char *)&Object[10] + v98 + 4) = *(v96 - 5);
              *(_DWORD *)((char *)&Object[2] + v98 + 4) = *(v96 - 3);
              --v97;
            }
            while ( v97 );
            v17 = v184;
LABEL_122:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
            {
              WaitMode = (char)v60;
              McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer();
            }
            goto LABEL_124;
          }
          v55 = 0LL;
          goto LABEL_110;
        }
        v87 = (__int64)v55;
        if ( v81 != 1 )
        {
          if ( v81 == 2 )
            goto LABEL_98;
          if ( v81 == 3 )
            goto LABEL_133;
          goto LABEL_166;
        }
      }
      else
      {
        v87 = (__int64)v37[1].Next;
      }
      v88 = (unsigned int *)(&v37[3].Next + 1);
LABEL_110:
      v93 = v37[2];
      v185 = v37[3].Next;
      v191 = v93;
LABEL_111:
      v92 = v81;
      goto LABEL_112;
    }
    v31 = (unsigned int)PrepareIndependentFlipToken(
                          (struct _D3DKMT_PRESENTHISTORYTOKEN *)v37,
                          v59,
                          v46,
                          (unsigned int **)a9,
                          (unsigned int **)v190,
                          v53);
    v55 = 0LL;
    v187 = (PLARGE_INTEGER)*((_QWORD *)v46 + 4);
    v170 = v31;
  }
  if ( (int)v31 >= 0 )
    goto LABEL_71;
LABEL_234:
  v71 = 0LL;
LABEL_235:
  v38 = Semaphore;
  KeReleaseSemaphore(Semaphore, 0, 1, 0);
  if ( (*(_DWORD *)v46 & 0x1000000) == 0 )
    goto LABEL_141;
  if ( *((_BYTE *)v203 + 356) )
    v71 = (unsigned int *)((char *)v203 + 616);
  v123 = 0;
  if ( !IsDebuggerPresent )
    goto LABEL_141;
  v124 = v182;
  v125 = 0LL;
  v126 = v183;
  do
  {
    if ( v11 )
      v127 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v124 + 187) + v125) + 388LL);
    else
      LOBYTE(v127) = 0;
    if ( *((_BYTE *)v46 + 356) )
      v160 = (struct VIDMM_ALLOC **)((char *)v46
                                   + 64 * (unsigned __int64)(v123 * *((_DWORD *)v46 + 151))
                                   + (unsigned int)(8 * *((_DWORD *)v46 + 151) * (*((_DWORD *)v46 + 152) + 28))
                                   + 656);
    else
      v160 = (struct VIDMM_ALLOC **)((char *)v46 + 504);
    VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
      *((VIDMM_EXPORT **)v126 + 95),
      *((struct VIDMM_GLOBAL **)v126 + 96),
      1 << v127,
      *v160,
      WaitMode,
      v71);
    ++v123;
    v125 += 8LL;
  }
  while ( v123 < IsDebuggerPresent );
  LODWORD(v31) = v170;
LABEL_140:
  v38 = Semaphore;
LABEL_141:
  CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v187);
  CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v186);
LABEL_142:
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v207);
LABEL_36:
  ObfDereferenceObject(v38);
  if ( v202 == 1 )
  {
    v39 = v201;
    _InterlockedDecrement((volatile signed __int32 *)v201 + 4);
    ExReleasePushLockSharedEx(v39, 0LL);
  }
  else
  {
    if ( v202 != 2 )
      return (unsigned int)v31;
    v41 = v201;
    *((_QWORD *)v201 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v41, 0LL);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v31;
}
