/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14002DE54 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004CF80 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x14004FFE0 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x14005CDC8 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x140063C80 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x140064BA8 (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1401A1558 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140259188 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402AB7A4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1402D290C (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1402D3ACC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140362038 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x14038395C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x140383C90 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x14038452C (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140384650 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140385038 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403EC5CC (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        unsigned int a2,
        int a3,
        DMMVIDPN *a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10,
        unsigned int *a11,
        struct DXGDEVICE *a12,
        __int64 a13,
        unsigned __int8 a14)
{
  struct DXGADAPTER *ContainingAdapter; // rax
  int v16; // ebx
  struct DXGADAPTER *v17; // r14
  int v18; // edx
  struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *v19; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v21; // r9
  unsigned int v22; // ebx
  __int64 *v24; // rbx
  unsigned int v25; // edi
  __int64 v26; // rax
  int v27; // r15d
  char *v28; // r12
  DMMVIDPN *v29; // r13
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // r13
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int updated; // eax
  unsigned int i; // r12d
  struct DMMVIDPN *v34; // rax
  ADAPTER_DISPLAY *v35; // rcx
  __int64 v36; // r15
  int j; // r12d
  int v38; // eax
  int v39; // r13d
  DMMVIDPNTOPOLOGY *v40; // rbx
  unsigned int v41; // r13d
  unsigned int *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rdx
  DMMVIDPNTOPOLOGY *v45; // r13
  bool IsSourceInTopology; // al
  unsigned int v47; // edx
  void *v48; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  ADAPTER_DISPLAY *v52; // rcx
  unsigned __int8 v53; // zf
  int v54; // eax
  _QWORD *v55; // rax
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rdx
  int v62; // eax
  ADAPTER_DISPLAY *v63; // rcx
  unsigned __int8 v64; // zf
  VIDPN_MGR *v65; // r13
  int v66; // eax
  int v67; // eax
  unsigned int v68; // r12d
  int k; // r13d
  ADAPTER_DISPLAY *v70; // rcx
  unsigned int v71; // eax
  struct DMMVIDPNTOPOLOGY *v72; // rdi
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rdx
  unsigned int m; // r15d
  __int64 v77; // r13
  const struct _DXGK_DISPLAYMODE_INFO *v78; // rax
  DMMVIDPNPRESENTPATH *v79; // rax
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v80; // r9d
  int v81; // eax
  unsigned int v82; // edi
  __int64 v83; // r15
  unsigned int n; // r15d
  __int64 v85; // r13
  int v86; // eax
  int v87; // edx
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v89; // r11
  struct COREDEVICEACCESS *v90; // r9
  struct DXGDEVICE *v91; // r10
  int CddAllocations; // eax
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v94; // rdi
  int v95; // ecx
  ADAPTER_DISPLAY *v96; // rcx
  unsigned __int8 v97; // zf
  VIDPN_MGR *v98; // r15
  int v99; // eax
  __int64 v100; // rdx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // r12
  int v104; // r15d
  int v105; // eax
  void *v106; // r13
  struct DXGADAPTERALLOCATION *v107; // rax
  unsigned int v108; // edi
  __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // rdx
  int v112; // edi
  int v113; // ecx
  unsigned int v114; // eax
  __int64 v115; // rdi
  unsigned int *v117; // r8
  int v118; // r9d
  unsigned int v119; // ecx
  unsigned int v120; // ecx
  signed __int64 v121; // rax
  _BYTE *v122; // r8
  int v123; // r9d
  int v124; // edx
  char v125; // cl
  __int64 v126; // r10
  __int64 v127; // r11
  __int64 v128; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v129; // [rsp+50h] [rbp-B0h] BYREF
  char v130; // [rsp+51h] [rbp-AFh]
  char v131; // [rsp+52h] [rbp-AEh]
  unsigned int v132; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v133; // [rsp+58h] [rbp-A8h] BYREF
  int v134; // [rsp+60h] [rbp-A0h]
  int v135; // [rsp+68h] [rbp-98h]
  struct DMMVIDPN *v136; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v137; // [rsp+78h] [rbp-88h]
  int v138; // [rsp+7Ch] [rbp-84h]
  VIDPN_MGR *v139; // [rsp+80h] [rbp-80h]
  DMMVIDPN *v140; // [rsp+88h] [rbp-78h]
  struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *v141; // [rsp+90h] [rbp-70h]
  struct DXGDEVICE *v142; // [rsp+98h] [rbp-68h]
  _BYTE v143[24]; // [rsp+A0h] [rbp-60h] BYREF
  DMMVIDPNTOPOLOGY *v144; // [rsp+B8h] [rbp-48h]
  _DWORD *v145; // [rsp+C0h] [rbp-40h]
  __int64 v146; // [rsp+C8h] [rbp-38h]
  struct DMMVIDPN *v147; // [rsp+D0h] [rbp-30h]
  __int64 v148; // [rsp+D8h] [rbp-28h]
  unsigned int *v149; // [rsp+E0h] [rbp-20h]
  __int128 v150; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v151[80]; // [rsp+100h] [rbp+0h] BYREF

  v149 = a11;
  v148 = a6;
  v145 = a9;
  v146 = a10;
  v142 = a12;
  v135 = a3;
  v137 = a2;
  v139 = a1;
  *(_QWORD *)&v150 = a13;
  v140 = a4;
  v132 = 0;
  memset(v151, 0, sizeof(v151));
  v129 = 0;
  v133 = 0LL;
  v134 = 0;
  v130 = 0;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1);
  v16 = a8[6];
  v17 = ContainingAdapter;
  v18 = a8[3] | a8[14];
  v138 = v16;
  if ( (v18 & v16) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1353;
  }
  if ( (v16 & a8[2] & a8[5]) != (v16 & a8[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1355;
  }
  v141 = (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)operator new(0x1F0uLL, 0x4E506456u, 256LL);
  v19 = v141;
  if ( v141 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    v136 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               a1,
                                               (__int64 *)&v136);
    v22 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      WdLogSingleEntry3(2LL, *((int *)v17 + 104), *((unsigned int *)v17 + 103), ClientVidPnFromLastClientCommitedVidPn);
      WdLogGlobalForLineNumber = 1391;
      auto_rc<DMMVIDPN>::reset((__int64 *)&v136, 0LL);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v19);
      return v22;
    }
    v24 = (__int64 *)v136;
    v25 = 0;
    v26 = *((_QWORD *)v17 + 395);
    v27 = 1;
    v147 = v136;
    v28 = (char *)v136 + 96;
    v144 = (struct DMMVIDPN *)((char *)v136 + 96);
    if ( *(_DWORD *)(v26 + 96) )
    {
      do
      {
        if ( (v27 & a8[10]) != 0 )
        {
          v29 = v140;
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v140 + 96), v25, 0LL, &v132) < 0
            || v132 == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1434;
          }
          Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(
                                                                (DMMVIDPN *)((char *)v29 + 96),
                                                                v25,
                                                                v132);
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1437;
          }
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v17 + 395), v25);
          *(_OWORD *)v151 = *(_OWORD *)DisplayModeInfo;
          *(_OWORD *)&v151[16] = *((_OWORD *)DisplayModeInfo + 1);
          *(_OWORD *)&v151[32] = *((_OWORD *)DisplayModeInfo + 2);
          *(_OWORD *)&v151[48] = *((_OWORD *)DisplayModeInfo + 3);
          *(_OWORD *)&v151[64] = *((_OWORD *)DisplayModeInfo + 4);
          *(_DWORD *)&v151[28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)Path + 29));
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path, 0LL);
          if ( updated < 0 )
          {
            WdLogSingleEntry3(2LL, v25, v28, updated);
            WdLogGlobalForLineNumber = 1480;
            a8[10] &= ~v27;
            a8[2] |= v27;
          }
          else
          {
            for ( i = 0; ; ++i )
            {
              if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v24 + 12), v25, i, &v132) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1460;
              }
              if ( v132 == -1 )
                break;
              v34 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v24 + 12), v25, v132);
              v136 = v34;
              if ( !v34 )
              {
                WdLogSingleEntry0(1LL);
                v34 = v136;
                WdLogGlobalForLineNumber = 1467;
              }
              DMMVIDPNPRESENTPATH::PinContentRotation(v34, Path[29]);
            }
            v28 = (char *)(v24 + 12);
          }
        }
        ++v25;
        v27 *= 2;
      }
      while ( v25 < *(_DWORD *)(*((_QWORD *)v17 + 395) + 96LL) );
    }
