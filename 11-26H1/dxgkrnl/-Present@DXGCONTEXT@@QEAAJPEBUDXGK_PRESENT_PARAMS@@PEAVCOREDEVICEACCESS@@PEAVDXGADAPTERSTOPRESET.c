/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1402B6190 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403C9104 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140008FB0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140010BA4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1400135C8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x140013F98 (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1400388D0 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x140039654 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x14003DEC4 (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14003DEDC (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x14003E170 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x140041ADC (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x140041E4C (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1400421C0 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x140046C2C (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z @ 0x14004CFE4 (-VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x14004D630 (-GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x14004D844 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x140050024 (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z @ 0x1400503D0 (-VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400515D4 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     McTemplateK0pqpqtt_EtwWriteTransfer @ 0x140052D00 (McTemplateK0pqpqtt_EtwWriteTransfer.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14005613C (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400588DC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x14005ECCC (-hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1400633FC (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x14006C2C8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x14022B450 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402970A4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14029AA24 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x14029BEC8 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1402B9970 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1402B9EF8 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1402BD77C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1402BD8D0 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1402D290C (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F4EA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x140320A58 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1403211B8 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x140323078 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x140323418 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x140332AC8 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1403738A0 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z @ 0x14037FA30 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x140388D5C (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x14038DB04 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x140396030 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x14039D8F8 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z @ 0x1403B74F4 (-GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1403B7514 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1403B7A90 (-CheckOutput@DXGPRESENT@@QEAAXII@Z.c)
 *     ?GetDdiDstRect@DXGPRESENT@@QEBAXPEAUtagRECT@@QEBU2@@Z @ 0x1403B9178 (-GetDdiDstRect@DXGPRESENT@@QEBAXPEAUtagRECT@@QEBU2@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1403C5AC8 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1403CD3BC (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveAlphaChannel@@YA?AW4_D3DDDIFORMAT@@W41@@Z @ 0x140407538 (-RemoveAlphaChannel@@YA-AW4_D3DDDIFORMAT@@W41@@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x140424B34 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14043F948 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        struct DXGCONTEXT **a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  __int64 v8; // rcx
  struct _D3DKMT_PRESENT *v9; // r15
  struct VIDSCH_SUBMIT_DATA_BASE *v10; // rdi
  ADAPTER_RENDER *v11; // rcx
  unsigned int v12; // r14d
  const struct _DXGKWIN32KENG_INTERFACE *Win32kInterface; // rax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  UINT Width; // r12d
  D3DKMT_HANDLE v18; // ebx
  D3DKMT_HANDLE v19; // ebx
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  struct _EX_RUNDOWN_REF *v24; // rdx
  struct _EX_RUNDOWN_REF *v25; // rdx
  __int64 v26; // r10
  int v27; // eax
  __int64 v28; // rsi
  D3DKMT_HANDLE v29; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r9d
  int v31; // r12d
  __int64 result; // rax
  char v33; // r14
  const RECT *pSrcSubRects; // r8
  __int64 SubRectCnt; // r9
  unsigned int v36; // esi
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v37; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v38; // r8d
  char v39; // dl
  UINT v40; // edx
  DXGPRESENT *v41; // rcx
  DXGADAPTER *v42; // rcx
  struct COREDEVICEACCESS *v43; // r12
  unsigned int i; // ebx
  int v45; // eax
  __int64 v46; // rsi
  unsigned int v47; // eax
  __int64 v48; // rdx
  int v49; // ecx
  struct _EX_RUNDOWN_REF *v50; // rdx
  int v51; // eax
  const RECT *v52; // r8
  __int64 v53; // rcx
  struct COREDEVICEACCESS *v54; // rsi
  BOOL v55; // ebx
  __int64 v56; // rcx
  int v57; // eax
  unsigned int v58; // esi
  HANDLE CurrentThreadId; // rax
  bool v60; // zf
  HANDLE v61; // r14
  __int64 v62; // rcx
  COREDEVICEACCESS *v63; // rsi
  CWin32kLocks *v64; // rbx
  int v65; // ebx
  HDC v66; // rbx
  HDEV v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rax
  char v70; // r14
  int v71; // ecx
  __int64 v72; // rcx
  HDC v73; // rsi
  DXGPROCESS *Current; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v75; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v76; // rbx
  COREDEVICEACCESS *v77; // r14
  unsigned int v78; // edx
  __int64 j; // r8
  int v80; // eax
  UINT v81; // ebx
  unsigned int k; // esi
  unsigned int v83; // ecx
  unsigned int v84; // eax
  struct tagRECT *v85; // r8
  RECT *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  const RECT *pDstSubRects; // r12
  UINT v91; // r14d
  const struct _DXGKWIN32KENG_INTERFACE *v92; // rdi
  unsigned int v93; // r8d
  unsigned int v94; // r9d
  __int64 v95; // rdx
  __int64 v96; // rcx
  struct COREDEVICEACCESS *v97; // r14
  int v98; // eax
  UINT m; // edx
  __int64 v100; // rcx
  struct DXGALLOCATION *v101; // rax
  const wchar_t *v102; // r9
  int v103; // eax
  unsigned int v104; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v105; // r8d
  LONG top; // eax
  LONG left; // eax
  LONG bottom; // eax
  LONG right; // eax
  struct tagRECT *DdiSubRectList; // rax
  __int64 v111; // rcx
  int v112; // ebx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 VidPnSourceId; // rdx
  __int64 v116; // r8
  COREDEVICEACCESS *v117; // r14
  int v118; // r14d
  __int128 v119; // xmm0
  D3DKMT_PRESENT_MODEL Model; // eax
  struct COREDEVICEACCESS *v121; // r14
  struct DXGADAPTERSTOPRESETLOCKSHARED *v122; // r12
  unsigned int v123; // edx
  __int64 v124; // r12
  __int64 v125; // rax
  const RECT *v126; // r14
  UINT v127; // esi
  UINT v128; // ebx
  __int64 v129; // rdi
  unsigned int v130; // r8d
  unsigned int v131; // r9d
  __int64 v132; // rdx
  __int64 v133; // rcx
  int v134; // ebx
  DXGDEVICE *v135; // rbx
  unsigned __int8 v136; // si
  COREDEVICEACCESS *v137; // rdi
  CWin32kLocks *v138; // r14
  __int64 v139; // rcx
  D3DKMT_HANDLE v140; // eax
  const struct _DXGKWIN32KENG_INTERFACE *v141; // rbx
  int v142; // eax
  unsigned int (__fastcall *v143)(struct _D3DKMT_PRESENT *, HDC, _QWORD, const RECT *, void *, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)); // r14
  int v144; // ebx
  UINT v145; // edi
  bool v146; // si
  HDC v147; // rax
  struct DXGADAPTERSTOPRESETLOCKSHARED *v148; // rsi
  __int64 v149; // rcx
  struct DXGDEVICE *v150; // rdi
  __int64 v151; // rbx
  struct DXGPROCESS *v152; // rax
  int v153; // eax
  struct DXGDEVICE *v154; // rdi
  __int64 v155; // rbx
  struct DXGPROCESS *v156; // rax
  int v157; // eax
  int v158; // eax
  __int64 v159; // rax
  __int64 v160; // rcx
  struct VIDMM_GLOBAL *v161; // rdx
  VIDMM_EXPORT *v162; // rcx
  struct _EX_RUNDOWN_REF *v163; // rbx
  __int64 v164; // rax
  __int64 v165; // rdi
  __int64 v166; // rdx
  unsigned int v167; // r8d
  _OWORD *v168; // rcx
  D3DKMT_HANDLE *BroadcastContext; // rax
  __int128 v170; // xmm1
  int v171; // eax
  __int64 v172; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v173; // eax
  UINT v174; // eax
  struct DXGALLOCATION *v175; // rdi
  unsigned int v176; // edx
  __int128 v177; // xmm0
  int v178; // eax
  UINT v179; // ecx
  enum _D3DDDIFORMAT v180; // ebx
  int v181; // eax
  struct VIDMM_DMA_BUFFER *v182; // rdx
  __int64 v183; // rbx
  ULONG_PTR Count; // rax
  DXGADAPTER *v185; // rcx
  __int64 v186; // rax
  unsigned int v187; // esi
  DXGADAPTER *v188; // rcx
  __int64 v189; // rdx
  int v190; // r8d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v191; // ecx
  int v192; // ecx
  int v193; // eax
  int v194; // ecx
  int v195; // eax
  int v196; // ecx
  int v197; // edx
  UINT Duration; // eax
  UINT v199; // ecx
  int v200; // ecx
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdx
  int DeviceFlipMode; // eax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  int v204; // ecx
  unsigned int v205; // r14d
  COREDEVICEACCESS *v206; // r12
  int v207; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v208; // eax
  ULONG_PTR v209; // rcx
  unsigned int v210; // eax
  __int64 v211; // rax
  signed int v212; // ebx
  __int64 v213; // rcx
  unsigned int v214; // esi
  struct DXGALLOCATION *v215; // rax
  __int64 v216; // rax
  DXGADAPTER *v217; // rcx
  unsigned int v218; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v219; // eax
  unsigned int v220; // ecx
  int v221; // edx
  const struct tagRECT *p_SrcRect; // r8
  __int64 v223; // rcx
  LONG v224; // eax
  int v225; // r9d
  unsigned int v226; // r9d
  __int64 v227; // rbx
  const struct tagRECT *v228; // rdx
  CWin32kLocks *v229; // rdi
  const RECT *v230; // rax
  __int64 v231; // r14
  __int64 v232; // r10
  int v233; // r8d
  int v234; // r11d
  int v235; // edx
  const RECT *v236; // rax
  unsigned int v237; // r11d
  int v238; // r8d
  int v239; // r10d
  __int64 v240; // rdx
  RECT DstRect; // xmm0
  UINT v242; // edx
  __int64 v243; // r8
  __int64 v244; // rcx
  int v245; // eax
  const struct tagRECT *v246; // rdx
  unsigned int v247; // edx
  UINT v248; // r8d
  UINT v249; // r9d
  int v250; // ecx
  const struct _DXGKWIN32KENG_INTERFACE *v251; // r14
  int v252; // ebx
  int v253; // eax
  int v254; // ecx
  int v255; // eax
  DXGPRESENTMUTEX *v256; // rcx
  __int64 v257; // rbx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v259; // eax
  struct VIDMM_DMA_BUFFER *v260; // rdx
  bool IsFullWDDMDevice; // al
  DXGDEVICE *v262; // rcx
  int v263; // eax
  int v264; // ecx
  __int64 v265; // r12
  DXGADAPTERSTOPRESETLOCKSHARED *v266; // rax
  _DWORD *p_left; // r11
  UINT v268; // r14d
  UINT v269; // ebx
  const struct _DXGKWIN32KENG_INTERFACE *v270; // rsi
  unsigned int v271; // r10d
  unsigned int v272; // r8d
  unsigned int v273; // r9d
  __int64 v274; // rdx
  __int64 v275; // rcx
  int v276; // eax
  char v277; // r9
  struct VIDMM_DMA_BUFFER *v278; // rdx
  unsigned int v279; // r14d
  char v280; // si
  int v281; // ebx
  struct DXGPROCESS *v282; // rax
  unsigned int v283; // esi
  struct DXGPROCESS *v284; // rdi
  unsigned int v285; // ecx
  __int64 v286; // r8
  int v287; // edx
  struct _EX_RUNDOWN_REF *v288; // rdx
  struct _EX_RUNDOWN_REF *v289; // rax
  unsigned int Ptr_high; // r12d
  __int64 v291; // rcx
  unsigned __int8 *pPrivateDriverData; // rsi
  unsigned int PrivateDriverDataSize; // r14d
  __int64 v294; // rdx
  struct DXGHWQUEUE **v295; // rax
  __int64 v296; // rbx
  struct DXGHWQUEUE *v297; // rdi
  struct DXGPROCESS *v298; // rax
  COREDEVICEACCESS *v299; // rcx
  DXGDEVICE *v300; // rdi
  unsigned __int8 v301; // bl
  CWin32kLocks *v302; // rdi
  const struct _DXGKWIN32KENG_INTERFACE *v303; // rsi
  int v304; // eax
  int v305; // eax
  unsigned int (__fastcall *v306)(HDC, _QWORD, const RECT *, _QWORD, UINT); // r14
  UINT v307; // ebx
  UINT v308; // edi
  const RECT *v309; // rsi
  HDC v310; // rax
  int v311; // eax
  __int64 v312; // rax
  unsigned __int8 v313; // r8
  int CurrentOrientation; // eax
  int v315; // ecx
  __int64 v316; // rcx
  __int64 v317; // rbx
  unsigned int v318; // r12d
  struct DXGHWQUEUE **v319; // rax
  struct DXGHWQUEUE *v320; // r14
  struct DXGPROCESS *v321; // rax
  struct _DXGKARG_PRESENT *v322; // [rsp+20h] [rbp-100h]
  __int64 v323; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v324; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v325; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v326; // [rsp+28h] [rbp-F8h]
  __int64 v327; // [rsp+28h] [rbp-F8h]
  __int64 v328; // [rsp+30h] [rbp-F0h]
  __int64 v329; // [rsp+38h] [rbp-E8h]
  struct _DXGKARG_PRESENT *v330; // [rsp+40h] [rbp-E0h]
  __int64 v331; // [rsp+40h] [rbp-E0h]
  int v332; // [rsp+40h] [rbp-E0h]
  struct tagRECT *v333; // [rsp+48h] [rbp-D8h]
  int v334; // [rsp+48h] [rbp-D8h]
  struct VIDMM_DMA_BUFFER *v335; // [rsp+50h] [rbp-D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v336; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v337[2]; // [rsp+60h] [rbp-C0h]
  enum _D3DDDIFORMAT v338; // [rsp+60h] [rbp-C0h]
  struct COREDEVICEACCESS *v339; // [rsp+68h] [rbp-B8h]
  struct COREDEVICEACCESS *v340; // [rsp+68h] [rbp-B8h]
  __int64 v341; // [rsp+70h] [rbp-B0h]
  __int64 v342; // [rsp+78h] [rbp-A8h]
  __int64 v343; // [rsp+80h] [rbp-A0h]
  __int64 v344; // [rsp+88h] [rbp-98h]
  __int64 v345; // [rsp+90h] [rbp-90h]
  __int64 v346; // [rsp+98h] [rbp-88h]
  struct DXGALLOCATION *v347; // [rsp+A0h] [rbp-80h] BYREF
  struct DXGALLOCATION *v348; // [rsp+A8h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v349; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int Height; // [rsp+B8h] [rbp-68h]
  struct COREDEVICEACCESS *v351; // [rsp+C0h] [rbp-60h]
  char v352; // [rsp+C8h] [rbp-58h]
  unsigned int hDestination; // [rsp+CCh] [rbp-54h] BYREF
  unsigned int v354; // [rsp+D0h] [rbp-50h]
  char v355; // [rsp+D4h] [rbp-4Ch]
  DXGADAPTERSTOPRESETLOCKSHARED *v356; // [rsp+D8h] [rbp-48h]
  unsigned int v357[2]; // [rsp+E0h] [rbp-40h]
  CWin32kLocks *v358; // [rsp+E8h] [rbp-38h]
  unsigned int hSource; // [rsp+F0h] [rbp-30h]
  unsigned int v360[2]; // [rsp+F8h] [rbp-28h]
  enum _D3DDDIFORMAT Color; // [rsp+100h] [rbp-20h]
  const struct _DXGKWIN32KENG_INTERFACE *v362; // [rsp+108h] [rbp-18h]
  unsigned int v363; // [rsp+110h] [rbp-10h]
  _BYTE v364[24]; // [rsp+118h] [rbp-8h] BYREF
  struct DXGCONTEXT **v365; // [rsp+130h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v366; // [rsp+138h] [rbp+18h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v367; // [rsp+140h] [rbp+20h]
  __int64 hWindow; // [rsp+148h] [rbp+28h]
  __int64 v369; // [rsp+150h] [rbp+30h]
  struct _D3DKMT_PRESENT *v370; // [rsp+158h] [rbp+38h]
  struct _EX_RUNDOWN_REF *v371; // [rsp+160h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v372; // [rsp+168h] [rbp+48h] BYREF
  struct _EX_RUNDOWN_REF *v373; // [rsp+170h] [rbp+50h] BYREF
  struct _EX_RUNDOWN_REF *v374; // [rsp+178h] [rbp+58h] BYREF
  __int64 v375; // [rsp+180h] [rbp+60h] BYREF
  struct _D3DKMT_UNLOCK2 v376; // [rsp+188h] [rbp+68h] BYREF
  struct _D3DKMT_UNLOCK v377; // [rsp+190h] [rbp+70h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v378; // [rsp+1A0h] [rbp+80h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v379; // [rsp+1D0h] [rbp+B0h] BYREF
  _BYTE v380[24]; // [rsp+200h] [rbp+E0h] BYREF
  _BYTE v381[24]; // [rsp+218h] [rbp+F8h] BYREF
  struct _D3DKMT_LOCK2 v382; // [rsp+230h] [rbp+110h] BYREF
  struct _D3DKMT_LOCK v383; // [rsp+248h] [rbp+128h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v384; // [rsp+278h] [rbp+158h] BYREF
  enum _D3DDDIFORMAT v385[4]; // [rsp+2B0h] [rbp+190h]
  _DWORD v386[8]; // [rsp+300h] [rbp+1E0h] BYREF
  _QWORD v387[70]; // [rsp+320h] [rbp+200h] BYREF
  struct _DXGKARG_PRESENT v388; // [rsp+550h] [rbp+430h] BYREF
  struct tagRECT v389; // [rsp+600h] [rbp+4E0h] BYREF
  struct tagRECT Source1; // [rsp+610h] [rbp+4F0h] BYREF
  struct tagRECT v391; // [rsp+620h] [rbp+500h] BYREF
  __int128 v392; // [rsp+630h] [rbp+510h] BYREF
  struct tagRECT v393; // [rsp+640h] [rbp+520h] BYREF
  _OWORD v394[20]; // [rsp+650h] [rbp+530h] BYREF
  _BYTE v395[64]; // [rsp+790h] [rbp+670h] BYREF
  _BYTE v396[64]; // [rsp+7D0h] [rbp+6B0h] BYREF
  _BYTE v397[64]; // [rsp+810h] [rbp+6F0h] BYREF
  _BYTE v398[64]; // [rsp+850h] [rbp+730h] BYREF
  _BYTE v399[64]; // [rsp+890h] [rbp+770h] BYREF
  _BYTE v400[64]; // [rsp+8D0h] [rbp+7B0h] BYREF
  _BYTE v401[64]; // [rsp+910h] [rbp+7F0h] BYREF
  _BYTE v402[64]; // [rsp+950h] [rbp+830h] BYREF
  _BYTE v403[64]; // [rsp+990h] [rbp+870h] BYREF
  _BYTE v404[64]; // [rsp+9D0h] [rbp+8B0h] BYREF
  _BYTE v405[64]; // [rsp+A10h] [rbp+8F0h] BYREF
  char v406[64]; // [rsp+A50h] [rbp+930h] BYREF

  v8 = *((_QWORD *)this + 2);
  v9 = a2;
  v10 = a7;
  v358 = a5;
  v11 = *(ADAPTER_RENDER **)(v8 + 16);
  v356 = a4;
  v351 = a3;
  v370 = a2;
  v367 = a7;
  v365 = a6;
  v12 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v11) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3987;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3987LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 45) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3988;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPresentDmaBuffer == NULL", 3988LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v9->Flags.Value & 0x4000) != 0 )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 3994;
    return result;
  }
  Win32kInterface = DXGPROCESS::GetWin32kInterface(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL));
  v14 = v9->Flags.Value & 0x12000;
  v362 = Win32kInterface;
  if ( v14 == 73728 )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 4005;
    return result;
  }
  memset(&v388, 0, sizeof(v388));
  hSource = v9->hSource;
  hDestination = v9->hDestination;
  v15 = *(_DWORD *)a7 | 0x10020;
  *(_DWORD *)a7 = v15;
  if ( (v9->Flags.Value & 0x10000) == 0 )
    v15 |= 1u;
  v16 = v15 | 0x100;
  *(_DWORD *)a7 = v16;
  *(_DWORD *)a7 = v16 ^ (v16 ^ (32 * v9->Flags.Value)) & 0x20000;
  if ( (v9->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = v9->PresentCount;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v354 = 0;
  Height = 0;
  Width = 0;
  Color = D3DDDIFMT_UNKNOWN;
  v357[0] = 0;
  v360[0] = 0;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v347, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v348, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v349, 0LL);
  v18 = v9->hDestination;
  v363 = 0;
  if ( v18 )
  {
    v46 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v46 + 248));
    v47 = (v18 >> 6) & 0xFFFFFF;
    if ( v47 < *(_DWORD *)(v46 + 296)
      && (v48 = *(_QWORD *)(v46 + 280) + 16LL * v47, ((v18 >> 25) & 0x60) == (*(_BYTE *)(v48 + 8) & 0x60))
      && (*(_DWORD *)(v48 + 8) & 0x2000) == 0
      && (v49 = *(_DWORD *)(v48 + 8) & 0x1F) != 0 )
    {
      if ( v49 == 5 )
      {
        v50 = *(struct _EX_RUNDOWN_REF **)v48;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v50 = 0LL;
      }
    }
    else
    {
      v50 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v371, v50);
    _InterlockedDecrement((volatile signed __int32 *)(v46 + 264));
    ExReleasePushLockSharedEx(v46 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v348, &v371);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v371);
    if ( !v348 )
    {
      v31 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, this, v9->hDestination);
      WdLogGlobalForLineNumber = 4060;
      goto LABEL_36;
    }
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v348 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 16LL) )
    {
      v31 = -1073741811;
      WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v348, -1073741811LL);
      v101 = v348;
      v331 = 0LL;
      v329 = 0LL;
      WdLogGlobalForLineNumber = 4070;
      goto LABEL_153;
    }
    memset(&v384.Width, 0, 40);
    v384.hAllocation = *(HANDLE *)(*((_QWORD *)v348 + 6) + 16LL);
    v51 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v384);
    v28 = v51;
    if ( v51 < 0 )
    {
      WdLogSingleEntry4(2LL, v51, this, *(_QWORD *)(*((_QWORD *)v348 + 6) + 16LL), v348);
      v215 = v348;
      WdLogGlobalForLineNumber = 4083;
      goto LABEL_418;
    }
    Width = v384.Width;
    v357[0] = v384.Width;
    v360[0] = v384.Height;
  }
  if ( (v9->Flags.Value & 0x8002) == 0 )
  {
    v19 = v9->hSource;
    v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 248));
    v21 = (v19 >> 6) & 0xFFFFFF;
    if ( v21 < *(_DWORD *)(v20 + 296)
      && (v22 = *(_QWORD *)(v20 + 280) + 16LL * v21, ((v19 >> 25) & 0x60) == (*(_BYTE *)(v22 + 8) & 0x60))
      && (*(_DWORD *)(v22 + 8) & 0x2000) == 0
      && (v23 = *(_DWORD *)(v22 + 8) & 0x1F) != 0 )
    {
      if ( v23 == 5 )
      {
        v24 = *(struct _EX_RUNDOWN_REF **)v22;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v24 = 0LL;
      }
    }
    else
    {
      v24 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v372, v24);
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 264));
    ExReleasePushLockSharedEx(v20 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v347, &v372);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v372);
    v25 = (struct _EX_RUNDOWN_REF *)v347;
    if ( !v347 )
    {
      v31 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, this, v9->hSource);
      WdLogGlobalForLineNumber = 4098;
      goto LABEL_36;
    }
    v12 = 0;
    memset(&v378.Width, 0, 40);
    v378.hAllocation = *(HANDLE *)(*((_QWORD *)v347 + 6) + 16LL);
    if ( (v9->Flags.Value & 0x10000000) != 0 )
    {
      v378.Width = v9[1].hSource;
      v378.Height = v9[1].hDestination;
      v354 = v378.Width;
      Color = v9[1].Color;
      v378.Format = Color;
      Height = v378.Height;
      goto LABEL_27;
    }
    v26 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v347 + 1) + 16LL) + 16LL) == *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) )
    {
      v27 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v26 + 16), &v378);
      v28 = v27;
      if ( v27 >= 0 )
      {
        Color = v378.Format;
        Height = v378.Height;
        v354 = v378.Width;
        goto LABEL_26;
      }
      WdLogSingleEntry4(2LL, v27, this, *(_QWORD *)(*((_QWORD *)v347 + 6) + 16LL), v347);
      v215 = v347;
      WdLogGlobalForLineNumber = 4137;
