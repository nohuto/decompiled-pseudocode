/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x140444654
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140038B8C (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x140038DB4 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x14004FFE0 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x140059B50 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x14005CDC8 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z @ 0x14005CFE8 (-reset@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005DCB4 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x14026729C (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1402673A4 (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402DCE54 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1403B9750 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403C3D6C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1403EF3FC (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1404014A0 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x14040B060 (-IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
        VIDPN_MGR *this,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        void **a7,
        void **a8,
        void **a9)
{
  _DWORD *v9; // rsi
  int v10; // r13d
  int v11; // r12d
  unsigned int v15; // ebx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  unsigned int v22; // eax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // kr00_8
  unsigned __int64 v26; // rax
  unsigned int *v27; // rax
  unsigned __int64 v28; // r11
  unsigned int *v29; // r14
  DMMVIDPNTOPOLOGY *v30; // rax
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rax
  DMMVIDPNTARGET *v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // ebx
  unsigned __int64 v37; // r9
  int v38; // r12d
  int v39; // eax
  __int64 v40; // r8
  int v41; // r11d
  int v42; // edi
  DMMVIDPNTARGET *v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  bool v48; // al
  __int64 v49; // r9
  DMMVIDEOPRESENTTARGET *v50; // r8
  int v51; // edx
  unsigned int v52; // ecx
  char v53; // al
  bool v54; // al
  __int64 v55; // rdx
  DMMVIDPNPRESENTPATH *v56; // r8
  unsigned __int8 v57; // al
  __int64 v58; // rdx
  struct DMMVIDPNPRESENTPATH *v59; // rax
  unsigned int v60; // r11d
  DMMVIDPNPRESENTPATH *v61; // r12
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r12
  int v65; // eax
  bool v66; // al
  DMMVIDEOPRESENTTARGET *v67; // r9
  int v68; // edx
  unsigned int v69; // ecx
  char v70; // al
  int v71; // eax
  DMMVIDEOPRESENTTARGET *v72; // r9
  int v73; // r12d
  ADAPTER_DISPLAY **v74; // r12
  struct _D3DDDI_RATIONAL v75; // r12
  DMMVIDPNTARGET **v76; // rcx
  char v77; // al
  char IsVidPnVirtualRefreshRateMatch; // al
  DMMVIDPNTARGET *v79; // rdx
  char v80; // cl
  __int64 v81; // r9
  DMMVIDPNPRESENTPATH *v82; // r10
  unsigned __int64 v83; // rdi
  bool v84; // cl
  bool v85; // al
  DMMVIDEOPRESENTTARGET *v86; // r8
  int v87; // ecx
  unsigned int v88; // edx
  char v89; // al
  int v90; // eax
  int v91; // edx
  int v92; // edx
  unsigned int v93; // ecx
  int NumPathsFromSource; // eax
  int v95; // eax
  void *v96; // rax
  int v97; // ecx
  int v98; // eax
  int v99; // eax
  int v100; // r8d
  struct DMMVIDPNTARGETMODESET *v101; // rax
  DMMVIDPNTOPOLOGY *v102; // r9
  __int64 v103; // rdx
  DMMVIDPNPRESENTPATH *v104; // rdi
  __int64 v105; // r12
  __int64 v106; // rax
  __int64 v107; // rbx
  __int64 v108; // rsi
  unsigned int v109; // edx
  unsigned __int64 v110; // rax
  int v111; // r8d
  int v112; // edx
  int v113; // eax
  int v114; // ebx
  _DWORD *v115; // r12
  __int64 v116; // rax
  DMMVIDEOPRESENTTARGET *v117; // rcx
  bool v118; // al
  DMMVIDEOPRESENTTARGET *v119; // r8
  int v120; // edx
  unsigned int v121; // ecx
  char v122; // al
  unsigned int v123; // eax
  int v124; // eax
  struct DMMVIDPNTARGETMODESET *v125; // rax
  int v126; // edi
  struct DXGADAPTER *v127; // rsi
  unsigned int v128; // ebx
  __int64 v129; // rax
  int v130; // edi
  int MostImportantVidPnPathTargetsFromSource; // eax
  char IsVidPnSourceActive; // al
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  unsigned int v134; // edx
  int v135; // edi
  __int64 v136; // rcx
  int v137; // r10d
  DMMVIDPNPRESENTPATH *v138; // rbx
  int *v139; // r8
  __int64 v140; // r9
  int v141; // edx
  unsigned int v142; // ecx
  int v143; // edx
  int v144; // esi
  int v145; // r14d
  int v146; // r14d
  int v147; // ecx
  int v148; // eax
  int v149; // edx
  int v150; // eax
  int v151; // r8d
  int v152; // ecx
  int v153; // edx
  int v154; // ecx
  void *v155; // rcx
  unsigned int v157; // [rsp+38h] [rbp-D0h]
  unsigned int v158; // [rsp+3Ch] [rbp-CCh]
  char v159; // [rsp+40h] [rbp-C8h]
  DMMVIDPNPRESENTPATH *v160; // [rsp+48h] [rbp-C0h]
  unsigned int v161; // [rsp+50h] [rbp-B8h] BYREF
  int v162; // [rsp+54h] [rbp-B4h]
  int v163; // [rsp+58h] [rbp-B0h]
  int v164; // [rsp+5Ch] [rbp-ACh]
  __int64 v165; // [rsp+60h] [rbp-A8h]
  DMMVIDPNTARGET *v166; // [rsp+68h] [rbp-A0h]
  __int64 v167; // [rsp+70h] [rbp-98h]
  DMMVIDEOPRESENTTARGET *v168; // [rsp+78h] [rbp-90h]
  int v169; // [rsp+80h] [rbp-88h]
  int v170; // [rsp+84h] [rbp-84h]
  struct _D3DDDI_RATIONAL v171; // [rsp+88h] [rbp-80h] BYREF
  int v172; // [rsp+90h] [rbp-78h]
  int v173; // [rsp+94h] [rbp-74h]
  int v174; // [rsp+98h] [rbp-70h]
  int v175; // [rsp+9Ch] [rbp-6Ch]
  int v176; // [rsp+A0h] [rbp-68h]
  int v177; // [rsp+A4h] [rbp-64h]
  int TargetLinkTrainingStatus; // [rsp+A8h] [rbp-60h]
  int v179; // [rsp+ACh] [rbp-5Ch]
  int v180; // [rsp+B0h] [rbp-58h]
  int v181; // [rsp+B4h] [rbp-54h]
  DMMVIDPNTOPOLOGY *v182; // [rsp+B8h] [rbp-50h]
  int v183; // [rsp+C0h] [rbp-48h]
  int v184; // [rsp+C4h] [rbp-44h]
  unsigned __int64 v185; // [rsp+C8h] [rbp-40h] BYREF
  DMMVIDPNPRESENTPATH *v186; // [rsp+D0h] [rbp-38h] BYREF
  int v187; // [rsp+D8h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v188; // [rsp+E0h] [rbp-28h]
  struct DXGADAPTER *ContainingAdapter; // [rsp+E8h] [rbp-20h]
  const struct DMMVIDPN *v190; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v191; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v192; // [rsp+100h] [rbp-8h] BYREF
  void *v193; // [rsp+108h] [rbp+0h] BYREF
  void *v194; // [rsp+110h] [rbp+8h] BYREF
  struct DMMVIDPNTARGETMODESET *v195; // [rsp+118h] [rbp+10h] BYREF
  struct DMMVIDPNTARGETMODESET *v196; // [rsp+120h] [rbp+18h] BYREF
  __int128 v197; // [rsp+128h] [rbp+20h]

  v158 = 0;
  v9 = 0LL;
  v186 = 0LL;
  v10 = 0;
  v194 = 0LL;
  v11 = 0;
  v193 = 0LL;
  v164 = 0;
  v170 = 0;
  v174 = 0;
  v162 = 0;
  v173 = 0;
  v172 = 0;
  v184 = 0;
  v180 = 0;
  v175 = 0;
  v177 = 0;
  v176 = 0;
  v183 = 0;
  v169 = 0;
  v165 = 0LL;
  v163 = 0;
  v197 = 0LL;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
  if ( a3 && *(VIDPN_MGR **)(a3 + 48) != this )
  {
    v15 = -1073741811;
    WdLogSingleEntry2(2LL, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 153;
    goto LABEL_231;
  }
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(this);
  v190 = ClientCommittedVidPnRef;
  v17 = 40LL;
  v188 = (DMMVIDPNTOPOLOGY *)(((unsigned __int64)ClientCommittedVidPnRef + 96) & -(__int64)(ClientCommittedVidPnRef != 0LL));
  v182 = (DMMVIDPNTOPOLOGY *)((a3 + 96) & -(__int64)(a3 != 0));
  if ( v188 )
  {
    v19 = 40LL;
    if ( ClientCommittedVidPnRef )
      v19 = (__int64)ClientCommittedVidPnRef + 136;
    v18 = *(_QWORD *)v19;
  }
  else
  {
    LODWORD(v18) = 0;
  }
  if ( ((a3 + 96) & -(__int64)(a3 != 0)) != 0 )
  {
    if ( a3 )
      v17 = a3 + 136;
    v20 = *(_QWORD *)v17;
  }
  else
  {
    LODWORD(v20) = 0;
  }
  v21 = (_DWORD)v18 + (_DWORD)v20 == 0;
  v22 = v18 + v20;
  v191 = v22;
  if ( v21 )
  {
    *a5 = 0;
    *a6 = 0;
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(a7);
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(a8);
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(a9);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v190, 0LL);
    v15 = 0;
    goto LABEL_231;
  }
  v23 = v22;
  v25 = v22;
  v24 = 56LL * v22;
  if ( !is_mul_ok(v25, 0x38uLL) )
    v24 = -1LL;
  v160 = (DMMVIDPNPRESENTPATH *)operator new[](v24, 0x4E506456u, 256LL);
  v186 = v160;
  if ( !v160 )
  {
    v15 = -1073741801;
    WdLogSingleEntry2(6LL, (unsigned int)v23, -1073741801LL);
    WdLogGlobalForLineNumber = 202;
    goto LABEL_20;
  }
  v26 = 4 * v23;
  if ( !is_mul_ok(v23, 4uLL) )
    v26 = -1LL;
  v27 = (unsigned int *)operator new[](v26, 0x4E506456u, 256LL);
  v28 = 0LL;
  v194 = v27;
  v29 = v27;
  if ( !v27 )
  {
    v15 = -1073741801;
    WdLogSingleEntry2(6LL, v23, -1073741801LL);
    WdLogGlobalForLineNumber = 211;
    goto LABEL_20;
  }
  v30 = v188;
  v31 = 24LL;
  if ( !v188 )
    goto LABEL_122;
  v32 = 24LL;
  if ( ClientCommittedVidPnRef )
    v32 = (__int64)ClientCommittedVidPnRef + 120;
  v196 = (struct DMMVIDPNTARGETMODESET *)v32;
  v33 = *(_QWORD *)v32;
  if ( *(_QWORD *)v32 == v32 || (v34 = (DMMVIDPNTARGET *)(v33 - 8), v166 = (DMMVIDPNTARGET *)(v33 - 8), v33 == 8) )
  {
    v30 = v188;
LABEL_122:
    LODWORD(v35) = 0;
    v100 = 0;
LABEL_123:
    v102 = v182;
    if ( v182 )
    {
      v103 = 24LL;
      v104 = 0LL;
      if ( a3 )
        v103 = a3 + 120;
      if ( *(_QWORD *)v103 != v103 )
        v104 = (DMMVIDPNPRESENTPATH *)(*(_QWORD *)v103 - 8LL);
      if ( v104 )
      {
        if ( a3 )
          v31 = a3 + 120;
        v186 = (DMMVIDPNPRESENTPATH *)*((_QWORD *)&v197 + 1);
        v195 = (struct DMMVIDPNTARGETMODESET *)v31;
        do
        {
          v185 = v28;
          v105 = *((_QWORD *)v104 + 12);
          v106 = *((_QWORD *)v104 + 11);
          v166 = (DMMVIDPNTARGET *)v105;
          v107 = *(_QWORD *)(v105 + 96);
          v108 = *(unsigned int *)(v106 + 24);
          v109 = *(_DWORD *)(v106 + 24);
          v168 = (DMMVIDEOPRESENTTARGET *)v107;
          if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v102, v109, &v185) || (v110 = v185) == 0 )
          {
            WdLogSingleEntry0(1LL);
            v110 = v185;
            WdLogGlobalForLineNumber = 631;
          }
          v111 = *(_DWORD *)(v107 + 556);
          v161 = v110 != 1;
          v112 = 1 << v108;
          v170 |= 1 << v108;
          v113 = 1 << v108;
          if ( (v111 & 0x40) != 0 )
            v113 = 0;
          HIDWORD(v165) |= v113;
          LODWORD(v165) = (*(_BYTE *)(*(_QWORD *)(v107 + 536) + 172LL) != 0 ? v112 : 0) | v165;
          if ( (v112 & v164) == 0 )
            v172 |= v112;
          if ( (v111 & 0x100) != 0 && (v169 & 2) == 0 )
          {
            if ( !v186
              || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch((DMMVIDPNTARGET **)v186, (DMMVIDPNTARGET **)v104) )
            {
              if ( !*(_DWORD *)(a4 + 240) )
              {
                v186 = v104;
                *(_DWORD *)(a4 + 244) = v108;
                *(_DWORD *)(a4 + 248) = 1;
                v171 = 0LL;
                DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate((DMMVIDPNTARGET **)v104, &v171);
                *(_DWORD *)(a4 + 252) = 1000000 * (unsigned __int64)v171.Denominator / v171.Numerator;
              }
              *(_DWORD *)(a4 + 4 * v108 + 160) = *(_DWORD *)(a4 + 4 * v108 + 160) & 0xFFFFFFF8 | 1;
              *(_DWORD *)(a4 + 240) |= 1 << v108;
            }
            else
            {
              v169 |= 2u;
              DxgkLogCodePointPacket(0x65u, v108, 1u, v161, *(_QWORD *)((char *)ContainingAdapter + 412));
            }
          }
          LODWORD(v28) = 0;
          if ( !v188 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v188, *(_DWORD *)(v105 + 24)) )
          {
            v114 = v28;
            v29[v158] = v108;
            v115 = (_DWORD *)((char *)v160 + 56 * v158++);
            v161 = 4;
            v196 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v166);
            v116 = *((_QWORD *)v196 + 18);
            if ( v116 )
            {
              v114 = *(_DWORD *)(v116 + 132);
              v161 = *(_DWORD *)(v116 + 136);
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v196, 0LL);
            v117 = v168;
            *v115 = *((_DWORD *)v166 + 6);
            v115[3] = v115[3] & 0xFFFFFFFC | 1;
            v118 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v117);
            v119 = v168;
            v120 = v115[3] ^ ((unsigned __int8)v115[3] ^ (unsigned __int8)(4 * v118)) & 4;
            v115[3] = v120;
            v121 = v120 & 0xFFFFFFF7 | (*((_BYTE *)v119 + 415) == 0 ? 8 : 0);
            v115[3] = v121;
            v122 = v121 ^ (16 * *((_BYTE *)v119 + 416));
            v115[2] = v114;
            v115[3] = v121 ^ v122 & 0x10;
            v123 = v161;
            v115[1] = v161;
            v124 = v123 == 12 || v123 == 32;
            v163 |= v124 << v108;
            v10 |= 1 << v108;
            v162 |= 1 << v108;
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(v104);
            v28 = 0LL;
            *((_BYTE *)v168 + 413) = 0;
          }
          v125 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v104 + 1);
          v102 = v182;
          v104 = (struct DMMVIDPNTARGETMODESET *)((char *)v125 - 8);
          if ( v125 == v195 )
            v104 = (DMMVIDPNPRESENTPATH *)v28;
        }
        while ( v104 );
      }
      v11 = v162;
      v126 = v170;
    }
    else
    {
      v126 = v164;
      v102 = v30;
      v182 = v30;
      v170 = v164;
      v158 = v35;
      v162 = v11;
      v163 = v100;
    }
    v127 = ContainingAdapter;
    v128 = v28;
    v129 = *((_QWORD *)ContainingAdapter + 395);
    if ( *(_DWORD *)(v129 + 96) <= (unsigned int)v28 )
    {
LABEL_173:
      if ( a3 == v28 )
      {
        v138 = v160;
      }
      else
      {
        v134 = v28;
        if ( *(_DWORD *)(v129 + 96) > (unsigned int)v28 )
        {
          v135 = v169;
          do
          {
            v136 = *(_DWORD *)(a4 + 4LL * v134 + 160) & 7;
            if ( (*(_DWORD *)(a4 + 4LL * v134 + 160) & 7) != 0
              && (((1 << (*(_BYTE *)(a4 + 4LL * v134 + 160) & 7)) & v135) != 0
               || (v137 = *(_DWORD *)(a4 + 16 * (v136 + 14))) != 0 && ((v137 - 1) & v137) == 0) )
            {
              *(_DWORD *)(a4 + 4LL * v134 + 160) &= 0xFFFFFFF8;
              v135 |= 1 << v136;
              *(_DWORD *)(a4 + 16 * (v136 + 14)) = 0;
              *(_DWORD *)(a4 + 16 * v136 + 232) = 0;
            }
            ++v134;
          }
          while ( v134 < *(_DWORD *)(*((_QWORD *)v127 + 395) + 96LL) );
          v11 = v162;
          v126 = v170;
        }
        v138 = v160;
        if ( v158 )
        {
          v139 = (int *)((char *)v160 + 12);
          v140 = v158;
          do
          {
            v141 = *(_DWORD *)(a4 + 4LL * *v29 + 160);
            v142 = v141 & 7;
            if ( (v141 & 7) != 0 )
            {
              v143 = *v139 ^ ((unsigned __int8)*v139 ^ (unsigned __int8)(32 * v141)) & 0xE0;
              *v139 = v143;
              *v139 = v143 ^ ((unsigned __int16)v143 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a4 + 16LL * v142 + 232) << 8)) & 0xF00;
            }
            ++v29;
            v139 += 14;
            --v140;
          }
          while ( v140 );
        }
      }
      v144 = v184;
      v174 &= ~v184;
      v145 = v174;
      if ( (v10 & v174) != v174 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 963;
      }
      if ( (v144 & v10) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 968;
      }
      v173 &= ~v10;
      if ( (v173 & v144) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 976;
      }
      if ( (v11 & v144) != v144 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 983;
      }
      if ( (v145 & v11) != v145 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 984;
      }
      if ( (v11 & (v10 | v144)) != v11 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 985;
      }
      v146 = v172;
      if ( (v10 & v172) != v172 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 990;
      }
      if ( (v11 & v146) != v146 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 991;
      }
      if ( (v146 & v164) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 993;
      }
      if ( (v144 & v126) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 994;
      }
      if ( (v164 | v146) != (v126 | v144) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 995;
      }
      v147 = v176;
      if ( (v126 & v176) != v176 )
      {
        WdLogSingleEntry0(1LL);
        v147 = v176;
        WdLogGlobalForLineNumber = 1001;
      }
      if ( (v147 & v10) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1002;
      }
      v177 &= ~v10;
      if ( *(_DWORD *)a4 && *(_DWORD *)a4 != v164 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1014;
      }
      *(_DWORD *)a4 = v164;
      v148 = *(_DWORD *)(a4 + 4);
      if ( v148 && v148 != v126 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1016;
      }
      v149 = v183;
      *(_DWORD *)(a4 + 40) = v173;
      *(_DWORD *)(a4 + 56) = v174;
      *(_DWORD *)(a4 + 20) = v180;
      *(_DWORD *)(a4 + 24) = v175;
      *(_DWORD *)(a4 + 48) = v177;
      *(_DWORD *)(a4 + 52) = v176;
      v150 = v165;
      *(_DWORD *)(a4 + 12) = v144;
      *(_DWORD *)(a4 + 156) = v150;
      *(_DWORD *)(a4 + 256) = v163;
      *(_DWORD *)(a4 + 4) = v126;
      *(_DWORD *)(a4 + 8) = v10;
      *(_DWORD *)(a4 + 28) = v11;
      *(_DWORD *)(a4 + 16) = v146;
      *(_DWORD *)(a4 + 68) = v149;
      *(_DWORD *)(a4 + 84) = 0;
      *(_DWORD *)(a4 + 72) = 0;
      if ( (a2 & 0x10000) != 0 )
      {
        *(_DWORD *)(a4 + 60) = -1;
      }
      else
      {
        v151 = ~(v164 | v126) | HIDWORD(v165);
        v152 = v149 | ((v11 & v151) != 0 ? v151 : 0);
        v153 = v10 & v151;
        v154 = *(_DWORD *)(a4 + 60) | v11 | v152;
        *(_DWORD *)(a4 + 60) = v154;
        if ( (((v10 & v151) - 1) & v10 & v151) != 0 )
        {
          *(_DWORD *)(a4 + 60) = v151 | v154;
        }
        else if ( v153 )
        {
          *(_DWORD *)(a4 + 60) = v154 | v151 & ~v153;
        }
      }
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)a4, 0);
      v186 = 0LL;
      *a5 = v191;
      *a6 = v158;
      v155 = *a7;
      *a7 = v138;
      if ( v155 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v155);
      wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(a8, &v194);
      wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(a9, &v193);
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v190, 0LL);
      v15 = 0;
      goto LABEL_231;
    }
    v130 = v180;
    while ( 1 )
    {
      v161 = v28;
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v102, v128, &v161);
      v28 = 0LL;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        if ( v161 != -1 )
        {
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v182, v161);
          IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)PathFromTarget
                                                                                                  + 12)
                                                                                                + 96LL));
