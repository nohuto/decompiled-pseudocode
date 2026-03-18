/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC464 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037EF8 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE298 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400D3F00 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1400D4458 (-DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEA.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400D4590 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400D5AD4 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEBU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400D5DA0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC464 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400DC714 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DC7DC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1400DD97C (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DDDD8 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1401050F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1401053E0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x140105914 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x140113070 (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@PEBUCOMMIT_VA_STATE@@_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401257B4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x140129CD8 (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int8 a8,
        struct VIDMM_ALLOC **a9)
{
  VIDMM_GLOBAL *v9; // r11
  struct _DXGK_PTE *v10; // r15
  struct VIDMM_PROCESS *v11; // rbp
  struct CVirtualAddressAllocator *v13; // r12
  struct COMMIT_VA_STATE *v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  struct VIDMM_ALLOC **v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v21; // r13
  int v22; // r8d
  __int64 v23; // rax
  __int64 result; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  int v29; // ecx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // r14d
  __int64 v33; // r15
  int v34; // r12d
  struct DXGK_LOG *v35; // rdx
  char *v36; // rax
  __int128 v37; // xmm0
  unsigned int v38; // eax
  __int64 v39; // rax
  unsigned __int8 v40; // al
  int v41; // ecx
  int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // r10d
  unsigned __int64 v47; // rdx
  unsigned int v48; // r11d
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // rbp
  unsigned __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v59; // rdx
  int v60; // ecx
  int v61; // r8d
  int v62; // r8d
  unsigned __int8 v63; // al
  __int64 v64; // rcx
  char v65; // r11
  unsigned int v66; // ecx
  int v67; // eax
  unsigned int v68; // r12d
  __int64 v69; // rdi
  char v70; // r12
  _DWORD *v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  unsigned int v74; // ecx
  __int64 v75; // r8
  __int64 v76; // r10
  unsigned __int64 v77; // r10
  __int64 *v78; // rdi
  __int64 v79; // r14
  char v80; // r15
  char *v81; // rbp
  unsigned __int8 v82; // r8
  unsigned __int8 v83; // r9
  _DWORD *v84; // rcx
  __int64 v85; // rax
  struct VIDMM_ALLOC *v86; // rcx
  bool v87; // dl
  int v88; // ecx
  bool v89; // r8
  unsigned __int64 v90; // rdi
  int v91; // eax
  unsigned int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // r10
  char v95; // di
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // r9
  unsigned __int64 v98; // rdx
  int v99; // eax
  int v100; // r11d
  VIDMM_PAGE_TABLE *v101; // rcx
  _DWORD *v102; // rax
  __int64 v103; // rax
  VIDMM_PAGE_TABLE *v104; // r10
  unsigned __int64 v105; // rdi
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v106; // rax
  __int64 v107; // rax
  int v108; // eax
  bool v109; // dl
  _QWORD *v110; // r8
  int v111; // edi
  __int64 v112; // rcx
  __int64 v113; // rcx
  int v114; // eax
  _QWORD *v115; // r8
  unsigned __int64 v116; // rdx
  _DWORD *v117; // rax
  __int64 v118; // rcx
  __int64 v119; // r8
  VIDMM_PAGE_TABLE *v120; // rax
  __int64 v121; // rax
  _QWORD *v122; // r8
  _DWORD *v123; // rax
  __int64 v124; // rax
  struct CVirtualAddressAllocator *v125; // rbp
  unsigned __int64 v126; // rdi
  enum _DXGK_PAGETABLEUPDATEMODE v127; // ecx
  __int64 v128; // rcx
  unsigned __int64 v129; // rbx
  unsigned int v130; // r8d
  unsigned int v131; // edx
  bool v132; // zf
  struct VIDMM_ALLOC **v133; // rbx
  unsigned int v134; // r15d
  VIDMM_PAGE_TABLE *v135; // r13
  VIDMM_PAGE_TABLE *v136; // rbx
  unsigned __int64 *v137; // rax
  unsigned __int64 *v138; // rbx
  __int64 v139; // rcx
  char v140; // [rsp+38h] [rbp-160h]
  struct VIDMM_ALLOC **v141; // [rsp+40h] [rbp-158h]
  LONG v142; // [rsp+80h] [rbp-118h]
  char v143; // [rsp+90h] [rbp-108h]
  char v144; // [rsp+91h] [rbp-107h]
  unsigned __int8 v145[2]; // [rsp+92h] [rbp-106h] BYREF
  int v146; // [rsp+94h] [rbp-104h]
  char v147; // [rsp+98h] [rbp-100h]
  char v148; // [rsp+99h] [rbp-FFh]
  unsigned int v149; // [rsp+9Ch] [rbp-FCh]
  int v150; // [rsp+A0h] [rbp-F8h]
  unsigned int v151; // [rsp+A4h] [rbp-F4h]
  unsigned int v152; // [rsp+A8h] [rbp-F0h]
  unsigned int v153; // [rsp+ACh] [rbp-ECh]
  unsigned __int64 v154; // [rsp+B0h] [rbp-E8h]
  unsigned int v155; // [rsp+B8h] [rbp-E0h]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v156; // [rsp+C0h] [rbp-D8h]
  unsigned __int64 v157; // [rsp+C8h] [rbp-D0h]
  unsigned __int64 v158; // [rsp+D0h] [rbp-C8h]
  VIDMM_PAGE_TABLE *v159; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v160; // [rsp+E0h] [rbp-B8h]
  struct VIDMM_ALLOC *v161; // [rsp+E8h] [rbp-B0h]
  VIDMM_PAGE_DIRECTORY *v162; // [rsp+F0h] [rbp-A8h]
  unsigned __int64 v163; // [rsp+F8h] [rbp-A0h]
  VIDMM_GLOBAL *v164; // [rsp+100h] [rbp-98h]
  unsigned __int64 v165; // [rsp+108h] [rbp-90h]
  unsigned __int64 v166; // [rsp+110h] [rbp-88h]
  unsigned __int64 v167; // [rsp+118h] [rbp-80h]
  struct VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+120h] [rbp-78h]
  unsigned __int64 v169; // [rsp+128h] [rbp-70h]
  __int64 v170; // [rsp+130h] [rbp-68h]
  __int128 v171; // [rsp+138h] [rbp-60h] BYREF
  char v172; // [rsp+148h] [rbp-50h]
  unsigned __int64 v173; // [rsp+1A0h] [rbp+8h] BYREF
  struct CVirtualAddressAllocator *v174; // [rsp+1A8h] [rbp+10h]
  struct COMMIT_VA_STATE *v175; // [rsp+1B0h] [rbp+18h] BYREF
  unsigned __int64 v176; // [rsp+1B8h] [rbp+20h]

  v176 = a4;
  v175 = a3;
  v174 = (struct CVirtualAddressAllocator *)a2;
  v9 = a2[12];
  v10 = 0LL;
  v11 = a2[13];
  v13 = (struct CVirtualAddressAllocator *)a2;
  v163 = a4;
  v14 = a3;
  v15 = *((_QWORD *)v9 + 5040);
  v16 = *(unsigned int *)this;
  v17 = a9;
  v18 = v16 & 7;
  v159 = 0LL;
  v162 = 0LL;
  v164 = v9;
  v19 = *(_QWORD *)(v15 + 8 * ((v16 >> 8) & 0x1F));
  *a9 = 0LL;
  v20 = *(_QWORD *)a3;
  v21 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(v19 + 48 * v18 + 208);
  v170 = v19;
  v156 = v21;
  VidMmGlobalAllocFromOwner = 0LL;
  v161 = 0LL;
  v153 = 0;
  v155 = 0;
  v144 = 0;
  v147 = 0;
  v148 = 0;
  v151 = 0;
  v22 = v20 & 1;
  if ( !v22 )
  {
    v23 = *((_QWORD *)this + 3);
    if ( !v23 || (*(_DWORD *)(*(_QWORD *)v23 + 56LL) & 1) == 0 || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    WdLogSingleEntry2(1LL, a5, a7);
    WdLogGlobalForLineNumber = 7589;
    DxgkLogInternalTriageEvent(v139, 0x40000LL);
    return 3221225485LL;
  }
  v25 = a6;
  v26 = a5 >> 12;
  v166 = a5 >> 12;
  v169 = (a5 >> 12) + a6;
  if ( v26 + a6 <= v26 )
  {
    WdLogSingleEntry2(1LL, v26 + a6, a5 >> 12);
    WdLogGlobalForLineNumber = 7607;
    DxgkLogInternalTriageEvent(v27, 0x40000LL);
    return 3221225485LL;
  }
  v28 = (v26 & *((_QWORD *)v21 + 2)) >> *((_QWORD *)v21 + 3);
  v29 = *(_DWORD *)this;
  v30 = *(unsigned int *)this;
  v157 = v28;
  v31 = (v30 >> 8) & 0x1F;
  if ( (v29 & 0x10) == 0 )
  {
    v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 12) + 40320LL) + 8 * v31) + 48LL * (v29 & 7) + 208);
    goto LABEL_18;
  }
  v149 = *(_DWORD *)(32 * v31 + *((_QWORD *)v13 + 16) + 16);
  if ( !v22 )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v9, v11, a5, a6 << 12);
    v38 = v149;
    v17 = a9;