LABEL_418:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
        v28,
        (__int64)this,
        *(_QWORD *)(*((_QWORD *)v215 + 6) + 16LL),
        (__int64)v215,
        0LL);
      goto LABEL_550;
    }
    v31 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v347, -1073741811LL);
    v101 = v347;
    v331 = 0LL;
    v329 = 0LL;
    WdLogGlobalForLineNumber = 4126;
LABEL_153:
    v328 = -1073741811LL;
    v102 = L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x";
    v327 = (__int64)v101;
    v323 = *((_QWORD *)this + 2);
    goto LABEL_154;
  }
LABEL_26:
  v25 = (struct _EX_RUNDOWN_REF *)v347;
LABEL_27:
  v29 = v9->hDestination;
  if ( !v29
    || (Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value,
        (*(_DWORD *)&Value & 0x10000) != 0) )
  {
    Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
    if ( (*(_BYTE *)&Value & 4) == 0 )
    {
      if ( (*(_BYTE *)&Value & 1) == 0 && (*(_BYTE *)&Value & 2) == 0 )
      {
        if ( (*(_WORD *)&Value & 0x8000) == 0 )
        {
          v31 = -1073741811;
          WdLogSingleEntry5(3LL, -1073741811LL, this, v9->pSrcSubRects, v9->SubRectCnt, v9->Flags.Value);
          WdLogGlobalForLineNumber = 6239;
          goto LABEL_33;
        }
        if ( (*(_BYTE *)&Value & 6) == 0 && (v9->Flags.Value & 0x628) == 0 && (v9->Flags.Value & 0x21C0) == 0 )
        {
          Model = v9->PresentHistoryToken.Model;
          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
          {
            if ( v9->PresentHistoryToken.Token.Flip.PlaneIndex <= 0x10 )
            {
LABEL_246:
              v121 = v351;
              v122 = v356;
              LODWORD(v28) = SubmitPresentHistoryTokenPreparation(
                               v356,
                               v351,
                               *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                               &v9->PresentHistoryToken,
                               v9->PresentLimitSemaphore,
                               (v9->Flags.Value & 0x10) != 0);
              if ( (int)v28 >= 0 )
              {
                TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
                  (TOKEN_BINDING_GUARD *)v386,
                  &v9->PresentHistoryToken,
                  v122,
                  v121);
                v386[0] = SubmitPresentHistoryToken(
                            &v9->PresentHistoryToken,
                            v121,
                            v122,
                            v358,
                            1,
                            0LL,
                            (struct DXGK_PRESENT_PARAMS *)v9,
                            a7,
                            this,
                            0LL,
                            0LL);
                v31 = v386[0];
                TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v386);
LABEL_315:
                if ( v31 >= 0 )
                {
LABEL_316:
                  v163 = v349;
                  if ( v349 )
                  {
                    if ( (v9->Flags.Value & 0x10000000) == 0 )
                    {
                      v164 = *((_QWORD *)this + 2);
                      v165 = *(_QWORD *)(v164 + 1896);
                      if ( v165 )
                      {
                        if ( (*(_DWORD *)(*(_QWORD *)(v164 + 40) + 408LL) & 4) == 0 )
                        {
                          memset(v394, 0, 0x138uLL);
                          v166 = 2LL;
                          v167 = v363;
                          LODWORD(v394[0]) = v9->hDevice;
                          DWORD1(v394[0]) = v363;
                          DWORD2(v394[0]) = (*(_DWORD *)(v349[6].Count + 4) >> 6) & 0xF;
                          v168 = &v394[1];
                          HIDWORD(v394[0]) = v9->BroadcastContextCount;
                          BroadcastContext = v9->BroadcastContext;
                          do
                          {
                            *v168 = *(_OWORD *)BroadcastContext;
                            v168[1] = *((_OWORD *)BroadcastContext + 1);
                            v168[2] = *((_OWORD *)BroadcastContext + 2);
                            v168[3] = *((_OWORD *)BroadcastContext + 3);
                            v168[4] = *((_OWORD *)BroadcastContext + 4);
                            v168[5] = *((_OWORD *)BroadcastContext + 5);
                            v168[6] = *((_OWORD *)BroadcastContext + 6);
                            v168 += 8;
                            v170 = *((_OWORD *)BroadcastContext + 7);
                            BroadcastContext += 32;
                            *(v168 - 1) = v170;
                            --v166;
                          }
                          while ( v166 );
                          LODWORD(v394[17]) = 0;
                          LODWORD(v394[18]) = 0;
                          LODWORD(v394[19]) = 4;
                          v171 = OUTPUTDUPL_MGR::ProcessPresent(
                                   *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v165 + 3160) + 120LL),
                                   this,
                                   (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS)4,
                                   v167,
                                   HIDWORD(v394[0]),
                                   (struct _D3DKMT_PRESENT_RGNS *)&v394[17],
                                   (const struct DXGK_PRESENT_PARAMS *)v9,
                                   (*(_DWORD *)(v163[6].Count + 4) >> 6) & 0xF,
                                   v365,
                                   v351);
                          if ( v171 == 259 )
                            v171 = 0;
                          v31 = v171;
                        }
                      }
                    }
                  }
                  goto LABEL_33;
                }
                goto LABEL_33;
              }
LABEL_550:
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v349);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v348);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
              return (unsigned int)v28;
            }
          }
          else if ( ((Model - 7) & 0xFFFFFFFD) == 0 )
          {
            goto LABEL_246;
          }
        }
        v31 = -1073741811;
        WdLogSingleEntry3(3LL, this, v9->Flags.Value, -1073741811LL);
        WdLogGlobalForLineNumber = 6203;
        goto LABEL_36;
      }
      v33 = 0;
      v352 = 0;
      if ( (*(_WORD *)&Value & 0x100) != 0 )
      {
        v114 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v114 + 1896) )
        {
          v31 = -1073741811;
          WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
          WdLogGlobalForLineNumber = 5152;
          goto LABEL_36;
        }
        VidPnSourceId = v9->VidPnSourceId;
        v116 = *(unsigned int *)(v114 + 1904);
        if ( (unsigned int)v116 <= (unsigned int)VidPnSourceId )
        {
          WdLogSingleEntry2(3LL, VidPnSourceId, v116);
          WdLogGlobalForLineNumber = 5158;
          goto LABEL_237;
        }
      }
      pSrcSubRects = v9->pSrcSubRects;
      if ( (*(_BYTE *)&Value & 2) != 0 )
      {
        if ( !pSrcSubRects || !v9->SubRectCnt || (*(_BYTE *)&Value & 1) != 0 || (v9->Flags.Value & 0x86BC) != 0 )
        {
          v31 = -1073741811;
          WdLogSingleEntry5(3LL, this, pSrcSubRects, v9->SubRectCnt, v9->Flags.Value, -1073741811LL);
          WdLogGlobalForLineNumber = 5180;
          goto LABEL_36;
        }
        v36 = Height;
        hSource = 0;
      }
      else
      {
        if ( !pSrcSubRects
          || (SubRectCnt = v9->SubRectCnt, !(_DWORD)SubRectCnt)
          || !v354
          || (v36 = Height) == 0
          || (v37 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value,
              (*(_WORD *)&v37 & 0x802C) != 0) )
        {
          v31 = -1073741811;
          WdLogSingleEntry5(3LL, this, pSrcSubRects, v9->SubRectCnt, v9->Flags.Value, -1073741811LL);
          WdLogGlobalForLineNumber = 5200;
          goto LABEL_36;
        }
        if ( ((*(unsigned int *)&v37 >> 9) & 1) != 0 || (*(_WORD *)&v37 & 0x400) != 0 )
        {
          if ( ((*(unsigned int *)&v37 >> 9) & 1) == ((*(unsigned int *)&v37 >> 10) & 1) )
          {
            v31 = -1073741811;
            WdLogSingleEntry5(3LL, -1073741811LL, this, pSrcSubRects, SubRectCnt, v9->Flags.Value);
            WdLogGlobalForLineNumber = 5212;
            goto LABEL_36;
          }
          if ( (*(_WORD *)&v37 & 0x100) == 0
            || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                  *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                  *((const struct DXGDEVICE **)this + 2),
                  v9->VidPnSourceId) )
          {
            v31 = -1073741811;
            WdLogSingleEntry5(3LL, this, v9->pSrcSubRects, v9->SubRectCnt, v9->Flags.Value, -1073741811LL);
            WdLogGlobalForLineNumber = 5221;
            goto LABEL_36;
          }
        }
      }
      v38 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
      v39 = *(_BYTE *)&v38 ^ (*(_BYTE *)&v9->Flags.0 & 2 | *(_BYTE *)&v388.Flags.0 & 0xFD);
      v38 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)(*(unsigned int *)&v38 >> 5);
      v40 = (v9->Flags.Value & 2 | v388.Flags.Value & 0xFFFFFFFD) ^ v39 & 1;
      v388.Flags.Value = v40 ^ ((unsigned __int8)v40 ^ *(_BYTE *)&v38) & 0x10 ^ ((unsigned __int8)(v40 ^ (v40 ^ *(_BYTE *)&v38) & 0x10) ^ *(_BYTE *)&v38) & 0x20 ^ ((unsigned __int8)(v40 ^ (v40 ^ *(_BYTE *)&v38) & 0x10 ^ (v40 ^ (v40 ^ *(_BYTE *)&v38) & 0x10 ^ *(_BYTE *)&v38) & 0x20) ^ *(_BYTE *)&v38) & 0x40;
      v388.Color = v9->Color;
      v31 = DXGPRESENT::CheckInput(*((DXGPRESENT **)this + 19), v9, v354, v36);
      if ( v31 < 0 )
        goto LABEL_33;
      v41 = (DXGPRESENT *)*((_QWORD *)this + 19);
      if ( (*((_DWORD *)v41 + 1) & 4) != 0 )
      {
LABEL_147:
        if ( bTracingEnabled && !v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventBlitCancel);
        goto LABEL_316;
      }
      DXGPRESENT::CheckOutput(v41, v357[0], v360[0]);
      v42 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1896LL);
      if ( !v42 || DXGADAPTER::IsDisplayOnlyAdapter(v42) )
      {
        v54 = v351;
        v103 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (v9->Flags.Value & 0x10) == 0, v351);
        v65 = v103;
        if ( v103 < 0 )
        {
          WdLogSingleEntry2(4LL, v103, this);
          WdLogGlobalForLineNumber = 5270;
          goto LABEL_614;
        }
      }
      else
      {
        if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5246;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"GetDisplayAdapter() == GetRenderAdapter()",
            5246LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v43 = v351;
        for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 2) + 1904LL); ++i )
        {
          v45 = DXGCONTEXT::WaitForQueuedPresentLimit(this, i, (v9->Flags.Value & 0x10) == 0, v43);
          LODWORD(v28) = v45;
          if ( v45 < 0 )
          {
            WdLogSingleEntry2(4LL, v45, this);
            WdLogGlobalForLineNumber = 5256;
            goto LABEL_550;
          }
        }
        v54 = v43;
      }
      v31 = DXGCONTEXT::AcquireDmaBuffer(this, (struct VIDMM_DMA_BUFFER **)this + 45, v54, 0);
      if ( v31 < 0 )
        goto LABEL_33;
      if ( !*((_QWORD *)this + 45) && !*((_BYTE *)this + 434) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5284;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pPresentDmaBuffer || IsParavirtualized()",
          5284LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGPRESENTMUTEX::DXGPRESENTMUTEX(
        (DXGPRESENTMUTEX *)v364,
        *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
      v55 = 0;
      if ( (v9->Flags.Value & 0x10000) != 0 )
      {
        if ( v9->hDestination )
        {
          v56 = *((_QWORD *)v348 + 6);
          v57 = *(_DWORD *)(v56 + 4);
          *(_DWORD *)(v56 + 4) = v57 | 0x400;
          v55 = (v57 & 0x400) == 0;
        }
      }
      else
      {
        COREDEVICEACCESS::Release(v54);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v364);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
        v276 = COREDEVICEACCESS::AcquireShared(v54, 0LL);
        v31 = v276;
        if ( v276 < 0 )
        {
          WdLogSingleEntry2(4LL, v276, this);
          WdLogGlobalForLineNumber = 5305;
          COREDEVICEACCESS::AcquireSharedUncheck(v54, 0LL);
          DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v364);
          goto LABEL_36;
        }
      }
      v58 = (*((__int64 (**)(void))v362 + 1))();
      v357[0] = v58;
      CurrentThreadId = PsGetCurrentThreadId();
      v60 = *((_BYTE *)this + 434) == 0;
      v61 = CurrentThreadId;
      *(_QWORD *)v360 = CurrentThreadId;
      if ( v60 )
        VIDSCH_EXPORT::VidSchGetMonitorPowerState(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
          *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 744LL));
      v62 = *((_QWORD *)this + 19);
      if ( *(_DWORD *)(v62 + 8) != v58
        || *(HANDLE *)(v62 + 56) != v61
        || *(HWND *)(v62 + 48) != v9->hWindow
        || *(_DWORD *)(v62 + 64)
        || v55
        || (v104 = *(_DWORD *)(v62 + 4), ((v104 & 8) != 0) | BYTE1(v104) & 1) )
      {
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
        v63 = v351;
        COREDEVICEACCESS::Release(v351);
        v64 = v358;
        v31 = CWin32kLocks::Lock(v358, v9->hWindow, HIWORD(v9->Flags.Value) & 1, 1, 0);
        if ( (v9->Flags.Value & 0x10000) == 0
          || (v375 = 0LL,
              (*((void (__fastcall **)(_QWORD, __int64 *))v362 + 31))(*(_QWORD *)v64, &v375),
              *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = v375,
              (v9->Flags.Value & 0x10000) == 0) )
        {
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v364);
        }
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
        v65 = COREDEVICEACCESS::AcquireShared(v63, 0LL);
        if ( v65 < 0 )
          goto LABEL_601;
        if ( v31 < 0 )
        {
LABEL_92:
          v69 = *((_QWORD *)this + 19);
          v70 = 0;
          v355 = 0;
          v71 = *(_DWORD *)(v69 + 4);
          if ( (v71 & 0x10) == 0 )
          {
            if ( v31 < 0 || (v71 & 2) != 0 )
            {
LABEL_142:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
              if ( v70 )
              {
                CWin32kLocks::Unlock(v358);
                COREDEVICEACCESS::Release(v351);
                DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 7LL, 4294967293LL, 0LL);
                v31 = COREDEVICEACCESS::AcquireShared(v351, 0LL);
              }
LABEL_144:
              v33 = v352;
              if ( *((_QWORD *)this + 45) )
              {
                if ( v31 >= 0
                  && (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 0x10) != 0
                  && (((*(_BYTE *)&v9->Flags.0 & 2) == 0) & (unsigned __int8)~(unsigned __int8)(*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) >> 1)) != 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 6163;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"!NT_SUCCESS(ntStatus) || !m_pPresent->BltViaGDI() || m_pPresent->IsBltEmpty() || pPresent->Flags.ColorFill",
                    6163LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                  *((struct VIDMM_DMA_BUFFER **)this + 45));
                *((_QWORD *)this + 45) = 0LL;
              }
              if ( (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 0x80) != 0 )
              {
                if ( (unsigned int)(v31 + 1071775738) > 1 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 6171;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"ntStatus == STATUS_GRAPHICS_PRESENT_OCCLUDED || ntStatus == STATUS_GRAPHICS_PRESENT_DENIED",
                    6171LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v31 = 0;
              }
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v364);
              if ( v31 < 0 )
                goto LABEL_33;
              goto LABEL_147;
            }
            if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))v362 + 30))(0LL, 0LL, 0LL) )
            {
              if ( (v9->Flags.Value & 0x12100) != 0x10000 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5917;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"((pPresent->Flags.RedirectedBlt) && (!pPresent->Flags.RestrictVidPnSource) && (!pPresent->Flags.Rotate))",
                  5917LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) && (v9->Flags.Value & 0x4000000) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5922;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"GetDisplayAdapter() != NULL || pPresent->Flags.CrossAdapter",
                5922LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( (v9->Flags.Value & 0x10000) == 0 )
              goto LABEL_106;
            v73 = *(HDC *)v358;
            Current = DXGPROCESS::GetCurrent(v72);
            v75 = DXGPROCESS::GetWin32kInterface(Current);
            v76 = v75;
            if ( !v73
              || !v75
              || *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) != v9->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
            {
              goto LABEL_106;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
            v77 = v351;
            COREDEVICEACCESS::Release(v351);
            memset(v387, 0, 0x228uLL);
            LODWORD(v387[0]) = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), 0);
            v387[1] = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
            v78 = 1;
            v387[3] = *((unsigned int *)this + 6);
            LODWORD(v387[2]) = 1;
            for ( j = 0LL; (unsigned int)j < v9->BroadcastContextCount; ++LODWORD(v387[2]) )
            {
              v312 = (unsigned int)j;
              j = (unsigned int)(j + 1);
              v387[v78 + 3] = v9->BroadcastContext[v312];
              v78 = LODWORD(v387[2]) + 1;
            }
            if ( !*((_BYTE *)this + 434)
              && (unsigned int)VIDSCH_EXPORT::VidSchGetNumUnorderedWaitsInDevice(
                                 *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                                 *(struct _VIDSCH_DEVICE **)(*((_QWORD *)this + 2) + 800LL)) )
            {
              v355 = 1;
              LOBYTE(v387[68]) = 1;
            }
            (*((void (__fastcall **)(HDC, _QWORD *, __int64))v76 + 32))(v73, v387, j);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
            v80 = COREDEVICEACCESS::AcquireShared(v77, 0LL);
            v65 = v80;
            if ( v80 >= 0 )
            {
LABEL_106:
              v81 = 0;
              for ( k = 0; ; ++k )
              {
                v60 = (v9->Flags.Value & 0x10000) == 0;
                v357[0] = k;
                v83 = v60 ? *(_DWORD *)(*((_QWORD *)this + 2) + 1904LL) : 1;
                if ( k >= v83 )
                  break;
                v388.SubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), k);
                if ( v388.SubRectCnt )
                {
                  if ( (v9->Flags.Value & 0x10000) != 0 )
                  {
                    v84 = hDestination;
                  }
                  else
                  {
                    v313 = *((_BYTE *)this + 432) || *((_BYTE *)this + 433);
                    v84 = DXGDEVICE::OpenCddPrimaryHandle(*((DXGDEVICE **)this + 2), k, v313, *((_DWORD *)this + 97));
                    hDestination = v84;
                  }
                  if ( v84 )
                  {
                    v388.pDstSubRects = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), k);
                    if ( (v9->Flags.Value & 0x2000) != 0 )
                    {
                      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                                             k,
                                             1);
                      v315 = 0;
                      if ( CurrentOrientation != 1 )
                        v315 = 128;
                      v388.Flags.Value = v315 | v388.Flags.Value & 0xFFFFFF7F;
                    }
                    v393 = 0LL;
                    if ( (v9->Flags.Value & 0x10000) != 0 )
                      v85 = &v393;
                    else
                      v85 = (struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL)
                                                                     + 3160LL)
                                                         + 128LL)
                                             + 628LL
                                             + 4024LL * k);
                    v86 = (RECT *)*((_QWORD *)this + 19);
                    v388.SrcRect = v86[9];
                    DXGPRESENT::GetDdiDstRect((DXGPRESENT *)v86, &v388.DstRect, v85);
                    if ( bTracingEnabled && *((_QWORD *)this + 45) )
                    {
                      v87 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                              hDestination);
                      v88 = *((_QWORD *)this + 2);
                      v370 = (struct _D3DKMT_PRESENT *)v87;
                      v89 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                              *(VIDMM_EXPORT **)(*(_QWORD *)(v88 + 16) + 760LL),
                              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v88 + 16) + 768LL),
                              hSource);
                      pDstSubRects = v388.pDstSubRects;
                      v91 = v388.SubRectCnt;
                      v369 = v89;
                      v362 = (const struct _DXGKWIN32KENG_INTERFACE *)*((_QWORD *)this + 45);
                      hWindow = (__int64)v9->hWindow;
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                      {
                        LODWORD(v346) = v388.SubRectCnt;
                        LODWORD(v345) = v388.DstRect.bottom;
                        LODWORD(v344) = v388.DstRect.top;
                        LODWORD(v343) = v388.DstRect.right;
                        LODWORD(v342) = v388.DstRect.left;
                        LODWORD(v341) = v388.SrcRect.bottom;
                        LODWORD(v339) = v388.SrcRect.top;
                        v337[0] = (enum _D3DDDIFORMAT)v388.SrcRect.right;
                        LODWORD(v336) = v388.SrcRect.left;
                        v81 = 0;
                        LODWORD(v335) = v388.Flags.0;
                        LODWORD(v333) = 0;
                        LODWORD(v330) = 1;
                        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                          (__int64)&DxgkControlGuid_Context,
                          (__int64)&EventBlit,
                          0LL,
                          hWindow,
                          v362,
                          0LL,
                          v369,
                          v370,
                          v330,
                          v333,
                          v335,
                          v336,
                          *(_QWORD *)v337,
                          v339,
                          v341,
                          v342,
                          v343,
                          v344,
                          v345,
                          v346);
                      }
                      if ( v91 )
                      {
                        v92 = v362;
                        while ( 1 )
                        {
                          v93 = 0;
                          if ( v91 - v81 > 0x10 )
                            break;
                          v94 = v91 - v81;
                          if ( v91 != v81 )
                            goto LABEL_125;
LABEL_127:
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          {
                            LODWORD(v326) = v94;
                            LODWORD(v322) = v91 - v81 <= 0x10;
                            McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                              (__int64)&DxgkControlGuid_Context,
                              (__int64)&EventBlitRect,
                              0LL,
                              v92,
                              v322,
                              v326,
                              v405,
                              v404,
                              v403,
                              v406);
                          }
                          v81 += 16;
                          if ( v81 >= v91 )
                          {
                            v10 = v367;
                            k = v357[0];
                            goto LABEL_131;
                          }
                        }
                        v94 = 16;
