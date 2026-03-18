/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403358AC (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x14000C300 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x140023E90 (--0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x14004644C (--0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x14004DA34 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchExitIndependentFlip@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@IPEBU_LUID@@_KPEBII_NPEAHPEA_K@Z @ 0x140059770 (-VidSchExitIndependentFlip@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@IPEBU_LUID@@_KPEBII_NPEAHPEA_.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x14006C408 (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI@Z @ 0x14007C7B8 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x140192184 (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x14028D844 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1402B4434 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402F1C20 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1402F44F4 (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1402F4584 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ??1CIFlipPresentHistoryToken@@QEAA@XZ @ 0x1402F490C (--1CIFlipPresentHistoryToken@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1402F4940 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x140300640 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1403738A0 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x14042A0A4 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 */

__int64 __fastcall PrepareIndependentFlipToken(
        struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct DXGK_PRESENT_PARAMS *a2,
        struct VIDSCH_SUBMIT_DATA_BASE *a3,
        unsigned int **a4,
        unsigned int **a5,
        struct CRefCountedBuffer *a6)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v7; // rsi
  unsigned int **v9; // rbx
  struct VIDSCH_SUBMIT_DATA_BASE *v10; // r15
  unsigned int v11; // r14d
  __int64 v12; // rcx
  unsigned int *v13; // rax
  unsigned int *v14; // r13
  struct DXGPROCESS *Current; // r9
  struct ADAPTER_RENDER *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r13
  unsigned int v19; // eax
  struct _EX_RUNDOWN_REF *v20; // rax
  ULONG_PTR Count; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rbx
  UINT64 CompositionBindingId; // rdi
  __int64 v26; // rax
  UINT64 v27; // r9
  struct ADAPTER_RENDER *v28; // rdi
  struct _LUID *v29; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v30; // rbx
  unsigned int v31; // ecx
  __int64 v32; // r8
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // ecx
  char v37; // al
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned int v43; // r13d
  _BYTE *Pool2; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rdx
  unsigned int v48; // r9d
  char *i; // rbx
  unsigned int *v50; // rax
  int v51; // ecx
  unsigned __int64 v52; // rbx
  unsigned int *v53; // r13
  __int64 v54; // rbx
  _DWORD *v55; // rax
  _OWORD *v56; // rsi
  BOOL v57; // r13d
  __int64 v58; // rax
  unsigned int v59; // ebx
  struct _EX_RUNDOWN_REF *v60; // r10
  _QWORD *v61; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v62; // r8
  unsigned int *v63; // rax
  struct DXGCONTEXT *v64; // rdx
  char *v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  ULONG_PTR v68; // rcx
  bool v69; // al
  __int64 v70; // r8
  UINT64 v71; // rsi
  __int64 v72; // rdi
  unsigned int v73; // ebx
  __int64 v74; // rax
  char v75; // al
  __int64 v76; // rax
  bool v77; // cf
  unsigned __int64 v78; // rax
  struct _EX_RUNDOWN_REF *v79; // rax
  struct _EX_RUNDOWN_REF *v80; // rax
  unsigned __int64 v81; // rsi
  DXGALLOCATIONREFERENCE *v82; // r15
  char *v83; // rcx
  unsigned int v84; // ecx
  char v85; // r10
  __int64 v86; // rdx
  __int64 v87; // rbx
  __int64 v88; // r15
  struct DXGCONTEXT *v89; // rsi
  unsigned __int64 v90; // r11
  __int16 v91; // r8
  struct _EX_RUNDOWN_REF *v92; // r9
  __int64 v93; // rax
  void *v94; // rdx
  unsigned int v95; // ebx
  __int64 v96; // rax
  unsigned int v97; // eax
  int *v98; // rbx
  int v99; // ebx
  _DWORD *v100; // rax
  _DWORD *v101; // rbx
  VIDSCH_EXPORT *v102; // rdi
  unsigned __int64 v103; // rbx
  const struct _LUID *v104; // rax
  VIDSCH_EXPORT *v105; // rdi
  unsigned __int64 v106; // rbx
  const struct _LUID *v107; // rax
  __int64 v108; // rdx
  VIDSCH_EXPORT *v109; // rdi
  unsigned __int64 v110; // rbx
  const struct _LUID *v111; // rax
  __int64 v112; // rbx
  unsigned int v113; // eax
  __int64 v114; // rdx
  unsigned __int8 PostCompositionStretching; // al
  bool v116; // r9
  int *v117; // rax
  _WORD *v118; // rdx
  int v119; // eax
  __int64 *v120; // rcx
  __int64 v121; // rax
  __int128 v122; // xmm1
  __int64 v123; // r8
  VIDSCH_EXPORT *v124; // rdi
  unsigned __int64 v125; // rbx
  const struct _LUID *v126; // rax
  __int64 v127; // rdx
  unsigned int v128; // eax
  __int64 v129; // rax
  __int64 v130; // rax
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v132; // r8
  int **v133; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v134; // r11
  int *v135; // rax
  char *v136; // rdx
  struct VIDMM_ALLOC **v137; // rbx
  unsigned __int64 v138; // rcx
  __int64 v139; // rsi
  int v140; // ecx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v141; // r15
  UINT64 v142; // rsi
  __int64 v143; // rdi
  unsigned int v144; // ebx
  __int64 v145; // rax
  __int64 v146; // rdx
  bool v147; // [rsp+20h] [rbp-3F8h]
  __int128 v148; // [rsp+80h] [rbp-398h] BYREF
  char v149; // [rsp+90h] [rbp-388h]
  int v150; // [rsp+94h] [rbp-384h] BYREF
  unsigned int v151; // [rsp+98h] [rbp-380h] BYREF
  int v152; // [rsp+9Ch] [rbp-37Ch]
  enum _D3DDDI_HDR_METADATA_TYPE v153; // [rsp+A0h] [rbp-378h] BYREF
  unsigned int *v154; // [rsp+A8h] [rbp-370h]
  unsigned int v155; // [rsp+B0h] [rbp-368h]
  int *v156; // [rsp+B8h] [rbp-360h]
  int v157; // [rsp+C0h] [rbp-358h] BYREF
  int *v158; // [rsp+C8h] [rbp-350h]
  struct _EX_RUNDOWN_REF *v159; // [rsp+D0h] [rbp-348h] BYREF
  unsigned int v160; // [rsp+D8h] [rbp-340h] BYREF
  __int64 v161; // [rsp+E0h] [rbp-338h]
  unsigned __int64 v162; // [rsp+E8h] [rbp-330h] BYREF
  unsigned __int64 v163; // [rsp+F0h] [rbp-328h]
  struct DXGCONTEXT *v164; // [rsp+F8h] [rbp-320h]
  int v165; // [rsp+100h] [rbp-318h]
  int v166; // [rsp+104h] [rbp-314h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v167; // [rsp+108h] [rbp-310h]
  struct VIDSCH_SUBMIT_DATA_BASE *v168; // [rsp+110h] [rbp-308h]
  __int64 v169; // [rsp+118h] [rbp-300h]
  unsigned int *v170; // [rsp+120h] [rbp-2F8h]
  struct ADAPTER_RENDER *v171; // [rsp+128h] [rbp-2F0h]
  struct _EX_RUNDOWN_REF *v172; // [rsp+130h] [rbp-2E8h]
  int v173; // [rsp+138h] [rbp-2E0h]
  int v174; // [rsp+13Ch] [rbp-2DCh]
  int v175; // [rsp+140h] [rbp-2D8h]
  int v176; // [rsp+144h] [rbp-2D4h]
  unsigned __int64 v177; // [rsp+148h] [rbp-2D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v178; // [rsp+150h] [rbp-2C8h]
  unsigned int *v179; // [rsp+158h] [rbp-2C0h]
  struct _D3DDDI_HDR_METADATA_HDR10 v180; // [rsp+160h] [rbp-2B8h] BYREF
  struct CRefCountedBuffer *v181; // [rsp+180h] [rbp-298h]
  struct VIDSCH_SUBMIT_DATA_BASE *v182; // [rsp+188h] [rbp-290h]
  __int64 v183; // [rsp+190h] [rbp-288h]
  int v184; // [rsp+198h] [rbp-280h] BYREF
  struct DXGCONTEXT *v185; // [rsp+1A0h] [rbp-278h]
  void *Src; // [rsp+1A8h] [rbp-270h]
  __int64 v187; // [rsp+1B0h] [rbp-268h]
  struct tagRECT v188; // [rsp+1C0h] [rbp-258h] BYREF
  PVOID v189; // [rsp+1D0h] [rbp-248h]
  _BYTE v190[32]; // [rsp+1D8h] [rbp-240h] BYREF
  unsigned int v191; // [rsp+1F8h] [rbp-220h]
  struct DXGPROCESS *v192; // [rsp+200h] [rbp-218h]
  struct _EX_RUNDOWN_REF *v193; // [rsp+208h] [rbp-210h] BYREF
  char *v194; // [rsp+210h] [rbp-208h]
  struct ADAPTER_RENDER *v195; // [rsp+218h] [rbp-200h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v196; // [rsp+220h] [rbp-1F8h]
  struct DXGK_PRESENT_PARAMS *v197; // [rsp+228h] [rbp-1F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v198; // [rsp+230h] [rbp-1E8h]
  struct _DXGKARG_PRESENT v199; // [rsp+240h] [rbp-1D8h] BYREF
  __int128 v200; // [rsp+2F0h] [rbp-128h] BYREF
  struct tagRECT v201; // [rsp+300h] [rbp-118h] BYREF
  __int64 *v202; // [rsp+310h] [rbp-108h] BYREF
  _BYTE v203[32]; // [rsp+318h] [rbp-100h] BYREF
  unsigned int v204; // [rsp+338h] [rbp-E0h]
  PVOID P; // [rsp+340h] [rbp-D8h]
  _BYTE v206[128]; // [rsp+348h] [rbp-D0h] BYREF
  unsigned int v207; // [rsp+3C8h] [rbp-50h]

  v164 = (struct DXGCONTEXT *)a4;
  v7 = a3;
  v178 = a3;
  v163 = (unsigned __int64)a2;
  v167 = a1;
  v198 = a3;
  v9 = a5;
  v196 = a1;
  v197 = a2;
  v10 = a3;
  v182 = a3;
  v168 = a3;
  v185 = (struct DXGCONTEXT *)a4;
  v181 = a6;
  v11 = 0;
  if ( !CIFlipPresentHistoryToken::IsIFlipSupported(a1) || a4 && !a2 )
    return 0LL;
  v148 = 0LL;
  v12 = (__int64)v167;
  if ( v167->Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
      (CIFlipPresentHistoryTokenRedirectedFlip *)&v148,
      &v167->Token.Flip);
  }
  else if ( v167->Model == D3DKMT_PM_FLIPMANAGER )
  {
    CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
      (CIFlipPresentHistoryTokenFlipManager *)&v148,
      (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)&v167->Token);
  }
  v170 = 0LL;
  if ( a4 )
  {
    v13 = a4[2];
    v9 = (unsigned int **)*((_QWORD *)v13 + 2);
  }
  else
  {
    v170 = *a5;
    v13 = a5[3];
  }
  v179 = v13;
  v14 = v9[2];
  v154 = v14;
  Src = v14;
  if ( !a4 && !*((_BYTE *)v14 + 3097) )
    goto LABEL_16;
  *((_QWORD *)v7 + 3) = 0LL;
  Current = DXGPROCESS::GetCurrent(v12);
  v192 = Current;
  v16 = (struct ADAPTER_RENDER *)*((_QWORD *)v14 + 396);
  v171 = v16;
  v195 = v16;
  v17 = *((_QWORD *)v14 + 395);
  v18 = 0LL;
  if ( v17 )
    v18 = v17;
  v183 = v163 & -(__int64)(a4 != 0LL);
  if ( a4 )
    v19 = *(_DWORD *)((v163 & -(__int64)(a4 != 0LL)) + 0x14);
  else
    v19 = v170[275];
  v153 = v19;
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v159, v19);
  v20 = v159;
  if ( !v159 || *(_QWORD *)(*(_QWORD *)(v159[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)v179 + 2) + 16LL) )
  {
LABEL_15:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v159);
LABEL_16:
    CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)&v148);
    return 0LL;
  }
  Count = v159[5].Count;
  if ( v181 && Count && (*(_DWORD *)(Count + 4) & 1) != 0 )
    *((_QWORD *)v7 + 3) = *(_QWORD *)(*(_QWORD *)(Count + 56) + 176LL);
  if ( v164 )
    v23 = *(_QWORD *)(v163 + 1496);
  else
    v23 = 0LL;
  v162 = v23;
  v177 = v23;
  v160 = (*(_DWORD *)(v20[6].Count + 4) >> 6) & 0xF;
  v173 = 0;
  v166 = 0;
  v174 = 0;
  v175 = 0;
  v151 = 0;
  v187 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 24))(&v148);
  v165 = 0;
  v200 = 0LL;
  v201 = 0LL;
  v161 = (__int64)v7 + (*((_BYTE *)v7 + 356) != 0 ? 0xF0 : 0) + 528;
  v24 = *((_QWORD *)v16 + 92);
  CompositionBindingId = v167->CompositionBindingId;
  v26 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 16))(&v148);
  v147 = v161;
  v27 = CompositionBindingId;
  v28 = v171;
  (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, UINT64))(*(_QWORD *)(v24 + 8) + 432LL))(
    *((_QWORD *)v171 + 93),
    &v160,
    v26,
    v27);
  (*(void (__fastcall **)(__int128 *, __int64))(v148 + 32))(&v148, v187);
  (*(void (__fastcall **)(__int128 *, _QWORD))(v148 + 48))(&v148, v160);
  *((_DWORD *)v7 + 29) = v160;
  v29 = (struct _LUID *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 16))(&v148);
  RtlCopyLuid((PLUID)((char *)v7 + 156), v29);
  *((_QWORD *)v7 + 21) = v167->CompositionBindingId;
  v30 = v7;
  v31 = *(_DWORD *)v7 & 0xFFFEFFFF;
  *(_DWORD *)v7 = v31;
  if ( v164 )
  {
    v32 = v183;
    v33 = v31 ^ (*(_DWORD *)(v183 + 88) ^ v31) & 4;
    *(_DWORD *)v7 = v33;
    v34 = v33 ^ (v33 ^ (4 * *(_DWORD *)(v32 + 88))) & 0x80000;
    *(_DWORD *)v7 = v34;
    v35 = v34 ^ (v34 ^ (4 * *(_DWORD *)(v32 + 88))) & 0x100000;
    *(_DWORD *)v7 = v35;
    *(_DWORD *)v7 = v35 ^ (v35 ^ (4 * *(_DWORD *)(v32 + 88))) & 0x200000;
  }
  *(_DWORD *)v7 ^= ((unsigned __int8)*(_DWORD *)v7 ^ (unsigned __int8)(8
                                                                     * (*(__int64 (__fastcall **)(__int128 *))(v148 + 200))(&v148))) & 8;
  *(_DWORD *)v7 ^= ((unsigned __int8)*(_DWORD *)v7 ^ (unsigned __int8)(16
                                                                     * (*(__int64 (__fastcall **)(__int128 *))(v148 + 208))(&v148))) & 0x10;
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 216))(&v148) << 28)) & 0x10000000;
  *((_DWORD *)v7 + 1) ^= ((unsigned __int8)*((_DWORD *)v7 + 1) ^ (unsigned __int8)((*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 224))(&v148) << 6)) & 0x40;
  *((_DWORD *)v7 + 1) ^= ((unsigned __int16)*((_DWORD *)v7 + 1) ^ (unsigned __int16)((*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 320))(&v148) << 8)) & 0x100;
  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)v7 + 1) ^= ((unsigned __int16)*((_DWORD *)v7 + 1) ^ (unsigned __int16)((*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 328))(&v148) << 9)) & 0x200;
  (*(void (__fastcall **)(__int128 *, unsigned int *))(v148 + 56))(&v148, v154);
  *((_DWORD *)v7 + 28) = (*(__int64 (__fastcall **)(__int128 *))(v148 + 64))(&v148);
  *((_DWORD *)v7 + 48) = *(_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 72))(&v148);
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 192))(&v148) << 25)) & 0x2000000;
  *((_DWORD *)v7 + 36) = (*(__int64 (__fastcall **)(__int128 *))(v148 + 80))(&v148);
  *((_DWORD *)v7 + 37) = (*(__int64 (__fastcall **)(__int128 *))(v148 + 88))(&v148);
  if ( v164 )
    v36 = *((_DWORD *)v164 + 96);
  else
    v36 = 1;
  *((_DWORD *)v7 + 34) = v36;
  v37 = *((_BYTE *)v7 + 356);
  if ( v37 )
    v170 = (unsigned int *)((char *)v7 + 616);
  else
    v170 = 0LL;
  if ( v37 )
    *((_DWORD *)v7 + 162) = -1;
  if ( bTracingEnabled )
    *((_QWORD *)v7 + 23) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v28 + 95) + 8LL) + 328LL))(
                             *((_QWORD *)v28 + 96),
                             (unsigned int)v153);
  v38 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 96))(&v148);
  *((_DWORD *)v7 + 31) = v38;
  v158 = (int *)((char *)v7 + 124);
  v184 = 1;
  if ( !v38 && (!(*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 216))(&v148) || (v154[625] & 0x40) == 0) )
    v158 = &v184;
  v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)v28 + 92) + 8LL) + 536LL))(
          *((_QWORD *)v179 + 100),
          v160,
          v158);
  v150 = v39;
  *((_DWORD *)v7 + 30) = v39;
  if ( v39 != 5 && *((_DWORD *)v7 + 31) )
  {
    v95 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 64))(&v148);
    v96 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 104))(&v148);
    WdLogSingleEntry4(8LL, v167, v96, v95, v150);
    WdLogGlobalForLineNumber = 2098;
    goto LABEL_89;
  }
  if ( !v173 )
  {
    if ( v174 )
    {
      v150 = 0;
      v162 = 0LL;
      v102 = (VIDSCH_EXPORT *)*((_QWORD *)v28 + 92);
      v103 = *((_QWORD *)v7 + 21);
      v104 = (const struct _LUID *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 16))(&v148);
      VIDSCH_EXPORT::VidSchExitIndependentFlip(
        v102,
        *((struct _VIDSCH_GLOBAL **)v171 + 93),
        1 << *((_DWORD *)v7 + 29),
        v104,
        v103,
        &v151,
        0,
        0,
        &v150,
        &v162);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v18, *((_DWORD *)v7 + 29), v151, 0);
    }
    else if ( !v175 )
    {
LABEL_89:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v159);
      (*(void (__fastcall **)(__int128 *, __int64))v148)(&v148, 1LL);
      return 0LL;
    }
    LOBYTE(v40) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v148 + 232))(&v148, v40);
    goto LABEL_89;
  }
  *((_QWORD *)v7 + 22) = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 24))(&v148);
  v152 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 240))(&v148) )
  {
    v150 = 0;
    v162 = 0LL;
    v105 = (VIDSCH_EXPORT *)*((_QWORD *)v28 + 92);
    v106 = *((_QWORD *)v7 + 21);
    v107 = (const struct _LUID *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 16))(&v148);
    VIDSCH_EXPORT::VidSchExitIndependentFlip(
      v105,
      *((struct _VIDSCH_GLOBAL **)v171 + 93),
      1 << *((_DWORD *)v7 + 29),
      v107,
      v106,
      &v151,
      0,
      0,
      &v150,
      &v162);
    LOBYTE(v108) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v148 + 232))(&v148, v108);
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v18, *((_DWORD *)v7 + 29), v151, 0);
    WdLogSingleEntry0(8LL);
    WdLogGlobalForLineNumber = 2167;
    goto LABEL_15;
  }
  if ( v166 || DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v28 + 2)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 248))(&v148) )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)&v180, (struct ADAPTER_DISPLAY *)v18);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v180);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching(
                                    (ADAPTER_DISPLAY *)v18,
                                    *((_DWORD *)v7 + 29));
      v149 = PostCompositionStretching;
      if ( PostCompositionStretching )
      {
        if ( (unsigned int)IsYUVAllocation(*(void **)(v159[6].Count + 16), v28)
          || (unsigned int)DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v18 + 128)
                                                                                       + 4024LL
                                                                                       * *((unsigned int *)v7 + 29))) > 1 )
        {
          PostCompositionStretching = 0;
          v149 = 0;
        }
        else
        {
          PostCompositionStretching = v149;
        }
      }
      v188 = 0LL;
      if ( v151 || (v116 = 1, !PostCompositionStretching) )
        v116 = 0;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              *((_DWORD *)v7 + 29),
              v151,
              (struct CIFlipPresentHistoryTokenData *)&v148,
              v116,
              v28,
              (struct ADAPTER_DISPLAY *)v18,
              &v188) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v180);
        v150 = 0;
        v162 = 0LL;
        v124 = (VIDSCH_EXPORT *)*((_QWORD *)v28 + 92);
        v125 = *((_QWORD *)v7 + 21);
        v126 = (const struct _LUID *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 16))(&v148);
        VIDSCH_EXPORT::VidSchExitIndependentFlip(
          v124,
          *((struct _VIDSCH_GLOBAL **)v171 + 93),
          1 << *((_DWORD *)v7 + 29),
          v126,
          v125,
          &v151,
          0,
          0,
          &v150,
          &v162);
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2277;
        LOBYTE(v127) = 1;
        (*(void (__fastcall **)(__int128 *, __int64))(v148 + 232))(&v148, v127);
        ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v18, *((_DWORD *)v7 + 29), v151, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v180);
        goto LABEL_15;
      }
      v117 = (int *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 8))(&v148);
      v158 = v117;
      v118 = (_WORD *)v161;
      *(_WORD *)v161 = *(_WORD *)v117;
      v118[2] = *((_WORD *)v117 + 2);
      v118[1] = *((_WORD *)v117 + 4);
      v118[3] = *((_WORD *)v117 + 6);
      v119 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 112))(&v148);
      v120 = (__int64 *)v161;
      *(_DWORD *)(v161 + 24) = v119;
      if ( v149 )
      {
        v121 = *v120;
        v120[1] = *v120;
        v120[2] = v121;
        v122 = *(_OWORD *)v158;
        v200 = v122;
        v201 = v188;
        if ( (_DWORD)v122 != v188.left
          || __PAIR64__(DWORD2(v200), DWORD1(v122)) != *(_QWORD *)&v188.top
          || (v123 = 0LL, HIDWORD(v200) != v188.bottom) )
        {
          v123 = 1LL;
        }
        v165 = v123;
        if ( !(_DWORD)v123 )
        {
          v200 = 0LL;
          v201 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v28 + 92)
                                                                                                  + 8LL)
                                                                                      + 1008LL))(
          *((_QWORD *)v28 + 93),
          *((unsigned int *)v7 + 29),
          v123,
          &v200,
          &v201);
        UpdatePostComposition(
          *((_DWORD *)v7 + 29),
          v165 != 0,
          DWORD2(v200) - v200,
          HIDWORD(v200) - DWORD1(v200),
          (struct ADAPTER_DISPLAY *)v18);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v28 + 92) + 8LL) + 440LL))(
        *((_QWORD *)v28 + 93),
        *((unsigned int *)v7 + 29),
        v161,
        v151);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v180);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v180);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v18, *((_DWORD *)v7 + 29), v151, 1u);
    }
    *(_DWORD *)v7 = *(_DWORD *)v7 & 0x7BFFFFFF | ((v166 & 1 | (32 * v165)) << 26);
    *(_OWORD *)((char *)v7 + 436) = v200;
    *(struct tagRECT *)((char *)v7 + 452) = v201;
  }
  else
  {
    v98 = (int *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 8))(&v148);
    v158 = v98;
    if ( v98[2] - *v98 != (*(unsigned int (__fastcall **)(__int128 *))(v148 + 120))(&v148)
      || (v99 = v98[3] - v98[1], v99 != (*(unsigned int (__fastcall **)(__int128 *))(v148 + 128))(&v148))
      || (*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 248))(&v148) )
    {
      v150 = 0;
      v162 = 0LL;
      v109 = (VIDSCH_EXPORT *)*((_QWORD *)v28 + 92);
      v110 = *((_QWORD *)v7 + 21);
      v111 = (const struct _LUID *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 16))(&v148);
      VIDSCH_EXPORT::VidSchExitIndependentFlip(
        v109,
        *((struct _VIDSCH_GLOBAL **)v171 + 93),
        1 << *((_DWORD *)v7 + 29),
        v111,
        v110,
        &v151,
        0,
        0,
        &v150,
        &v162);
      v112 = (*(unsigned int (__fastcall **)(__int128 *))(v148 + 128))(&v148);
      v113 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 120))(&v148);
      WdLogSingleEntry4(8LL, v158[2] - *v158, v158[3] - v158[1], v113, v112);
      WdLogGlobalForLineNumber = 2330;
      LOBYTE(v114) = 1;
      (*(void (__fastcall **)(__int128 *, __int64))(v148 + 232))(&v148, v114);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v18, *((_DWORD *)v7 + 29), 0, 0);