LABEL_26:
    v35 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 395);
    v36 = 0LL;
    for ( j = 1; (unsigned int)v36 < *((_DWORD *)v35 + 24); j *= 2 )
    {
      if ( (j & a8[21]) == 0 )
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v35, v36)
          && (((a8[3] | a8[2] | a8[14]) & j) != 0 || (j & a8[5]) == 0)
          && (v38 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)v17 + 395), v36, 0, 0x800u, a14),
              v39 = v38,
              v38 < 0) )
        {
          WdLogSingleEntry4(2LL, (unsigned int)v36, *((int *)v17 + 104), *((unsigned int *)v17 + 103), v38);
          a8[21] |= j;
          a8[v36 + 22] = v39;
          WdLogGlobalForLineNumber = 1524;
        }
        else
        {
          if ( (j & a8[3]) != 0 || v130 && (j & a8[2]) != 0 || *((_BYTE *)v139 + 520) )
          {
            if ( v24 == (__int64 *)-96LL )
              v61 = 0LL;
            else
              v61 = (__int64)(v24 + 19);
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v143, v61, 2u, v21, v128, v24[17]);
            v62 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v24 + 12), v36);
            if ( ((v62 + 0x80000000) & 0x80000000) == 0 && v62 != -1071774919 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1556;
            }