LABEL_125:
                        v95 = 0LL;
                        do
                        {
                          v96 = v93 + v81;
                          ++v93;
                          v96 *= 2LL;
                          v95 += 4LL;
                          *(_DWORD *)&v404[v95 + 60] = *(&pDstSubRects->left + 2 * v96);
                          *(_DWORD *)&v403[v95 + 60] = *(&pDstSubRects->right + 2 * v96);
                          *(_DWORD *)&v402[v95 + 60] = *(&pDstSubRects->top + 2 * v96);
                          *(_DWORD *)&v405[v95 + 60] = *(&pDstSubRects->bottom + 2 * v96);
                        }
                        while ( v93 < v94 );
                        goto LABEL_127;
                      }
LABEL_131:
                      v352 = 1;
                      v81 = 0;
                    }
                    if ( *((_BYTE *)this + 434) )
                    {
                      v316 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                      v317 = *(_QWORD *)(v316 + 16);
                      v318 = *((_DWORD *)v348 + 5);
                      v357[0] = *((_DWORD *)v347 + 5);
                      v319 = (struct DXGHWQUEUE **)v9[1].hWindow;
                      if ( v319 )
                        v320 = *v319;
                      else
                        v320 = 0LL;
                      v321 = DXGPROCESS::GetCurrent(v316);
                      v98 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v317 + 4712),
                              v321,
                              this,
                              v320,
                              v357[0],
                              v318,
                              &v388.SrcRect,
                              &v388.DstRect,
                              v388.SubRectCnt,
                              (struct tagRECT *)v388.pDstSubRects,
                              v388.PrivateDriverDataSize,
                              (unsigned __int8 *)v388.pPrivateDriverData);
                      v97 = v351;
                      v81 = 0;
                    }
                    else
                    {
                      v97 = v351;
                      v340 = v351;
                      v338 = Color;
                      *((_DWORD *)v10 + 29) = k;
                      v98 = DXGCONTEXT::SubmitPresent(
                              this,
                              v9,
                              (struct DXGHWQUEUE **)v9[1].hWindow,
                              v9->BroadcastContextCount,
                              v365,
                              v347,
                              hSource,
                              hDestination,
                              &v388,
                              0LL,
                              *((struct VIDMM_DMA_BUFFER **)this + 45),
                              v10,
                              v338,
                              v340);
                    }
                    *((_QWORD *)this + 45) = 0LL;
                    v31 = v98;
                    if ( (v9->Flags.Value & 0x10000) != 0
                      && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == v9->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                    {
                      v9->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                      v9->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                      if ( v388.SubRectCnt > 0x10 )
                      {
                        v9->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                        *(RECT *)((char *)&v9->PresentHistoryToken.Token.SurfaceComplete + 28) = v388.DstRect;
                      }
                      else
                      {
                        v9->PresentHistoryToken.Token.Flip.VidPnSourceId = v388.SubRectCnt;
                        for ( m = 0;
                              m < v388.SubRectCnt;
                              *(RECT *)((char *)&v9->PresentHistoryToken.Token.SurfaceComplete + 16 * v100 + 28) = v388.pDstSubRects[v100] )
                        {
                          v100 = m++;
                        }
                      }
                      v9->PresentHistoryToken.TokenSize = 16 * (v9->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
                      v31 = SubmitPresentHistoryToken(
                              &v9->PresentHistoryToken,
                              v97,
                              v356,
                              v358,
                              0,
                              0LL,
                              (struct DXGK_PRESENT_PARAMS *)v9,
                              0LL,
                              this,
                              0LL,
                              0LL);
                      v81 = 0;
                    }
                    if ( v31 < 0 )
                      break;
                  }
                }
              }
              v70 = v355;
              goto LABEL_142;
            }
            WdLogSingleEntry2(4LL, v80, this);
            v299 = v77;
            WdLogGlobalForLineNumber = 5972;