LABEL_239:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v159);
      CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)&v148);
      return v11;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v18, *((_DWORD *)v7 + 29), 0, 1u);
    v30 = v7;
  }
  if ( v18 && (*(_DWORD *)(v18 + 24) & 0x10) != 0 )
  {
    v41 = v160;
    v150 = v160;
    if ( v160 >= *(_DWORD *)(v18 + 96) )
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
      v41 = (unsigned int)v150;
    }
    if ( !*(_BYTE *)(4024 * v41 + *(_QWORD *)(v18 + 128) + 764) )
    {
      *((_DWORD *)v30 + 90) = 0;
LABEL_50:
      *(_DWORD *)v7 |= 0x40000000u;
      goto LABEL_51;
    }
    *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v148 + 256))(&v148) << 30)) & 0x40000000;
    v97 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 136))(&v148);
    *((_DWORD *)v30 + 90) = v97;
    if ( (*(_DWORD *)v7 & 0x40000000) != 0 )
    {
      if ( v97 )
      {
        v128 = v97 - 1;
        if ( v128 )
        {
          if ( v128 == 1 )
          {
            v129 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 152))(&v148);
            *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v129;
            *(_OWORD *)((char *)v7 + 380) = *(_OWORD *)(v129 + 16);
            *(_OWORD *)((char *)v7 + 396) = *(_OWORD *)(v129 + 32);
            *(_OWORD *)((char *)v7 + 412) = *(_OWORD *)(v129 + 48);
            *(_QWORD *)((char *)v7 + 428) = *(_QWORD *)(v129 + 64);
          }
          else
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2372;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 2372LL, 0LL, 0LL, 0LL, 0LL);
            *(_DWORD *)v7 &= ~0x40000000u;
          }
        }
        else
        {
          v130 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 144))(&v148);
          *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v130;
          *(_QWORD *)((char *)v7 + 380) = *(_QWORD *)(v130 + 16);
          *((_DWORD *)v7 + 97) = *(_DWORD *)(v130 + 24);
        }
      }
    }
    else
    {
      if ( v97 > 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2380;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DDDI_HDR_METADATA_TYPE_HDR10 == pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_HDR1"
                    "0PLUS == pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_NONE == pVidSchSubmitData->HDRMetaDataType",
          2380LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)v7 |= 0x40000000u;
      if ( *((_DWORD *)v30 + 90) == 1 )
      {
        *((_DWORD *)v30 + 90) = 134217729;
      }
      else if ( *((_DWORD *)v30 + 90) == 2 )
      {
        *((_DWORD *)v30 + 90) = -2147483646;
      }
    }
    if ( !*((_DWORD *)v30 + 90) )
    {
      v153 = D3DDDI_HDR_METADATA_TYPE_NONE;
      memset(&v180, 0, sizeof(v180));
      if ( !(unsigned int)PopulateHDRMetadataFromDisplay(
                            *((_DWORD *)v7 + 29),
                            (struct ADAPTER_DISPLAY *)v18,
                            &v180,
                            &v153) )
      {
        *((struct _D3DDDI_HDR_METADATA_HDR10 *)v7 + 13) = v180;
        *((_DWORD *)v30 + 90) = v153;
        goto LABEL_50;
      }
    }
  }