LABEL_169:
          v28 = 0LL;
          if ( IsVidPnSourceActive )
            v130 |= 1 << v128;
        }
      }
      else
      {
        if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
        {
          IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v127 + 395), v128);
          goto LABEL_169;
        }
        WdLogSingleEntry0(1LL);
        v28 = 0LL;
        WdLogGlobalForLineNumber = 847;
      }
      v129 = *((_QWORD *)v127 + 395);
      ++v128;
      v102 = v182;
      if ( v128 >= *(_DWORD *)(v129 + 96) )
      {
        v180 = v130;
        v126 = v170;
        goto LABEL_173;
      }
    }
  }
  v35 = 0LL;
  while ( 1 )
  {
    v167 = 56 * v35;
    v36 = *(_DWORD *)(*((_QWORD *)v34 + 11) + 24LL);
    v29[v35] = v36;
    v37 = *((_QWORD *)v34 + 12);
    v38 = 1 << v36;
    v164 |= 1 << v36;
    v39 = 1 << v36;
    v157 = v36;
    v40 = *(_QWORD *)(v37 + 96);
    v185 = v37;
    v168 = (DMMVIDEOPRESENTTARGET *)v40;
    v187 = 1 << v36;
    if ( (*(_BYTE *)(v40 + 556) & 0x40) != 0 )
      v39 = 0;
    HIDWORD(v165) |= v39;
    LODWORD(v165) = (*(_BYTE *)(*(_QWORD *)(v40 + 536) + 172LL) != 0 ? v38 : 0) | v165;
    TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v40, 0LL);
    v42 = v41;
    v181 = 4;
    v171 = (struct _D3DDDI_RATIONAL)DMMVIDPNTARGET::AcquireCofuncModeSetRef(v43);
    v45 = *(_QWORD *)(*(_QWORD *)&v171 + 144LL);
    if ( v45 )
    {
      v42 = *(_DWORD *)(v45 + 132);
      v181 = *(_DWORD *)(v45 + 136);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v171, v44);
    if ( v182 )
      break;
    v46 = v167;
    v47 = *(_DWORD *)(v185 + 24);
    *(_DWORD *)((char *)v160 + v167 + 12) &= 0xFFFFFFFC;
    *(_DWORD *)((char *)v160 + v46) = v47;
    v48 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v168);
    v49 = v167;
    v50 = v168;
    v51 = *(_DWORD *)((char *)v160 + v167 + 12) ^ ((unsigned __int8)*(_DWORD *)((char *)v160 + v167 + 12) ^ (unsigned __int8)(4 * v48)) & 4;
    *(_DWORD *)((char *)v160 + v167 + 12) = v51;
    v52 = v51 & 0xFFFFFFF7 | (*((_BYTE *)v50 + 415) == 0 ? 8 : 0);
    *(_DWORD *)((char *)v160 + v49 + 12) = v52;
    v53 = v52 ^ (16 * *((_BYTE *)v50 + 416));
    *(_DWORD *)((char *)v160 + v49 + 8) = v42;
    *(_DWORD *)((char *)v160 + v49 + 12) = v52 ^ v53 & 0x10;
    *(_DWORD *)((char *)v160 + v49 + 4) = v181;
    v54 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v50);
    v28 = 0LL;
    if ( !v54 != (*((_BYTE *)v168 + 418) == 0) )
    {
      v175 |= v38;
      v55 = v167;
      v56 = v160;
      if ( TargetLinkTrainingStatus == 13 )
        *(_DWORD *)((char *)v160 + v167 + 12) = *(_DWORD *)((_BYTE *)v160 + v167 + 12) & 0xFFFFFFFC | 1;
      goto LABEL_113;
    }
    if ( TargetLinkTrainingStatus == 13
      || (a2 & 0x4000) != 0
      || (v57 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*((ADAPTER_DISPLAY **)ContainingAdapter + 395), v36),
          v28 = 0LL,
          v57)
      || *((_BYTE *)v168 + 414) )
    {
      v55 = v167;
      v56 = v160;
      *(_DWORD *)((char *)v160 + v167 + 12) = *(_DWORD *)((_BYTE *)v160 + v167 + 12) & 0xFFFFFFFC | ((TargetLinkTrainingStatus != 13) + 1);
      v10 |= v38;
      goto LABEL_113;
    }
