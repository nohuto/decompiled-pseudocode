/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1401E74A4 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1401E77A4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402EBEC0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer @ 0x140012810 (McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x140033220 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x14004240C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z @ 0x14004A2B8 (-VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400515D4 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x140054458 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400588DC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     DxgkGetAdapterMiracastInfo @ 0x14006B28C (DxgkGetAdapterMiracastInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x14006D134 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x14028BE38 (-GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x14028D844 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402E2810 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402F1C20 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x14032D46C (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1403738A0 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1403CD3BC (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?ConvertMPOThunkToLegacyPresentThunk@@YAXAEAU_D3DKMT_PRESENT@@AEAU_D3DKMT_PRESENT_RGNS@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x14041B930 (-ConvertMPOThunkToLegacyPresentThunk@@YAXAEAU_D3DKMT_PRESENT@@AEAU_D3DKMT_PRESENT_RGNS@@PEBU_D3D.c)
 *     InverseXformMPORect3 @ 0x140428EF4 (InverseXformMPORect3.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14042E234 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v5; // rcx
  unsigned int v6; // r12d
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v7; // rdi
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 VidPnSourceId; // r15
  __int64 v14; // r8
  __int64 PresentPlaneCount; // rax
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // esi
  __int64 result; // rax
  __int64 v23; // rsi
  char v24; // al
  __int64 v25; // rcx
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321 Value; // edx
  unsigned int v27; // esi
  struct _EX_RUNDOWN_REF **v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  DXGFASTMUTEX *v35; // rcx
  __int64 v36; // r15
  unsigned int v37; // ebx
  unsigned __int8 *v38; // rdi
  int *v39; // r14
  bool v40; // si
  DXGCONTEXT *v41; // r13
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  bool v45; // di
  __int64 v46; // rax
  int *v47; // rax
  __int64 v48; // r15
  __int64 v49; // rbx
  LONG *v50; // rdx
  LONG v51; // r8d
  LONG v52; // r10d
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v53; // r14
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rdx
  int v55; // ebx
  __int64 v56; // rax
  UINT v57; // eax
  D3DDDI_FLIPINTERVAL_TYPE v58; // esi
  int v59; // ecx
  struct VIDSCH_SUBMIT_DATA_BASE *v60; // rbx
  int v61; // ecx
  bool v62; // zf
  int v63; // ecx
  int v64; // edx
  int v65; // eax
  int v66; // ecx
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  int v70; // ecx
  UINT Duration; // eax
  int hAdapter; // eax
  __int64 v73; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v75; // rdx
  __int64 v76; // rdi
  int v77; // edx
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // ecx
  int v81; // esi
  int v82; // edi
  int v83; // esi
  __int64 v84; // r14
  __int64 v85; // rdi
  __int64 v86; // rcx
  __int64 v87; // rdi
  __int64 v88; // rdi
  char v89; // al
  __int64 v90; // rcx
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v91; // r14
  __int64 v92; // rdi
  int v93; // eax
  char v94; // si
  __int64 v95; // rcx
  __int64 v96; // rbx
  struct DXGCONTEXT **v97; // rcx
  __int64 v98; // rdx
  char v99; // al
  __int64 v100; // rcx
  DXGALLOCATIONREFERENCE *v101; // rcx
  unsigned int v102; // edi
  struct _EX_RUNDOWN_REF *v103; // rsi
  struct _EX_RUNDOWN_REF **Count_low; // r15
  int Ptr_high; // eax
  DXGALLOCATIONREFERENCE *v106; // r9
  unsigned int i; // ebx
  const struct DXGALLOCATION *v108; // rdx
  int v109; // ecx
  __int64 v110; // rax
  __int64 v111; // rdi
  unsigned int v112; // r14d
  __int64 v113; // rax
  __int64 v114; // r8
  int v115; // edx
  struct _EX_RUNDOWN_REF *v116; // rdx
  __int64 v117; // r8
  __int64 v118; // rdx
  int v119; // eax
  _DWORD *v120; // rax
  int v121; // r8d
  int v122; // ecx
  int v123; // edx
  int v124; // r9d
  signed int Width; // r14d
  signed int Height; // esi
  int v127; // r8d
  int v128; // ecx
  LONG v129; // edx
  LONG v130; // r9d
  int v131; // r10d
  int v132; // edi
  LONG v133; // r11d
  LONG v134; // eax
  ULONG_PTR v135; // rbx
  __int64 v136; // rax
  unsigned int v137; // r11d
  char v138; // r10
  __int64 v139; // r9
  _DWORD *v140; // rdx
  int v141; // r8d
  int v142; // edx
  __int64 v143; // rax
  int v144; // r15d
  int v145; // r8d
  int Count; // edx
  int *v147; // rbx
  struct _EX_RUNDOWN_REF *v148; // r10
  D3DDDI_HDR_METADATA_TYPE v149; // esi
  __int64 v150; // r8
  int v151; // r9d
  int v152; // edi
  int v153; // r14d
  int v154; // edx
  int v155; // r15d
  __int64 v156; // rax
  __int64 v157; // rdx
  DXGADAPTER_REFERENCE *v158; // rax
  DXGADAPTER_REFERENCE *v159; // rsi
  __int64 v160; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v162; // rbx
  __int64 v163; // rax
  bool v164; // cf
  unsigned __int64 v165; // rax
  _QWORD *v166; // rax
  _QWORD *v167; // r14
  DXGALLOCATIONREFERENCE *v168; // rdi
  __int64 v169; // rsi
  COREDEVICEACCESS *v170; // r14
  const char *v171; // rdx
  LONG right; // r9d
  int left; // ecx
  LONG bottom; // eax
  int v175; // r9d
  int v176; // ecx
  D3DDDI_HDR_METADATA_TYPE HDRMetaDataType; // edx
  __int32 v178; // edx
  const wchar_t *v179; // r9
  __int64 v180; // rbx
  _DWORD *v181; // r9
  int v182; // r9d
  __int64 v183; // rbx
  __int64 v184; // rbx
  __int64 v185; // rcx
  int v186; // eax
  int v187; // eax
  int v188; // ecx
  int v189; // edx
  int v190; // r8d
  __int64 v191; // rcx
  ADAPTER_DISPLAY *v192; // rcx
  struct DXGDEVICE *v193; // rax
  __int64 v194; // rax
  struct DXGDEVICE *v195; // rax
  __int64 v196; // rcx
  struct _EX_RUNDOWN_REF *v197; // rcx
  _QWORD *v198; // rbx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v200; // rax
  struct DXGDEVICE *v201; // rax
  __int64 v202; // rcx
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v204; // rbx
  D3DKMT_MULTIPLANE_OVERLAY3 *v205; // rdi
  __int64 v206; // rsi
  D3DKMT_HANDLE v207; // r14d
  __int64 v208; // rax
  __int64 v209; // r8
  int v210; // edx
  struct _EX_RUNDOWN_REF *v211; // rdx
  D3DKMT_HANDLE *pAllocationList; // rax
  int v213; // edx
  UINT v214; // eax
  D3DKMT_MULTIPLANE_OVERLAY3 *v215; // rax
  struct _EX_RUNDOWN_REF *v216; // rdi
  _DWORD *v217; // rdx
  signed int v218; // r11d
  int v219; // r8d
  int v220; // eax
  signed int v221; // ecx
  int v222; // edx
  int v223; // r9d
  LONG v224; // r10d
  LONG v225; // edi
  ULONG_PTR v226; // rax
  __int64 v227; // rdi
  __int64 v228; // rbx
  ULONG_PTR v229; // rax
  int v230; // edi
  int v231; // esi
  __int64 v232; // rcx
  _OWORD *pHDRMetaData; // rax
  _QWORD *v234; // rax
  COREDEVICEACCESS *v235; // rsi
  __int64 v236; // r9
  int v237; // edi
  const char *v238; // rdx
  struct _DXGKARG_PRESENT *v239; // [rsp+20h] [rbp-130h]
  __int64 v240; // [rsp+30h] [rbp-120h]
  __int64 v241; // [rsp+38h] [rbp-118h]
  __int64 v242; // [rsp+40h] [rbp-110h]
  int v243; // [rsp+B0h] [rbp-A0h]
  unsigned __int8 v244; // [rsp+D0h] [rbp-80h]
  unsigned __int8 v245; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v246; // [rsp+D2h] [rbp-7Eh]
  bool v247; // [rsp+D3h] [rbp-7Dh]
  char v248; // [rsp+D4h] [rbp-7Ch]
  UINT v249; // [rsp+D8h] [rbp-78h]
  bool v250; // [rsp+DCh] [rbp-74h]
  struct _EX_RUNDOWN_REF *v251; // [rsp+E0h] [rbp-70h] BYREF
  unsigned int v252; // [rsp+E8h] [rbp-68h]
  unsigned int v253; // [rsp+ECh] [rbp-64h]
  LONG v254; // [rsp+F0h] [rbp-60h]
  LONG v255; // [rsp+F4h] [rbp-5Ch]
  int v256; // [rsp+F8h] [rbp-58h]
  LONG v257; // [rsp+FCh] [rbp-54h]
  int v258; // [rsp+100h] [rbp-50h]
  unsigned int v259; // [rsp+104h] [rbp-4Ch]
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v260; // [rsp+108h] [rbp-48h]
  COREDEVICEACCESS *v261; // [rsp+110h] [rbp-40h]
  unsigned __int64 v262; // [rsp+118h] [rbp-38h] BYREF
  int v263[2]; // [rsp+120h] [rbp-30h] BYREF
  DXGCONTEXT *v264[2]; // [rsp+128h] [rbp-28h] BYREF
  int v265; // [rsp+138h] [rbp-18h]
  int v266; // [rsp+13Ch] [rbp-14h]
  struct VIDSCH_SUBMIT_DATA_BASE *v267[2]; // [rsp+140h] [rbp-10h] BYREF
  int v268; // [rsp+150h] [rbp+0h]
  struct DXGCONTEXT **v269; // [rsp+158h] [rbp+8h] BYREF
  char v270; // [rsp+160h] [rbp+10h]
  int v271; // [rsp+168h] [rbp+18h]
  int v272; // [rsp+16Ch] [rbp+1Ch]
  struct _EX_RUNDOWN_REF *v273; // [rsp+170h] [rbp+20h] BYREF
  DXGFASTMUTEX *v274; // [rsp+178h] [rbp+28h] BYREF
  char v275; // [rsp+180h] [rbp+30h]
  __int128 v276; // [rsp+188h] [rbp+38h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v277; // [rsp+198h] [rbp+48h] BYREF
  __int128 v278; // [rsp+1C8h] [rbp+78h] BYREF
  __int128 v279; // [rsp+1D8h] [rbp+88h]
  struct _D3DKMT_PRESENT_RGNS v280; // [rsp+1E8h] [rbp+98h] BYREF
  _BYTE v281[24]; // [rsp+208h] [rbp+B8h] BYREF
  DXGALLOCATIONREFERENCE *v282; // [rsp+220h] [rbp+D0h] BYREF
  _BYTE v283[32]; // [rsp+228h] [rbp+D8h] BYREF
  unsigned int v284; // [rsp+248h] [rbp+F8h]
  _DXGKARG_PRESENT v285; // [rsp+250h] [rbp+100h] BYREF
  _D3DKMT_PRESENT v286; // [rsp+300h] [rbp+1B0h] BYREF
  enum _D3DDDIFORMAT v287[4]; // [rsp+8E0h] [rbp+790h] BYREF
  __int128 v288; // [rsp+8F0h] [rbp+7A0h]
  __int64 v289; // [rsp+900h] [rbp+7B0h]
  unsigned __int8 v290[16]; // [rsp+908h] [rbp+7B8h] BYREF

  v264[0] = this;
  v5 = *((_QWORD *)this + 2);
  v6 = 0;
  v269 = a4;
  v7 = a2;
  v261 = a3;
  v260 = a2;
  v8 = *(_QWORD *)(v5 + 16);
  v9 = *(_DWORD *)(*(_QWORD *)(v5 + 1896) + 444LL) & 0x100;
  v272 = v9;
  v10 = *(_QWORD *)(v8 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3195;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3195LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( (v12 || !v9) && *(_QWORD *)(v11 + 1896) != v12 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3196;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(!GetRenderAdapter() && IsIndirectDisplayDevice) || (GetDisplayAdapter() == GetRenderAdapter())",
      3196LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_BYTE *)this + 435) = 1;
  VidPnSourceId = v7->VidPnSourceId;
  v252 = v7->VidPnSourceId;
  if ( v9 )
    v14 = 1LL;
  else
    v14 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2984LL);
  PresentPlaneCount = v7->PresentPlaneCount;
  v253 = v14;
  if ( (unsigned int)PresentPlaneCount > (unsigned int)v14 )
  {
    WdLogSingleEntry3(3LL, PresentPlaneCount, v14, -1073741811LL);
    WdLogGlobalForLineNumber = 3213;
    return 3221225485LL;
  }
  if ( !v9 )
  {
    v16 = *((_QWORD *)this + 2);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 1896) + 3160LL);
    v18 = *(_QWORD *)(v17 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6430;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6430LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (unsigned int)VidPnSourceId >= *(_DWORD *)(v17 + 96) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6431;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        6431LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = VidPnSourceId;
    if ( (unsigned int)VidPnSourceId >= *(_DWORD *)(v17 + 96)
      || v16 != *(_QWORD *)(4024 * VidPnSourceId + *(_QWORD *)(v17 + 128) + 728) )
    {
      WdLogSingleEntry3(3LL, -1071775744LL, this, VidPnSourceId);
      v20 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 500;
      if ( (*(_DWORD *)(*(_QWORD *)(v20 + 40) + 408LL) & 4) != 0
        && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(v20 + 1896) + 3160LL),
                           VidPnSourceId) == 1
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL) + 128LL)
                                  + 4024 * VidPnSourceId
                                  + 752)
                      + 408LL) & 4) != 0 )
      {
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                             *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                             VidPnSourceId);
        WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), VidPnSourceId, VidPnSourceOwner);
        v200 = *((_QWORD *)this + 2);
        WdLogGlobalForLineNumber = 511;
        v201 = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                 *(ADAPTER_DISPLAY **)(*(_QWORD *)(v200 + 1896) + 3160LL),
                 VidPnSourceId);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"This Dwm Device (0x%I64x) does not have VidPn ownership for source 0x%I64x, another DWM device (0x%I6"
                    "4x) has shared ownership, likely Dwm device leak",
          *((_QWORD *)this + 2),
          VidPnSourceId,
          (__int64)v201,
          0LL,
          0LL);
        LOBYTE(v202) = 1;
        *(_BYTE *)(*((_QWORD *)this + 2) + 1954LL) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v202) )
        {
          DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
          __debugbreak();
        }
      }
      v21 = -1071775744;
      goto LABEL_20;
    }
    v169 = *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL);
    if ( !v169 )
      goto LABEL_25;
    if ( !*(_QWORD *)(v169 + 3160) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10648;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10648LL, 0LL, 0LL, 0LL, 0LL);
    }
    v23 = *(_QWORD *)(v169 + 3160);
    if ( !v23 )
      goto LABEL_23;
    if ( (unsigned int)VidPnSourceId >= *(_DWORD *)(v23 + 96) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6468;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        6468LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_BYTE *)(4024 * VidPnSourceId + *(_QWORD *)(v23 + 128) + 760) )
      v24 = 1;
    else