LABEL_51:
  (*(void (__fastcall **)(__int128 *, _QWORD))(v148 + 160))(&v148, v151);
  v42 = *((_BYTE *)v7 + 356) != 0 ? 0x68 : 0;
  *(_DWORD *)((char *)v30 + v42 + 496) ^= ((unsigned __int16)*(_DWORD *)((char *)v30 + v42 + 496) ^ (unsigned __int16)(1 << v151)) & 0x3FF;
  v43 = 1;
  v150 = 1;
  if ( ((int)v154[694] >= 0x2000 || *((_BYTE *)v154 + 3076)) && v164 )
  {
    v43 = *(_DWORD *)(v183 + 92) + 1;
    v150 = v43;
  }
  v153 = D3DDDI_HDR_METADATA_TYPE_NONE;
  Pool2 = 0LL;
  v161 = 0LL;
  v189 = 0LL;
  v191 = 0;
  if ( v43 <= 4 )
  {
    Pool2 = v190;
    v161 = (__int64)v190;
    v189 = v190;
    if ( v43 )
    {
      memset(v190, 0, 8LL * v43);
      Pool2 = v189;
      v161 = (__int64)v189;
    }
    goto LABEL_57;
  }
  v46 = v43;
  v45 = -1LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v43 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v43, 1265072196LL);
    v161 = (__int64)Pool2;
    v189 = Pool2;