LABEL_612:
            COREDEVICEACCESS::AcquireSharedUncheck(v299, 0LL);
            v256 = (DXGPRESENTMUTEX *)v364;
            goto LABEL_613;
          }
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
          if ( v31 < 0 || (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 2) != 0 )
            goto LABEL_217;
          if ( v9->BroadcastContextCount )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 5566;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Present via GDI cannot be broadcasted",
              5566LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v31 = -1071774910;
            goto LABEL_217;
          }
          if ( (v9->Flags.Value & 0x10000) != 0 && v9->hDestination )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5572;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
              5572LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v392 = 0LL;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPerformanceWarning);
          v105 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
          if ( (*(_WORD *)&v105 & 0x100) != 0 )
          {
            v119 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL) + 128LL)
                             + 4024LL * v9->VidPnSourceId
                             + 628);
            *(_QWORD *)v360 = &v392;
            v392 = v119;
          }
          else
          {
            *(_QWORD *)v360 = 0LL;
          }
          if ( (*(_BYTE *)&v105 & 1) != 0 )
          {
            if ( *(_BYTE *)&v105 >= 0 )
            {
              v388.SrcRect.bottom = Height;
              right = v354;
              *(_QWORD *)&v388.SrcRect.left = 0LL;
            }
            else
            {
              top = v9->SrcRect.top;
              if ( top < 0 )
                top = 0;
              v388.SrcRect.top = top;
              left = v9->SrcRect.left;
              if ( left < 0 )
                left = 0;
              v388.SrcRect.left = left;
              bottom = v9->SrcRect.bottom;
              if ( (int)Height < bottom )
                bottom = Height;
              v388.SrcRect.bottom = bottom;
              right = v9->SrcRect.right;
              if ( (int)v354 < right )
                right = v354;
            }
            v388.SrcRect.right = right;
            v388.DstRect = v388.SrcRect;
            v388.Flags.Value = v388.Flags.Value & 0xFFFFF7FF | (v9->Flags.Value >> 9) & 0x800;
            if ( !v9->SubRectCnt )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5619;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPresent->SubRectCnt", 5619LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( !v9->pSrcSubRects )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5620;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pPresent->pSrcSubRects",
                5620LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v31 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), v9->SubRectCnt);
            if ( v31 < 0 )
              goto LABEL_217;
            DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
            v111 = 0LL;
            v112 = 0;
            v388.SubRectCnt = 0;
            v388.pDstSubRects = DdiSubRectList;
            if ( !v9->SubRectCnt )
              goto LABEL_217;
            while ( 1 )
            {
              if ( DXGPRESENT::IntersectRect(&DdiSubRectList[v111], &v9->pSrcSubRects[v112], &v388.SrcRect) )
                v111 = ++v388.SubRectCnt;
              else
                v111 = v388.SubRectCnt;
              if ( ++v112 >= v9->SubRectCnt )
                break;
              DdiSubRectList = (struct tagRECT *)v388.pDstSubRects;
            }
            if ( !(_DWORD)v111 )
              goto LABEL_217;
            if ( DXGPRESENT::PrepareStagingBuffer(
                   *((DXGPRESENT **)this + 19),
                   *((struct DXGDEVICE **)this + 2),
                   v9->hSource,
                   v63,
                   &hDestination) < 0 )
              goto LABEL_216;
            if ( !*((_BYTE *)this + 434) )
            {
              v123 = hDestination;
              if ( !hDestination )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5667;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"hDestinationAllocation",
                  5667LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v123 = hDestination;
              }
              if ( bTracingEnabled )
              {
                v124 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                         v123);
                v125 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                         hSource);
                v126 = v388.pDstSubRects;
                v127 = v388.SubRectCnt;
                hWindow = v125;
                *(_QWORD *)v357 = *((_QWORD *)this + 45);
                v369 = (__int64)v9->hWindow;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  LODWORD(v330) = 1;
                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventBlit,
                    0LL,
                    v369,
                    *(_QWORD *)v357,
                    0LL,
                    hWindow,
                    v124,
                    v330,
                    0,
                    v388.Flags.Value,
                    v388.SrcRect.left,
                    v388.SrcRect.right,
                    v388.SrcRect.top,
                    v388.SrcRect.bottom,
                    v388.DstRect.left,
                    v388.DstRect.right,
                    v388.DstRect.top,
                    v388.DstRect.bottom,
                    v388.SubRectCnt);
                }
                v128 = 0;
                if ( v127 )
                {
                  v129 = *(_QWORD *)v357;
                  while ( 1 )
                  {
                    v130 = 0;
                    if ( v127 - v128 > 0x10 )
                      break;
                    v131 = v127 - v128;
                    if ( v127 != v128 )
                      goto LABEL_258;
LABEL_260:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    {
                      LODWORD(v326) = v131;
                      LODWORD(v324) = v127 - v128 <= 0x10;
                      McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                        (__int64)&DxgkControlGuid_Context,
                        (__int64)&EventBlitRect,
                        0LL,
                        v129,
                        v324,
                        v326,
                        v401,
                        v400,
                        v399,
                        v398);
                    }
                    v128 += 16;
                    if ( v128 >= v127 )
                    {
                      v9 = v370;
                      v10 = v367;
                      goto LABEL_264;
                    }
                  }
                  v131 = 16;