LABEL_23:
      v24 = 0;
    if ( !v24 )
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 464LL) == 1 )
      {
        v21 = -1071775738;
        WdLogSingleEntry3(4LL, -1071775738LL, this, VidPnSourceId);
        WdLogGlobalForLineNumber = 551;
      }
      else
      {
        WdLogSingleEntry3(4LL, 0LL, this, VidPnSourceId);
        WdLogGlobalForLineNumber = 557;
        v21 = -1071774920;
      }
    }
    else
    {
LABEL_25:
      v25 = *((_QWORD *)this + 2);
      if ( *(_DWORD *)(v25 + 464) != 1 || (*(_DWORD *)(v25 + 4LL * (unsigned int)VidPnSourceId + 1240) & 0x100) != 0 )
      {
        if ( (*(_DWORD *)(v25 + 4LL * (unsigned int)VidPnSourceId + 1240) & 0x200) == 0 )
        {
          WdLogSingleEntry3(3LL, -1071775719LL, this, (unsigned int)VidPnSourceId);
          result = 3223191577LL;
          WdLogGlobalForLineNumber = 3241;
          return result;
        }
        v7 = v260;
        LODWORD(v14) = v253;
        goto LABEL_29;
      }
      WdLogSingleEntry3(3LL, -1071775719LL, this, (unsigned int)VidPnSourceId);
      WdLogGlobalForLineNumber = 575;
      v21 = -1071775719;
      v19 = (unsigned int)VidPnSourceId;
    }
LABEL_20:
    WdLogSingleEntry3(3LL, v21, this, v19);
    result = (unsigned int)v21;
    WdLogGlobalForLineNumber = 3232;
    return result;
  }