LABEL_57:
    v45 = -1LL;
    v191 = v43;
    v46 = v43;
  }
  *(_QWORD *)v180.RedPrimary = v46;
  *(_QWORD *)&v188.left = Pool2;
  if ( !Pool2 )
  {
    v189 = 0LL;
    v191 = 0;
    v11 = -1073741801;
    goto LABEL_239;
  }
  v202 = 0LL;
  v204 = 0;
  if ( v43 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v46 < 8 )
      goto LABEL_63;
    v76 = 8 * v46;
    if ( !is_mul_ok(v46, 8uLL) )
      v76 = -1LL;
    v77 = __CFADD__(v76, 8LL);
    v78 = v76 + 8;
    if ( v77 )
      v78 = -1LL;
    v79 = (struct _EX_RUNDOWN_REF *)operator new[](v78, 0x4B677844u, 256LL);
    if ( v79 )
    {
      v79->Count = v46;
      v80 = v79 + 1;
      v172 = v80;
      if ( v46 )
      {
        v81 = v46;
        v82 = (DXGALLOCATIONREFERENCE *)v80;
        do
        {
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(v82);
          v82 = (DXGALLOCATIONREFERENCE *)((char *)v82 + 8);
          --v81;
        }
        while ( v81 );
        v10 = v182;
        v7 = v182;
        v80 = v172;
      }
      v202 = (__int64 *)v80;
    }
  }
  else
  {
    v202 = (__int64 *)v203;
    if ( v43 )
      memset(v203, 0, 8 * v46);
  }
  v204 = v43;