LABEL_258:
                  v132 = 0LL;
                  do
                  {
                    v133 = v130 + v128;
                    ++v130;
                    v133 *= 2LL;
                    v132 += 4LL;
                    *(_DWORD *)&v400[v132 + 60] = *(&v126->left + 2 * v133);
                    *(_DWORD *)&v399[v132 + 60] = *(&v126->right + 2 * v133);
                    *(_DWORD *)&v398[v132 + 60] = *(&v126->top + 2 * v133);
                    *(_DWORD *)&v397[v132 + 60] = *(&v126->bottom + 2 * v133);
                  }
                  while ( v130 < v131 );
                  goto LABEL_260;
                }
LABEL_264:
                v123 = hDestination;
                v63 = v351;
                v352 = 1;
              }
              v134 = DXGCONTEXT::SubmitPresent(
                       this,
                       v9,
                       (struct DXGHWQUEUE **)v9[1].hWindow,
                       v9->BroadcastContextCount,
                       v365,
                       v347,
                       hSource,
                       v123,
                       &v388,
                       0LL,
                       *((struct VIDMM_DMA_BUFFER **)this + 45),
                       v10,
                       Color,
                       v63);
              *((_QWORD *)this + 45) = 0LL;
LABEL_266:
              if ( v134 < 0 )
              {
LABEL_216:
                WdLogSingleEntry2(3LL, -1071775738LL, this);
                WdLogGlobalForLineNumber = 5849;
                v31 = -1071775738;
                goto LABEL_217;
              }
              v135 = (DXGDEVICE *)*((_QWORD *)this + 2);
              v136 = 0;
              if ( (v9->Flags.Value & 0x100) != 0
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(ADAPTER_DISPLAY **)(*((_QWORD *)v135 + 237) + 3160LL),
                     *((const struct DXGDEVICE **)this + 2),
                     v9->VidPnSourceId) )
              {
                v136 = 1;
              }
              else if ( !DXGDEVICE::AllowLegacyPresent(v135) )
              {
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
                v137 = v351;
                COREDEVICEACCESS::Release(v351);
                if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                {
                  COREDEVICEACCESS::AcquireSharedUncheck(v137, 0LL);
                  v31 = -1071775738;
                  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
                  goto LABEL_144;
                }
LABEL_270:
                v138 = v358;
                CWin32kLocks::Unlock(v358);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
                v65 = COREDEVICEACCESS::AcquireShared(v137, 0LL);
                if ( v65 < 0 )
                  goto LABEL_586;
                memset(&v383, 0, sizeof(v383));
                if ( *((_BYTE *)this + 434) )
                {
                  memset(&v382, 0, sizeof(v382));
                  v382.hAllocation = hDestination;
                  v150 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                  v151 = *(_QWORD *)(*((_QWORD *)v150 + 2) + 16LL);
                  v152 = DXGPROCESS::GetCurrent(v139);
                  v153 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v151 + 4712),
                           v152,
                           v150,
                           &v382,
                           0);
                  v137 = v351;
                  v31 = v153;
                  v383.pData = v382.pData;
                }
                else
                {
                  v140 = hDestination;
                  if ( !hDestination )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 5745;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"hDestinationAllocation",
                      5745LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v140 = hDestination;
                  }
                  v383.hAllocation = v140;
                  v31 = DXGDEVICE::Lock(*((DXGDEVICE **)this + 2), &v383, v137, 0);
                }
                if ( v31 < 0 )
                  goto LABEL_217;
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
                COREDEVICEACCESS::Release(v137);
                if ( !v383.pData )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 5758;
                  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"LockData.pData", 5758LL, 0LL, 0LL, 0LL, 0LL);
                }
                if ( (v9->Flags.Value & 0x10000) != 0 && v9->hDestination )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 5759;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
                    5759LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v141 = v362;
                v60 = (*((unsigned int (__fastcall **)(_QWORD))v362 + 40))(0LL) == 0;
                v142 = v136;
                if ( v60 )
                  v142 = 0;
                v31 = CWin32kLocks::Lock(v138, v9->hWindow, 0, 0, v142);
                if ( v31 >= 0 )
                {
                  v143 = (unsigned int (__fastcall *)(struct _D3DKMT_PRESENT *, HDC, _QWORD, const RECT *, void *, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))*((_QWORD *)v141 + 18);
                  v144 = *(_DWORD *)(*((_QWORD *)this + 19) + 424LL);
                  v145 = v9->Color;
                  v146 = (v9->Flags.Value & 0x200) != 0;
                  v147 = CWin32kLocks::hDestDc(v358);
                  LOBYTE(v334) = v146;
                  LOBYTE(v332) = 0;
                  if ( !v143(
                          v9,
                          v147,
                          *(_QWORD *)v360,
                          v388.pDstSubRects,
                          v383.pData,
                          v144,
                          v354,
                          Height,
                          v332,
                          v334,
                          v145,
                          DXGPRESENT::XformRect,
                          DXGPRESENT::ClipRects) )
                  {
                    WdLogSingleEntry2(4LL, -1071775737LL, this);
                    WdLogGlobalForLineNumber = 5770;
                    v31 = -1071775737;
                  }
                  v138 = v358;
                  v137 = v351;
                }
                v148 = v356;
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
                v65 = COREDEVICEACCESS::AcquireShared(v137, 0LL);
                if ( v65 < 0 )
                {
LABEL_586:
                  v299 = v137;
                  goto LABEL_612;
                }
                if ( *((_BYTE *)this + 434) )
                {
                  v376.hDevice = 0;
                  v376.hAllocation = hDestination;
                  v154 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                  v155 = *(_QWORD *)(*((_QWORD *)v154 + 2) + 16LL);
                  v156 = DXGPROCESS::GetCurrent(v149);
                  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v155 + 4712),
                    v156,
                    v154,
                    &v376,
                    0);
                  v137 = v351;
                }
                else
                {
                  v377.hDevice = 0;
                  v377.NumAllocations = 1;
                  v377.phAllocations = &v383.hAllocation;
                  DXGDEVICE::Unlock(*((DXGDEVICE **)this + 2), &v377, 0);
                }
                if ( v31 >= 0 && (v9->Flags.Value & 0x10000) != 0 )
                {
                  v9->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                  v9->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                  v9->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                  v9->PresentHistoryToken.TokenSize = 48;
                  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
                  v31 = SubmitPresentHistoryToken(
                          &v9->PresentHistoryToken,
                          v137,
                          v148,
                          v138,
                          0,
                          0LL,
                          (struct DXGK_PRESENT_PARAMS *)v9,
                          0LL,
                          this,
                          0LL,
                          0LL);
                  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
                  goto LABEL_144;
                }