LABEL_29:
  Value = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321)v7->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 || (*(_BYTE *)&Value & 1) != 0 )
  {
    if ( v7->PresentPlaneCount > 1 )
    {
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 3256;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkPresentMultiPlaneOverlay doesn't support Stereo on more than 1 plane. Context 0x%I64x, Returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( (v7->Flags.Value & 2) != 0 && (*(_BYTE *)&Value & 1) != 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3263;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono and FlipStereo cannot be set together. STATUS_INVALID_PARAMETER",
        3263LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&Value & 6) == 6 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3269;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono cannot be used with FlipStereoPreferRight. STATUS_INVALID_PARAMETER",
        3269LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v251, 0LL);
    v205 = *v7->ppPresentPlanes;
    v206 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    v207 = *v205->pAllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v206 + 248));
    v208 = (v207 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v208 < *(_DWORD *)(v206 + 296) )
    {
      v209 = *(_QWORD *)(v206 + 280);
      v210 = *(_DWORD *)(v209 + 16 * v208 + 8);
      if ( ((v207 >> 25) & 0x60) == (*(_BYTE *)(v209 + 16 * v208 + 8) & 0x60)
        && (v210 & 0x2000) == 0
        && (v210 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v209 + 16LL * ((v207 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v211 = *(struct _EX_RUNDOWN_REF **)(v209 + 16LL * ((v207 >> 6) & 0xFFFFFF));
LABEL_371:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v263, v211);
          _InterlockedDecrement((volatile signed __int32 *)(v206 + 264));
          ExReleasePushLockSharedEx(v206 + 248, 0LL);
          KeLeaveCriticalRegion();
          DXGALLOCATIONREFERENCE::MoveAssign(&v251, v263);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v263);
          if ( v251 )
          {
            if ( (*(_DWORD *)(v251[6].Count + 4) & 0x1000) != 0 )
            {
              v7 = v260;
              v213 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                   *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                                   v260->VidPnSourceId)
                     + 10);
              if ( (v213 & 0x10) != 0 )
              {
                if ( (*(_BYTE *)&v7->Flags.0 & 2) == 0 || (v213 & 0x20) != 0 )
                {
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v251);
                  LODWORD(v14) = v253;
                  goto LABEL_31;
                }
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 3300;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"FlipStereoTemporaryMono flag is set but the current display mode does not support it. STATUS_"
                            "GRAPHICS_PRESENT_MODE_CHANGED",
                  3300LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 3294;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Stereo flag is set but the current display mode does not support stereo. STATUS_GRAPHICS_PRES"
                            "ENT_MODE_CHANGED",
                  3294LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v251);
              return 3223191557LL;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3287;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"FlipStereoTemporaryMono and FlipStereo can only be used with stereo primary allocations. STATUS_I"
                        "NVALID_PARAMETER",
              3287LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            WdLogSingleEntry3(2LL, -1073741811LL, this, *v205->pAllocationList);
            pAllocationList = v205->pAllocationList;
            WdLogGlobalForLineNumber = 3280;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"ret = 0x%I64x Context 0x%I64x: Invalid allocation handle for plane 0 specified: 0x%I64x",
              -1073741811LL,
              (__int64)this,
              *pAllocationList,
              0LL,
              0LL);
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v251);
          return 3221225485LL;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v211 = 0LL;
    goto LABEL_371;
  }
LABEL_31:
  v282 = 0LL;
  v27 = v7->ContextCount * v14;
  v284 = 0;
  *(_QWORD *)v263 = -1LL;
  if ( v27 <= 4 )
  {
    v28 = (struct _EX_RUNDOWN_REF **)v283;
    v282 = (DXGALLOCATIONREFERENCE *)v283;
    if ( !v27 )
      goto LABEL_38;
    v29 = 0LL;
    v30 = v27;
    while ( 1 )
    {
      v28[v29++] = 0LL;
      if ( !--v30 )
        break;
      v28 = (struct _EX_RUNDOWN_REF **)v282;
    }
    goto LABEL_37;
  }
  v162 = v27;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v27 < 8 )
    goto LABEL_275;
  v163 = 8LL * v27;
  if ( !is_mul_ok(v27, 8uLL) )
    v163 = -1LL;
  v164 = __CFADD__(v163, 8LL);
  v165 = v163 + 8;
  if ( v164 )
    v165 = -1LL;
  v166 = (_QWORD *)operator new[](v165, 0x4B677844u, 256LL);
  v167 = v166;
  if ( !v166 )
  {
    LODWORD(v14) = v253;
LABEL_37:
    v28 = (struct _EX_RUNDOWN_REF **)v282;
    goto LABEL_38;
  }
  *v166 = v27;
  v168 = (DXGALLOCATIONREFERENCE *)(v166 + 1);
  do
  {
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(v168);
    v168 = (DXGALLOCATIONREFERENCE *)((char *)v168 + 8);
    --v162;
  }
  while ( v162 );
  LODWORD(v14) = v253;
  v28 = (struct _EX_RUNDOWN_REF **)(v167 + 1);
  v282 = (DXGALLOCATIONREFERENCE *)(v167 + 1);
LABEL_38:
  v284 = v27;
  if ( !v28 )
  {
LABEL_275:
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 3312;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for MPO allocation references",
      3312LL,
      0LL,
      0LL,
      0LL,
      0LL);
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
    return 3221225495LL;
  }
  v31 = *((_QWORD *)this + 2);
  v32 = *(_QWORD *)(v31 + 1896);
  if ( v32 == *(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) )
  {
    ADAPTER_DISPLAY::GetAllocationsForAllPlanes(*(ADAPTER_DISPLAY **)(v32 + 3160), VidPnSourceId, v28, v14);
  }
  else
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v281,
      (struct _KTHREAD **)(v31 + 304));
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
      (DXGALLOCATIONREFERENCE *)&v262,
      *(struct _EX_RUNDOWN_REF **)(v31 + 8LL * (unsigned int)VidPnSourceId + 1048));
    DXGALLOCATIONREFERENCE::MoveAssign(v28, &v262);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v262);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v281);
  }
  v275 = 0;
  v33 = *((_QWORD *)this + 2);
  v267[0] = *(struct VIDSCH_SUBMIT_DATA_BASE **)v282;
  v34 = *(_QWORD *)(*(_QWORD *)(v33 + 1896) + 3160LL);
  v35 = (DXGFASTMUTEX *)(v34 + 624);
  v274 = (DXGFASTMUTEX *)(v34 + 624);
  if ( v34 == -624 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v35 = v274;
  }
  if ( DXGFASTMUTEX::IsOwner(v35) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v274);
  v36 = *(_QWORD *)(v34 + 128) + 4024LL * (unsigned int)VidPnSourceId;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*(_QWORD *)(v36 + 8) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9827;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9827LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v37 = 0;
  v38 = v290;
  v39 = (int *)(v36 + 1168);
  do
  {
    v40 = 0;
    if ( v37 < *(_DWORD *)(v36 + 3784) )
    {
      if ( *v39 == -1 && v39[1] != -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9441;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
          9441LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v46 = *v39;
      if ( (_DWORD)v46 != -1 )
      {
        v47 = &v39[20 * v46 + 2];
        if ( v47 )
          v40 = (v47[2] & 2) != 0;
      }
    }
    *v38 = v40;
    ++v37;
    ++v38;
    v39 += 42;
  }
  while ( v37 < 0xA );
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v274);
  v41 = v264[0];
  v289 = 0LL;
  *(_OWORD *)v287 = 0LL;
  v42 = *((_QWORD *)v264[0] + 2);
  v288 = 0LL;
  v43 = *(_QWORD *)(v42 + 16);
  v44 = *(_QWORD *)(v43 + 16);
  v45 = *(_DWORD *)(v44 + 420) == 1297040209
     && *(int *)(v44 + 3044) <= 1300
     && (v191 = *(_QWORD *)(v44 + 216),
         v278 = 0LL,
         v279 = 0LL,
         DxgkGetAdapterMiracastInfo(v191, (__int64)&v278),
         (BYTE8(v279) & 4) != 0)
     || !*(_BYTE *)(*(_QWORD *)(v43 + 16) + 2980LL)
     || *(_QWORD *)(*((_QWORD *)v41 + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 16LL);
  v48 = v252;
  v247 = v45;
  v49 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 1896LL) + 3160LL);
  if ( v252 >= *(_DWORD *)(v49 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5871;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      5871LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v50 = (LONG *)(4024 * v48 + 992 + *(_QWORD *)(v49 + 128));
  if ( !v50 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v41, v48);
    v242 = 0LL;
    v179 = L"ret = 0x%I64x Context 0x%I64x Failed to obtain display mode, VidPnSourceId 0x%I64x";
    v241 = 0LL;
    v240 = v48;
    WdLogGlobalForLineNumber = 3341;
    goto LABEL_283;
  }
  v51 = *v50;
  v52 = v50[1];
  v53 = v260;
  v254 = v52;
  v265 = 0;
  v257 = 0;
  pPostComposition = v260->pPostComposition;
  v255 = v51;
  v248 = 0;
  v258 = 0;
  LODWORD(v262) = 0;
  if ( !pPostComposition )
    goto LABEL_63;
  if ( pPostComposition->Flags.Value )
  {
    WdLogSingleEntry3(3LL, v41, pPostComposition->Flags.Value, -1073741811LL);
    WdLogGlobalForLineNumber = 3356;
    goto LABEL_155;
  }
  if ( pPostComposition->Rotation != D3DDDI_ROTATION_IDENTITY )
  {
    WdLogSingleEntry3(3LL, v41, pPostComposition->Rotation, -1073741811LL);
    WdLogGlobalForLineNumber = 3362;
    goto LABEL_155;
  }
  if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
    || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom )
  {
    WdLogSingleEntry2(3LL, v41, -1073741811LL);
    WdLogGlobalForLineNumber = 3368;
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
    return 3221225485LL;
  }
  right = pPostComposition->DstRect.right;
  left = pPostComposition->DstRect.left;
  if ( left >= right || (bottom = pPostComposition->DstRect.bottom, pPostComposition->DstRect.top >= bottom) )
  {
    WdLogSingleEntry2(3LL, v41, -1073741811LL);
    WdLogGlobalForLineNumber = 3374;
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
    return 3221225485LL;
  }
  if ( left < 0 || v52 < bottom || v51 < right || pPostComposition->DstRect.top < 0 )
  {
    WdLogSingleEntry2(3LL, v41, -1073741811LL);
    WdLogGlobalForLineNumber = 3380;
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
    return 3221225485LL;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 16LL) + 3089LL) || v45 )
  {
    WdLogSingleEntry2(3LL, -1073741811LL, v41);
    WdLogGlobalForLineNumber = 3391;
    goto LABEL_155;
  }
  v175 = _mm_cvtsi128_si32((__m128i)pPostComposition->SrcRect);
  *(RECT *)v264 = pPostComposition->SrcRect;
  v265 = v175;
  v255 = (LONG)v264[1];
  if ( !v175 && *(DXGCONTEXT **)((char *)v264 + 4) == (DXGCONTEXT *)__PAIR64__(v51, 0) && HIDWORD(v264[1]) == v52 )
  {
    v254 = HIDWORD(v264[1]);
    v257 = HIDWORD(v264[0]);
LABEL_63:
    v55 = 0;
    *(_QWORD *)v263 = -1LL;
    v245 = 0;
    v246 = 0;
    v244 = 0;
    v266 = 1;
    v256 = -256;
    if ( v45 )
    {
      v214 = v260->PresentPlaneCount;
      if ( v214 != 1 )
      {
        WdLogSingleEntry3(2LL, -1073741811LL, v41, v214);
        v179 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and 0x%I64x planes are specified";
        v242 = 0LL;
        v241 = 0LL;
        v240 = v53->PresentPlaneCount;
        WdLogGlobalForLineNumber = 3425;
        goto LABEL_283;
      }
      v215 = *v260->ppPresentPlanes;
      if ( v215->LayerIndex || (v215->InputFlags.Value & 1) == 0 )
      {
        WdLogSingleEntry3(2LL, -1073741811LL, v41, 1LL);
        v179 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and plane 0 is not enabled";
        v242 = 0LL;
        v241 = 0LL;
        v240 = v53->PresentPlaneCount;
        WdLogGlobalForLineNumber = 3434;
        goto LABEL_283;
      }
    }
    goto LABEL_64;
  }
  v55 = 0;
  v258 = LODWORD(v264[1]) - v175;
  v248 = 1;
  v262 = (unsigned int)(HIDWORD(v264[1]) - HIDWORD(v264[0]));
  v266 = 1;
  v256 = 0;
  v254 = HIDWORD(v264[1]);
  v257 = HIDWORD(v264[0]);
  v245 = 0;
  v246 = 0;
  v244 = 0;