LABEL_63:
  v47 = (unsigned __int64)v202;
  v158 = (int *)v202;
  if ( !v202 )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(&v202);
    if ( v189 != v190 && v189 )
      ExFreePoolWithTag(v189, 0);
    v189 = 0LL;
    v191 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v159);
    (*(void (__fastcall **)(__int128 *, __int64))v148)(&v148, 1LL);
    return 3221225495LL;
  }
  v48 = 0;
  v155 = 0;
  for ( i = (char *)v7 + 600; ; i = v194 )
  {
    v194 = i;
    if ( v48 >= v43 )
      goto LABEL_66;
    if ( !v48 )
    {
      v60 = v159;
      v172 = v159;
      if ( *((_BYTE *)v10 + 356) )
      {
        v61 = (_QWORD *)((char *)v10 + (unsigned int)(8 * *((_DWORD *)v10 + 151) * (*((_DWORD *)v10 + 152) + 28)) + 632);
        v62 = v168;
      }
      else
      {
        v61 = (_QWORD *)((char *)v168 + 512);
        v62 = v7;
      }
      *v61 = *(_QWORD *)(v159[6].Count + 16);
      v63 = v154;
      v64 = v164;
      if ( !*((_BYTE *)v154 + 3097) )
      {
        if ( *((_BYTE *)v10 + 356) )
          v83 = &i[8 * *((_DWORD *)i + 1) * (*((_DWORD *)i + 2) + 28) + 24];
        else
          v83 = (char *)v62 + 568;
        *(_QWORD *)v83 = *((_QWORD *)v164 + 23);
      }
      if ( ((int)v63[694] >= 0x2000 || *((_BYTE *)v63 + 3076)) && v64 && (*((_DWORD *)v64 + 98) & 0x10) == 0 )
        *(_QWORD *)((char *)v10 + *((unsigned int *)v10 + 138)) = *((_QWORD *)v64 + 32);
      v65 = (char *)v62 + 496;
      v66 = 0LL;
      goto LABEL_99;
    }
    v169 = v48;
    v152 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v163 + 1496) + 8LL * v48) + 388LL);
    v157 = 0;
    RtlCopyFromUser(&v157, (void *)(*(_QWORD *)(v183 + 1456) + 4LL * (v48 - 1)), 4uLL);
    v156 = &v158[2 * v169];
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v192, (DXGALLOCATIONREFERENCE *)&v193, v157);
    DXGALLOCATIONREFERENCE::MoveAssign(v156, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v193);
    v60 = *(struct _EX_RUNDOWN_REF **)v156;
    v172 = v60;
    if ( !v60 )
    {
      WdLogSingleEntry2(2LL, (unsigned int)v157, -1073741811LL);
      WdLogGlobalForLineNumber = 2493;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
        (unsigned int)v157,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v51 = -1073741811;
      v152 = -1073741811;
      v176 = -1073741811;
      v52 = v43;
      v50 = v154;
      goto LABEL_67;
    }
    v132 = 8 * v169;
    if ( *(_QWORD *)(*(_QWORD *)(v60[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v163 + 1496) + 8 * v169)
                                                                                                 + 16LL)
                                                                                     + 16LL)
                                                                         + 16LL) )
      break;
    v156 = *(int **)(v60[6].Count + 16);
    v48 = v155;
    if ( *((_BYTE *)v10 + 356) )
    {
      v133 = (int **)((char *)v10
                    + 64 * (unsigned __int64)(v155 * *((_DWORD *)v10 + 151))
                    + (unsigned int)(8 * *((_DWORD *)v10 + 151) * (*((_DWORD *)v10 + 152) + 28))
                    + 632);
      v134 = v168;
    }
    else
    {
      v133 = (int **)((char *)v168 + 512);
      v134 = v7;
    }
    *v133 = v156;
    if ( !*((_BYTE *)v154 + 3097) )
    {
      v135 = *(int **)(*(_QWORD *)(*(_QWORD *)(v163 + 1496) + v132) + 184LL);
      v156 = v135;
      if ( *((_BYTE *)v10 + 356) )
      {
        v136 = &i[64 * (unsigned __int64)(v48 * *((_DWORD *)i + 1))
                + 24
                + *((_DWORD *)i + 1) * ((8 * *((_DWORD *)i + 2) + 231) & 0xFFFFFFF8)];
        v135 = v156;
      }
      else
      {
        v136 = (char *)v134 + 568;
      }
      *(_QWORD *)v136 = v135;
    }
    *((_DWORD *)v10 + 34) |= 1 << v152;
    v156 = *(int **)(v132 + *(_QWORD *)(v163 + 1496));
    v65 = (char *)v134 + 496;
    if ( (v156[98] & 0x10) == 0 )
    {
      *(_QWORD *)((char *)v10 + v132 + *((unsigned int *)v10 + 138)) = *((_QWORD *)v156 + 32);
      v66 = v169;
LABEL_99:
      v169 = v66;
    }
    if ( *((_BYTE *)v10 + 356) )
      v67 = (unsigned __int64)&i[64 * (unsigned __int64)(v48 * *((_DWORD *)i + 1))
                               + 56
                               + (unsigned int)(8 * *((_DWORD *)i + 1) * (*((_DWORD *)i + 2) + 28))];
    else
      v67 = (unsigned __int64)(v65 + 8);
    v156 = (int *)v67;
    v152 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, unsigned __int64, _QWORD, unsigned int *))(*(_QWORD *)(*((_QWORD *)v28 + 95) + 8LL)
                                                                                                  + 400LL))(
             *((_QWORD *)v179 + 99),
             v60[3].Count,
             v67,
             *((_QWORD *)v28 + 96),
             v170);
    if ( v152 < 0 )
    {
      WdLogSingleEntry2(2LL, v172, -1073741811LL);
      WdLogGlobalForLineNumber = 2551;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reference allocation for submission (0x%I64x). Returning 0x%I64x",
        (__int64)v172,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
LABEL_66:
      v50 = v154;
      v51 = v152;
      v52 = v43;
      goto LABEL_67;
    }
    *(_QWORD *)(v161 + 8 * v169) = *(_QWORD *)v156;
    ++v153;
    v68 = v172[5].Count;
    if ( v68 )
      v69 = (*(_DWORD *)(v68 + 4) & 8) != 0;
    else
      v69 = 0;
    if ( v69 )
      v70 = *(_QWORD *)(*(_QWORD *)(v68 + 56) + 184LL);
    else
      v70 = 0LL;
    if ( *((_BYTE *)v10 + 356) )
      *(_QWORD *)&i[64 * v155 * *((_DWORD *)i + 1)
                  + 64
                  + *((_DWORD *)i + 1) * ((8 * *((_DWORD *)i + 2) + 231) & 0xFFFFFFF8)] = v70;
    else
      *((_QWORD *)v10 + 72) = v70;
    *(_DWORD *)v7 |= 0x1000000u;
    v71 = v167->CompositionBindingId;
    v72 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 16))(&v148);
    v73 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 64))(&v148);
    v74 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 104))(&v148);
    WdLogSingleEntry5(8LL, v167, v74, v73, v72, v71);
    WdLogGlobalForLineNumber = 2574;
    v75 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 344))(&v148);
    v7 = v178;
    if ( v75 )
    {
      *((_DWORD *)v178 + 1) |= 2u;
      *((_QWORD *)v10 + 60) = (*(__int64 (__fastcall **)(__int128 *))(v148 + 352))(&v148);
      v100 = (_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 360))(&v148);
      v101 = v100;
      *((_QWORD *)v10 + 61) = v100;
      if ( v100 )
      {
        if ( !v100[1] )
        {
          if ( *v100 != 64 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2588;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pAuxiliaryPresentInfo->size == sizeof(D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO)",
              2588LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v101[8] = *((_DWORD *)v10 + 29);
          *((_QWORD *)v101 + 3) = *(_QWORD *)(v154 + 103);
        }
      }
    }
    v48 = ++v155;
    v28 = v171;
  }
  _mm_lfence();
  WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v163 + 1496) + 8 * v169) + 16LL), v60, -1073741811LL);
  WdLogGlobalForLineNumber = 2502;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v163 + 1496) + 8 * v169) + 16LL),
    *(_QWORD *)v156,
    -1073741811LL,
    0LL,
    0LL);
  v51 = -1073741811;
  v152 = -1073741811;
  v176 = -1073741811;
  v52 = v43;
  v50 = v154;