LABEL_18:
    v149 = v38;
    goto LABEL_19;
  }
  v28 = (unsigned __int64)v9 + 41144;
  v32 = *((_DWORD *)v14 + 14);
  v33 = *((_QWORD *)v175 + 6);
  v34 = *((_DWORD *)v175 + 18);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v28, 0LL);
  v35 = (VIDMM_GLOBAL *)((char *)v164 + 41168);
  *(_QWORD *)(v28 + 8) = KeGetCurrentThread();
  v36 = operator new(72, v35, 1u, 0);
  if ( v36 )
  {
    *((_DWORD *)v36 + 17) = v32;
    v14 = v175;
    v37 = *((_OWORD *)v175 + 2);
    *((_QWORD *)v36 + 7) = v33;
    *(_OWORD *)(v36 + 40) = v37;
    *((_QWORD *)v36 + 1) = *((_QWORD *)v11 + 9);
    *(_QWORD *)v36 = *((_QWORD *)v11 + 2);
    *((_QWORD *)v36 + 4) = a7;
    *((_QWORD *)v36 + 2) = a5;
    *((_DWORD *)v36 + 16) = v34;
    *((_QWORD *)v36 + 3) = v25 << 12;
  }
  else
  {
    v14 = v175;
  }
  v10 = 0LL;
  *(_QWORD *)(v28 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v28, 0LL);
  KeLeaveCriticalRegion();
  v17 = a9;
  v13 = v174;
  LODWORD(v28) = v157;