LABEL_217:
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
                goto LABEL_144;
              }
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
              v137 = v351;
              COREDEVICEACCESS::Release(v351);
              goto LABEL_270;
            }
            v282 = DXGPROCESS::GetCurrent(v113);
            v283 = hDestination;
            v284 = v282;
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v282 + 248));
            v285 = (v283 >> 6) & 0xFFFFFF;
            if ( v285 < *((_DWORD *)v284 + 74) )
            {
              v286 = *((_QWORD *)v284 + 35);
              v287 = *(_DWORD *)(v286 + 16LL * v285 + 8);
              if ( ((v283 >> 25) & 0x60) == (v287 & 0x60) && (v287 & 0x2000) == 0 && (v287 & 0x1F) != 0 )
              {
                if ( (*(_BYTE *)(v286 + 16LL * ((v283 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
                {
                  v288 = *(struct _EX_RUNDOWN_REF **)(v286 + 16LL * ((v283 >> 6) & 0xFFFFFF));
                  goto LABEL_576;
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
            v288 = 0LL;
LABEL_576:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v366, v288);
            _InterlockedDecrement((volatile signed __int32 *)v284 + 66);
            ExReleasePushLockSharedEx((char *)v284 + 248, 0LL);
            KeLeaveCriticalRegion();
            v289 = v366;
            if ( !v366 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5652;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"AllocRef.m_pAllocation != NULL",
                5652LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v289 = v366;
            }
            Ptr_high = HIDWORD(v289[2].Ptr);
            v291 = *((_QWORD *)this + 2);
            pPrivateDriverData = (unsigned __int8 *)v9->pPrivateDriverData;
            PrivateDriverDataSize = v9->PrivateDriverDataSize;
            v294 = *(_QWORD *)(v291 + 16);
            v357[0] = *((_DWORD *)v347 + 5);
            v295 = (struct DXGHWQUEUE **)v9[1].hWindow;
            v296 = *(_QWORD *)(v294 + 16);
            if ( v295 )
              v297 = *v295;
            else
              v297 = 0LL;
            v298 = DXGPROCESS::GetCurrent(v291);
            v134 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v296 + 4712),
                     v298,
                     this,
                     v297,
                     v357[0],
                     Ptr_high,
                     &v388.SrcRect,
                     &v388.DstRect,
                     v388.SubRectCnt,
                     (struct tagRECT *)v388.pDstSubRects,
                     PrivateDriverDataSize,
                     pPrivateDriverData);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v366);
            goto LABEL_266;
          }
          if ( (*(_BYTE *)&v105 & 2) == 0 )
            goto LABEL_217;
          v300 = (DXGDEVICE *)*((_QWORD *)this + 2);
          v301 = 0;
          if ( (*(_WORD *)&v105 & 0x100) != 0
            && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                 *(ADAPTER_DISPLAY **)(*((_QWORD *)v300 + 237) + 3160LL),
                 *((const struct DXGDEVICE **)this + 2),
                 v9->VidPnSourceId) )
          {
            v301 = 1;
          }
          else if ( !DXGDEVICE::AllowLegacyPresent(v300) )
          {
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
            COREDEVICEACCESS::Release(v63);
            if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
            {
              v31 = -1071775738;
LABEL_599:
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
              v311 = COREDEVICEACCESS::AcquireShared(v63, 0LL);
              v65 = v311;
              if ( v311 >= 0 )
                goto LABEL_217;
              WdLogSingleEntry2(4LL, v311, this);
              WdLogGlobalForLineNumber = 5898;
LABEL_601:
              v299 = v63;
              goto LABEL_612;
            }
LABEL_592:
            if ( (v9->Flags.Value & 0x10000) != 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5879;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"!pPresent->Flags.RedirectedBlt",
                5879LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v302 = v358;
            CWin32kLocks::Unlock(v358);
            v303 = v362;
            v60 = (*((unsigned int (__fastcall **)(_QWORD))v362 + 40))(0LL) == 0;
            v304 = v301;
            if ( v60 )
              v304 = 0;
            v305 = CWin32kLocks::Lock(v302, v9->hWindow, 0, 0, v304);
            v306 = (unsigned int (__fastcall *)(HDC, _QWORD, const RECT *, _QWORD, UINT))*((_QWORD *)v303 + 19);
            v31 = v305;
            v307 = v9->Color;
            v308 = v9->SubRectCnt;
            v309 = v9->pSrcSubRects;
            v310 = CWin32kLocks::hDestDc(v358);
            if ( !v306(v310, *(_QWORD *)v360, v309, v308, v307) )
            {
              WdLogSingleEntry2(4LL, -1071775737LL, this);
              WdLogGlobalForLineNumber = 5889;
              v31 = -1071775737;
            }
            v63 = v351;
            goto LABEL_599;
          }
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
          COREDEVICEACCESS::Release(v63);
          goto LABEL_592;
        }
        if ( (v9->Flags.Value & 0x10000) != 0 && v9->hDestination && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
        {
          WdLogSingleEntry2(4LL, 0LL, this);
          WdLogGlobalForLineNumber = 5428;
          v278 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
          if ( v278 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
              v278);
            *((_QWORD *)this + 45) = 0LL;
          }
          DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v364);
          goto LABEL_563;
        }
        v66 = *(HDC *)v358;
        v67 = (HDEV)*((_QWORD *)v358 + 2);
        v31 = DXGPRESENT::CheckVisRgn(
                *((DXGPRESENT **)this + 19),
                v9,
                *(HDC *)v358,
                v67,
                *((const struct DXGDEVICE **)this + 2),
                v354,
                Height,
                Color,
                1);
        if ( v31 == 261 )
        {
          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v364);
          v117 = v351;
          COREDEVICEACCESS::Release(v351);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
          if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
            v31 = -1071775738;
          if ( (v9->Flags.Value & 0x10000) == 0 )
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v364);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
          v118 = COREDEVICEACCESS::AcquireShared(v117, 0LL);
          if ( v118 < 0 )
          {
            WdLogSingleEntry1(4LL);
            WdLogGlobalForLineNumber = 5471;
            COREDEVICEACCESS::AcquireSharedUncheck(v351, 0LL);
            DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v364);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v349);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v348);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
            return (unsigned int)v118;
          }
          if ( v31 != -1071775738 )
            v31 = DXGPRESENT::CheckVisRgn(
                    *((DXGPRESENT **)this + 19),
                    v9,
                    v66,
                    v67,
                    *((const struct DXGDEVICE **)this + 2),
                    v354,
                    Height,
                    Color,
                    0);
          v61 = *(HANDLE *)v360;
        }
        v68 = *((_QWORD *)this + 19);
        if ( v31 < 0 )
        {
          if ( (*(_BYTE *)(v68 + 4) & 1) != 0 )
          {
            *(_QWORD *)(v68 + 56) = v61;
            *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v357[0];
          }
          goto LABEL_91;
        }
        *(_QWORD *)(v68 + 56) = v61;
        if ( (v9->Flags.Value & 0x10000) != 0 )
        {
LABEL_91:
          v63 = v351;
          goto LABEL_92;
        }
        v279 = v357[0];
        *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v357[0];
        DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL, 4294967293LL, 0LL);
        v280 = 0;
        v281 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
        if ( v281 != (*((unsigned int (**)(void))v362 + 1))() )
        {
          *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v279;
          ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3, 0xFFFFFFFF, 0);
          v280 = 1;
        }
        v277 = v280;
      }
      else
      {
        if ( (v104 & 1) != 0 )
        {
          v31 = -1071775738;
          goto LABEL_91;
        }
        if ( (((v9->Flags.Value & 0x10000) == 0) & (unsigned __int8)~(unsigned __int8)(v104 >> 4)) == 0 )
          goto LABEL_91;
        v277 = 0;
      }
      DXGDEVICE::SynchronizePresentToPrimary(
        *((DXGDEVICE **)this + 2),
        (struct _LIST_ENTRY *)this,
        (struct DXGPRESENTMUTEX *)v364,
        v277);
      goto LABEL_91;
    }
    if ( v29 )
      goto LABEL_67;
    if ( (*(_DWORD *)&Value & 0x10A7C3) != 0 )
    {
      v31 = -1073741811;
      WdLogSingleEntry3(3LL, this, v9->Flags.Value, -1073741811LL);
      WdLogGlobalForLineNumber = 4480;
      goto LABEL_36;
    }
    if ( (*(_DWORD *)&Value & 0x10000000) != 0 )
    {
      Count = v25[5].Count;
      if ( !Count || !*(_QWORD *)(Count + 56) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4490;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Expecting indirect display presents to be a shared surface",
          4490LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_237;
      }
      v185 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1896LL);
      if ( !v185
        || !DXGADAPTER::IsDisplayAdapter(v185)
        || (v186 = *((_QWORD *)this + 2),
            v187 = v9->VidPnSourceId,
            v357[0] = v187,
            v187 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v186 + 1896) + 3160LL) + 96LL)) )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4515;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"An invalid VidPn source ID was supplied to an indirect present (%I64d)",
          v9->VidPnSourceId,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_237;
      }
      v25 = (struct _EX_RUNDOWN_REF *)v347;
    }
    else
    {
      v209 = v25[6].Count;
      v210 = *(_DWORD *)(v209 + 4);
      if ( (v210 & 0x2003) == 0 )
      {
        v31 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, this, v25, v209, v9->hSource);
        WdLogGlobalForLineNumber = 4500;
        v102 = L"0x%I64x 0x%I64x Source of Flip must be primary 0x%I64x 0x%I64x 0x%I64x";
        v331 = v9->hSource;
        v329 = *((_QWORD *)v347 + 6);
        v328 = (__int64)v347;
        v327 = (__int64)this;
        v323 = -1073741811LL;
        goto LABEL_154;
      }
      v187 = (v210 >> 6) & 0xF;
      v357[0] = v187;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v374, v25);
    DXGALLOCATIONREFERENCE::MoveAssign(&v349, &v374);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v374);
    v363 = v9->hSource;
    v188 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1896LL);
    if ( !v188
      || !DXGADAPTER::IsDisplayAdapter(v188)
      || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL)
                                                                         + 3160LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4531;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL"
                  ") && GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisp"
                  "layCore()->IsCoreResourceSharedOwner()",
        4531LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v189 = *((_QWORD *)v347 + 6);
    v190 = *(_DWORD *)(v189 + 4);
    if ( (v190 & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 408LL) & 4) == 0 )
    {
      v31 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v347, v189, v9->hSource);
      WdLogGlobalForLineNumber = 4539;
      v102 = L"0x%I64x 0x%I64x DirectFlip Presents are only supported from the DWM process 0x%I64x 0x%I64x 0x%I64x";
      v331 = v9->hSource;
      v329 = *((_QWORD *)v347 + 6);
      v328 = (__int64)v347;
      v327 = (__int64)this;
      v323 = -1073741811LL;
      goto LABEL_154;
    }
    v191 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
    if ( (*(_DWORD *)&v191 & 0x40000) != 0 || (*(_DWORD *)&v191 & 0x20000) != 0 )
    {
      if ( (*(_DWORD *)&v191 & 0x40000) != 0 && (*(_DWORD *)&v191 & 0x20000) != 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4550;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"FlipStereoTemporaryMono and FlipStereo cannot be set together. STATUS_INVALID_PARAMETER",
          4550LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_237;
      }
      if ( (v190 & 0x1000) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4556;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"FlipStereoTemporaryMono and FlipStereo can only be used with stereo primary allocations. STATUS_INVALID_PARAMETER",
          4556LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_237;
      }
      v207 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                           v187)
             + 10);
      if ( (v207 & 0x10) == 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4563;
        goto LABEL_387;
      }
      v208 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
      if ( (*(_DWORD *)&v208 & 0x40000) != 0 && (v207 & 0x20) == 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4569;
        goto LABEL_387;
      }
      if ( (*(_DWORD *)&v208 & 0xC0000) == 0xC0000 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4575;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"FlipStereoTemporaryMono cannot be used with FlipStereoPreferRight. STATUS_INVALID_PARAMETER",
          4575LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_237;
      }
    }
    if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
    {
LABEL_378:
      v205 = Height;
LABEL_379:
      v206 = v351;
      goto LABEL_380;
    }
    v192 = *(_DWORD *)a7 ^ (v9->Flags.Value ^ *(_DWORD *)a7) & 4;
    *(_DWORD *)a7 = v192;
    v193 = v192 ^ (v9->Flags.Value ^ v192) & 8;
    *(_DWORD *)a7 = v193;
    v194 = v193 ^ ((unsigned __int8)v193 ^ (unsigned __int8)(v9->Flags.Value >> 1)) & 0x10;
    *(_DWORD *)a7 = v194;
    v195 = v194 ^ (v194 ^ (4 * v9->Flags.Value)) & 0x80000;
    *(_DWORD *)a7 = v195;
    v196 = v195 ^ (v195 ^ (4 * v9->Flags.Value)) & 0x100000;
    *(_DWORD *)a7 = v196;
    v197 = v196 ^ (v196 ^ (4 * v9->Flags.Value)) & 0x200000;
    *(_DWORD *)a7 = v197;
    if ( (v9->Flags.Value & 0x8000000) != 0 )
      Duration = v9->Duration;
    else
      Duration = 0;
    *((_DWORD *)a7 + 36) = Duration;
    *((_DWORD *)a7 + 38) = 1;
    *(_DWORD *)a7 = v197 ^ (v9->Flags.Value ^ v197) & 0x20000000;
    v199 = v9->Flags.Value & 4 | v388.Flags.Value & 0xFFFFFFFB;
    v200 = v199 ^ ((unsigned __int16)v199 ^ (unsigned __int16)(v9->Flags.Value >> 9)) & 0x100 ^ ((unsigned __int16)(v199 ^ (v199 ^ (v9->Flags.Value >> 9)) & 0x100) ^ (unsigned __int16)(v9->Flags.Value >> 9)) & 0x200;
    v388.Flags.Value = v200 ^ ((unsigned __int16)v200 ^ (unsigned __int16)(v9->Flags.Value >> 9)) & 0x400;
    pPresentRegions = v9->pPresentRegions;
    if ( pPresentRegions
      && !pPresentRegions->MoveRectCount
      && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 408LL) & 4) != 0 )
    {
      v388.SubRectCnt = pPresentRegions->DirtyRectCount;
      v388.pDstSubRects = pPresentRegions->pDirtyRects;
    }
    DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(
                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                       *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
                       v187,
                       (__int64)&v9->FlipInterval);
    *((_DWORD *)a7 + 30) = DeviceFlipMode;
    if ( !DeviceFlipMode )
    {
      v31 = -1073741811;
      WdLogSingleEntry3(3LL, this, v9->FlipInterval, -1073741811LL);
      WdLogGlobalForLineNumber = 4622;
      goto LABEL_36;
    }
    if ( ((DeviceFlipMode - 1) & 0xFFFFFFFD) != 0 )
    {
      v388.FlipInterval = v9->FlipInterval;
      if ( DeviceFlipMode == 2 )
      {
LABEL_374:
        *((_DWORD *)a7 + 31) = v9->FlipInterval;
        *((_DWORD *)a7 + 29) = v187;
        DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v187);
        if ( DisplayedPrimary )
        {
          v211 = *((_QWORD *)DisplayedPrimary + 6);
          if ( (*(_DWORD *)(*((_QWORD *)v347 + 6) + 4LL) & 0x2000) != 0 )
          {
            if ( (*(_DWORD *)(v211 + 4) & 0x2000) == 0 )
            {
              *(_DWORD *)a7 |= 0x400000u;
              goto LABEL_376;
            }
          }
          else if ( (*(_DWORD *)(v211 + 4) & 0x2000) != 0 )
          {
            *(_DWORD *)a7 |= 0x400000u;
            goto LABEL_376;
          }
        }
        *(_DWORD *)a7 &= ~0x400000u;
LABEL_376:
        v204 = *((_DWORD *)a7 + 30);
        if ( v204 && v204 != *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v187 + 1832) )
        {
          WdLogSingleEntry1(4LL);
          v206 = v351;
          WdLogGlobalForLineNumber = 4678;
          COREDEVICEACCESS::Release(v351);
          DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 3LL, 4294967293LL, 0LL);
          v65 = COREDEVICEACCESS::AcquireShared(v206, 0LL);
          if ( v65 < 0 )
          {
            WdLogSingleEntry1(4LL);
            WdLogGlobalForLineNumber = 4686;
            COREDEVICEACCESS::AcquireSharedUncheck(v206, 0LL);
            goto LABEL_614;
          }
          v205 = Height;
LABEL_380:
          v65 = DXGCONTEXT::CheckDevicePresentSettings(
                  this,
                  (v9->Flags.Value >> 2) & 1,
                  (v9->Flags.Value >> 28) & 1,
                  0,
                  v187);
          if ( v65 < 0 )
          {
            if ( v65 == -1071774920 )
            {
LABEL_516:
              if ( (v9->Flags.Value & 4) != 0 )
              {
                IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
                v262 = (DXGDEVICE *)*((_QWORD *)this + 2);
                if ( IsFullWDDMDevice )
                {
                  DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(v262, v187);
                  DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v187, v347, *((_DWORD *)a7 + 34), 1);
                  *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v187 + 1832) = *((_DWORD *)a7 + 30);
                }
                else
                {
                  DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v262, v187, v347, 0, 1);
                }
              }
LABEL_563:
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v349);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v348);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
              return 0LL;
            }
