/*
 * XREFs of ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402E2810
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1400359F0 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$?0$00X@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x14003D9C0 (--$-0$00X@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor.c)
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z @ 0x140046E90 (-VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI@Z @ 0x14007C7B8 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1402E2788 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x1402E49E8 (--1-$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1402E4B4C (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCo.c)
 *     ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1402E4D10 (-ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKM.c)
 *     ?AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@IPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGSYNCOBJECTLOCK@@PEAVDXGSYNCOBJECTMUTEX@@3@Z @ 0x1402E4F04 (-AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@I.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1402E5630 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int8 *a7,
        struct _DXGKARG_PRESENT *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9,
        struct DXGCONTEXT **a10)
{
  __int64 v10; // rdi
  unsigned __int8 v12; // r12
  int v13; // r15d
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // r8d
  __int64 v18; // rdx
  int v19; // esi
  bool v20; // cc
  int v21; // ecx
  _QWORD *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbx
  bool v25; // zf
  DXGCONTEXT *v26; // r10
  unsigned __int8 v27; // r14
  int v28; // r11d
  unsigned int *v29; // rbx
  __int64 v30; // r9
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v31; // rdi
  int v32; // r8d
  unsigned __int64 v33; // rdx
  unsigned int v34; // r8d
  __int64 v35; // rcx
  unsigned int v36; // r8d
  UINT v37; // eax
  struct _DXGKARG_PRESENT *v38; // r15
  DXGK_ALLOCATIONLIST *Elements; // rbx
  __int64 v40; // r13
  __int64 v41; // r14
  int v42; // r12d
  __int64 v43; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v46; // rdi
  struct DXGPROCESS *v47; // rbx
  struct _KTHREAD **v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // r8
  struct DXGTHREAD *v51; // rbx
  __int64 v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // ebx
  _QWORD *v56; // rax
  struct _DXGKARG_PRESENT *v57; // rdx
  __int64 v58; // rcx
  CAutoRefCountedBuffer *v59; // rbx
  PLOOKASIDE_LIST_EX *v60; // r8
  __int64 v62; // r13
  __int64 v63; // rcx
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v64; // rdi
  struct VIDSCH_SUBMIT_DATA_BASE *v65; // r14
  int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // r15d
  unsigned int v69; // ebx
  int v70; // eax
  unsigned int *v71; // rax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v72; // r13
  unsigned int i; // ebx
  _QWORD *v74; // r14
  struct VIDSCH_SUBMIT_DATA_BASE *v75; // r11
  char *v76; // rdx
  _QWORD *v77; // rdx
  __int64 v78; // r10
  unsigned __int64 v79; // r8
  int v80; // eax
  _QWORD *v81; // rcx
  __int64 v82; // rax
  int v83; // r8d
  struct VIDSCH_SUBMIT_DATA_BASE *v84; // r9
  __int64 v85; // rcx
  __int64 v86; // r8
  int v87; // ecx
  __int64 v88; // rax
  __int64 v89; // rdi
  struct _VIDSCH_LAYER_ATTRIBUTE *v90; // rdi
  DXGCONTEXT *pPlaneAttributes; // rcx
  int v92; // ecx
  D3DKMT_MULTIPLANE_OVERLAY3 *v93; // rax
  __int64 LayerIndex; // rcx
  int v95; // eax
  unsigned int v96; // edx
  _DWORD **v97; // r15
  int v98; // r8d
  __int64 v99; // r14
  unsigned int v100; // ecx
  __int64 v101; // rbx
  _DWORD *v102; // r9
  unsigned int v103; // edx
  int v104; // edi
  _DWORD *v105; // rax
  _DWORD *v106; // rdi
  char *v107; // rbx
  __int64 v108; // r12
  __int64 v109; // r14
  struct CRefCountedBuffer *v110; // rax
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v111; // rcx
  unsigned __int64 PresentPlaneCount; // r14
  __int64 v113; // rcx
  __int64 v114; // rdx
  struct DXGSYNCOBJECTMUTEX *v115; // rax
  struct DXGSYNCOBJECTMUTEX *v116; // r15
  unsigned __int64 v117; // r14
  __int64 v118; // rcx
  __int64 v119; // rdx
  struct DXGSYNCOBJECTMUTEX *v120; // rax
  struct DXGSYNCOBJECTMUTEX *v121; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v122; // r13
  DXGCONTEXT *v123; // r12
  DXGCONTEXT **v124; // r15
  DXGCONTEXT *v125; // r8
  __int64 v126; // rax
  int v127; // eax
  D3DKMT_MULTIPLANE_OVERLAY3 *v128; // rbx
  UINT DirtyRectCount; // ecx
  UINT v130; // r14d
  __int64 v131; // rax
  unsigned int v132; // r15d
  unsigned int v133; // eax
  unsigned int v134; // r14d
  unsigned int *v135; // r15
  struct VIDMM_ALLOC **v136; // r9
  struct VIDMM_ALLOC *v137; // r9
  __int64 v138; // rbx
  int v139; // eax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  unsigned __int64 v143; // rax
  int v144; // eax
  UINT j; // edi
  __int64 v146; // r14
  struct DXGCONTEXT **v147; // r9
  __int64 v148; // rdx
  _OWORD *v149; // r15
  int v150; // ecx
  int v151; // eax
  _QWORD *v152; // rax
  int v153; // ecx
  __int64 v154; // rax
  __int16 v155; // dx
  KIRQL v156; // al
  __int64 v157; // rax
  bool v158; // cf
  unsigned __int64 v159; // rax
  __int64 v160; // rax
  struct DXGSYNCOBJECTMUTEX *v161; // rbx
  __int64 v162; // rax
  unsigned __int64 v163; // rax
  __int64 v164; // rax
  struct DXGSYNCOBJECTMUTEX *v165; // rbx
  bool v166; // [rsp+20h] [rbp-E0h]
  KIRQL CurrentIrql; // [rsp+50h] [rbp-B0h]
  unsigned int v171; // [rsp+60h] [rbp-A0h]
  unsigned int v172; // [rsp+64h] [rbp-9Ch]
  UINT v173; // [rsp+68h] [rbp-98h]
  int v174; // [rsp+68h] [rbp-98h]
  int v175; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v176; // [rsp+70h] [rbp-90h]
  int v177; // [rsp+74h] [rbp-8Ch]
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v178; // [rsp+78h] [rbp-88h]
  struct VIDSCH_SUBMIT_DATA_BASE *v179; // [rsp+80h] [rbp-80h]
  unsigned int v180; // [rsp+88h] [rbp-78h]
  struct DXGTHREAD *DxgThread; // [rsp+90h] [rbp-70h] BYREF
  struct CRefCountedBuffer *v182; // [rsp+98h] [rbp-68h] BYREF
  __int64 v183; // [rsp+A0h] [rbp-60h]
  char v184; // [rsp+A8h] [rbp-58h]
  struct _DXGKARG_PRESENT *v185; // [rsp+B0h] [rbp-50h]
  int v186; // [rsp+B8h] [rbp-48h]
  unsigned int *v187; // [rsp+C0h] [rbp-40h]
  __int64 v188; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGCONTEXT **v189; // [rsp+D0h] [rbp-30h]
  PVOID Entry; // [rsp+D8h] [rbp-28h]
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v191; // [rsp+E0h] [rbp-20h]
  unsigned int *v192; // [rsp+E8h] [rbp-18h]
  __int128 v193; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v194; // [rsp+100h] [rbp+0h]
  __int128 v195; // [rsp+110h] [rbp+10h]
  __int128 v196; // [rsp+120h] [rbp+20h]
  __int128 v197; // [rsp+130h] [rbp+30h]
  __int128 v198; // [rsp+140h] [rbp+40h]
  struct DXGSYNCOBJECTMUTEX *p_ApcState; // [rsp+150h] [rbp+50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+158h] [rbp+58h] BYREF
  int v201; // [rsp+198h] [rbp+98h]
  PVOID P; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v203[128]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v204; // [rsp+228h] [rbp+128h]
  struct DXGSYNCOBJECTMUTEX *v205; // [rsp+230h] [rbp+130h] BYREF
  char v206; // [rsp+238h] [rbp+138h] BYREF
  int v207; // [rsp+278h] [rbp+178h]
  _DWORD v208[2]; // [rsp+280h] [rbp+180h] BYREF
  __int64 v209; // [rsp+288h] [rbp+188h]
  _BYTE v210[8]; // [rsp+290h] [rbp+190h]
  _QWORD v211[37]; // [rsp+298h] [rbp+198h]
  _QWORD v212[10]; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v213; // [rsp+410h] [rbp+310h] BYREF

  v10 = (__int64)a2;
  v12 = a5;
  v185 = a8;
  v13 = a4;
  v14 = a3;
  DxgThread = a6;
  v178 = a2;
  v179 = a9;
  v189 = a10;
  if ( !a3 && !a4 && !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1635;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"cEnablingLayers || cUpdatingLayers || cDisablingLayers",
      1635LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)a5 + v13 + v14 > *(_DWORD *)(v10 + 28) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1638;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(static_cast<UINT>(cEnablingLayers)+ static_cast<UINT>(cUpdatingLayers)+ static_cast<UINT>(cDisablingLaye"
                "rs)) <= pArgs->PresentPlaneCount",
      1638LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1639;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1639LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = *(unsigned int *)(v10 + 4);
  v171 = v16;
  if ( (unsigned int)v16 > 0x40 )
  {
    v138 = *(unsigned int *)(v10 + 4);
    LODWORD(v10) = -1073741811;
    WdLogSingleEntry4(2LL, this, v16, 64LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1651;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x trying to broadcast to %I64d when limit is %I64d, returning 0x%I64x",
      (__int64)this,
      v138,
      64LL,
      -1073741811LL,
      0LL);
    return (unsigned int)v10;
  }
  v17 = 1;
  v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v180 = *(_DWORD *)(v18 + 2984);
  v19 = *((_DWORD *)*a10 + 96);
  v187 = 0LL;
  while ( v17 < (unsigned int)v16 )
  {
    v144 = *((_DWORD *)v189[v17] + 96);
    if ( (v144 & v19) != 0 )
    {
      LODWORD(v10) = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 1674;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed, can't broadcast flip to multiple context on the same physical adapter returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v10;
    }
    v19 |= v144;
    ++v17;
  }
  v20 = *(_DWORD *)(v18 + 3044) < 2500;
  Entry = 0LL;
  if ( !v20 )
  {
    v97 = *(_DWORD ***)(v10 + 32);
    v98 = 0;
    v99 = *(unsigned int *)(v10 + 28);
    v100 = 0;
    Entry = 0LL;
    v101 = 0LL;
    while ( v100 < (unsigned int)v99 )
    {
      v102 = v97[v100];
      v103 = *(_DWORD *)(*((_QWORD *)v102 + 6) + 60LL);
      if ( v103 > 0xFFF )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1406;
        LODWORD(v10) = -1073741811;
LABEL_218:
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1690;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to read dirty rects data. Returning 0x%I64x",
          (int)v10,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v10;
      }
      if ( (v102[1] & 1) != 0 && v103 )
      {
        v98 += v103;
        v101 = (unsigned int)(v101 + 1);
      }
      ++v100;
    }
    if ( v98 && (_DWORD)v101 )
    {
      v104 = 16 * (v101 + v98) + 8;
      v105 = (_DWORD *)operator new[]((unsigned int)(16 * (v101 + v98) + 24), 0x4B677844u, 64LL);
      Entry = v105;
      if ( !v105 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1448;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for present dirty rects data",
          1448LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v10) = -1073741801;
        goto LABEL_218;
      }
      v105[2] = v104;
      *(_QWORD *)v105 = 0LL;
      v106 = v105 + 6;
      v105[3] = 1;
      v105[4] = v101;
      v107 = (char *)&v105[4 * v101 + 6];
      if ( (_DWORD)v99 )
      {
        v108 = v99;
        do
        {
          v109 = *((_QWORD *)*v97 + 6);
          if ( ((*v97)[1] & 1) != 0 && *(_DWORD *)(v109 + 60) )
          {
            *v106 = **v97;
            *((_QWORD *)v106 + 1) = v107;
            v106[1] = *(_DWORD *)(v109 + 60);
            memmove(v107, *(const void **)(v109 + 64), 16LL * *(unsigned int *)(v109 + 60));
            v107 += 16 * *(unsigned int *)(v109 + 60);
            v106 += 4;
          }
          ++v97;
          --v108;
        }
        while ( v108 );
        v12 = a5;
      }
    }
    LOBYTE(v14) = a3;
    LOBYTE(v13) = a4;
    LODWORD(v16) = v171;
  }
  *((_DWORD *)a9 + 34) = v19;
  *((_DWORD *)a9 + 35) = v16;
  v21 = 2048;
  v22 = v212;
  if ( (unsigned int)v16 > 1 )
    v21 = 3072;
  v23 = 10LL;
  v24 = 10LL;
  *(_DWORD *)a9 = *(_DWORD *)a9 & 0xFFFFFBFF | v21;
  do
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v22++);
    --v24;
  }
  while ( v24 );
  v25 = *((_DWORD *)a9 + 30) == 5;
  *((_QWORD *)a9 + 4) = Entry;
  if ( !v25 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1717;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"FlipOnVSyncSwFlipQueue == pVidSchSubmitData->FlipMode",
      1717LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v185->pDmaBuffer )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1722;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPresentDdiArg->pDmaBuffer == NULL",
      1722LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v26 = this;
  v27 = v13 + v14;
  v28 = (unsigned __int8)(v12 + v27);
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3089LL) )
    v28 = v27;
  v177 = v28;
  if ( (unsigned __int8)v28 > 0xAu )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1740;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"cLayersInSchedulerArray <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      1740LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LOBYTE(v28) = v177;
    v26 = this;
  }
  v29 = (unsigned int *)((char *)a9 + 600);
  v30 = 0LL;
  v172 = 0;
  if ( !*((_BYTE *)a9 + 356) )
    v29 = (unsigned int *)((char *)a9 + 496);
  v31 = v178;
  v32 = 0;
  v192 = v29;
  if ( v178->PresentPlaneCount )
  {
    while ( 1 )
    {
      v93 = v31->ppPresentPlanes[v32];
      LayerIndex = v93->LayerIndex;
      if ( (v93->InputFlags.Value & 1) != 0 )
      {
        v95 = ((unsigned __int16)*v29 | (unsigned __int16)(1 << LayerIndex)) & 0x3FF;
        v96 = *v29 & 0xFFFFFC00;
      }
      else
      {
        if ( !a7[LayerIndex] )
          goto LABEL_130;
        v95 = (*v29 | (1024 << LayerIndex)) & 0xFFC00;
        v96 = *v29 & 0xFFF003FF;
      }
      *v29 = v96 ^ v95;
LABEL_130:
      if ( ++v32 >= v31->PresentPlaneCount )
      {
        v26 = this;
        break;
      }
    }
  }
  v33 = *v29;
  v34 = *v29;
  v35 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL);
  if ( *(_BYTE *)(*(_QWORD *)(v35 + 16) + 3089LL) )
    v34 = v33 | (v34 >> 10);
  v36 = v34 & 0x3FF;
  v37 = 0;
  v176 = v36;
  while ( 1 )
  {
    v173 = v37;
    if ( v37 >= v31->PresentPlaneCount )
      break;
    v62 = v37;
    v63 = 8LL * (unsigned int)v30;
    v64 = v31->ppPresentPlanes[v37];
    v191 = v64;
    v65 = (struct VIDSCH_SUBMIT_DATA_BASE *)v64->LayerIndex;
    v208[v63] = (_DWORD)v65;
    v66 = v64->InputFlags.Value & 1;
    v186 = (int)v65;
    v208[v63 + 1] = v66;
    if ( (v64->InputFlags.Value & 1) != 0 || (v35 = (__int64)a7, a7[(_QWORD)v65]) )
    {
      if ( ((1 << (char)v65) & v36) != 0 )
      {
        v67 = (((((v36 & ((1 << (char)v65) - 1)) >> 1) & 0x55555555) + (v36 & ((1 << (char)v65) - 1) & 0x55555555)) & 0x33333333)
            + ((((((v36 & ((1 << (char)v65) - 1)) >> 1) & 0x55555555) + (v36 & ((1 << (char)v65) - 1) & 0x55555555)) >> 2) & 0x33333333);
        v33 = v67 & 0xF0F0F0F;
        v68 = ((v33 + ((v67 >> 4) & 0xF0F0F0F)) & 0xFF00FF) + (((unsigned int)v33 + ((v67 >> 4) & 0xF0F0F0F)) >> 8);
      }
      else
      {
        v68 = -1;
      }
      if ( v68 >= (unsigned __int8)v28 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1815;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"FlipToIndex < cLayersInSchedulerArray",
          1815LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v26 = this;
      }
      if ( v68 >= 0xA )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1822;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"FlipToIndex < DXGK_MAX_MPO_PLANES_PER_SOURCE",
          1822LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v26 = this;
      }
      v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 16LL);
      if ( *(int *)(v35 + 2776) >= 0x2000 || *(_BYTE *)(v35 + 3076) )
      {
        v65 = v179;
        v182 = 0LL;
        v69 = 8 * v68 * (*((_DWORD *)v179 + 152) + 28);
        v70 = ReadPresentPrivateDriverData((struct DXGADAPTER *)v35, v64, &v182);
        v10 = v70;
        if ( v70 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1837;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to read private driver data. Returning 0x%I64x",
            v10,
            0LL,
            0LL,
            0LL,
            0LL);
          v123 = this;
          v122 = v65;
          goto LABEL_202;
        }
        v35 = (__int64)v182;
        v64 = v191;
        if ( v182 )
        {
          v212[v62] = v182;
          if ( !v64->LayerIndex )
          {
            v33 = (unsigned __int64)v185;
            v185->PrivateDriverDataSize = v64->DriverPrivateDataSize;
            *(_QWORD *)(v33 + 160) = v35 + 16;
          }
          *(_QWORD *)((char *)v65 + v69 + 808) = v35;
        }
        v29 = v192;
        v71 = (unsigned int *)((char *)v65 + 616);
        LODWORD(v65) = v186;
        v26 = this;
        v187 = v71;
      }
      if ( (v64->InputFlags.Value & 1) != 0 )
      {
        v72 = v191;
        for ( i = 0; ; ++i )
        {
          if ( i >= v171 )
          {
            v36 = v176;
            v29 = v192;
            goto LABEL_151;
          }
          v74 = (_QWORD *)*((_QWORD *)DxgThread + (unsigned int)v65 + v180 * i);
          if ( !v74 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1877;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAlloc", 1877LL, 0LL, 0LL, 0LL, 0LL);
            v26 = this;
          }
          v75 = v179;
          if ( *((_BYTE *)v179 + 356) )
            v76 = (char *)v179
                + 64 * (unsigned __int64)(v68 + i * *((_DWORD *)v179 + 151))
                + (unsigned int)(8 * (*((_DWORD *)v179 + 152) + 28) * *((_DWORD *)v179 + 151))
                + 632;
          else
            v76 = (char *)v179 + 80 * v68 + 512;
          *(_QWORD *)v76 = *(_QWORD *)(v74[6] + 16LL);
          if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 16LL) + 3097LL) )
          {
            if ( *((_BYTE *)v75 + 356) )
              v77 = (_QWORD *)((char *)v75
                             + 64 * (unsigned __int64)(v68 + i * *((_DWORD *)v75 + 151))
                             + *((_DWORD *)v75 + 151) * ((8 * *((_DWORD *)v75 + 152) + 231) & 0xFFFFFFF8)
                             + 624);
            else
              v77 = (_QWORD *)((char *)v75 + 80 * v68 + 568);
            *v77 = *((_QWORD *)v189[i] + 23);
          }
          v78 = *((_QWORD *)v26 + 2);
          v79 = *((_BYTE *)v75 + 356)
              ? (unsigned __int64)v75
              + 64 * (unsigned __int64)(v68 + i * *((_DWORD *)v75 + 151))
              + (unsigned int)(8 * (*((_DWORD *)v75 + 152) + 28) * *((_DWORD *)v75 + 151))
              + 656
              : (unsigned __int64)v75 + 80 * v68 + 504;
          v80 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 16) + 760LL) + 8LL)
                                                                                            + 392LL))(
                  *(_QWORD *)(v78 + 792),
                  v74[3],
                  v79,
                  v187);
          v10 = v80;
          if ( v80 < 0 )
            break;
          v175 = 0;
          v188 = 0LL;
          v81 = *(_QWORD **)(*((_QWORD *)this + 2) + 16LL);
          v82 = v81[2];
          if ( *(int *)(v82 + 2776) >= 0x2000 || *(_BYTE *)(v82 + 3076) )
          {
            v83 = 0xFFFF;
            v188 = -1LL;
            v175 = 0xFFFF;
          }
          else
          {
            v166 = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(v81[95] + 8LL) + 200LL))(
              v81[96],
              *(_QWORD *)(v74[6] + 8LL),
              &v175,
              &v188);
            v83 = v175;
          }
          v84 = v179;
          if ( *((_BYTE *)v179 + 356) )
          {
            *(_WORD *)((char *)v179
                     + 64 * (unsigned __int64)(v68 + i * *((_DWORD *)v179 + 151))
                     + *((_DWORD *)v179 + 151) * ((8 * *((_DWORD *)v179 + 152) + 231) & 0xFFFFFFF8)
                     + 640) = v83;
          }
          else
          {
            v139 = *((_DWORD *)v179 + 20 * v68 + 139);
            *((_DWORD *)v179 + 20 * v68 + 139) = v139 ^ (v139 ^ (v83 << 17)) & 0x3E0000;
          }
          if ( *((_BYTE *)v84 + 356) )
            v33 = (unsigned __int64)v84
                + 64 * (unsigned __int64)(v68 + i * *((_DWORD *)v84 + 151))
                + (unsigned int)(8 * (*((_DWORD *)v84 + 152) + 28) * *((_DWORD *)v84 + 151))
                + 648;
          else
            v33 = (unsigned __int64)v84 + 80 * v68 + 520;
          *(_QWORD *)v33 = v188;
          v85 = v74[5];
          if ( v85 && (*(_DWORD *)(v85 + 4) & 8) != 0 )
            v86 = *(_QWORD *)(*(_QWORD *)(v85 + 56) + 184LL);
          else
            v86 = 0LL;
          if ( *((_BYTE *)v84 + 356) )
          {
            v87 = *((_DWORD *)v84 + 151);
            v88 = v87 * ((8 * *((_DWORD *)v84 + 152) + 231) & 0xFFFFFFF8);
            v35 = (v68 + i * v87 + 1LL) << 6;
            *(_QWORD *)((char *)v84 + v88 + v35 + 600) = v86;
          }
          else
          {
            v35 = 10LL * v68;
            *((_QWORD *)v84 + 10 * v68 + 72) = v86;
          }
          if ( !i )
          {
            if ( *((_BYTE *)v84 + 356)
              && (*((_DWORD *)v84 + 2 * v68 * (*((_DWORD *)v84 + 152) + 28) + 162) = v72->MaxImmediateFlipLine,
                  *((_BYTE *)v84 + 356)) )
            {
              v89 = 8 * v68 * (*((_DWORD *)v84 + 152) + 28) + 768LL;
            }
            else
            {
              v89 = 80LL * v68 + 528;
            }
            v90 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)v84 + v89);
            if ( v72->pPlaneAttributes->SrcRect.right <= v72->pPlaneAttributes->SrcRect.left )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1968;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pPlane->pPlaneAttributes->SrcRect.right > pPlane->pPlaneAttributes->SrcRect.left",
                1968LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            pPlaneAttributes = (DXGCONTEXT *)v72->pPlaneAttributes;
            if ( *((_DWORD *)pPlaneAttributes + 4) <= *((_DWORD *)pPlaneAttributes + 2) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1969;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pPlane->pPlaneAttributes->SrcRect.bottom > pPlane->pPlaneAttributes->SrcRect.top",
                1969LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(pPlaneAttributes, v90, v72->pPlaneAttributes);
            v33 = 32LL * v172++;
            v92 = *(_DWORD *)&v210[v33];
            *(_QWORD *)&v210[v33 - 8] = v74[4];
            v35 = v175 & 0x1F | v92 & 0xFFFFFFE0;
            *(_QWORD *)((char *)v211 + v33) = v188;
            *(_DWORD *)&v210[v33] = v35;
          }
          LODWORD(v65) = v186;
          v26 = this;
        }
        v123 = this;
        WdLogSingleEntry3(2LL, this, v74, v80);
        WdLogGlobalForLineNumber = 1902;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed to reference allocation for FlipToAllocation %I64x, returning 0x%I64x",
          (__int64)this,
          (__int64)v74,
          v10,
          0LL,
          0LL);
LABEL_201:
        v122 = v179;
LABEL_202:
        v55 = 0;
LABEL_203:
        v132 = (unsigned __int8)v177;
        if ( (_BYTE)v177 )
        {
          v133 = v171;
          do
          {
            v134 = 0;
            if ( v133 )
            {
              v135 = v187;
              do
              {
                if ( *((_BYTE *)v122 + 356) )
                  v136 = (struct VIDMM_ALLOC **)((char *)v122
                                               + 64 * (unsigned __int64)(v55 + *((_DWORD *)v122 + 151) * v134)
                                               + (unsigned int)(8
                                                              * (*((_DWORD *)v122 + 152) + 28)
                                                              * *((_DWORD *)v122 + 151))
                                               + 656);
                else
                  v136 = (struct VIDMM_ALLOC **)((char *)v122 + 80 * v55 + 504);
                v137 = *v136;
                if ( v137 )
                  VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v123 + 2) + 16LL) + 760LL),
                    *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)v123 + 2) + 16LL) + 768LL),
                    *((_DWORD *)v122 + 34),
                    v137,
                    v166,
                    v135);
                v133 = v171;
                ++v134;
              }
              while ( v134 < v171 );
              v132 = (unsigned __int8)v177;
            }
            ++v55;
          }
          while ( v55 < v132 );
        }
        WdLogSingleEntry2(2LL, v123, (int)v10);
        WdLogGlobalForLineNumber = 2237;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed to submit present for multi plane overlay, returning 0x%I64x",
          (__int64)v123,
          (int)v10,
          0LL,
          0LL,
          0LL);
        goto LABEL_73;
      }
      v33 = (*v29 >> 10) & (1 << (char)v65);
      if ( ((unsigned __int16)(*v29 >> 10) & (unsigned __int16)(1 << (char)v65) & 0x3FF) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1993;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pFlipOverlayData->ToDisableLayers & (1 << LayerIndex)",
          1993LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v26 = this;
      }
      v36 = v176;
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 1896LL) + 216LL) + 64LL);
      if ( *(_DWORD *)(*(_QWORD *)(v35 + 40) + 28LL) < 0x4002u )
      {
LABEL_151:
        v30 = v172;
        goto LABEL_152;
      }
      LOBYTE(v28) = v177;
      v31 = v178;
      v30 = v172 + 1;
      v143 = 32LL * v172++;
      *(_DWORD *)&v210[v143] &= 0xFFFFFFE0;
      *(_QWORD *)&v210[v143 - 8] = 0LL;
      v211[v143 / 8] = 0LL;
      v37 = v173 + 1;
    }
    else
    {
LABEL_152:
      LOBYTE(v28) = v177;
      v37 = v173 + 1;
      v31 = v178;
    }
  }
  v193 = 0LL;
  P = 0LL;
  v194 = 0LL;
  v204 = 0;
  v195 = 0LL;
  v196 = 0LL;
  v197 = 0LL;
  v198 = 0LL;
  if ( v180 < 2 )
  {
    _mm_lfence();
    v128 = *v31->ppPresentPlanes;
    if ( (v128->InputFlags.Value & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2023;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPlane->InputFlags.Enabled", 2023LL, 0LL, 0LL, 0LL, 0LL);
      v26 = this;
    }
    v38 = v185;
    v185->Flags.Value &= ~0x1000u;
    DirtyRectCount = v128->pPlaneAttributes->DirtyRectCount;
    v38->SubRectCnt = DirtyRectCount;
    if ( DirtyRectCount )
      v38->pDstSubRects = v128->pPlaneAttributes->pDirtyRects;
    v130 = v171;
    if ( v171 > 1 )
    {
      Elements = (DXGK_ALLOCATIONLIST *)PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(
                                          (__int64 *)&P,
                                          v171);
      if ( Elements )
      {
        v122 = v179;
        for ( j = 0; ; ++j )
        {
          if ( j >= v130 )
          {
            v38 = v185;
            v26 = this;
            v185->NumSrcAllocations = v130;
            goto LABEL_33;
          }
          v146 = *((_QWORD *)DxgThread + v180 * j);
          v147 = &v189[j];
          if ( ((*(_DWORD *)(v146 + 72) >> 12) & 0x3F) != *((_DWORD *)*v147 + 97) )
            break;
          v148 = 32LL * j;
          *(HANDLE *)((char *)&Elements->hDeviceSpecificAllocation + v148) = *(HANDLE *)(v146 + 32);
          v149 = (_OWORD *)((char *)Elements + v148);
          *(_QWORD *)((char *)&Elements->8 + v148) = VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
                                                       *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 760LL),
                                                       *(const struct VIDMM_MULTI_ALLOC **)(v146 + 24),
                                                       *((_BYTE *)this + 431) != 0,
                                                       *((_DWORD *)*v147 + 97));
          if ( *((_BYTE *)v122 + 356) )
          {
            v150 = *((_DWORD *)v122 + 151);
            v151 = v150 * (*((_DWORD *)v122 + 152) + 28);
            v35 = (unsigned __int64)(j * v150) << 6;
            v152 = (_QWORD *)((char *)v122 + (unsigned int)(8 * v151) + v35 + 648);
          }
          else
          {
            v152 = (_QWORD *)((char *)v122 + 520);
          }
          *((_QWORD *)v149 + 2) = *v152;
          if ( *((_BYTE *)v122 + 356) )
          {
            v153 = *((_DWORD *)v122 + 151);
            v154 = v153 * ((8 * *((_DWORD *)v122 + 152) + 231) & 0xFFFFFFF8);
            v35 = (unsigned __int64)(j * v153) << 6;
            v155 = *(_WORD *)((char *)v122 + v154 + v35 + 640);
          }
          else
          {
            v155 = (*((_DWORD *)v122 + 139) >> 17) & 0x1F;
          }
          v130 = v171;
          *((_WORD *)v149 + 12) = v155;
        }
        WdLogSingleEntry1(2LL);
        v55 = 0;
        WdLogGlobalForLineNumber = 2050;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
          v146,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v10) = -1073741811;
        if ( P != v203 && P )
          ExFreePoolWithTag(P, 0);
        v123 = this;
        P = 0LL;
        v204 = 0;
      }
      else
      {
        LODWORD(v10) = -1073741801;
        if ( P != v203 && P )
          ExFreePoolWithTag(P, 0);
        v122 = v179;
        v55 = 0;
        v123 = this;
        P = 0LL;
        v204 = 0;
      }
      goto LABEL_203;
    }
    if ( *((_BYTE *)v26 + 430) )
    {
      v25 = *((_BYTE *)v26 + 431) == 0;
      *(_QWORD *)&v195 = v209;
      LOBYTE(v33) = !v25;
      v131 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 760LL)
                                                                                              + 8LL)
                                                                                  + 232LL))(
               *(_QWORD *)(*(_QWORD *)DxgThread + 24LL),
               v33,
               *((unsigned int *)v26 + 97),
               v30);
      v26 = this;
      *((_QWORD *)&v195 + 1) = v131;
      *(_QWORD *)&v196 = v211[0];
      WORD4(v196) = v210[0] & 0x1F;
    }
    else
    {
      *((_QWORD *)&v194 + 1) = v209;
      v35 = (unsigned int)v195 & 0xFFFFFFFE;
      LODWORD(v195) = v35 ^ (v195 & 0xFE ^ (unsigned __int8)(2 * v210[0])) & 0x3E;
      *((_QWORD *)&v195 + 1) = v211[0];
    }
  }
  else
  {
    v38 = v185;
    LODWORD(v193) = v31->VidPnSourceId;
    *((_QWORD *)&v193 + 1) = v208;
    DWORD1(v193) = v30;
  }
  Elements = (DXGK_ALLOCATIONLIST *)&v193;
LABEL_33:
  v38->pAllocationList = Elements;
  v40 = 0LL;
  v41 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v41 + 16) + 3097LL) )
    v40 = *((_QWORD *)v26 + 23);
  LODWORD(v182) = -1;
  v42 = 0;
  v183 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v184 = 1;
    LODWORD(v182) = 5031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerEnter);
  }
  else
  {
    v184 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v182, 5031);
  CurrentProcess = PsGetCurrentProcess(v43);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v46 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v47 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( !v47 )
        goto LABEL_41;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v47 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( !v47 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3080;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_41;
      }
    }
  }
  else
  {
LABEL_41:
    v47 = v46;
  }
  v174 = 0;
  v48 = (struct _KTHREAD **)((char *)v47 + 152);
  if ( !v47 )
    v48 = 0LL;
  if ( v48 && v48[1] == KeGetCurrentThread() )
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
  if ( v47 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v48, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v48, v49, v50);
      ExAcquirePushLockExclusiveEx(v48, 0LL);
    }
    v48[1] = KeGetCurrentThread();
    v174 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v41 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v41 + 16) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v51 = 0LL;
  if ( CurrentIrql < 2u )
  {
    DxgThread = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0 )
    {
      v51 = DxgThread;
      if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v51 = DxgThread) != 0LL) )
        v42 = *((_DWORD *)v51 + 12);
    }
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)&p_ApcState,
    *(struct DXGADAPTER **)(v41 + 16));
  v52 = (*(int (__fastcall **)(__int64, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v41 + 16) + 744LL))(v40, v38);
  if ( (_BYTE)p_ApcState )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v156 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, v41, CurrentIrql, v156);
    WdLogGlobalForLineNumber = 3160;
  }
  if ( !v51 || (v54 = *((int *)v51 + 12), (_DWORD)v54 == v42) )
  {
    v55 = 0;
  }
  else
  {
    v55 = 0;
    WdLogSingleEntry5(0LL, 275LL, 38LL, v54, v42, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v41 + 16) + 4852LL));
  v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v54, v53);
  v57 = v185;
  v56[3] = v52;
  v56[4] = v40;
  v56[5] = v57->SubRectCnt;
  v56[6] = v57->pDmaBuffer;
  v56[7] = v57->DmaSize;
  WdLogGlobalForLineNumber = 3167;
  if ( (_DWORD)v52 )
  {
    if ( (int)v52 > -1073741670 )
    {
      if ( (_DWORD)v52 == -1071775743 || (_DWORD)v52 == -1071775736 || (_DWORD)v52 == -1071775232 )
        goto LABEL_63;
    }
    else if ( (_DWORD)v52 == -1073741670
           || (_DWORD)v52 == -1073741816
           || (_DWORD)v52 == -1073741801
           || (_DWORD)v52 == -1073741795
           || (_DWORD)v52 == -1073741674 )
    {
      goto LABEL_63;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3169;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v52,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_63:
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v41 + 16));
  if ( v174 == 2 )
  {
    v48[1] = 0LL;
    ExReleasePushLockExclusiveEx(v48, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v182);
  if ( v184 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v58, (__int64)&EventProfilerExit);
  LODWORD(v10) = v52;
  if ( (int)v52 < 0 )
  {
LABEL_69:
    if ( P != v203 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v204 = 0;
    if ( (int)v10 < 0 )
    {
      v123 = this;
      goto LABEL_201;
    }
    goto LABEL_73;
  }
  v110 = DXGGLOBAL::GetGlobal();
  v182 = v110;
  LOBYTE(v183) = 0;
  if ( !v110 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3058;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 3058LL, 0LL, 0LL, 0LL, 0LL);
    v110 = v182;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v110 + 76)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3063;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursiveSharedLock",
      3063LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v111 = v178;
  v205 = 0LL;
  v207 = 0;
  p_ApcState = 0LL;
  PresentPlaneCount = v178->PresentPlaneCount;
  v201 = 0;
  if ( (unsigned int)PresentPlaneCount <= 4 )
  {
    v205 = (struct DXGSYNCOBJECTMUTEX *)&v206;
    if ( (_DWORD)PresentPlaneCount )
    {
      v113 = 0LL;
      v114 = (unsigned int)PresentPlaneCount;
      do
      {
        v115 = v205;
        v113 += 16LL;
        *(_QWORD *)((char *)v205 + v113 - 16) = 0LL;
        *((_BYTE *)v115 + v113 - 8) = 0;
        --v114;
      }
      while ( v114 );
      v111 = v178;
    }
    goto LABEL_162;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / PresentPlaneCount >= 0x10 )
  {
    v157 = 16 * PresentPlaneCount;
    if ( !is_mul_ok(PresentPlaneCount, 0x10uLL) )
      v157 = -1LL;
    v158 = __CFADD__(v157, 8LL);
    v159 = v157 + 8;
    if ( v158 )
      v159 = -1LL;
    v160 = operator new[](v159, 0x4B677844u, 256LL);
    if ( v160 )
    {
      v161 = (struct DXGSYNCOBJECTMUTEX *)(v160 + 8);
      *(_QWORD *)v160 = PresentPlaneCount;
      `vector constructor iterator'(
        (char *)(v160 + 8),
        16LL,
        PresentPlaneCount,
        (void (__fastcall *)(char *))DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX);
      v111 = v178;
      v205 = v161;
      v55 = 0;
    }
    else
    {
      v111 = v178;
    }
LABEL_162:
    v116 = v205;
    v207 = PresentPlaneCount;
  }
  else
  {
    v116 = 0LL;
  }
  v117 = v111->PresentPlaneCount;
  if ( (unsigned int)v117 <= 4 )
  {
    p_ApcState = (struct DXGSYNCOBJECTMUTEX *)&ApcState;
    if ( (_DWORD)v117 )
    {
      v118 = 0LL;
      v119 = (unsigned int)v117;
      do
      {
        v120 = p_ApcState;
        v118 += 16LL;
        *(_QWORD *)((char *)p_ApcState + v118 - 16) = 0LL;
        *((_BYTE *)v120 + v118 - 8) = 0;
        --v119;
      }
      while ( v119 );
      goto LABEL_167;
    }
    goto LABEL_168;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v117 >= 0x10 )
  {
    v162 = 16 * v117;
    if ( !is_mul_ok(v117, 0x10uLL) )
      v162 = -1LL;
    v158 = __CFADD__(v162, 8LL);
    v163 = v162 + 8;
    if ( v158 )
      v163 = -1LL;
    v164 = operator new[](v163, 0x4B677844u, 256LL);
    if ( v164 )
    {
      v165 = (struct DXGSYNCOBJECTMUTEX *)(v164 + 8);
      *(_QWORD *)v164 = v117;
      `vector constructor iterator'(
        (char *)(v164 + 8),
        16LL,
        v117,
        (void (__fastcall *)(char *))DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX);
      p_ApcState = v165;
      v55 = 0;
    }
LABEL_167:
    v111 = v178;
LABEL_168:
    v121 = p_ApcState;
    v201 = v117;
  }
  else
  {
    v121 = 0LL;
  }
  if ( v116 && v121 )
  {
    v122 = v179;
    v123 = this;
    LODWORD(v10) = DXGCONTEXT::AcquireMultiPlaneOverlay3FlipFences(
                     this,
                     v111,
                     v176,
                     v179,
                     (struct DXGSYNCOBJECTLOCK *)&v182,
                     v116,
                     v121);
    if ( (int)v10 < 0 )
    {
      PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&p_ApcState);
      PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v205);
      if ( (_BYTE)v183 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v182);
      if ( P != v203 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v204 = 0;
      goto LABEL_203;
    }
    if ( v171 )
    {
      v124 = v189;
      do
      {
        if ( *((struct _KTHREAD **)*v124 + 56) != KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2178;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
            2178LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
          DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(*v124, 0LL, 0, 0, v122, 0LL, 0);
        v125 = *v124;
        v126 = *((_QWORD *)*v124 + 2);
        if ( (*((_DWORD *)*v124 + 98) & 0x10) != 0 )
          v127 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v126 + 16) + 736LL)
                                                                                                 + 8LL)
                                                                                     + 456LL))(
                   *((_QWORD *)v125 + 36),
                   v122);
        else
          v127 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v126 + 16) + 736LL)
                                                                                                 + 8LL)
                                                                                     + 448LL))(
                   *((_QWORD *)v125 + 32),
                   v122);
        LODWORD(v10) = v127;
        if ( v127 < 0 )
          break;
        *(_DWORD *)v122 &= ~0x800u;
        ++v55;
        ++v124;
      }
      while ( v55 < v171 );
      v23 = 10LL;
    }
    PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&p_ApcState);
    PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v205);
    if ( (_BYTE)v183 )
    {
      LOBYTE(v183) = 0;
      ExReleaseResourceLite(*((PERESOURCE *)v182 + 76));
      KeLeaveCriticalRegion();
    }
    goto LABEL_69;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 2156;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to allocate FlipToSyncObjectMutexArray or FlipAwaySyncObjectMutexArray: Status = 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
  PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&p_ApcState);
  PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v205);
  if ( (_BYTE)v183 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v182);
  if ( P != v203 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v204 = 0;
LABEL_73:
  v59 = (CAutoRefCountedBuffer *)&v213;
  do
  {
    v59 = (CAutoRefCountedBuffer *)((char *)v59 - 8);
    CAutoRefCountedBuffer::~CAutoRefCountedBuffer(v59);
    --v23;
  }
  while ( v23 );
  v60 = (PLOOKASIDE_LIST_EX *)Entry;
  if ( Entry && _InterlockedExchangeAdd((volatile signed __int32 *)Entry + 3, 0xFFFFFFFF) == 1 )
  {
    if ( *v60 )
      ExFreeToLookasideListEx(*v60, v60);
    else
      ExFreePoolWithTag(v60, 0);
  }
  return (unsigned int)v10;
}