LABEL_64:
  v56 = *((_QWORD *)v41 + 2);
  v268 = 0;
  v250 = *(int *)(*(_QWORD *)(*(_QWORD *)(v56 + 16) + 16LL) + 3044LL) >= 3000
      || *((_BYTE *)DXGGLOBAL::GetGlobal() + 304896);
  v57 = 0;
  while ( 1 )
  {
    v249 = v57;
    if ( v57 >= v53->PresentPlaneCount )
    {
      if ( !v268 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 16LL) + 3089LL) )
        {
          v58 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
LABEL_70:
          if ( !v246 && !v245 && !v244 )
          {
            WdLogSingleEntry2(4LL, 0LL, v41);
            WdLogGlobalForLineNumber = 3917;
            PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
            return 0LL;
          }
          memset(&v285, 0, sizeof(v285));
          v285.FlipInterval = v58;
          v59 = 4;
          v267[0] = 0LL;
          if ( !v45 )
            v59 = 4100;
          v285.Flags.Value = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v53->Flags.0 << 8)) & 0x700 | 8;
          v267[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*((_QWORD *)v41 + 2) + 16LL);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v267);
          v60 = v267[0];
          if ( !v267[0] )
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 3942;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate VidSchSubmitData",
              3942LL,
              0LL,
              0LL,
              0LL,
              0LL);
            CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v267);
            PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
            return 3221225495LL;
          }
          *(_DWORD *)v267[0] |= 0x30020u;
          v61 = *(_DWORD *)v60 | 1;
          v62 = (_BYTE)v256 == 0;
          *((_DWORD *)v60 + 28) = v53->PresentCount;
          *(_DWORD *)v60 = v61;
          if ( !v62 )
          {
            v61 |= 0x400000u;
            *(_DWORD *)v60 = v61;
          }
          v63 = v61 | 4;
          *(_DWORD *)v60 = v63;
          v64 = v63;
          if ( !v45 && v53->ContextCount <= 1 )
          {
            v64 = v63 | 0x800000;
            *(_DWORD *)v60 = v63 | 0x800000;
          }
          v65 = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)(v53->Flags.Value >> 1)) & 8;
          *(_DWORD *)v60 = v65;
          v66 = v65 ^ ((unsigned __int8)v65 ^ (unsigned __int8)(v53->Flags.Value >> 1)) & 0x10;
          *(_DWORD *)v60 = v66;
          v67 = v66 ^ (v66 ^ (v53->Flags.Value << 19)) & 0x80000;
          *(_DWORD *)v60 = v67;
          v68 = v67 ^ (v67 ^ (v53->Flags.Value << 19)) & 0x100000;
          *(_DWORD *)v60 = v68;
          v69 = v68 ^ (v68 ^ (v53->Flags.Value << 19)) & 0x200000;
          *(_DWORD *)v60 = v69;
          v70 = v69 ^ (v69 ^ (v53->Flags.Value << 21)) & 0x20000000;
          *(_DWORD *)v60 = v70;
          if ( (v53->Flags.Value & 0x40) != 0 )
            Duration = v53->Duration;
          else
            Duration = 0;
          *((_DWORD *)v60 + 36) = Duration;
          if ( (v53->Flags.Value & 0x40) != 0 )
            hAdapter = v53[1].hAdapter;
          else
            hAdapter = 1;
          v73 = v252;
          *((_DWORD *)v60 + 29) = v252;
          *((_DWORD *)v60 + 38) = hAdapter;
          *((_DWORD *)v60 + 31) = v58;
          *((_DWORD *)v60 + 30) = 5;
          if ( (v53->Flags.Value & 0x200) != 0 && v58 == D3DDDI_FLIPINTERVAL_IMMEDIATE )
            *(_DWORD *)v60 = v70 | 0x10000000;
          Global = DXGGLOBAL::GetGlobal();
          v75 = *((_QWORD *)v41 + 2);
          if ( *((_BYTE *)Global + 304896)
            || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v75 + 1896) + 3160LL) + 24LL) & 0x10) != 0 )
          {
            v76 = *(_QWORD *)(*(_QWORD *)(v75 + 1896) + 3160LL);
            if ( (unsigned int)v73 >= *(_DWORD *)(v76 + 96) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6142;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"VidPnSourceId < m_NumVidPnSources",
                6142LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v77 = *(_DWORD *)v60;
            if ( *(_BYTE *)(4024 * v73 + *(_QWORD *)(v76 + 128) + 764) )
            {
              v176 = v77 ^ (v77 ^ (v53->Flags.Value << 23)) & 0x40000000;
              *(_DWORD *)v60 = v176;
              *((_DWORD *)v60 + 90) = v53->HDRMetaDataType;
              HDRMetaDataType = v53->HDRMetaDataType;
              if ( (v176 & 0x40000000) != 0 )
              {
                if ( HDRMetaDataType )
                {
                  v178 = HDRMetaDataType - 1;
                  if ( v178 )
                  {
                    if ( v178 == 1 )
                    {
                      pHDRMetaData = v53->pHDRMetaData;
                      *(_OWORD *)((char *)v60 + 364) = *pHDRMetaData;
                      *(_OWORD *)((char *)v60 + 380) = pHDRMetaData[1];
                      *(_OWORD *)((char *)v60 + 396) = pHDRMetaData[2];
                      *(_OWORD *)((char *)v60 + 412) = pHDRMetaData[3];
                      *(_QWORD *)((char *)v60 + 428) = *((_QWORD *)pHDRMetaData + 8);
                    }
                    else
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 4023;
                      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 4023LL, 0LL, 0LL, 0LL, 0LL);
                      *(_DWORD *)v60 &= ~0x40000000u;
                    }
                  }
                  else
                  {
                    v234 = v53->pHDRMetaData;
                    *(_OWORD *)((char *)v60 + 364) = *(_OWORD *)v234;
                    *(_QWORD *)((char *)v60 + 380) = v234[2];
                    *((_DWORD *)v60 + 97) = *((_DWORD *)v234 + 6);
                  }
                }
              }
              else
              {
                if ( HDRMetaDataType != D3DDDI_HDR_METADATA_TYPE_HDR10 && (HDRMetaDataType & 0xFFFFFFFD) != 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4033;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"D3DDDI_HDR_METADATA_TYPE_HDR10 == pArgs->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_HDR10P"
                              "LUS == pArgs->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_NONE == pArgs->HDRMetaDataType",
                    4033LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( v53->pHDRMetaData || v53->HDRMetaDataSize )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4036;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"NULL == pArgs->pHDRMetaData && NULL == pArgs->HDRMetaDataSize",
                    4036LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                *(_DWORD *)v60 |= 0x40000000u;
                if ( v53->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
                {
                  *((_DWORD *)v60 + 90) = 134217729;
                }
                else if ( v53->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
                {
                  *((_DWORD *)v60 + 90) = -2147483646;
                }
              }
            }
            else
            {
              *((_DWORD *)v60 + 90) = 0;
              *(_DWORD *)v60 = v77 | 0x40000000;
            }
          }
          if ( v53->pPostComposition )
          {
            *(_DWORD *)v60 |= 0x80000000;
            *(RECT *)((char *)v60 + 436) = v53->pPostComposition->SrcRect;
            *(RECT *)((char *)v60 + 452) = v53->pPostComposition->DstRect;
          }
          v78 = *((_QWORD *)v41 + 2);
          v79 = *(_QWORD *)(v78 + 1896);
          if ( v79 != *(_QWORD *)(*(_QWORD *)(v78 + 16) + 16LL) )
          {
            if ( !v79 )
            {
              WdLogSingleEntry2(1LL, v78, -1073741822LL);
              v239 = (struct _DXGKARG_PRESENT *)*((_QWORD *)v41 + 2);
              WdLogGlobalForLineNumber = 4205;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"DxgkPresent is called for flip on a render only device 0x%I64x, returning 0x%I64x.",
                (__int64)v239,
                -1073741822LL,
                0LL,
                0LL,
                0LL);
              CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v267);
              goto LABEL_155;
            }
            ppPresentPlanes = (const struct _D3DKMT_MULTIPLANE_OVERLAY3 **)v53->ppPresentPlanes;
            v204 = *ppPresentPlanes;
            if ( (*ppPresentPlanes)->LayerIndex )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4187;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pPlane0->LayerIndex == 0",
                4187LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            memset(&v286, 0, sizeof(v286));
            memset(&v280, 0, sizeof(v280));
            ConvertMPOThunkToLegacyPresentThunk(&v286, &v280, v53, v204);
            LODWORD(v92) = DXGCONTEXT::DisplayOnlyPresent(v41, &v286, *(struct DXGALLOCATION **)v282, v73, &v285, v261);
            UpdatePostComposition(
              v73,
              0,
              0,
              0,
              *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 1896LL) + 3160LL));
            goto LABEL_124;
          }
          v80 = *(_DWORD *)(v78 + 4 * v73 + 1832);
          if ( *((_DWORD *)v60 + 30) == v80 || !v80 )
          {
LABEL_94:
            v81 = v53->Flags.Value & 8;
            if ( *((_BYTE *)v41 + 434) )
              goto LABEL_98;
            v82 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL)
                                                                                            + 736LL)
                                                                                + 8LL)
                                                                    + 200LL))(
                    *(_QWORD *)(*((_QWORD *)v41 + 2) + 800LL),
                    (unsigned int)v73,
                    0LL);
            if ( v82 == -1071775486 )
            {
              if ( v81 )
              {
LABEL_340:
                WdLogSingleEntry2(4LL, v82, v41);
                WdLogGlobalForLineNumber = 3700;
                if ( v82 != -1071775486 && v82 != -1073741130 && v82 != -1071775232 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 3703;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"(STATUS_GRAPHICS_ALLOCATION_BUSY == ntStatus) || (STATUS_DEVICE_REMOVED == ntStatus) || (ST"
                              "ATUS_GRAPHICS_GPU_EXCEPTION_ON_DEVICE == ntStatus)",
                    3703LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
LABEL_97:
                v83 = v82;
                if ( v82 >= 0 )
                {
LABEL_98:
                  v84 = *((_QWORD *)v41 + 2);
                  v85 = *(_QWORD *)(*(_QWORD *)(v84 + 1896) + 3160LL);
                  v86 = *(_QWORD *)(v85 + 16);
                  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v86 + 184)
                    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v86 + 168)) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 6430;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"IsCoreResourceSharedOwner()",
                      6430LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( ((unsigned int)v73 < *(_DWORD *)(v85 + 96)
                     || (WdLogSingleEntry0(1LL),
                         WdLogGlobalForLineNumber = 6431,
                         DxgkLogInternalTriageEvent(
                           0LL,
                           262146,
                           -1,
                           (__int64)L"VidPnSourceId < m_NumVidPnSources",
                           6431LL,
                           0LL,
                           0LL,
                           0LL,
                           0LL),
                         (unsigned int)v73 < *(_DWORD *)(v85 + 96)))
                    && v84 == *(_QWORD *)(4024 * v73 + *(_QWORD *)(v85 + 128) + 728) )
                  {
                    v87 = *(_QWORD *)(*((_QWORD *)v41 + 2) + 1896LL);
                    if ( !v87 )
                      goto LABEL_109;
                    if ( !*(_QWORD *)(v87 + 3160) )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 10648;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"IsDisplayAdapter()",
                        10648LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    v88 = *(_QWORD *)(v87 + 3160);
                    if ( !v88 )
                      goto LABEL_107;
                    if ( (unsigned int)v73 >= *(_DWORD *)(v88 + 96) )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 6468;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"VidPnSourceId < m_NumVidPnSources",
                        6468LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( *(_BYTE *)(4024 * v73 + *(_QWORD *)(v88 + 128) + 760) )
                      v89 = 1;
                    else
LABEL_107:
                      v89 = 0;
                    if ( !v89 )
                    {
                      if ( *(_DWORD *)(*((_QWORD *)v41 + 2) + 464LL) == 1 )
                      {
                        v83 = -1071775738;
                        WdLogSingleEntry3(4LL, -1071775738LL, v41, v73);
                        WdLogGlobalForLineNumber = 551;
                      }
                      else
                      {
                        WdLogSingleEntry3(4LL, 0LL, v41, v73);
                        WdLogGlobalForLineNumber = 557;
                        v83 = -1071774920;
                      }
                    }
                    else
                    {
LABEL_109:
                      v90 = *((_QWORD *)v41 + 2);
                      if ( *(_DWORD *)(v90 + 464) != 1 || (*(_DWORD *)(v90 + 4 * v73 + 1240) & 0x100) != 0 )
                      {
                        if ( *((_QWORD *)v41 + 45) )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 4146;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"m_pPresentDmaBuffer == NULL",
                            4146LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        v91 = v260;
                        LODWORD(v92) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                                         v41,
                                         v260,
                                         v246,
                                         v245,
                                         v244,
                                         v282,
                                         v290,
                                         &v285,
                                         v60,
                                         v269);
                        if ( (int)v92 < 0 )
                          goto LABEL_124;
                        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 1896LL) + 3160LL)
                                                   + 128LL)
                                       + 4024 * v73
                                       + 1072) == -1 )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 4163;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"!NT_SUCCESS(Status) || (GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->MapVidP"
                                      "nSourceToVidPnTarget(VidPnSourceId) != D3DDDI_ID_UNINITIALIZED)",
                            4163LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
                          v41,
                          v91,
                          v282,
                          v287,
                          v263[0],
                          *((_DWORD *)v60 + 34));
                        v93 = *((_DWORD *)v60 + 30);
                        v94 = 0;
                        v95 = *((_QWORD *)v41 + 2);
                        v270 = 0;
                        *(_DWORD *)(v95 + 4 * v73 + 1832) = v93;
                        v96 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 1896LL) + 3160LL);
                        v97 = (struct DXGCONTEXT **)(v96 + 480);
                        v269 = (struct DXGCONTEXT **)(v96 + 480);
                        if ( v96 == -480 )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 628;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"m_pMutex != NULL",
                            628LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                          v97 = v269;
                        }
                        if ( DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)v97) )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 635;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"!m_pMutex->IsOwner()",
                            635LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v269);
                        v98 = *(_QWORD *)(v96 + 128) + 4024 * v73;
                        v99 = *(_BYTE *)(v98 + 704);
                        if ( v248 )
                        {
                          v182 = v262;
                          if ( !v99 || *(_DWORD *)(v98 + 708) != v258 || *(_DWORD *)(v98 + 712) != (_DWORD)v262 )
                          {
                            *(_DWORD *)(v98 + 708) = v258;
                            v94 = 1;
                            *(_DWORD *)(4024 * v73 + *(_QWORD *)(v96 + 128) + 712) = v182;
                            *(_BYTE *)(4024 * v73 + *(_QWORD *)(v96 + 128) + 704) = v248;
                          }
                        }
                        else if ( v99 )
                        {
                          *(_DWORD *)(v98 + 708) = 0;
                          *(_DWORD *)(4024 * v73 + *(_QWORD *)(v96 + 128) + 712) = 0;
                          *(_BYTE *)(4024 * v73 + *(_QWORD *)(v96 + 128) + 704) = 0;
                          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v269);
                          goto LABEL_224;
                        }
                        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v269);
                        if ( !v94 )
                        {
LABEL_123:
                          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v269);