LABEL_19:
  v39 = *((_QWORD *)this + 3);
  if ( v39 && (*(_DWORD *)(*(_QWORD *)v39 + 56LL) & 1) != 0 )
  {
    v40 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory((struct VIDMM_ALLOC **)this, v13, v17);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)this &= ~0x20000u;
    v40 = 1;
  }
  v41 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x20000) == 0 )
  {
    v42 = 2;
LABEL_27:
    if ( (_DWORD)v28 )
    {
      v43 = 0LL;
      v44 = (unsigned int)v28;
      do
      {
        v45 = *((_QWORD *)this + 6);
        v43 += 16LL;
        *(_QWORD *)(v43 + v45 - 16) = 0LL;
        *(_QWORD *)(v43 + v45 - 8) = 0LL;
        --v44;
      }
      while ( v44 );
      v41 = *(_DWORD *)this;
    }
    v46 = v149;
    v155 = v149;
    v144 = 1;
    goto LABEL_33;
  }
  v42 = 0;
  if ( v40 )
    goto LABEL_27;
  v46 = v149;
LABEL_33:
  v47 = v166;
  v48 = v151;
  v49 = v166 & ~*((_QWORD *)v21 + 4);
  v50 = v49 + *((_QWORD *)v21 + 5);
  v165 = v49;
  v167 = v50;
  v154 = v166;
  v160 = v50;
  if ( (v41 & 0x20) != 0 && *((_BYTE *)v14 + 78) )
  {
    if ( *((_BYTE *)v14 + 76) != (_BYTE)v151 )
      v48 = v46;
    v151 = v48;
  }
  v146 = 0;
  v51 = v50;
  while ( 1 )
  {
    if ( (unsigned int)v28 >= v46 )
      goto LABEL_198;
    LOBYTE(v17) = 0;
    v52 = (unsigned int)v28 + v48;
    v53 = v52;
    v152 = v28 + v48;
    v150 = (int)v17;
    v145[0] = 0;
    v143 = 0;
    LOBYTE(v173) = 0;
    if ( *((_BYTE *)v14 + 79) && (*(_DWORD *)this & 0x20) != 0 )
    {
      if ( (_DWORD)v52 == (_DWORD)v28 )
        v53 = v46 + (unsigned int)v52;
      else
        v53 = (unsigned int)v28;
      LOBYTE(v17) = 1;
      v152 = v53;
      LOBYTE(v173) = 1;
    }
    if ( v51 >= v169 )
    {
      v51 = v169;
      v160 = v169;
      v147 = 1;
    }
    v54 = v51 - v47;
    v55 = *(_QWORD *)v14;
    v158 = v54;
    if ( (v55 & 1) == 0 )
    {
      v56 = *((_QWORD *)this + 6);
      if ( (*(_BYTE *)(v56 + 16LL * (unsigned int)v52) & 1) == 0
        && (*(_BYTE *)(v56 + 16LL * (unsigned int)v53) & 1) == 0 )
      {
        goto LABEL_196;
      }
    }
    if ( (v55 & 2) != 0 )
    {
      v57 = *((_QWORD *)this + 6);
      if ( (*(_BYTE *)(v57 + 16LL * (unsigned int)v52) & 2) != 0 )
      {
        v58 = (unsigned int)v52;
      }
      else
      {
        if ( !(_BYTE)v17 || (*(_BYTE *)(v57 + 16LL * (unsigned int)v53) & 2) == 0 )
          goto LABEL_59;
        v58 = (unsigned int)v53;
      }
      if ( (_DWORD)v58 != -1 && ((*(_BYTE *)(16 * v58 + v57) ^ (unsigned __int8)v55) & 8) == 0 )
        goto LABEL_196;
    }
LABEL_59:
    v59 = v156;
    if ( *((_QWORD *)v156 + 5) > v54 || (*((_DWORD *)v13 + 38) & 4) != 0 )
      goto LABEL_72;
    if ( !VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
            this,
            v13,
            *(const struct _DXGK_GPUMMUCAPS **)(v170 + 560),
            v14,
            v156,
            v52,
            v53,
            v140,
            a7,
            v145,
            (unsigned __int8 *)v14 + 84) )
      break;
    if ( (*(_DWORD *)(*((_QWORD *)this + 6) + 16LL * (unsigned int)v52) & 0x400LL) != 0 )
    {
      v60 = *((_DWORD *)v14 + 14);
      v161 = (struct VIDMM_ALLOC *)*((_QWORD *)v14 + 6);
      VidMmGlobalAllocFromOwner = (struct VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(v60, v161);
      if ( v61 != 1 )
      {
        v62 = v61 - 4;
        if ( v62 )
        {
          if ( v62 == 1 )
          {
            v17 = (struct VIDMM_ALLOC **)v17[4];
            v63 = v145[0];
            v161 = (struct VIDMM_ALLOC *)v17;
          }
          else
          {
            v63 = v145[0];
            v161 = 0LL;
          }
          v148 = 1;
          goto LABEL_169;
        }
        v17 = (struct VIDMM_ALLOC **)v17[7];
        v161 = (struct VIDMM_ALLOC *)v17;
      }
    }
    v63 = v145[0];
    v148 = 1;
LABEL_169:
    if ( v63 )
      goto LABEL_170;
    v46 = v149;
    v48 = v151;
LABEL_196:
    v111 = v157;
LABEL_197:
    v28 = (unsigned int)(v111 + 1);
    v21 = v156;
    v47 = v160;
    v49 = v160;
    a7 += v158 << 12;
    v163 += v158 << 12;
    v154 = v160;
    v165 = v160;
    v51 = *((_QWORD *)v156 + 5) + v160;
    v157 = v28;
    v160 = v51;
    v167 = v51;
    if ( v147 )
      goto LABEL_198;
  }
  v49 = v165;
  v59 = v156;
  v150 = v145[0];