LABEL_68:
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v143, v60);
LABEL_69:
            v53 = (j & a8[3]) == 0;
            LODWORD(v133) = v133 & 0xFFFFFF50 | v135 & 0xF | 0x50;
            v63 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 395);
            v134 = *((_DWORD *)v63 + 106);
            BYTE4(v133) = (v137 >> 14) & 4 | BYTE4(v133) & 0xF8 | v53;
            if ( (j & a8[6]) != 0 )
              v64 = (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v63, v36) == 0;
            else
              v64 = (j & a8[5]) == 0;
            v65 = v139;
            v66 = VIDPN_MGR::CommitVidPn(
                    v139,
                    (const struct DMMVIDPN *)v24,
                    0LL,
                    v36,
                    D3DKMDT_MCC_IGNORE,
                    0,
                    v64,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v133,
                    &v129);
            if ( v66 < 0 )
            {
              WdLogSingleEntry4(2LL, (unsigned int)v36, *((int *)v17 + 104), *((unsigned int *)v17 + 103), v66);
              WdLogGlobalForLineNumber = 1721;
            }
            if ( v142 && ((j & a8[3]) != 0 || *((_BYTE *)v65 + 520)) )
            {
              v67 = ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v17 + 395), v142, v36);
              if ( v67 < 0 )
              {
                WdLogSingleEntry4(2LL, (unsigned int)v36, *((int *)v17 + 104), *((unsigned int *)v17 + 103), v67);
                WdLogGlobalForLineNumber = 1766;
              }
            }
            goto LABEL_79;
          }
          if ( (j & a8[14]) != 0 )
          {
            v40 = v144;
            v41 = 0;
            v42 = (unsigned int *)(v146 + 4LL * (unsigned int)(16 * v36));
            do
            {
              if ( *v42 == -1 )
                break;
              if ( v40 )
                v43 = (__int64)v40 + 56;
              else
                v43 = 0LL;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v143, v43, 2u, v21, v128, 1LL);
              if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v40, v36, *v42, 0LL) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1577;
              }
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                (ApplyPermissionWithinThisScope *)v143,
                v44);
              ++v41;
              ++v42;
            }
            while ( v41 < 0x10 );
            v45 = v40;
            IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v40, v36);
            v24 = (__int64 *)v147;
            if ( !IsSourceInTopology )
              goto LABEL_69;
            v48 = 0LL;
            if ( *((_QWORD *)v17 + 396) )
            {
              DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                             *((ADAPTER_DISPLAY **)v17 + 395),
                                             v47);
              if ( !DisplayedPrimaryAllocation )
                goto LABEL_56;
              v51 = *((unsigned int *)DisplayedPrimaryAllocation + 1);
              if ( (v51 & 0x10) != 0 )
                goto LABEL_56;
              v48 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
            }
            LODWORD(v133) = v133 & 0xFFFFFF40 | v135 & 0xF | 0x40;
            v52 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 395);
            v134 = *((_DWORD *)v52 + 106);
            BYTE4(v133) = BYTE4(v133) & 0xF9 | (v137 >> 14) & 4 | 1;
            v53 = (j & a8[6]) != 0
                ? (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v52, v36) == 0
                : (j & a8[5]) == 0;
            v54 = VIDPN_MGR::CommitVidPn(
                    v139,
                    (const struct DMMVIDPN *)v24,
                    v48,
                    v36,
                    D3DKMDT_MCC_ENFORCE,
                    0,
                    v53,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v133,
                    &v129);
            if ( v54 < 0 )
            {
              WdLogSingleEntry4(2LL, (unsigned int)v36, *((int *)v17 + 104), *((unsigned int *)v17 + 103), v54);
              WdLogGlobalForLineNumber = 1652;
LABEL_56:
              v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v51, v50);
              v55[3] = (unsigned int)v36;
              v55[4] = *((int *)v17 + 104);
              v55[5] = *((unsigned int *)v17 + 103);
              v57 = *((_QWORD *)v45 + 5);
              WdLogGlobalForLineNumber = 1665;
              if ( v45 )
                v58 = (__int64)v45 + 56;
              else
                v58 = 0LL;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v143, v58, 2u, v56, v128, v57);
              v59 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v45, v36);
              if ( (int)(v59 + 0x80000000) >= 0 && v59 != -1071774919 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1671;
              }
              goto LABEL_68;
            }
          }
        }
      }