LABEL_614:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v349);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v348);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
            return (unsigned int)v65;
          }
          if ( (v9->Flags.Value & 4) != 0 )
          {
            if ( v9->pPresentRegions )
            {
              v65 = DXGCONTEXT::ValidatePresentRegions(this, v9, v354, v205);
              if ( v65 < 0 )
                goto LABEL_614;
            }
          }
          if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(
                  *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                  v187,
                  0) )
          {
            if ( (((v9->Flags.Value & 0x10000000) == 0) & (unsigned __int8)~(unsigned __int8)(*(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v187 + 1240) >> 9)) != 0 )
            {
              WdLogSingleEntry5(3LL, -1071775739LL, this, v9->hSource, v347, v187);
              WdLogGlobalForLineNumber = 4821;
              goto LABEL_387;
            }
LABEL_297:
            if ( DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
            {
              v157 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v187, (v9->Flags.Value & 0x10) == 0, v206);
              v65 = v157;
              if ( v157 >= 0 )
              {
                v158 = *((_DWORD *)a7 + 30);
                if ( v158 != 5 && v158 != 3 )
                {
                  v31 = DXGCONTEXT::AcquireDmaBuffer(this, (struct VIDMM_DMA_BUFFER **)this + 45, v206, 0);
                  if ( v31 < 0 )
                    goto LABEL_33;
                  if ( !*((_QWORD *)this + 45) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 4854;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"m_pPresentDmaBuffer",
                      4854LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                }
                v31 = DXGCONTEXT::CheckDevicePresentSettings(
                        this,
                        (v9->Flags.Value >> 2) & 1,
                        (v9->Flags.Value >> 28) & 1,
                        0,
                        v187);
                if ( v31 >= 0 )
                {
                  if ( (v9->Flags.Value & 4) == 0 )
                    goto LABEL_305;
                  if ( !v347 )
                    goto LABEL_305;
                  v159 = *((_QWORD *)v347 + 6);
                  if ( !v159 || (*(_DWORD *)(v159 + 4) & 0x2000) == 0 )
                    goto LABEL_305;
                  if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(*((DXGDEVICE **)this + 2), v347) )
                  {
                    if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                                            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                                            *((struct VIDMM_MULTI_ALLOC **)v347 + 3))
                      || (v181 = VIDMM_EXPORT::VidMmPinAllocation(
                                   *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                   *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                                   *((struct VIDMM_MULTI_ALLOC **)v347 + 3),
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL),
                          v181 >= 0) )
                    {
LABEL_305:
                      if ( (v9->Flags.Value & 0x2000) != 0 )
                      {
                        v263 = ADAPTER_DISPLAY::GetCurrentOrientation(
                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                                 v187,
                                 1);
                        v264 = 0;
                        if ( v263 != 1 )
                          v264 = 128;
                        v388.Flags.Value = v264 | v388.Flags.Value & 0xFFFFFF7F;
                      }
                      if ( !bTracingEnabled )
                        goto LABEL_310;
                      v160 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                      v161 = *(struct VIDMM_GLOBAL **)(v160 + 768);
                      v162 = *(VIDMM_EXPORT **)(v160 + 760);
                      if ( (v9->Flags.Value & 4) != 0 )
                      {
                        VIDMM_EXPORT::VidMmETWAllocationHandle(v162, v161, hSource);
                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                          McTemplateK0pqpqtt_EtwWriteTransfer(
                            (__int64)&DxgkControlGuid_Context,
                            (__int64)&EventFlip,
                            0LL);
LABEL_310:
                        v31 = DXGCONTEXT::SubmitPresent(
                                this,
                                v9,
                                (struct DXGHWQUEUE **)v9[1].hWindow,
                                v9->BroadcastContextCount,
                                v365,
                                v347,
                                hSource,
                                hDestination,
                                &v388,
                                v9->pPresentRegions,
                                *((struct VIDMM_DMA_BUFFER **)this + 45),
                                v10,
                                Color,
                                v351);
                        if ( v31 >= 0
                          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL)
                                                   + 128LL)
                                       + 4024LL * v187
                                       + 1072) == -1 )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 4999;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"!NT_SUCCESS(ntStatus) || (GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->MapVi"
                                      "dPnSourceToVidPnTarget(VidPnSourceId) != D3DDDI_ID_UNINITIALIZED)",
                            4999LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                          *((_QWORD *)this + 45) = 0LL;
                        }
                        else
                        {
                          *((_QWORD *)this + 45) = 0LL;
                          if ( v31 < 0 )
                            goto LABEL_33;
                        }
                        if ( (v9->Flags.Value & 4) != 0 )
                        {
                          DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), v187);
                          DXGDEVICE::SetDisplayedPrimary(
                            *((struct _KTHREAD ***)this + 2),
                            v187,
                            v347,
                            *((_DWORD *)v10 + 34),
                            1);
                          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v187 + 1832) = *((_DWORD *)v10 + 30);
                          UpdatePostComposition(
                            v187,
                            0,
                            0,
                            0,
                            *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL));
                        }
                        goto LABEL_315;
                      }
                      v265 = VIDMM_EXPORT::VidMmETWAllocationHandle(v162, v161, hDestination);
                      v266 = (DXGADAPTERSTOPRESETLOCKSHARED *)VIDMM_EXPORT::VidMmETWAllocationHandle(
                                                                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 760LL),
                                                                *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 768LL),
                                                                hSource);
                      p_left = &v388.pDstSubRects->left;
                      v268 = v388.SubRectCnt;
                      v356 = v266;
                      v362 = (const struct _DXGKWIN32KENG_INTERFACE *)*((_QWORD *)this + 45);
                      *(_QWORD *)v360 = v9->hWindow;
                      v358 = (CWin32kLocks *)v388.pDstSubRects;
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                      {
                        LODWORD(v330) = 1;
                        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                          (__int64)&DxgkControlGuid_Context,
                          (__int64)&EventBlit,
                          0LL,
                          *(_QWORD *)v360,
                          v362,
                          0LL,
                          v356,
                          v265,
                          v330,
                          0,
                          v388.Flags.Value,
                          v388.SrcRect.left,
                          v388.SrcRect.right,
                          v388.SrcRect.top,
                          v388.SrcRect.bottom,
                          v388.DstRect.left,
                          v388.DstRect.right,
                          v388.DstRect.top,
                          v388.DstRect.bottom,
                          v388.SubRectCnt);
                        p_left = v358;
                      }
                      v269 = 0;
                      if ( !v268 )
                        goto LABEL_310;
                      v270 = v362;
                      while ( 1 )
                      {
                        v271 = 0;
                        v272 = v268 - v269;
                        if ( v268 - v269 > 0x10 )
                          break;
                        v273 = v268 - v269;
                        if ( v272 )
                          goto LABEL_532;
LABEL_534:
                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        {
                          LODWORD(v326) = v273;
                          LODWORD(v325) = v272 <= 0x10;
                          McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                            (__int64)&DxgkControlGuid_Context,
                            (__int64)&EventBlitRect,
                            0LL,
                            v270,
                            v325,
                            v326,
                            v397,
                            v396,
                            v402,
                            v395);
                          p_left = v358;
                        }
                        v269 += 16;
                        if ( v269 >= v268 )
                        {
                          v10 = v367;
                          v187 = v357[0];
                          goto LABEL_310;
                        }
                      }
                      v273 = 16;
LABEL_532:
                      v274 = 0LL;
                      do
                      {
                        v275 = v271 + v269;
                        ++v271;
                        v275 *= 2LL;
                        v274 += 4LL;
                        *(_DWORD *)&v396[v274 + 60] = p_left[2 * v275];
                        *(_DWORD *)&v395[v274 + 60] = p_left[2 * v275 + 2];
                        *(_DWORD *)&v401[v274 + 60] = p_left[2 * v275 + 1];
                        *(_DWORD *)((char *)&v394[19] + v274 + 12) = p_left[2 * v275 + 3];
                      }
                      while ( v271 < v273 );
                      goto LABEL_534;
                    }
                    WdLogSingleEntry3(4LL, v347, *((_QWORD *)v347 + 6), v181);
                    WdLogGlobalForLineNumber = 4930;
                    v182 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
                    if ( !v182 )
                    {
LABEL_387:
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v349);
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v348);
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
                      return 3223191557LL;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry3(4LL, -1071775739LL, this, v347);
                    WdLogGlobalForLineNumber = 4906;
                    v182 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
                    if ( !v182 )
                      goto LABEL_387;
                  }
                  VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                    v182);
                  *((_QWORD *)this + 45) = 0LL;
                  goto LABEL_387;
                }
                v260 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
                if ( v260 )
                {
                  VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                    v260);
                  *((_QWORD *)this + 45) = 0LL;
                }
                if ( v31 != -1071774920 )
                  goto LABEL_33;
                goto LABEL_516;
              }
              WdLogSingleEntry2(4LL, v157, this);
              WdLogGlobalForLineNumber = 4836;
              goto LABEL_614;
            }
            v172 = *((_QWORD *)this + 2);
            if ( *(_QWORD *)(v172 + 1896) )
            {
              *(_QWORD *)&v389.left = 0LL;
              v173 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
              if ( (*(_DWORD *)&v173 & 0x10000000) != 0 )
              {
                v389.right = v9[1].hSource;
                v174 = v9[1].hDestination;
                goto LABEL_328;
              }
              v175 = v348;
              if ( (*(_BYTE *)&v173 & 4) != 0 )
                v175 = v347;
              v176 = *(_DWORD *)(*((_QWORD *)v175 + 6) + 4LL);
              if ( (v176 & 0x10) != 0 )
              {
                WdLogSingleEntry3(4LL, -1071775482LL, this, v175);
                WdLogGlobalForLineNumber = 5051;
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v349);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v348);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
                return 3223191814LL;
              }
              v177 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                  *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                                  (v176 >> 6) & 0xF);
              v379.Flags.Value = 1;
              memset(&v379.Width, 0, 32);
              v379.Rotation = -1;
              *(_OWORD *)v385 = v177;
              v379.hAllocation = *(HANDLE *)(*((_QWORD *)v175 + 6) + 16LL);
              v178 = ADAPTER_RENDER::DdiDescribeAllocation(
                       *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3168LL),
                       &v379);
              if ( v178 >= 0 )
              {
                v179 = v379.Width;
                if ( v379.Width != v385[0] || (v174 = v379.Height, v379.Height != v385[1]) )
                {
                  WdLogSingleEntry3(4LL, -1071775482LL, this, v175);
                  WdLogGlobalForLineNumber = 5082;
                  goto LABEL_387;
                }
                if ( !*((_BYTE *)this + 434) )
                {
                  v180 = RemoveAlphaChannel(v385[2]);
                  if ( RemoveAlphaChannel(v379.Format) != v180 )
                  {
                    WdLogSingleEntry3(4LL, -1071775482LL, this, v175);
                    WdLogGlobalForLineNumber = 5096;
                    goto LABEL_387;
                  }
                  v174 = v379.Height;
                  v179 = v379.Width;
                }
                v389.right = v179;
LABEL_328:
                v389.bottom = v174;
                v31 = ADAPTER_DISPLAY::PresentDisplayOnly(
                        *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                        this,
                        v187,
                        v9,
                        &v388,
                        v206,
                        &v389);
                if ( v31 >= 0 )
                {
                  if ( (v9->Flags.Value & 4) != 0 )
                  {
                    DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), v187);
                    DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v187, v347, 0, 1);
                    UpdatePostComposition(
                      v187,
                      0,
                      0,
                      0,
                      *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL));
                  }
                  goto LABEL_316;
                }
LABEL_33:
                if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
                  && v31 != -1073741130 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 6287;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner() || ntStatus == STATUS_DEVICE_REMOVED",
                    6287LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( *((_QWORD *)this + 45) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 6288;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"m_pPresentDmaBuffer == NULL",
                    6288LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                goto LABEL_36;
              }
              v183 = v178;
              WdLogSingleEntry5(
                2LL,
                v178,
                this,
                *((unsigned int *)v175 + 4),
                v175,
                (*(_DWORD *)(*((_QWORD *)v175 + 6) + 4LL) >> 6) & 0xF);
              WdLogGlobalForLineNumber = 5073;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
                v183,
                (__int64)this,
                *((unsigned int *)v175 + 4),
                (__int64)v175,
                (*(_DWORD *)(*((_QWORD *)v175 + 6) + 4LL) >> 6) & 0xF);
            }
            else
            {
              WdLogSingleEntry2(1LL, v172, -1073741822LL);
              WdLogGlobalForLineNumber = 5131;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"DxgkPresent is called for flip on a render only device 0x%I64x, returning 0x%I64x.",
                *((_QWORD *)this + 2),
                -1073741822LL,
                0LL,
                0LL,
                0LL);
            }
LABEL_237:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v349);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v348);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
            return -1073741811LL;
          }
          v251 = v362;
          v252 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
          v253 = (*((__int64 (**)(void))v362 + 1))();
          v254 = v9->Flags.Value & 4;
          if ( v252 != v253 )
          {
            if ( !v254 )
            {
              DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 2LL, 4294967293LL, 0LL);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
              COREDEVICEACCESS::Release(v206);
              DXGPRESENTMUTEX::DXGPRESENTMUTEX(
                (DXGPRESENTMUTEX *)v380,
                *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v380);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
              v255 = COREDEVICEACCESS::AcquireShared(v206, 0LL);
              v65 = v255;
              if ( v255 < 0 )
              {
                WdLogSingleEntry2(4LL, v255, this);
                WdLogGlobalForLineNumber = 4771;
                COREDEVICEACCESS::AcquireSharedUncheck(v206, 0LL);
                v256 = (DXGPRESENTMUTEX *)v380;
                goto LABEL_613;
              }
              DXGDEVICE::SynchronizePresentToPrimary(
                *((DXGDEVICE **)this + 2),
                (struct _LIST_ENTRY *)this,
                (struct DXGPRESENTMUTEX *)v380,
                1);
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v380);
            }
            v257 = *((_QWORD *)this + 19);
            *(_DWORD *)(v257 + 8) = (*((__int64 (**)(void))v251 + 1))();
            CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                             *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                             v187);
            if ( CddInterface )
              (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
            goto LABEL_297;
          }
          if ( v254 )
            goto LABEL_297;
          COREDEVICEACCESS::Release(v206);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v356);
          DXGPRESENTMUTEX::DXGPRESENTMUTEX(
            (DXGPRESENTMUTEX *)v381,
            *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v381);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v356);
          v259 = COREDEVICEACCESS::AcquireShared(v206, 0LL);
          v65 = v259;
          if ( v259 >= 0 )
          {
            DXGDEVICE::SynchronizePresentToPrimary(
              *((DXGDEVICE **)this + 2),
              (struct _LIST_ENTRY *)this,
              (struct DXGPRESENTMUTEX *)v381,
              0);
            DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v381);
            goto LABEL_297;
          }
          WdLogSingleEntry2(4LL, v259, this);
          WdLogGlobalForLineNumber = 4804;
          COREDEVICEACCESS::AcquireSharedUncheck(v206, 0LL);
          v256 = (DXGPRESENTMUTEX *)v381;
LABEL_613:
          DXGPRESENTMUTEX::~DXGPRESENTMUTEX(v256);
          goto LABEL_614;
        }
        goto LABEL_378;
      }
    }
    else
    {
      v388.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
    }
    v388.Flags.Value |= 8u;
    goto LABEL_374;
  }