LABEL_72:
  v64 = *((_QWORD *)this + 6);
  if ( (*(_DWORD *)(v64 + 16LL * (unsigned int)v52) & 0x400LL) != 0 )
  {
    v66 = v52;
LABEL_77:
    if ( *((_QWORD *)v59 + 5) <= v54 )
    {
      v69 = v66;
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)v13 + 12) + 40384LL),
        *(PVOID *)(*((_QWORD *)this + 7) + 8LL * v66));
      *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v69) = 0LL;
      v54 = 16 * v69;
      *(_QWORD *)(v54 + *((_QWORD *)this + 6)) &= ~0x400uLL;
      *(_QWORD *)(v54 + *((_QWORD *)this + 6)) &= ~1uLL;
      --*((_DWORD *)this + 1);
      LODWORD(v54) = v158;
    }
    else
    {
      v67 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(this, v13, v59, v14, v49 << 12, v66, a9);
      v68 = v67;
      v146 = v67;
      if ( v67 < 0 )
      {
        WdLogSingleEntry1(3LL, v67);
        v21 = v156;
        WdLogGlobalForLineNumber = 7833;
        goto LABEL_199;
      }
      Feature_3358814523__private_IsEnabledDeviceUsageNoInline();
    }
    v65 = v173;
    v143 = 1;
  }
  else
  {
    v65 = v173;
    if ( (_BYTE)v173 && (*(_DWORD *)(v64 + 16LL * (unsigned int)v53) & 0x400LL) != 0 )
    {
      v66 = v53;
      goto LABEL_77;
    }
  }
  v70 = *((_BYTE *)v14 + 76);
  if ( (*(_DWORD *)this & 0x20) == 0 || *((_DWORD *)v14 + 18) || !v70 )
    goto LABEL_109;
  if ( !*((_BYTE *)v14 + 78) && !*((_BYTE *)v14 + 77) )
  {
    v71 = *(_DWORD **)(*((_QWORD *)this + 7) + 8 * v52);
    if ( v71 )
    {
      if ( v71[1] && (*v71 & 0x40) == 0 )
      {
        v70 = 0;
LABEL_107:
        LODWORD(v52) = v157;
        if ( v65 )
        {
          v53 = (unsigned int)v157 + v149;
          v152 = v157 + v149;
        }
        goto LABEL_109;
      }
    }
  }
  if ( (v54 & 0xF) != 0 )
  {
    v70 = 0;
    goto LABEL_107;
  }
  if ( !*((_QWORD *)v14 + 11) && (!*((_BYTE *)v14 + 77) || g_Feature_Largify64KBPrototype) )
  {
    v72 = *((unsigned int *)v14 + 8);
    v73 = a7 >> 12;
    if ( a7 >> 12 >= v72 )
      goto LABEL_97;
    if ( (*((_DWORD *)v14 + 9) & 1) != 0 )
      goto LABEL_105;
    v74 = v72 - v73;
    v75 = (unsigned int)v73;
    v76 = (unsigned int)v54;
    if ( v74 <= (unsigned int)v54 )
      v76 = v74;
    v77 = v73 + v76;
    if ( (unsigned int)v73 >= v77 )
    {
LABEL_105:
      v70 = 1;
    }
    else
    {
      while ( (v73 & 0xF) == 0
           || *(_QWORD *)(*((_QWORD *)v14 + 5) + 8 * v75) == *(_QWORD *)(*((_QWORD *)v14 + 5)
                                                                       + 8LL * (unsigned int)(v73 - 1))
                                                           + 1LL )
      {
        LODWORD(v73) = v73 + 1;
        v75 = (unsigned int)v73;
        if ( (unsigned int)v73 >= v77 )
          goto LABEL_105;
      }
LABEL_97:
      v70 = 0;
    }
    if ( !v70 )
      goto LABEL_107;
  }