LABEL_79:
      v35 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 395);
      v36 = (unsigned int)(v36 + 1);
    }
    v68 = 0;
    for ( k = 1; ; k *= 2 )
    {
      v70 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 395);
      LODWORD(v136) = k;
      v71 = *((_DWORD *)v70 + 24);
      if ( v68 >= v71 )
        break;
      v131 = 1;
      if ( (k & a8[21]) == 0 )
      {
        if ( (k & a8[2]) == 0 )
          goto LABEL_150;
        v72 = (struct DMMVIDPNTOPOLOGY *)(v24 + 12);
        if ( v24 == (__int64 *)-96LL )
          v73 = 0LL;
        else
          v73 = (__int64)(v24 + 19);
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v143, v73, 2u, v21, v128, v24[17]);
        v74 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v24 + 12), v68);
        v75 = 0x80000000LL;
        if ( (int)(v74 + 0x80000000) >= 0 && v74 != -1071774919 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1805;
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v143, v75);
        for ( m = 0; ; ++m )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPN *)((char *)v140 + 96), v68, m, &v132) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1823;
          }
          v77 = v132;
          if ( v132 == -1 )
            break;
          if ( v131 )
          {
            v78 = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v17 + 395), v68);
            *(_OWORD *)v151 = *(_OWORD *)v78;
            *(_OWORD *)&v151[16] = *((_OWORD *)v78 + 1);
            *(_OWORD *)&v151[32] = *((_OWORD *)v78 + 2);
            *(_OWORD *)&v151[48] = *((_OWORD *)v78 + 3);
            *(_OWORD *)&v151[64] = *((_OWORD *)v78 + 4);
            v79 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)v140 + 96), v68, v77);
            if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
                        v79,
                        ((v135 - 1) & 0xFFFFFFFD) == 0,
                        (struct _D3DDDI_RATIONAL *)v151) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1841;
            }
            v131 = 0;
          }
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(v140, v77, v141) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1853;
          }
          v81 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                  v139,
                  v72,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)v141,
                  v80);
          v82 = v81;
          if ( v81 < 0 )
          {
            v83 = v68;
            WdLogSingleEntry4(2LL, v68, v77, v24 + 12, v81);
            WdLogGlobalForLineNumber = 1867;
LABEL_112:
            k = (int)v136;
            goto LABEL_135;
          }
          v72 = (struct DMMVIDPNTOPOLOGY *)(v24 + 12);
        }
        for ( n = 0; ; ++n )
        {
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v72, v68, n, &v132) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1887;
          }
          v85 = v132;
          if ( v132 == -1 )
            break;
          if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(v140, v132, v141) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1902;
          }
          v86 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(v139, v72, v141);
          v82 = v86;
          if ( v86 < 0 )
          {
            v83 = v68;
            WdLogSingleEntry4(2LL, v68, v85, v24 + 12, v86);
            WdLogGlobalForLineNumber = 1917;
            goto LABEL_112;
          }
          DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPN *)((char *)v140 + 96), v85);
          v72 = (struct DMMVIDPNTOPOLOGY *)(v24 + 12);
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v24 + 12), v87);
          DMMVIDPNPRESENTPATH::SetGammaRamp(PathFromTarget, *(const struct DXGK_GAMMA_RAMP **)(v89 + 184));
        }
        if ( v142 && (_QWORD)v150 && !DXGADAPTER::UsingDelayCreateCddAllocation(v17) )
        {
          CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                             *((ADAPTER_DISPLAY **)v17 + 395),
                             v91,
                             v68,
                             (const struct _D3DKMT_DISPLAYMODE *)v151,
                             v90);
          v82 = CddAllocations;
          if ( CddAllocations < 0 )
          {
            v83 = v68;
            WdLogSingleEntry4(2LL, v68, *((int *)v17 + 104), *((unsigned int *)v17 + 103), CddAllocations);
            WdLogGlobalForLineNumber = 1958;
            goto LABEL_112;
          }
          CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*((ADAPTER_DISPLAY **)v17 + 395), v68, 0);
          if ( !*((_QWORD *)v17 + 396) )
          {
LABEL_119:
            v94 = 0LL;
            goto LABEL_120;
          }