LABEL_112:
    v55 = v167;
    v56 = v160;
LABEL_113:
    v98 = *(_DWORD *)((char *)v56 + v55 + 4);
    if ( v98 == 12 || (v21 = v98 == 32, v99 = 0, v21) )
      v99 = 1;
    v100 = (v99 << v36) | v163;
    v163 = v100;
    v101 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v166 + 1);
    v34 = (struct DMMVIDPNTARGETMODESET *)((char *)v101 - 8);
    if ( v101 == v196 )
      v34 = 0LL;
    v35 = v158 + 1;
    v166 = v34;
    ++v158;
    if ( !v34 )
    {
      v11 = v162;
      v31 = 24LL;
      v30 = v188;
      goto LABEL_123;
    }
  }
  v58 = *((_QWORD *)v166 + 12);
  v161 = (TargetLinkTrainingStatus != 13) + 1;
  v59 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v182, *(_DWORD *)(v58 + 24));
  v171 = (struct _D3DDDI_RATIONAL)v59;
  v179 = 4;
  v61 = v59;
  v36 = 0;
  if ( v59 )
  {
    v195 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v59 + 12));
    v63 = *((_QWORD *)v195 + 18);
    if ( v63 )
    {
      v36 = *(_DWORD *)(v63 + 132);
      v179 = *(_DWORD *)(v63 + 136);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v195, v62);
    if ( *(_DWORD *)(*((_QWORD *)v61 + 11) + 24LL) == v157 )
    {
      v64 = v167;
      v65 = *(_DWORD *)(v185 + 24);
      *(_DWORD *)((char *)v160 + v167 + 12) &= 0xFFFFFFFC;
      *(_DWORD *)((char *)v160 + v64) = v65;
      v66 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v168);
      v67 = v168;
      v68 = *(_DWORD *)((char *)v160 + v64 + 12) ^ ((unsigned __int8)*(_DWORD *)((char *)v160 + v64 + 12) ^ (unsigned __int8)(4 * v66)) & 4;
      *(_DWORD *)((char *)v160 + v64 + 12) = v68;
      v69 = v68 & 0xFFFFFFF7 | (*((_BYTE *)v67 + 415) == 0 ? 8 : 0);
      *(_DWORD *)((char *)v160 + v64 + 12) = v69;
      v70 = v69 ^ (16 * *((_BYTE *)v67 + 416));
      *(_DWORD *)((char *)v160 + v64 + 8) = v36;
      *(_DWORD *)((char *)v160 + v64 + 12) = v69 ^ v70 & 0x10;
      *(_DWORD *)((char *)v160 + v64 + 4) = v179;
      v71 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v67, 0LL);
      v73 = v187;
      if ( v71 == 13 )
        v10 |= v187;
      if ( !DMMVIDEOPRESENTTARGET::NeedToBeActive(v72) != (*((_BYTE *)v168 + 418) == 0) )
        v175 |= v73;
      if ( (!*((_BYTE *)ContainingAdapter + 2977) || (a2 & 0x400000) == 0)
        && (v74 = (ADAPTER_DISPLAY **)((char *)ContainingAdapter + 3160),
            !*(_BYTE *)(*((_QWORD *)ContainingAdapter + 395) + 289LL))
        || (v74 = (ADAPTER_DISPLAY **)((char *)ContainingAdapter + 3160),
            v159 = 1,
            !ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*((ADAPTER_DISPLAY **)ContainingAdapter + 395), v157)) )
      {
        v159 = 0;
      }
      if ( TargetLinkTrainingStatus == 13
        || (a2 & 0x4000) != 0
        || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v74, v157)
        || *((_BYTE *)v168 + 414) )
      {
        v75 = v171;
      }
      else
      {
        v75 = v171;
        if ( !*((_BYTE *)v168 + 420)
          && DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch((DMMVIDPNTARGET **)v166, *(DMMVIDPNTARGET ***)&v171, v159) )
        {
          if ( v42 != v36 || v181 != v179 )
            goto LABEL_71;
          v76 = (DMMVIDPNTARGET **)v166;
          if ( *((_DWORD *)v166 + 29) != *(_DWORD *)(*(_QWORD *)&v75 + 116LL) )
          {
            v173 |= 1 << v157;
            goto LABEL_72;
          }
          if ( *((_BYTE *)this + 520) )
          {
LABEL_71:
            v10 |= 1 << v157;
LABEL_72:
            v76 = (DMMVIDPNTARGET **)v166;
          }
          v77 = v157;
          if ( _bittest(&v10, v157) )
          {
            v79 = v166;
          }
          else
          {
            IsVidPnVirtualRefreshRateMatch = DMMVIDPNPRESENTPATH::IsVidPnVirtualRefreshRateMatch(
                                               v76,
                                               *(DMMVIDPNTARGET ***)&v75);
            v79 = v166;
            if ( !IsVidPnVirtualRefreshRateMatch )
            {
              v80 = v157;
              v176 |= 1 << v157;
              goto LABEL_76;
            }
            if ( *((_DWORD *)v166 + 26) == *(_DWORD *)(*(_QWORD *)&v75 + 104LL)
              && *((_WORD *)v166 + 54) == *(_WORD *)(*(_QWORD *)&v75 + 108LL) )
            {
              v77 = v157;
            }
            else
            {
              v80 = v157;
              v177 |= 1 << v157;
LABEL_76:
              v77 = v80;
            }
          }
          if ( *((_BYTE *)v168 + 413) )
          {
            *((_BYTE *)v168 + 413) = 0;
            v183 |= 1 << v77;
          }
          if ( v42 == v36 && v181 == v179 )
            DMMVIDPNPRESENTPATH::SetGammaRamp(
              *(DMMVIDPNPRESENTPATH **)&v75,
              *((const struct DXGK_GAMMA_RAMP **)v79 + 23));
          else
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(*(DMMVIDPNPRESENTPATH **)&v75);
          LOBYTE(v36) = v157;
LABEL_88:
          v28 = 0LL;
          goto LABEL_112;
        }
      }
      *(_DWORD *)((char *)v160 + v167 + 12) = v161 | *(_DWORD *)((_BYTE *)v160 + v167 + 12) & 0xFFFFFFFC;
      goto LABEL_71;
    }
    v60 = v161;
  }
  v81 = v167;
  v82 = v160;
  v83 = v185;
  *(_DWORD *)((char *)v160 + v167) = *(_DWORD *)(v185 + 24);
  if ( !v61 )
    v60 = 3;
  *(_DWORD *)((char *)v160 + v81 + 12) = v60 | *(_DWORD *)((_BYTE *)v160 + v81 + 12) & 0xFFFFFFFC;
  if ( v61 )
  {
    v85 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v168);
    v81 = v167;
    v82 = v160;
    v84 = v85;
  }
  else
  {
    v84 = 0;
  }
  v86 = v168;
  v87 = *(_DWORD *)((char *)v82 + v81 + 12) ^ ((unsigned __int8)*(_DWORD *)((char *)v82 + v81 + 12) ^ (unsigned __int8)(4 * v84)) & 4;
  *(_DWORD *)((char *)v82 + v81 + 12) = v87;
  v88 = v87 & 0xFFFFFFF7 | (*((_BYTE *)v86 + 415) == 0 ? 8 : 0);
  *(_DWORD *)((char *)v82 + v81 + 12) = v88;
  v89 = v88 ^ (16 * *((_BYTE *)v86 + 416));
  *(_DWORD *)((char *)v82 + v81 + 8) = v36;
  LOBYTE(v36) = v157;
  v90 = v88 ^ v89 & 0x10;
  v91 = v162;
  *(_DWORD *)((char *)v82 + v81 + 12) = v90;
  *(_DWORD *)((char *)v82 + v81 + 4) = v179;
  v92 = (1 << v157) | v91;
  v162 = v92;
  if ( v61 )
  {
    v93 = *(_DWORD *)(*((_QWORD *)v61 + 11) + 24LL);
    v29[v158] = v93;
    v162 = (1 << v93) | v92;
    v10 |= 1 << v93;
    DMMVIDPNPRESENTPATH::UpdateGammaRamp(v61);
  }
  v192 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v182, v157, &v192);
  v28 = 0LL;
  if ( NumPathsFromSource < 0 && (NumPathsFromSource != -1071774919 || v192) )
  {
    WdLogSingleEntry0(1LL);
    v28 = 0LL;
    WdLogGlobalForLineNumber = 362;
  }
  v95 = 1 << v157;
  if ( !v192 )
  {
    v184 |= v95;
    goto LABEL_112;
  }
  v10 |= v95;
  v174 |= 1 << v157;
  if ( v9 )
    goto LABEL_107;
  v96 = (void *)operator new[](0x400uLL, 0x4E506456u, 256LL);
  v193 = v96;
  v9 = v96;
  if ( v96 )
  {
    memset(v96, -1, 0x400uLL);
    v28 = 0LL;
LABEL_107:
    v97 = 0;
    while ( v9[16 * v157 + v97] != -1 )
    {
      if ( (unsigned int)++v97 >= 0x10 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 426;
        goto LABEL_88;
      }
    }
    v9[16 * v157 + v97] = *(_DWORD *)(v83 + 24);
    goto LABEL_112;
  }
  v15 = -1073741801;
  WdLogSingleEntry3(6LL, *((int *)ContainingAdapter + 104), *((unsigned int *)ContainingAdapter + 103), -1073741801LL);
  WdLogGlobalForLineNumber = 401;
LABEL_20:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v190, 0LL);
LABEL_231:
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v193);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v194);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v186);
  return v15;
}