LABEL_109:
  if ( (*(_BYTE *)v14 & 1) != 0 || (*(_BYTE *)(*((_QWORD *)this + 6) + 16LL * (unsigned int)v52) & 2) != 0 )
  {
    v78 = (__int64 *)((char *)this + 56);
    v79 = 8LL * (unsigned int)v52;
    if ( *(_QWORD *)(v79 + *((_QWORD *)this + 7)) )
    {
      v14 = v175;
    }
    else
    {
      v80 = 0;
      v81 = (char *)this + 56;
      if ( (*((_DWORD *)v174 + 38) & 4) != 0 && a5 < *((_QWORD *)v164 + 5140) )
      {
        v80 = 1;
        v81 = (char *)this + 56;
      }
      if ( (*(_DWORD *)this & 0x20) != 0 )
      {
        v14 = v175;
        if ( *((_DWORD *)v175 + 18) != -3 && !v70 )
        {
          v82 = 0;
          goto LABEL_119;
        }
        v82 = 1;
        if ( *((_BYTE *)v175 + 78) )
LABEL_119:
          v83 = 0;
        else
          v83 = 1;
        *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * (unsigned int)v52) = CreatePageTable(
                                                                         v174,
                                                                         (*(_DWORD *)this >> 8) & 0x1F,
                                                                         v82,
                                                                         v83);
        if ( v80 )
        {
          v84 = *(_DWORD **)(*((_QWORD *)this + 7) + 8LL * (unsigned int)v52);
          *v84 |= 0x100000u;
        }
        v78 = (__int64 *)((char *)this + 56);
      }
      else
      {
        *(_QWORD *)(v79 + *v78) = CreatePageDirectory(v174, (*(_DWORD *)this >> 8) & 0x1F, (*(_DWORD *)this & 7u) - 1);
        if ( v80 )
        {
          v85 = *v78;
          v78 = (__int64 *)v81;
          **(_DWORD **)(v79 + v85) |= 0x100000u;
        }
        v14 = v175;
      }
      if ( !*(_QWORD *)(*v78 + 8LL * (unsigned int)v52) )
      {
        WdLogSingleEntry0(1LL);
        v10 = 0LL;
        WdLogGlobalForLineNumber = 7965;
        DxgkLogInternalTriageEvent(v128, 0x40000LL);
        v21 = v156;
        v68 = -1073741801;
        goto LABEL_199;
      }
      v53 = v152;
      v10 = 0LL;
    }
  }
  v17 = (struct VIDMM_ALLOC **)*((_QWORD *)this + 6);
  v86 = v17[2 * (unsigned int)v52];
  v87 = ((unsigned __int8)v86 & 1) == 0;
  v88 = (unsigned __int8)v86 & 2;
  if ( !v88 )
  {
    v89 = v87;
    if ( !(_BYTE)v173 || ((__int64)v17[2 * (unsigned int)v53] & 2) == 0 )
    {
      v90 = v158;
      goto LABEL_141;
    }
  }
  v90 = v158;
  if ( *((_QWORD *)v156 + 5) <= v158 )
  {
    v143 = 1;
    v92 = v53;
    v89 = v87;
    if ( v88 )
      v92 = v52;
    v93 = 2LL * v92;
    v17[v93] = (struct VIDMM_ALLOC *)((unsigned __int64)v17[v93] & 0xFFFFFFFFFFFFFFFDuLL);
    *(_QWORD *)(*((_QWORD *)this + 6) + v93 * 8) &= ~1uLL;
    --*((_DWORD *)this + 1);
    goto LABEL_141;
  }
  v91 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(this, v174, v14, v52, v53, v154, v160, v165, v167, a9);
  v146 = v91;
  if ( v91 >= 0 )
  {
    v89 = 0;
    v143 = 1;
LABEL_141:
    v94 = 8LL * (unsigned int)v52;
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      if ( (*(_BYTE *)v14 & 1) != 0 )
      {
        v95 = *((_BYTE *)v14 + 76);
        v96 = v154;
        v97 = v163;
        v141 = a9;
        v98 = a7;
        *((_BYTE *)v14 + 76) = v70;
        ++*((_DWORD *)this + 1);
        v13 = v174;
        v99 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                *(VIDMM_PAGE_TABLE **)(v94 + *((_QWORD *)this + 7)),
                v174,
                v14,
                v97,
                v96 << 12,
                v158,
                v98,
                v89,
                v141);
        *((_BYTE *)v14 + 76) = v95;
        v100 = v99;
        --*((_DWORD *)this + 1);
        v146 = v99;
      }
      else
      {
        v13 = v174;
        v101 = *(VIDMM_PAGE_TABLE **)(v94 + *((_QWORD *)this + 7));
        if ( v101 && *((_DWORD *)v101 + 1) )
        {
          v100 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(v101, v174, v14, v154 << 12, v90);
          v146 = v100;
        }
        else
        {
          v100 = v146;
        }
      }
      if ( !*((_BYTE *)v14 + 79) )
        goto LABEL_156;
      if ( v100 < 0 )
        goto LABEL_204;
      if ( (*(_BYTE *)(*((_QWORD *)this + 6) + 16 * v53) & 1) == 0 )
        goto LABEL_156;
      v146 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
               *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 7) + 8 * v53),
               v13,
               v14,
               v154 << 12,
               v158);
      v100 = v146;
      if ( v146 < 0 )
        goto LABEL_204;
      v102 = *(_DWORD **)(*((_QWORD *)this + 7) + 8 * v53);
      if ( v102[1] || (*v102 & 0x100000) != 0 || *((_BYTE *)v14 + 82) )
      {
LABEL_156:
        v105 = v154;
      }
      else
      {
        --*((_DWORD *)this + 1);
        v103 = *((_QWORD *)this + 6);
        v104 = v159;
        LOBYTE(v150) = 1;
        *(_QWORD *)(v103 + 16 * v53) = 0LL;
        *(_QWORD *)(v103 + 16 * v53 + 8) = 0LL;
        v105 = v154;
        v106 = v156;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8 * v53) + 56LL) = v104;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8 * v53) + 16LL) = v105 & ~*((_QWORD *)v106 + 4);
        v107 = *((_QWORD *)this + 7);
        v159 = *(VIDMM_PAGE_TABLE **)(v107 + 8 * v53);
        *(_QWORD *)(v107 + 8 * v53) = 0LL;
      }
    }
    else
    {
      ++*((_DWORD *)this + 1);
      v105 = v154;
      v13 = v174;
      v108 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
               *(VIDMM_PAGE_DIRECTORY **)(v94 + *((_QWORD *)this + 7)),
               v174,
               v14,
               v163,
               v154 << 12,
               v158,
               a7,
               v89,
               a9);
      --*((_DWORD *)this + 1);
      v100 = v108;
      v146 = v108;
    }
    if ( v100 < 0 )
    {
LABEL_204:
      WdLogSingleEntry0(3LL);
      v21 = v156;
      WdLogGlobalForLineNumber = 8105;
LABEL_198:
      v68 = v146;
      goto LABEL_199;
    }
    if ( (*(_BYTE *)v14 & 1) != 0 )
    {
      v109 = 0;
      if ( (*(_DWORD *)this & 0x20) != 0 && !*((_BYTE *)v14 + 78) )
      {
        LODWORD(v17) = v52;
        if ( ((**(_DWORD **)(*((_QWORD *)this + 7) + 8LL * (unsigned int)v52) >> 6) & 1) != ((*(_DWORD *)(*((_QWORD *)this + 6) + 16LL * (unsigned int)v52) & 0x60000) == 0x20000LL) )
          v109 = 1;
      }
      v110 = (_QWORD *)(*((_QWORD *)this + 6) + 16LL * (unsigned int)v52);
      if ( (*v110 & 1) == 0 )
      {
        *v110 |= 1uLL;
        ++*((_DWORD *)this + 1);
LABEL_175:
        v112 = 16LL * (unsigned int)v52;
        *(_QWORD *)(*((_QWORD *)this + 6) + v112) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)this + 6) + v112) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)this + 6) + v112) &= ~8uLL;
        if ( (_BYTE)v173 )
        {
          v113 = 16LL * v152;
          *(_QWORD *)(*((_QWORD *)this + 6) + v113) &= ~0x400uLL;
          *(_QWORD *)(*((_QWORD *)this + 6) + v113) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)this + 6) + v113) &= ~8uLL;
        }
        VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, v13, v52);