LABEL_127:
          v94 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
LABEL_120:
          v95 = 32;
          k = (int)v136;
          if ( n <= 1 )
            v95 = 48;
          LODWORD(v133) = v133 & 0xFFFFFF00 | v135 & 0xF | v95;
          v96 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 395);
          v134 = *((_DWORD *)v96 + 106);
          BYTE4(v133) = BYTE4(v133) & 0xF8 | (v137 >> 14) & 4;
          if ( ((unsigned int)v136 & a8[6]) != 0 )
            v97 = (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v96, v68) == 0;
          else
            v97 = ((unsigned int)v136 & a8[5]) == 0;
          v98 = v139;
          v99 = VIDPN_MGR::CommitVidPn(
                  v139,
                  (const struct DMMVIDPN *)v24,
                  v94,
                  v68,
                  D3DKMDT_MCC_ENFORCE,
                  0,
                  v97,
                  (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v133,
                  &v129);
          v82 = v99;
          if ( v99 >= 0 )
          {
            if ( (k & a8[5]) == 0
              && (*((int *)VIDPN_MGR::GetContainingAdapter(v98) + 761) < 1200
               || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(v98) + 27) + 64LL)
                                        + 40LL)
                            + 28LL) < 0x300Au) )
            {
              v138 |= k;
            }
            goto LABEL_150;
          }
          v83 = v68;
          WdLogSingleEntry4(2LL, v68, *((int *)v17 + 104), *((unsigned int *)v17 + 103), v99);
          WdLogGlobalForLineNumber = 2032;
          if ( v142 )
            ADAPTER_DISPLAY::DestroyCddAllocations(*((ADAPTER_DISPLAY **)v17 + 395), v142, v68);
        }
        else
        {
          if ( !*((_QWORD *)v17 + 396) )
            goto LABEL_119;
          CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*((ADAPTER_DISPLAY **)v17 + 395), v68);
          if ( CddPrimaryAllocation && (*((_DWORD *)CddPrimaryAllocation + 1) & 0x10) == 0 )
            goto LABEL_127;
          k = (int)v136;
          v83 = v68;
          if ( ((unsigned int)v136 & a8[8]) == 0 )
          {
            *v145 |= (unsigned int)v136;
            WdLogSingleEntry3(7LL, v68, *((int *)v17 + 104), *((unsigned int *)v17 + 103));
            WdLogGlobalForLineNumber = 1995;
            goto LABEL_150;
          }
          v82 = -1071775482;
          WdLogSingleEntry3(2LL, v68, *((int *)v17 + 104), *((unsigned int *)v17 + 103));
          WdLogGlobalForLineNumber = 1979;
        }
LABEL_135:
        if ( !v130 )
        {
          DxgkLogCodePointPacket(0x61u, v68, v82, 0, *(_QWORD *)((char *)v17 + 412));
          v130 = 1;
          goto LABEL_26;
        }
        a8[21] |= k;
        a8[v83 + 22] = v82;
        if ( v82 == -1071774920 || v82 == -1071774976 )
          v129 = 1;
      }
      if ( v24 == (__int64 *)-96LL )
        v100 = 0LL;
      else
        v100 = (__int64)(v24 + 19);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v143, v100, 2u, v21, v128, v24[17]);
      v101 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v24 + 12), v68);
      v102 = 0x80000000LL;
      if ( (int)(v101 + 0x80000000) >= 0 && v101 != -1071774919 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2118;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v143, v102);