LABEL_124:
                          v100 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 16LL);
                          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v100 + 184)
                            && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v100 + 168))
                            && (_DWORD)v92 != -1073741130 )
                          {
                            WdLogSingleEntry0(1LL);
                            WdLogGlobalForLineNumber = 4210;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner() || Status == STATUS_DEVICE_REMOVED",
                              4210LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          if ( *((_QWORD *)v41 + 45) )
                          {
                            WdLogSingleEntry0(1LL);
                            WdLogGlobalForLineNumber = 4211;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"m_pPresentDmaBuffer == NULL",
                              4211LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v267);
                          v101 = v282;
                          if ( v282 == (DXGALLOCATIONREFERENCE *)v283 )
                          {
                            if ( v284 )
                            {
                              while ( 1 )
                              {
                                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v101 + v6++);
                                if ( v6 >= v284 )
                                  break;
                                v101 = v282;
                              }
                            }
                          }
                          else if ( v282 )
                          {
                            DXGALLOCATIONREFERENCE::`vector deleting destructor'(v282);
                          }
                          return (unsigned int)v92;
                        }
LABEL_224:
                        v158 = (DXGADAPTER_REFERENCE *)operator new(0x18uLL, 0x4B677844u, 256LL);
                        v159 = v158;
                        if ( v158 )
                        {
                          *((_QWORD *)v158 + 1) = 0LL;
                          *((_QWORD *)v158 + 2) = 0LL;
                          *(_QWORD *)v158 = 0LL;
                          DXGADAPTER_REFERENCE::Assign(v158, *(struct DXGADAPTER **)(v96 + 16));
                          *((_DWORD *)v159 + 4) = v73;
                          Current = DXGPROCESS::GetCurrent(v160);
                          DXGWORKQUEUE::QueueWork(
                            (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 104LL),
                            (struct _LIST_ENTRY *)lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
                            (struct _LIST_ENTRY *)v159);
                        }
                        goto LABEL_123;
                      }
                      WdLogSingleEntry3(3LL, -1071775719LL, v41, v73);
                      WdLogGlobalForLineNumber = 575;
                      v83 = -1071775719;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry3(3LL, -1071775744LL, v41, v73);
                    v118 = *((_QWORD *)v41 + 2);
                    WdLogGlobalForLineNumber = 500;
                    if ( (*(_DWORD *)(*(_QWORD *)(v118 + 40) + 408LL) & 4) != 0
                      && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                         *(ADAPTER_DISPLAY **)(*(_QWORD *)(v118 + 1896) + 3160LL),
                                         v73) == 1 )
                    {
                      v192 = *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 1896LL) + 3160LL);
                      if ( (*(_DWORD *)(*(_QWORD *)(4024 * v73 + *((_QWORD *)v192 + 16) + 752) + 408LL) & 4) != 0 )
                      {
                        v193 = ADAPTER_DISPLAY::GetVidPnSourceOwner(v192, v73);
                        WdLogSingleEntry3(2LL, *((_QWORD *)v41 + 2), v73, v193);
                        v194 = *((_QWORD *)v41 + 2);
                        WdLogGlobalForLineNumber = 511;
                        v195 = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                                 *(ADAPTER_DISPLAY **)(*(_QWORD *)(v194 + 1896) + 3160LL),
                                 v73);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"This Dwm Device (0x%I64x) does not have VidPn ownership for source 0x%I64x, another D"
                                    "WM device (0x%I64x) has shared ownership, likely Dwm device leak",
                          *((_QWORD *)v41 + 2),
                          v73,
                          (__int64)v195,
                          0LL,
                          0LL);
                        LOBYTE(v196) = 1;
                        *(_BYTE *)(*((_QWORD *)v41 + 2) + 1954LL) = 1;
                        if ( (unsigned __int8)WdIsDebuggerPresent(v196) )
                        {
                          DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
                          __debugbreak();
                        }
                      }
                    }
                    v83 = -1071775744;
                  }
                  WdLogSingleEntry2(4LL, v83, v41);
                  WdLogGlobalForLineNumber = 4129;
                  if ( v83 == -1071774920 )
                  {
                    DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
                      v41,
                      v260,
                      v282,
                      v287,
                      v263[0],
                      *((_DWORD *)v60 + 34));
                    *(_DWORD *)(*((_QWORD *)v41 + 2) + 4 * v73 + 1832) = *((_DWORD *)v60 + 30);
                    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v267);
                    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
                    return 0LL;
                  }
LABEL_256:
                  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v267);
                  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
                  return (unsigned int)v83;
                }
LABEL_255:
                WdLogSingleEntry2(4LL, v83, v41);
                WdLogGlobalForLineNumber = 4118;
                goto LABEL_256;
              }
              v170 = v261;
              COREDEVICEACCESS::Release(v261);
              v82 = VIDSCH_EXPORT::VidSchWaitForQueuedPresentLimit(
                      *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 736LL),
                      *(struct _VIDSCH_DEVICE **)(*((_QWORD *)v41 + 2) + 800LL),
                      (unsigned int)v73,
                      1);
              v83 = COREDEVICEACCESS::AcquireShared(v170, 0LL);
              if ( v83 < 0 )
              {
                WdLogSingleEntry1(4LL);
                WdLogGlobalForLineNumber = 3692;
                COREDEVICEACCESS::AcquireSharedUncheck(v170, v171);
                goto LABEL_255;
              }
            }
            if ( v82 >= 0 )
              goto LABEL_97;
            goto LABEL_340;
          }
          if ( (v53->Flags.Value & 8) == 0 )
          {
            WdLogSingleEntry1(4LL);
            v235 = v261;
            WdLogGlobalForLineNumber = 4096;
            COREDEVICEACCESS::Release(v261);
            LOBYTE(v236) = 1;
            DXGDEVICE::FlushScheduler(*((_QWORD *)v41 + 2), 3LL, (unsigned int)v73, v236);
            v237 = COREDEVICEACCESS::AcquireShared(v235, 0LL);
            if ( v237 < 0 )
            {
              WdLogSingleEntry1(4LL);
              WdLogGlobalForLineNumber = 4104;
              COREDEVICEACCESS::AcquireSharedUncheck(v235, v238);
              CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v267);
              PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
              return (unsigned int)v237;
            }
            goto LABEL_94;
          }
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 4088;
          CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v267);
          PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
          return 3223191557LL;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3906;
      }
      v58 = v266;
      goto LABEL_70;
    }
    v102 = v253;
    v103 = (struct _EX_RUNDOWN_REF *)v53->ppPresentPlanes[v57];
    v251 = v103;
    Count_low = (struct _EX_RUNDOWN_REF **)LODWORD(v103->Count);
    v259 = (unsigned int)Count_low;
    if ( (unsigned int)Count_low >= v253 )
    {
      WdLogSingleEntry3(3LL, v41, (unsigned int)Count_low, -1073741811LL);
      WdLogGlobalForLineNumber = 3456;
      goto LABEL_155;
    }
    _mm_lfence();
    if ( ((1 << (char)Count_low) & v55) != 0 )
    {
      WdLogSingleEntry3(3LL, v41, (unsigned int)Count_low, -1073741811LL);
      WdLogGlobalForLineNumber = 3463;
LABEL_155:
      PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
      return 3221225485LL;
    }
    Ptr_high = HIDWORD(v103->Ptr);
    v271 = (1 << (char)Count_low) | v55;
    if ( (Ptr_high & 1) != 0 )
      break;
    v197 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v282 + (_QWORD)Count_low);
    v198 = (_QWORD *)((char *)v282 + 8 * (_QWORD)Count_low);
    if ( v197 || v290[(_QWORD)Count_low] )
      ++v244;
    if ( v197 )
      ExReleaseRundownProtection(v197 + 11);
    *v198 = 0LL;
    v273 = 0LL;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v273);
LABEL_213:
    if ( (HIDWORD(v103->Ptr) & 1) != 0 || v250 )
    {
      Count = v103[1].Count;
      if ( Count )
      {
        if ( Count != 1 )
        {
          WdLogSingleEntry3(3LL, v41, SLODWORD(v103[1].Count), -1073741811LL);
          WdLogGlobalForLineNumber = 3872;
          goto LABEL_155;
        }
        v268 = 1;
      }
    }
    if ( bTracingEnabled )
    {
      v147 = (int *)v103[6].Count;
      v148 = v251;
      v149 = v53->HDRMetaDataType;
      v150 = (unsigned int)v147[13];
      v151 = *v147;
      v152 = v147[20];
      v153 = v147[18];
      v154 = *(_DWORD *)v251[3].Count;
      v155 = v147[14];
      v259 = v147[13];
      LODWORD(v273) = v151;
      if ( v154 )
      {
        v156 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL)
                                                                         + 760LL)
                                                             + 8LL)
                                                 + 328LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 768LL));
        v150 = v259;
        v157 = v156;
        LOBYTE(v151) = (_BYTE)v273;
        v148 = v251;
      }
      else
      {
        v157 = 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer(
          HIDWORD(v148->Ptr) & 1,
          v157,
          v150,
          v252,
          v148->Count,
          BYTE4(v148->Ptr) & 1,
          v157,
          v151,
          v147[1],
          v147[3],
          v147[2],
          v147[4],
          v147[5],
          v147[7],
          v147[6],
          v147[8],
          v147[9],
          v147[11],
          v147[10],
          v147[12],
          v150,
          v155,
          v243,
          v153,
          v149,
          v152);
    }
    v53 = v260;
    v57 = v249 + 1;
    v45 = v247;
    v55 = v271;
  }
  v106 = v282;
  if ( *((_QWORD *)v282 + (_QWORD)Count_low) || v290[(_QWORD)Count_low] )
    ++v245;
  else
    ++v246;
  for ( i = 0; i < LODWORD(v103[2].Count); ++i )
  {
    Count_low = (struct _EX_RUNDOWN_REF **)((char *)v106 + 8 * (unsigned int)Count_low + 8 * v102 * i);
    v111 = *(_QWORD *)(*((_QWORD *)v41 + 2) + 40LL);
    v112 = *(_DWORD *)(v103[3].Count + 4LL * i);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v111 + 248));
    v113 = (v112 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v113 < *(_DWORD *)(v111 + 296) )
    {
      v114 = *(_QWORD *)(v111 + 280);
      v115 = *(_DWORD *)(v114 + 16 * v113 + 8);
      if ( ((v112 >> 25) & 0x60) == (*(_BYTE *)(v114 + 16 * v113 + 8) & 0x60)
        && (v115 & 0x2000) == 0
        && (v115 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v114 + 16LL * ((v112 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v116 = *(struct _EX_RUNDOWN_REF **)(v114 + 16LL * ((v112 >> 6) & 0xFFFFFF));
          goto LABEL_150;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v116 = 0LL;
LABEL_150:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v264, v116);
    _InterlockedDecrement((volatile signed __int32 *)(v111 + 264));
    ExReleasePushLockSharedEx(v111 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( *Count_low )
      ExReleaseRundownProtection(*Count_low + 11);
    *Count_low = (struct _EX_RUNDOWN_REF *)v264[0];
    v264[0] = 0LL;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v264);
    v102 = v253;
    LODWORD(Count_low) = v259;
    v106 = v282;
    v117 = *((_QWORD *)v282 + v259 + v253 * i);
    if ( !v117 )
    {
      WdLogSingleEntry3(3LL, -1073741811LL, v41, *(unsigned int *)(v251[3].Count + 4LL * i));
      WdLogGlobalForLineNumber = 3493;
      goto LABEL_155;
    }
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v117 + 8) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2)
                                                                                                + 16LL)
                                                                                    + 16LL) )
    {
      WdLogSingleEntry3(2LL, *((_QWORD *)v41 + 2), v117, -1073741811LL);
      WdLogGlobalForLineNumber = 3502;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *((_QWORD *)v41 + 2),
        *((_QWORD *)v282 + (unsigned int)Count_low + v102 * i),
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_155;
    }
    v103 = v251;
  }
  _mm_lfence();
  v108 = (const struct DXGALLOCATION *)*((_QWORD *)v282 + (unsigned int)Count_low);
  v109 = *(_DWORD *)(*((_QWORD *)v108 + 6) + 4LL);
  if ( (v109 & 0x2000) != 0 )
  {
    if ( (v109 & 0x20) != 0 )
      goto LABEL_171;
    v184 = 8LL * (unsigned int)Count_low;
    if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(*((DXGDEVICE **)v41 + 2), v108) )
    {
      _mm_lfence();
      if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                              *(VIDMM_EXPORT **)(*(_QWORD *)(v185 + 16) + 760LL),
                              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v185 + 16) + 768LL),
                              *(struct VIDMM_MULTI_ALLOC **)(*(_QWORD *)((char *)v282 + v184) + 24LL)) )
        goto LABEL_171;
      _mm_lfence();
      MicrosoftTelemetryAssertTriggeredArgsMsgKM(
        *(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 16LL) + 3044LL),
        0,
        (__int64)"DFlip allocation unpinned");
      v186 = VIDMM_EXPORT::VidMmPinAllocation(
               *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 760LL),
               *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 768LL),
               *(struct VIDMM_MULTI_ALLOC **)(*((_QWORD *)v282 + (unsigned int)Count_low) + 24LL),
               0LL,
               0LL,
               0LL,
               0LL);
      if ( v186 >= 0 )
        goto LABEL_171;
      _mm_lfence();
      WdLogSingleEntry4(
        4LL,
        *((_QWORD *)v282 + (unsigned int)Count_low),
        *(_QWORD *)(*((_QWORD *)v282 + (unsigned int)Count_low) + 48LL),
        *(unsigned int *)v103[3].Count,
        v186);
      WdLogGlobalForLineNumber = 3566;
      PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
      return 3223191576LL;
    }
    else
    {
      _mm_lfence();
      WdLogSingleEntry5(
        4LL,
        -1071775739LL,
        v41,
        *(_QWORD *)((char *)v282 + v184),
        *(_QWORD *)(*(_QWORD *)((char *)v282 + v184) + 48LL),
        *(unsigned int *)v103[3].Count);
      WdLogGlobalForLineNumber = 3535;
      PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
      return 3223191576LL;
    }
  }
  if ( (v109 & 0xB) == 0 )
  {
    if ( v272 && (v260->Flags.Value & 0x400) != 0 )
      goto LABEL_171;
    _mm_lfence();
    WdLogSingleEntry5(
      2LL,
      -1073741811LL,
      v41,
      *((_QWORD *)v282 + (unsigned int)Count_low),
      *(_QWORD *)(*((_QWORD *)v282 + (unsigned int)Count_low) + 48LL),
      *(unsigned int *)v103[3].Count);
    v179 = L"0x%I64x 0x%I64x Source of Flip must be primary 0x%I64x 0x%I64x 0x%I64x";
    WdLogGlobalForLineNumber = 3599;
    v242 = *(unsigned int *)v103[3].Count;
    v241 = *(_QWORD *)(*((_QWORD *)v282 + (unsigned int)Count_low) + 48LL);
    v240 = *((_QWORD *)v282 + (unsigned int)Count_low);
LABEL_283:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v179, -1073741811LL, (__int64)v41, v240, v241, v242);
    goto LABEL_155;
  }
  v110 = *(_QWORD *)v263;
  if ( (v109 & 1) != 0 )
    v110 = (unsigned int)Count_low;
  *(_QWORD *)v263 = v110;
LABEL_171:
  _mm_lfence();
  memset(&v277.Width, 0, 40);
  v277.hAllocation = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)v282 + (unsigned int)Count_low) + 48LL) + 16LL);
  v119 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v41 + 2) + 16LL), &v277);
  v92 = v119;
  if ( v119 < 0 )
  {
    _mm_lfence();
    WdLogSingleEntry4(
      2LL,
      v119,
      v41,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v282 + (unsigned int)Count_low) + 48LL) + 16LL),
      *((_QWORD *)v282 + (unsigned int)Count_low));
    WdLogGlobalForLineNumber = 3612;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
      v92,
      (__int64)v41,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v282 + (unsigned int)Count_low) + 48LL) + 16LL),
      *((_QWORD *)v282 + (unsigned int)Count_low),
      0LL);
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
    return (unsigned int)v92;
  }
  v287[(unsigned int)Count_low] = v277.Format;
  v120 = (_DWORD *)v103[6].Count;
  v121 = v120[3];
  v122 = v120[1];
  if ( v122 >= v121 || (v123 = v120[2], v124 = v120[4], v123 >= v124) )
  {
    v183 = v249;
    WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
    WdLogGlobalForLineNumber = 3624;
    goto LABEL_297;
  }
  Width = v277.Width;
  Height = v277.Height;
  if ( v122 < 0 || (int)v277.Width < v121 || v123 < 0 || (int)v277.Height < v124 )
  {
    v180 = v249;
    WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
    WdLogGlobalForLineNumber = 3632;
    goto LABEL_287;
  }
  v127 = v120[11];
  v128 = v120[9];
  if ( v128 >= v127 || (v129 = v120[10], v130 = v120[12], v129 >= v130) )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
    WdLogGlobalForLineNumber = 3643;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x Clip rect is invalid, index 0x%I64x",
      -1073741811LL,
      (__int64)v41,
      v249,
      0LL,
      0LL);
    goto LABEL_155;
  }
  v131 = v120[5];
  v132 = v120[7];
  if ( v131 >= v132 || (v133 = v120[6], v134 = v120[8], v133 >= v134) )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
    WdLogGlobalForLineNumber = 3650;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x Destination rect is invalid, index 0x%I64x",
      -1073741811LL,
      (__int64)v41,
      v249,
      0LL,
      0LL);
    goto LABEL_155;
  }
  if ( v254 < v130 || v255 < v127 || v257 > v129 || v265 > v128 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
    WdLogGlobalForLineNumber = 3657;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of virtual mode rect, index 0x%I64x",
      -1073741811LL,
      (__int64)v41,
      v249,
      0LL,
      0LL);
    v230 = (unsigned __int16)*(_DWORD *)(v251[6].Count + 48) | (*(_DWORD *)(v251[6].Count + 44) << 16);
    v231 = (v255 << 16) | (unsigned __int16)v254;
    v232 = (unsigned int)Feature_EnableNonCriticalAsserts__private_featureState;
    v261 = (COREDEVICEACCESS *)(unsigned int)Feature_EnableNonCriticalAsserts__private_featureState;
    if ( (Feature_EnableNonCriticalAsserts__private_featureState & 0x10) == 0 )
    {
      LODWORD(v261) = Feature_EnableNonCriticalAsserts__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor,
        (__int64)v261,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        (unsigned __int8)v261,
        3,
        (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor);
    }
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(v232, v230, v231, (__int64)"ClipRect outside VirtualModeRect");
    goto LABEL_155;
  }
  v135 = v251[6].Count;
  if ( v134 >= v130 && v132 >= v127 && v133 <= v129 && v131 <= v128 )
  {
    v136 = *(int *)(v135 + 52);
    if ( (_DWORD)v136 == 4 )
      goto LABEL_191;
    if ( (_DWORD)v136 )
    {
      if ( (_DWORD)v136 != 1 && (unsigned int)(v136 - 2) >= 2 )
      {
        WdLogSingleEntry4(2LL, -1073741811LL, v41, v249, v136);
        v179 = L"ret = 0x%I64x Context 0x%I64x rotation is not valid, index 0x%I64x, rotation 0xI64x";
        v242 = 0LL;
        WdLogGlobalForLineNumber = 3711;
        v241 = *(int *)(v251[6].Count + 52);
        v240 = v249;
        goto LABEL_283;
      }
    }
    else
    {
      *(_DWORD *)(v135 + 52) = 1;
    }
LABEL_191:
    v137 = *(_DWORD *)(v135 + 60);
    v138 = 1;
    v139 = 0LL;
    if ( v137 )
    {
      while ( v138 )
      {
        v140 = (_DWORD *)(*(_QWORD *)(v135 + 64) + 16LL * (unsigned int)v139);
        v141 = v140[2];
        if ( *v140 >= v141 || v140[1] >= v140[3] )
          v138 = 0;
        if ( *(_DWORD *)(v135 + 4) > *v140
          || *(_DWORD *)(v135 + 12) < v141
          || *(_DWORD *)(v135 + 8) > v140[1]
          || *(_DWORD *)(v135 + 16) < v140[3] )
        {
          v138 = 0;
        }
        v139 = (unsigned int)(v139 + 1);
        if ( (unsigned int)v139 >= v137 )
        {
          if ( v138 )
            goto LABEL_201;
          break;
        }
      }
      *(_DWORD *)(v135 + 60) = 0;
    }
LABEL_201:
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 1896LL) + 3058LL)
      || (v216 = v251, v217 = (_DWORD *)v251[6].Count, v217[5] == v217[9])
      && v217[7] == v217[11]
      && v217[6] == v217[10]
      && v217[8] == v217[12] )
    {
LABEL_202:
      if ( !(_DWORD)Count_low )
      {
        if ( v267[0] )
        {
          v142 = *(_DWORD *)(*((_QWORD *)v267[0] + 6) + 4LL) & 0x2000;
          v143 = *(_QWORD *)(*(_QWORD *)v282 + 48LL);
          if ( (*(_DWORD *)(v143 + 4) & 0x2000) != 0 )
          {
            if ( !v142 )
            {
              LOBYTE(v143) = 1;
              v256 = v143;
            }
          }
          else
          {
            v144 = (unsigned __int8)v256;
            if ( v142 )
              v144 = 1;
            v6 = 0;
            v256 = v144;
            LODWORD(Count_low) = v259;
          }
        }
        v145 = *(_DWORD *)(v135 + 12) - *(_DWORD *)(v135 + 4);
        if ( (*(_DWORD *)(v135 + 28) - *(_DWORD *)(v135 + 20) != v145
           || *(_DWORD *)(v135 + 32) - *(_DWORD *)(v135 + 24) != *(_DWORD *)(v135 + 16) - *(_DWORD *)(v135 + 8))
          && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 1896LL) + 3010LL) )
        {
          LODWORD(v262) = *(_DWORD *)(v135 + 16) - *(_DWORD *)(v135 + 8);
          v248 = 1;
          v258 = v145;
        }
      }
      if ( v247 )
      {
        v187 = *(_DWORD *)(v135 + 20);
        if ( v187 != *(_DWORD *)(v135 + 4)
          || (v188 = *(_DWORD *)(v135 + 28), v188 != *(_DWORD *)(v135 + 12))
          || (v189 = *(_DWORD *)(v135 + 24), v189 != *(_DWORD *)(v135 + 8))
          || (v190 = *(_DWORD *)(v135 + 32), v190 != *(_DWORD *)(v135 + 16))
          || v187 != *(_DWORD *)(v135 + 36)
          || v188 != *(_DWORD *)(v135 + 44)
          || v189 != *(_DWORD *)(v135 + 40)
          || v190 != *(_DWORD *)(v135 + 48) )
        {
          WdLogSingleEntry2(2LL, -1073741811LL, v41);
          WdLogGlobalForLineNumber = 3816;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and Source/Dest/Cli"
                      "p rects are not identical",
            -1073741811LL,
            (__int64)v41,
            0LL,
            0LL,
            0LL);
          goto LABEL_155;
        }
        v103 = v251;
        v226 = v251[6].Count;
        if ( *(_DWORD *)(v226 + 52) != 1 )
        {
          WdLogSingleEntry3(2LL, -1073741811LL, v41, *(unsigned int *)(v226 + 52));
          v229 = v103[6].Count;
          v179 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and rotation 0x%I64x is specified";
          v242 = 0LL;
          WdLogGlobalForLineNumber = 3825;
          v241 = 0LL;
          v240 = *(unsigned int *)(v229 + 52);
          goto LABEL_283;
        }
        _mm_lfence();
        if ( v252 != ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v282 + (unsigned int)Count_low) + 48LL) + 4LL) >> 6) & 0xF) )
        {
          _mm_lfence();
          v227 = v252;
          v228 = 8LL * (unsigned int)Count_low;
          WdLogSingleEntry4(
            2LL,
            -1073741811LL,
            v41,
            v252,
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v282 + v228) + 48LL) + 4LL) >> 6) & 0xF);
          v179 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and VidPnSourceId (0x%I"
                  "64x) doesn't match the surface VidPnSOurceId (0x%I64x)";
          WdLogGlobalForLineNumber = 3834;
          v242 = 0LL;
          v241 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v282 + v228) + 48LL) + 4LL) >> 6) & 0xF;
          v240 = v227;
          goto LABEL_283;
        }
      }
      else
      {
        v103 = v251;
      }
      v53 = v260;
      goto LABEL_213;
    }
    v276 = 0LL;
    InverseXformMPORect3(&v276, v217, v217 + 9, v139);
    *(_OWORD *)(v135 + 4) = v276;
    *(_OWORD *)(v135 + 20) = *(_OWORD *)(v216[6].Count + 36);
    v218 = *(_DWORD *)(v135 + 12);
    v219 = *(_DWORD *)(v135 + 4);
    if ( v219 < v218 )
    {
      v220 = *(_DWORD *)(v135 + 8);
      v221 = *(_DWORD *)(v135 + 16);
      if ( v220 < v221 )
      {
        v222 = *(_DWORD *)(v135 + 20);
        v223 = *(_DWORD *)(v135 + 28);
        if ( v222 >= v223 || (v224 = *(_DWORD *)(v135 + 24), v225 = *(_DWORD *)(v135 + 32), v224 >= v225) )
        {
          WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
          v242 = 0LL;
          v179 = L"ret = 0x%I64x Context 0x%I64x Dest rect is invalid, index 0x%I64x";
          v241 = 0LL;
          v240 = v249;
          WdLogGlobalForLineNumber = 3762;
          goto LABEL_283;
        }
        if ( v219 >= 0 && Width >= v218 && v220 >= 0 && Height >= v221 )
        {
          if ( v265 > v222 || v255 < v223 || v257 > v224 || v254 < v225 )
          {
            WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
            v242 = 0LL;
            v179 = L"ret = 0x%I64x Context 0x%I64x Dest rect is outside of screen rect, index 0x%I64x";
            v241 = 0LL;
            v240 = v249;
            WdLogGlobalForLineNumber = 3776;
            goto LABEL_283;
          }
          goto LABEL_202;
        }
        v180 = v249;
        WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
        WdLogGlobalForLineNumber = 3769;
LABEL_287:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ret = 0x%I64x Context 0x%I64x Source rect is outside of allocation rect, index 0x%I64x",
          -1073741811LL,
          (__int64)v41,
          v180,
          0LL,
          0LL);
        goto LABEL_155;
      }
    }
    v183 = v249;
    WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
    WdLogGlobalForLineNumber = 3755;
LABEL_297:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x Source rect is invalid, index 0x%I64x",
      -1073741811LL,
      (__int64)v41,
      v183,
      0LL,
      0LL);
    goto LABEL_155;
  }
  WdLogSingleEntry3(2LL, -1073741811LL, v41, v249);
  WdLogGlobalForLineNumber = 3676;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of destination rect, index 0x%I64x",
    -1073741811LL,
    (__int64)v41,
    v249,
    0LL,
    0LL);
  v181 = (_DWORD *)v251[6].Count;
  MicrosoftTelemetryAssertTriggeredArgsMsgKM(
    (unsigned __int16)v181[12],
    (unsigned __int16)v181[12] | (v181[11] << 16),
    (unsigned __int16)v181[8] | (v181[7] << 16),
    (__int64)"ClipRect outside DestRect");
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 **)&v282);
  return 3221225485LL;
}