LABEL_170:
        v111 = v157;
        if ( !v144 )
        {
          v144 = 1;
          v153 = v157;
        }
        v46 = v149;
        v48 = v151;
        if ( (unsigned int)v157 >= v155 )
        {
          LODWORD(v17) = v157 + 1;
          v155 = v157 + 1;
        }
        goto LABEL_197;
      }
      if ( v109 || v143 )
        goto LABEL_175;
    }
    else
    {
      v114 = (unsigned __int8)v150;
      if ( v143 )
        v114 = 1;
      v115 = (_QWORD *)(*((_QWORD *)this + 6) + 16LL * (unsigned int)v52);
      v150 = v114;
      v116 = v105 & ~*((_QWORD *)v156 + 4);
      if ( (*(_BYTE *)v115 & 1) != 0 )
      {
        v117 = *(_DWORD **)(*((_QWORD *)this + 7) + 8LL * (unsigned int)v52);
        if ( !v117[1] && (*v117 & 0x100000) == 0 )
        {
          --*((_DWORD *)this + 1);
          *v115 = 0LL;
          v115[1] = 0LL;
          v118 = 8LL * (unsigned int)v52;
          v119 = *(_QWORD *)(v118 + *((_QWORD *)this + 7));
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            *(_QWORD *)(v119 + 56) = v159;
            v120 = *(VIDMM_PAGE_TABLE **)(v118 + *((_QWORD *)this + 7));
            v159 = v120;
          }
          else
          {
            *(_QWORD *)(v119 + 40) = v162;
            v120 = *(VIDMM_PAGE_TABLE **)(v118 + *((_QWORD *)this + 7));
            v162 = v120;
          }
          *((_QWORD *)v120 + 2) = v116;
          v121 = *((_QWORD *)this + 7);
          LOBYTE(v150) = 1;
          *(_QWORD *)(v118 + v121) = 0LL;
        }
      }
      if ( v152 != (_DWORD)v52 )
      {
        v17 = (struct VIDMM_ALLOC **)v152;
        v122 = (_QWORD *)(*((_QWORD *)this + 6) + 16LL * v152);
        if ( (*(_BYTE *)v122 & 1) != 0 )
        {
          v123 = *(_DWORD **)(*((_QWORD *)this + 7) + 8LL * v152);
          if ( !v123[1] && (*v123 & 0x100000) == 0 )
          {
            --*((_DWORD *)this + 1);
            *v122 = 0LL;
            v122[1] = 0LL;
            v124 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * (_QWORD)v17);
            if ( (*(_DWORD *)this & 0x20) != 0 )
            {
              *(_QWORD *)(v124 + 56) = v159;
              v159 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 7) + 8LL * (_QWORD)v17);
              *((_QWORD *)v159 + 2) = v116;
            }
            else
            {
              *(_QWORD *)(v124 + 40) = v162;
              v162 = *(VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 7) + 8LL * (_QWORD)v17);
              *((_QWORD *)v162 + 2) = v116;
            }
            *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * (_QWORD)v17) = 0LL;
            goto LABEL_170;
          }
        }
      }
    }
    v63 = v150;
    goto LABEL_169;
  }
  v21 = v156;
  v68 = v91;