LABEL_150:
      ++v68;
    }
    v103 = 0LL;
    v104 = 1;
    if ( v71 )
    {
      do
      {
        if ( (v104 & a8[21]) == 0 )
        {
          v105 = a8[5];
          if ( (v104 & v138) != 0 )
          {
            v106 = 0LL;
            if ( (v105 & v104) == 0 )
            {
              if ( v24 == (__int64 *)-96LL )
                v109 = 0LL;
              else
                v109 = (__int64)(v24 + 19);
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v143,
                v109,
                2u,
                v21,
                v128,
                v24[17]);
              v110 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v24 + 12), v103);
              v111 = 0x80000000LL;
              if ( (int)(v110 + 0x80000000) >= 0 && v110 != -1071774919 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2243;
              }
              v112 = v133;
              a8[18] |= v104;
              v108 = v112 & 0xFFFFFF0F | 0x40;
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                (ApplyPermissionWithinThisScope *)v143,
                v111);
              goto LABEL_170;
            }
            if ( !*((_QWORD *)v17 + 396) )
              goto LABEL_161;
            v107 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(v70, v103);
            if ( v107 && (*((_DWORD *)v107 + 1) & 0x10) == 0 )
            {
              v106 = (void *)*((_QWORD *)v107 + 2);
LABEL_161:
              v108 = v133 & 0xFFFFFF0F | 0x20;
LABEL_170:
              v113 = v135;
              v150 = 0LL;
              if ( v135 == 4 )
              {
                DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, &v150);
                v113 = v135;
              }
              LODWORD(v133) = v113 ^ (v108 ^ v113) & 0xFFFFFFF0;
              v134 = *(_DWORD *)(*((_QWORD *)v17 + 395) + 424LL);
              BYTE4(v133) = BYTE4(v133) & 0xF8 | (v137 >> 14) & 4;
              v114 = VIDPN_MGR::CommitVidPn(
                       v139,
                       (const struct DMMVIDPN *)v24,
                       v106,
                       v103,
                       D3DKMDT_MCC_ENFORCE,
                       1,
                       0,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v133,
                       &v129);
              v115 = (int)v114;
              if ( v135 == 4 )
                DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v114, &v150);
              if ( (int)v115 < 0 )
              {
                a8[21] |= v104;
                a8[v103 + 22] = v115;
                WdLogSingleEntry4(2LL, (unsigned int)v103, *((int *)v17 + 104), *((unsigned int *)v17 + 103), v115);
                WdLogGlobalForLineNumber = 2290;
              }
              goto LABEL_176;
            }
            *v145 |= v104;
            a8[18] |= v104;
            WdLogSingleEntry3(7LL, (unsigned int)v103, *((int *)v17 + 104), *((unsigned int *)v17 + 103));
            WdLogGlobalForLineNumber = 2225;
          }
          else
          {
            a8[18] |= v104 & ~v105;
          }
        }
LABEL_176:
        v70 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 395);
        v103 = (unsigned int)(v103 + 1);
        v104 *= 2;
      }
      while ( (unsigned int)v103 < *((_DWORD *)v70 + 24) );
    }
    if ( a5 )
    {
      v117 = (unsigned int *)(v148 + 32);
      do
      {
        v118 = 1 << *a7;
        v119 = *v117;
        if ( (v118 & a8[39]) != 0 )
        {
          v120 = v119 & 0xF0FFFFFF | 0xC000000;
        }
        else if ( (v118 & a8[21]) != 0 )
        {
          v120 = v119 & 0xF0FFFFFF | 0xD000000;
        }
        else
        {
          v120 = v119 & 0xF0FFFFFF | 0xE000000;
        }
        *v117 = v120;
        v121 = DxgkIncrementGlobalConnectionChangeId();
        *((_QWORD *)v122 - 1) = v121;
        v124 = v123 & (a8[2] | a8[39]);
        *((_DWORD *)v122 - 4) &= ~1u;
        v125 = v124 != 0 ? 1 : -1;
        v122[16] = v125;
        a7 = (_DWORD *)(v126 + 4);
        v122[17] = -(v124 == 0);
        v122[18] = v125;
        v117 = (unsigned int *)(v122 + 56);
      }
      while ( v127 != 1 );
    }
    *v149 = (v129 != 0) | *v149 & 0xFFFFFFFE;
    if ( v24 )
      ReferenceCounted::Release((ReferenceCounted *)(v24 + 3));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v141);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, *((int *)v17 + 104), *((unsigned int *)v17 + 103));
    WdLogGlobalForLineNumber = 1374;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 3221225495LL;
  }
}