LABEL_67:
  *((_DWORD *)v10 + 35) = v43;
  if ( v51 < 0 || (v50[625] & 0x20) == 0 )
  {
    v53 = v154;
    goto LABEL_70;
  }
  memset(&v199, 0, sizeof(v199));
  v199.Flags.Value = 0x2000;
  if ( v181 )
  {
    v199.PrivateDriverDataSize = *((_DWORD *)v181 + 2);
    v199.pPrivateDriverData = (char *)v181 + 16;
  }
  v45 = 0LL;
  P = 0LL;
  v207 = 0;
  if ( v43 > 4 )
  {
    v47 = 0xFFFFFFFFFFFFFFFFuLL % v52;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v52 >= 0x20 )
    {
      v45 = ExAllocatePool2(256LL, 32 * v52, 1265072196LL);
      P = (PVOID)v45;
      goto LABEL_134;
    }
  }
  else
  {
    v45 = (__int64)v206;
    P = v206;
    if ( v43 )
    {
      memset(v206, 0, 32 * v52);
      v45 = (__int64)P;
    }
LABEL_134:
    v207 = v43;
  }
  v199.pAllocationList = (DXGK_ALLOCATIONLIST *)v45;
  if ( !v45 )
  {
LABEL_263:
    P = 0LL;
    v207 = 0;
    goto LABEL_84;
  }
  v84 = v154[627];
  if ( (v84 & 0x80u) == 0 || (v85 = 1, (v84 & 0x40) != 0) )
    v85 = 0;
  v149 = v85;
  v86 = 0LL;
  v150 = 0;
  if ( v43 )
  {
    v87 = 0LL;
    v88 = 0LL;
    v89 = v164;
    do
    {
      v90 = v163;
      if ( v89 )
        v91 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v163 + 1496) + v88 * 4) + 388LL);
      else
        v91 = 0;
      *(_WORD *)((char *)&v199.pAllocationList[1].hDeviceSpecificAllocation + v87 + 2) = v91;
      if ( (_DWORD)v86 )
        v92 = *(struct _EX_RUNDOWN_REF **)&v158[v88];
      else
        v92 = v159;
      if ( v89 )
      {
        v85 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v90 + 1496) + v88 * 4) + 431LL);
        v149 = v85;
      }
      *(struct _EX_RUNDOWN_REF *)((char *)&v199.pAllocationList->hDeviceSpecificAllocation + v87) = v92[4];
      LOBYTE(v86) = v85 != 0;
      v93 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v28 + 95) + 8LL) + 232LL))(
              v92[3].Count,
              v86,
              *(unsigned __int16 *)((char *)&v199.pAllocationList[1].hDeviceSpecificAllocation + v87 + 2));
      *(_QWORD *)((char *)&v199.pAllocationList->8 + v87) = v93;
      v86 = (unsigned int)(v150 + 1);
      v150 = v86;
      v88 += 2LL;
      v87 += 32LL;
      v85 = v149;
    }
    while ( (unsigned int)v86 < v43 );
    v10 = v182;
    v7 = v178;
  }
  v199.FlipInterval = *((_DWORD *)v10 + 31);
  v199.Flags.Value = v199.Flags.Value & 0xFFFFE8FF | (*(_DWORD *)v168 >> 11) & 0x1700;
  v199.NumSrcAllocations = v43;
  v53 = v154;
  if ( *((_BYTE *)v154 + 3097) )
    v94 = 0LL;
  else
    v94 = (void *)*((_QWORD *)v164 + 23);
  v152 = ADAPTER_RENDER::DdiPresent(v28, v94, &v199);
  if ( v152 < 0 )
  {
    if ( P != v206 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_263;
  }
  if ( P != v206 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v207 = 0;
LABEL_70:
  if ( v166 && (*(_DWORD *)v7 & 0x1000000) != 0 )
  {
    v54 = 0LL;
    if ( (int)v53[761] < 2500 )
      goto LABEL_83;
    v155 = v151;
    v150 = (*(__int64 (__fastcall **)(__int128 *, unsigned __int64, __int64))(v148 + 168))(&v148, v47, v45);
    Src = (void *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 176))(&v148);
    v55 = (_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v148 + 184))(&v148);
    v56 = v55;
    v57 = v55 && (*v55 || v55[2] || v55[1] || v55[3]);
    if ( !v150 && !v57 )
      goto LABEL_83;
    LODWORD(v154) = v57 + v150;
    v157 = 16 * (v57 + v150) + 24;
    v58 = operator new[]((unsigned int)(16 * (v57 + v150) + 40), 0x4B677844u, 64LL);
    v54 = v58;
    if ( v58 )
    {
      *(_QWORD *)v58 = 0LL;
      *(_DWORD *)(v58 + 8) = v157;
      *(_DWORD *)(v58 + 12) = 1;
      *(_DWORD *)(v58 + 16) = 1;
      *(_DWORD *)(v58 + 24) = v155;
      *(_QWORD *)(v58 + 32) = v58 + 40;
      *(_DWORD *)(v58 + 28) = (_DWORD)v154;
      v185 = (struct DXGCONTEXT *)(16LL * (unsigned int)v150);
      memmove((void *)(v58 + 40), Src, (size_t)v185);
      if ( v57 )
        *(_OWORD *)((char *)v185 + v54 + 40) = *v56;
LABEL_83:
      *((_QWORD *)v10 + 4) = v54;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1732;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for present dirty rects data",
        1732LL,
        0LL,
        0LL,
        0LL,
        0LL);
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2675;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to read dirty rects data. Returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
LABEL_84:
  v59 = v152;
  if ( v152 < 0 )
  {
    if ( v153 )
    {
      v137 = (struct VIDMM_ALLOC **)v161;
      v138 = v177 - v161;
      v177 -= v161;
      v139 = (unsigned int)v153;
      do
      {
        if ( v164 )
          v140 = (*(_DWORD **)((char *)v137 + v138))[97];
        else
          LOBYTE(v140) = 0;
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *((VIDMM_EXPORT **)v28 + 95),
          *((struct VIDMM_GLOBAL **)v28 + 96),
          1 << v140,
          *v137++,
          v147,
          v170);
        --v139;
        v138 = v177;
      }
      while ( v139 );
    }
    v141 = v167;
    v142 = v167->CompositionBindingId;
    v143 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *, unsigned __int64, __int64))(v148 + 16))(&v148, v47, v45);
    v144 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 64))(&v148);
    v145 = (*(__int64 (__fastcall **)(__int128 *))(v148 + 104))(&v148);
    WdLogSingleEntry5(8LL, v141, v145, v144, v143, v142);
    WdLogGlobalForLineNumber = 2703;
    LOBYTE(v146) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v148 + 232))(&v148, v146);
    *(_DWORD *)v168 &= ~0x1000000u;
    v59 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(&v202);
  if ( v189 != v190 )
  {
    if ( v189 )
      ExFreePoolWithTag(v189, 0);
  }
  v189 = 0LL;
  v191 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v159);
  (*(void (__fastcall **)(__int128 *, __int64))v148)(&v148, 1LL);
  return v59;
}