LABEL_199:
  v125 = v174;
  if ( v144 )
  {
    LODWORD(v175) = 0;
    v173 = 0LL;
    v172 = 1;
    v171 = 0LL;
    VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
      this,
      v174,
      (unsigned int *)&v175,
      &v173,
      (struct VIDMM_SYSTEM_ADDRESS_CONTEXT *)&v171);
    v126 = *((_QWORD *)v21 + 5) * v153 + ((a5 >> 12) & ~(*((_QWORD *)v21 + 2) | *((_QWORD *)v21 + 4)));
    if ( *((_BYTE *)v164 + 41068) )
      v127 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v127 = (int)(*(_DWORD *)this << 15) >> 29;
    if ( *((_BYTE *)v14 + 78) && (*(_DWORD *)this & 0x20) != 0 )
      v10 = (struct _DXGK_PTE *)(*((_QWORD *)this + 6) + 16LL * (v153 + v149));
    v142 = v42;
    v129 = v173;
    VIDMM_GLOBAL::UpdatePageTable(
      v164,
      this,
      *((struct VIDMM_PROCESS **)v125 + 13),
      *((_QWORD *)v14 + 2),
      v161,
      VidMmGlobalAllocFromOwner,
      v176
    + ((*((_QWORD *)v21 + 5) * v153 + ((a5 >> 12) & ~(*((_QWORD *)v21 + 2) | *((_QWORD *)v21 + 4)))) << 12)
    - (v166 << 12),
      v153,
      v155 - v153,
      (const struct _DXGK_PTE *)(*((_QWORD *)this + 6) + 16LL * v153),
      v10,
      (*(_DWORD *)this >> 8) & 0x1F,
      (UINT)v175,
      v173,
      v127,
      v126,
      v142,
      *((_QWORD *)v14 + 11));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, v125, v130, v129, (struct VIDMM_SYSTEM_ADDRESS_CONTEXT *)&v171);
    v131 = *(_DWORD *)this | 0x20000;
    v132 = v148 == 0;
    *(_DWORD *)this = v131;
    if ( !v132 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb(v125, (v131 >> 8) & 0x1F, v126 << 12, (v126 + *((_QWORD *)v21 + 5)) << 12);
      v133 = a9;
      v134 = v155;
      VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(this, v125, v153, v155, v126, *((_QWORD *)v21 + 5), *a9);
      if ( *((_BYTE *)v14 + 78) )
      {
        if ( (*(_DWORD *)this & 0x20) != 0 )
          VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
            this,
            v125,
            v149 + v153,
            v149 + v134,
            v126,
            *((_QWORD *)v21 + 5),
            *v133);
      }
    }
  }
  if ( !*((_DWORD *)this + 1) && (*((_DWORD *)v125 + 38) & 4) == 0 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, v125, a5 & ~*((_QWORD *)v21 + 4), (unsigned __int8)v17, 1);
  v135 = v159;
  if ( v159 )
  {
    do
    {
      v136 = (VIDMM_PAGE_TABLE *)*((_QWORD *)v135 + 7);
      VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_GLOBAL_ALLOC **)v135, v125, *((_QWORD *)v135 + 2));
      v135 = v136;
    }
    while ( v136 );
  }
  v137 = (unsigned __int64 *)v162;
  if ( v162 )
  {
    do
    {
      v138 = (unsigned __int64 *)v137[5];
      VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v137, v125, v137[2]);
      v137 = v138;
    }
    while ( v138 );
  }
  return v68;
}