LABEL_67:
  v52 = v9->pSrcSubRects;
  if ( !v52
    || (v53 = v9->SubRectCnt, !(_DWORD)v53)
    || (*(_BYTE *)&Value & 3) == 0
    || (*(_DWORD *)&Value & 0x100E803C) != 0 )
  {
    v31 = -1073741811;
    WdLogSingleEntry5(3LL, this, v52, v9->SubRectCnt, *(unsigned int *)&Value, -1073741811LL);
    WdLogGlobalForLineNumber = 4178;
    goto LABEL_36;
  }
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_DWORD *)&Value & 0x100681) != 0 )
    {
      v31 = -1073741811;
      WdLogSingleEntry5(3LL, this, v52, v9->SubRectCnt, *(unsigned int *)&Value, -1073741811LL);
      WdLogGlobalForLineNumber = 4193;
      goto LABEL_36;
    }
    v212 = Height;
  }
  else
  {
    if ( !v354 || (v212 = Height) == 0 || (*(_BYTE *)&Value & 0x82) != 0x80 )
    {
      v31 = -1073741811;
      WdLogSingleEntry5(3LL, this, v52, v9->SubRectCnt, *(unsigned int *)&Value, -1073741811LL);
      WdLogGlobalForLineNumber = 4207;
      goto LABEL_36;
    }
    if ( (*(_WORD *)&Value & 0x600) == 0x600 )
    {
      v31 = -1073741811;
      WdLogSingleEntry5(3LL, -1073741811LL, this, v52, v53, *(unsigned int *)&Value);
      WdLogGlobalForLineNumber = 4216;
      goto LABEL_36;
    }
  }
  v213 = *((_QWORD *)v348 + 6);
  v214 = *(_DWORD *)(v213 + 4);
  if ( (v214 & 3) == 0 )
  {
    v31 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, v348, v213, v9->hDestination);
    WdLogGlobalForLineNumber = 4227;
    v102 = L"0x%I64x 0x%I64x destination must be primary 0x%I64x 0x%I64x 0x%I64x";
    v331 = v9->hDestination;
    v329 = *((_QWORD *)v348 + 6);
    v328 = (__int64)v348;
    v327 = (__int64)this;
    v323 = -1073741811LL;
    goto LABEL_154;
  }
  v216 = *((_QWORD *)this + 2);
  v187 = (v214 >> 6) & 0xF;
  v357[0] = v187;
  v217 = *(DXGADAPTER **)(v216 + 1896);
  if ( !v217
    || !DXGADAPTER::IsDisplayAdapter(v217)
    || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL)
                                                                       + 3160LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4239;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL) "
                "&& GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisplayC"
                "ore()->IsCoreResourceSharedOwner()",
      4239LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)a7 + 29) = v187;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v373, (struct _EX_RUNDOWN_REF *)v348);
  DXGALLOCATIONREFERENCE::MoveAssign(&v349, &v373);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v373);
  v218 = v9->hDestination;
  v219 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
  v363 = v218;
  if ( (*(_BYTE *)&v219 & 1) != 0 )
  {
    if ( v348 == v347 )
    {
      v31 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v347, v9->hSource, v218);
      WdLogGlobalForLineNumber = 4251;
      v102 = L"0x%I64x 0x%I64x Source and destination must be different 0x%I64x 0x%I64x 0x%I64x";
      v331 = v9->hDestination;
      v329 = v9->hSource;
      v328 = (__int64)v347;
      v327 = (__int64)this;
      v323 = -1073741811LL;
      goto LABEL_154;
    }
    v220 = *(_DWORD *)(*((_QWORD *)v347 + 6) + 4LL);
    if ( (v220 & 3) != 0 && ((v220 >> 6) & 0xF) != v187 )
    {
      v31 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v347, (v220 >> 6) & 0xF, v187);
      v102 = L"0x%I64x 0x%I64x primary source has different VidPnSourceId 0x%I64x 0x%I64x != 0x%I64x";
      v331 = v187;
      WdLogGlobalForLineNumber = 4264;
      v329 = (*(_DWORD *)(*((_QWORD *)v347 + 6) + 4LL) >> 6) & 0xF;
      v328 = (__int64)v347;
      v327 = (__int64)this;
      v323 = -1073741811LL;
      goto LABEL_154;
    }
    v221 = v9->SrcRect.left;
    p_SrcRect = &v9->SrcRect;
    v223 = v9->SrcRect.right;
    if ( (int)v223 <= v221
      || (v224 = v9->SrcRect.top, v225 = v9->SrcRect.bottom, v225 <= v224)
      || v221 >= (int)v354
      || v224 >= v212
      || (int)v223 <= 0
      || v225 <= 0 )
    {
      v31 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, v9->SrcRect.left, v9->SrcRect.top, v223, v9->SrcRect.bottom);
      WdLogGlobalForLineNumber = 4284;
      v102 = L"0x%I64x Invalid Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x]";
      v331 = v9->SrcRect.bottom;
      v329 = v9->SrcRect.right;
      v328 = v9->SrcRect.top;
      v327 = v9->SrcRect.left;
      v323 = -1073741811LL;
      goto LABEL_154;
    }
    while ( 1 )
    {
      v226 = v9->SubRectCnt;
      if ( v12 >= v226 )
        break;
      Source1 = 0LL;
      v227 = v12;
      v228 = &v9->pSrcSubRects[v227];
      v358 = (CWin32kLocks *)v12;
      if ( !DXGPRESENT::IntersectRect(&Source1, v228, p_SrcRect)
        || RtlCompareMemory(&Source1, &v9->pSrcSubRects[v227], 0x10uLL) != 16 )
      {
        v31 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, v9->SrcRect.left, v9->SrcRect.top, v9->SrcRect.right, v9->SrcRect.bottom);
        WdLogGlobalForLineNumber = 4302;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
          -1073741811LL,
          v9->SrcRect.left,
          v9->SrcRect.top,
          v9->SrcRect.right,
          v9->SrcRect.bottom);
        v229 = v358;
        WdLogSingleEntry5(
          2LL,
          v358,
          v9->pSrcSubRects[v12].left,
          v9->pSrcSubRects[v12].top,
          v9->pSrcSubRects[v12].right,
          v9->pSrcSubRects[v12].bottom);
        WdLogGlobalForLineNumber = 4310;
        goto LABEL_447;
      }
      ++v12;
      p_SrcRect = &v9->SrcRect;
    }
    v231 = v9->Flags.Value;
    if ( (v231 & 0x40) != 0 )
    {
      v232 = v9->DstRect.left;
      v233 = v9->DstRect.right;
      if ( v233 <= (int)v232
        || (v234 = v9->DstRect.top, v235 = v9->DstRect.bottom, v235 <= v234)
        || (int)v232 >= (int)Width
        || v234 >= (int)v360[0]
        || v233 <= 0
        || v235 <= 0 )
      {
        v31 = -1073741811;
        WdLogSingleEntry5(3LL, -1073741811LL, v232, v9->DstRect.top, v9->DstRect.right, v9->DstRect.bottom);
        WdLogGlobalForLineNumber = 4332;
        goto LABEL_36;
      }
      if ( v9->SrcRect.right - v9->SrcRect.left != v233 - (_DWORD)v232
        || v9->SrcRect.bottom - v9->SrcRect.top != v235 - v234 )
      {
        v31 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, this, v231, v348, v187);
        v102 = L"0x%I64x 0x%I64x specified destination RECT has different size from source RECT 0x%I64x 0x%I64x 0x%I64x";
        v331 = v187;
        v329 = (__int64)v348;
        WdLogGlobalForLineNumber = 4344;
        v328 = v9->Flags.Value;
        v327 = (__int64)this;
        v323 = -1073741811LL;
        goto LABEL_154;
      }
      v65 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), v226);
      if ( v65 < 0 )
        goto LABEL_614;
      v236 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
      v237 = 0;
      v238 = v9->DstRect.left - v9->SrcRect.left;
      v239 = v9->DstRect.top - v9->SrcRect.top;
      v226 = v9->SubRectCnt;
      if ( v226 )
      {
        do
        {
          v240 = v237++;
          v240 *= 2LL;
          *(&v236->left + 2 * v240) = v238 + *(&v9->pSrcSubRects->left + 2 * v240);
          *(&v236->right + 2 * v240) = v238 + *(&v9->pSrcSubRects->right + 2 * v240);
          *(&v236->top + 2 * v240) = v239 + *(&v9->pSrcSubRects->top + 2 * v240);
          *(&v236->bottom + 2 * v240) = v239 + *(&v9->pSrcSubRects->bottom + 2 * v240);
          v226 = v9->SubRectCnt;
        }
        while ( v237 < v226 );
      }
      DstRect = v9->DstRect;
      v205 = Height;
      v388.pDstSubRects = v236;
      v388.DstRect = DstRect;
    }
    else
    {
      v205 = Height;
      if ( Width != v354 || v360[0] != Height )
      {
        WdLogSingleEntry5(3LL, this, Width, v360[0], v354, Height);
        WdLogGlobalForLineNumber = 4380;
        goto LABEL_237;
      }
      v388.DstRect = v9->SrcRect;
      v388.pDstSubRects = v9->pSrcSubRects;
    }
    v388.SrcRect = v9->SrcRect;
    v242 = v388.Flags.Value & 0xFFFFF7FF | (v9->Flags.Value >> 9) & 0x800;
    v388.Flags.Value = v242;
    goto LABEL_481;
  }
  v388.DstRect.bottom = v360[0];
  v388.DstRect.right = Width;
  if ( (*(_BYTE *)&v219 & 0x40) == 0 )
    goto LABEL_475;
  v243 = v9->DstRect.left;
  v244 = v9->DstRect.right;
  if ( (int)v244 <= (int)v243 || (v245 = v9->DstRect.bottom, v245 <= v9->DstRect.top) || (int)v244 <= 0 || v245 <= 0 )
  {
    v31 = -1073741811;
    WdLogSingleEntry5(3LL, -1073741811LL, v243, v9->DstRect.top, v244, v9->DstRect.bottom);
    WdLogGlobalForLineNumber = 4413;
    goto LABEL_36;
  }
  if ( !DXGPRESENT::IntersectRect(&v388.DstRect, &v9->DstRect, &v388.DstRect) )
    goto LABEL_563;
  while ( 1 )
  {
LABEL_475:
    v226 = v9->SubRectCnt;
    if ( v12 >= v226 )
    {
      v242 = v388.Flags.Value;
      v205 = Height;
      v388.SrcRect = v388.DstRect;
      v388.pDstSubRects = v9->pSrcSubRects;
LABEL_481:
      v388.SubRectCnt = v226;
      v247 = v9->Flags.Value & 1 | v242 & 0xFFFFFFFE;
      v248 = v9->Flags.Value >> 5;
      v249 = v9->Flags.Value >> 9;
      v250 = v247 ^ ((unsigned __int8)v247 ^ (unsigned __int8)*(_DWORD *)&v9->Flags.0) & 2 ^ ((unsigned __int8)v248 ^ (unsigned __int8)(v247 ^ (v247 ^ v9->Flags.Value) & 2)) & 0x10 ^ ((unsigned __int8)v248 ^ (unsigned __int8)(v247 ^ (v247 ^ v9->Flags.Value) & 2 ^ (v248 ^ v247 ^ (v247 ^ v9->Flags.Value) & 2) & 0x10)) & 0x20;
      LOBYTE(v247) = v247 ^ (v247 ^ v9->Flags.Value) & 2 ^ (v248 ^ v247 ^ (v247 ^ v9->Flags.Value) & 2) & 0x10 ^ (v248 ^ v247 ^ (v247 ^ v9->Flags.Value) & 2 ^ (v248 ^ v247 ^ (v247 ^ v9->Flags.Value) & 2) & 0x10) & 0x20;
      v388.Color = v9->Color;
      v388.Flags.Value = v250 ^ ((unsigned __int8)v248 ^ (unsigned __int8)v247) & 0x40 ^ ((unsigned __int16)(v250 ^ ((unsigned __int8)v248 ^ (unsigned __int8)v247) & 0x40) ^ (unsigned __int16)v249) & 0x800;
      goto LABEL_379;
    }
    v391 = 0LL;
    v227 = v12;
    v246 = &v9->pSrcSubRects[v227];
    v358 = (CWin32kLocks *)v12;
    if ( !DXGPRESENT::IntersectRect(&v391, v246, &v388.DstRect)
      || RtlCompareMemory(&v391, &v9->pSrcSubRects[v227], 0x10uLL) != 16 )
    {
      break;
    }
    ++v12;
  }
  v31 = -1073741811;
  WdLogSingleEntry5(2LL, -1073741811LL, v9->DstRect.left, v9->DstRect.top, v9->DstRect.right, v9->DstRect.bottom);
  WdLogGlobalForLineNumber = 4437;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Dest Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
    -1073741811LL,
    v9->DstRect.left,
    v9->DstRect.top,
    v9->DstRect.right,
    v9->DstRect.bottom);
  v229 = v358;
  WdLogSingleEntry5(
    2LL,
    v358,
    v9->pSrcSubRects[v12].left,
    v9->pSrcSubRects[v12].top,
    v9->pSrcSubRects[v12].right,
    v9->pSrcSubRects[v12].bottom);
  WdLogGlobalForLineNumber = 4445;
LABEL_447:
  v230 = v9->pSrcSubRects;
  v331 = v230[v227].bottom;
  v329 = v230[v227].right;
  v328 = v230[v227].top;
  v327 = v230[v227].left;
  v102 = L"SubRect 0x%I64x is invalid 0x%I64x 0x%I64x 0x%I64x 0x%I64x";
  v323 = (__int64)v229;
LABEL_154:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v102, v323, v327, v328, v329, v331);
LABEL_36:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v349);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v348);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v347);
  return (unsigned int)v31;
}
