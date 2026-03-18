/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140365C4C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1400608C0 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x140268F3C (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1402AF984 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x140337A6C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x14033C0A8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14033D2A0 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x14033E9CC (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x140365F1C (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x140365F60 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140366154 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x140366D34 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140369800 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x140369EEC (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x140387150 (DxgkCreateSessionViewForCurrentSession.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x14041D59C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        DWORD a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned __int16 v4; // bx
  DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KPROCESS *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct DXGPROCESS *v17; // r12
  __int64 (__fastcall ***v18)(CCD_BTL *, int *); // rax
  signed int active; // ebx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rbx
  DXGGLOBAL *v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 MaximumAdapterCountInSession; // kr00_8
  __int64 v30; // rax
  unsigned int v31; // esi
  DXGGLOBAL *v32; // rax
  __int64 v33; // rbx
  DXGGLOBAL *v34; // rax
  unsigned __int16 v35; // r10
  __int64 v36; // r8
  unsigned __int16 v37; // r11
  unsigned __int16 v38; // bx
  unsigned __int16 v39; // ax
  unsigned __int16 v40; // dx
  unsigned int v41; // r10d
  unsigned int v42; // r9d
  __int64 v43; // r8
  __int64 v44; // r10
  int v45; // edx
  __int64 v46; // rax
  unsigned __int16 v47; // bx
  int v48; // eax
  unsigned int v49; // ebx
  bool v50; // r13
  DWORD LowPart; // r14d
  int v52; // eax
  __int64 v53; // rsi
  int v54; // r15d
  int v55; // eax
  __int64 v56; // rdx
  unsigned __int16 v57; // si
  unsigned int i; // r10d
  unsigned __int16 v59; // ax
  __int64 v60; // rcx
  __int64 v61; // r9
  int v62; // r8d
  unsigned int j; // edx
  struct DXGGLOBAL *v64; // rax
  struct DXGGLOBAL *v65; // rbx
  __int64 v66; // rdx
  unsigned __int16 v67; // si
  __int64 v68; // rcx
  _DWORD *v69; // rax
  __int64 v70; // rcx
  _DWORD *v71; // rax
  __int64 v72; // rcx
  _DWORD *v73; // rax
  __int64 v74; // rdx
  _DWORD *v75; // rcx
  unsigned __int16 v77; // ax
  unsigned __int16 v78; // dx
  __int64 v79; // rdx
  __int64 v80; // r9
  unsigned int v81; // esi
  __int64 v82; // rcx
  unsigned int v83; // r9d
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // r15
  __int64 v87; // r8
  __int64 v88; // rcx
  int v89; // edx
  __int64 v90; // rcx
  __int64 v91; // r8
  unsigned int v92; // edx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned __int16 v99; // ax
  unsigned __int16 v100; // r8
  unsigned __int16 v101; // r9
  __int64 v102; // rbx
  unsigned int v103; // r15d
  __int64 v104; // r10
  LONG v105; // ecx
  int v106; // eax
  int v107; // ebx
  __int64 v108; // rax
  unsigned __int16 v109; // ax
  unsigned __int16 v110; // r9
  __int64 v111; // r8
  __int64 v112; // rbx
  unsigned __int16 v113; // r11
  __int64 v114; // rdx
  __int16 v115; // r9
  __int64 v116; // r11
  unsigned __int16 v117; // ax
  __int64 v118; // r9
  unsigned __int16 v119; // r8
  unsigned __int16 v120; // bx
  __int64 v121; // rdx
  __int64 v122; // r10
  __int64 v123; // r11
  int v124; // r8d
  __int64 v125; // rax
  __int64 v126; // rcx
  unsigned __int16 v127; // ax
  unsigned __int16 v128; // r8
  _DWORD *v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rcx
  _DWORD *v132; // rax
  _DWORD *v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rcx
  _DWORD *v136; // rax
  unsigned int CurrentProcessSessionId; // eax
  _DWORD *v138; // rax
  __int64 v139; // rcx
  _DWORD *v140; // rax
  __int64 v141; // rcx
  _DWORD *v142; // rax
  __int64 v143; // rcx
  _DWORD *v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rbx
  __int64 v147; // r10
  __int64 v148; // rax
  int v149; // eax
  __int64 v150; // rdx
  unsigned __int16 v151[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v152; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v153; // [rsp+36h] [rbp-CAh]
  unsigned __int16 v154; // [rsp+38h] [rbp-C8h]
  struct _LUID Luid; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v156; // [rsp+48h] [rbp-B8h]
  __int64 v157; // [rsp+50h] [rbp-B0h]
  __int64 v158; // [rsp+58h] [rbp-A8h]
  struct D3DKMT_HASH *v159; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v160; // [rsp+68h] [rbp-98h]
  __int64 v161; // [rsp+78h] [rbp-88h]
  __int16 v162; // [rsp+80h] [rbp-80h]
  __int128 v163; // [rsp+88h] [rbp-78h]
  __int64 v164; // [rsp+98h] [rbp-68h]
  __int64 v165; // [rsp+A0h] [rbp-60h]
  char v166; // [rsp+A8h] [rbp-58h]
  int v167; // [rsp+ACh] [rbp-54h]
  int v168; // [rsp+B0h] [rbp-50h]
  __int64 v169; // [rsp+B4h] [rbp-4Ch]
  __int64 v170; // [rsp+C0h] [rbp-40h]
  struct DXGPROCESS *Current; // [rsp+D0h] [rbp-30h]
  struct tagRECT v172; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v173; // [rsp+E8h] [rbp-18h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  char v175; // [rsp+128h] [rbp+28h]

  Luid.LowPart = a2;
  *(_QWORD *)&v172.left = a3;
  v175 = 0;
  LODWORD(v159) = 0;
  v160 = 0LL;
  v161 = 0LL;
  v166 = 1;
  v4 = 8;
  v162 = 0;
  v163 = 0LL;
  v164 = 0LL;
  v165 = 0LL;
  v167 = 0;
  v168 = 1;
  v169 = 0LL;
  v170 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v159, 8LL);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v6, v7, v8);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v12, v13);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 2941;
    goto LABEL_149;
  }
  v14 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v11) != v14 )
  {
    KeStackAttachProcess(v14, &ApcState);
    v175 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v15);
  v17 = Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2958;
LABEL_149:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
    if ( v175 )
      KeUnstackDetachProcess(&ApcState);
    return 3221225485LL;
  }
  if ( !(unsigned int)DxgIsSessionUsingWddmMonitors(v16) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2970;
    active = -1073741790;
LABEL_173:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
    CPROCESSATTACHHELPER::Detach(&ApcState);
    return (unsigned int)active;
  }
  for ( v151[0] = 8; ; v4 = v151[0] )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v159, v4) < v4 )
    {
      WdLogSingleEntry2(6LL, *((_QWORD *)this + 8), v4);
      WdLogGlobalForLineNumber = 2985;
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      return 3221225495LL;
    }
    LODWORD(v169) = v169 | 3;
    LOBYTE(v152) = 0;
    v18 = (__int64 (__fastcall ***)(CCD_BTL *, int *))CCD_BTL::Global();
    active = CCD_BTL::RetrieveActiveTopology(v18, 0, 1, &v159, v151);
    if ( active >= 0 )
    {
      active = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(
                 (CCD_TOPOLOGY *)&v159,
                 (const struct CCD_TOPOLOGY *)&v159);
      if ( active < 0 )
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v152);
      else
        active = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v159);
    }
    if ( active != -1073741789 )
      break;
  }
  if ( active < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), active);
    WdLogGlobalForLineNumber = 3004;
    goto LABEL_173;
  }
  v20 = *((_QWORD *)this + 8);
  v21 = v165;
  v156 = v165;
  v158 = v20;
  v22 = *(unsigned __int16 *)(v20 + 20);
  v154 = v22;
  if ( (_WORD)v22 )
  {
    v138 = (_DWORD *)(v20 + 312);
    v139 = v22;
    do
    {
      *v138 |= 4u;
      v138[3] = 0;
      v138 += 74;
      --v139;
    }
    while ( v139 );
  }
  v23 = *(unsigned __int16 *)(v21 + 20);
  v153 = v23;
  if ( (_WORD)v23 )
  {
    v140 = (_DWORD *)(v21 + 312);
    v141 = v23;
    do
    {
      *v140 |= 4u;
      v140[3] = 0;
      v140 += 74;
      --v141;
    }
    while ( v141 );
  }
  v24 = *((_QWORD *)this + 8);
  v157 = v24;
  v25 = *(unsigned __int16 *)(v24 + 20);
  v152 = v25;
  if ( (_WORD)v25 )
  {
    v142 = (_DWORD *)(v24 + 312);
    v143 = v25;
    do
    {
      *v142 |= 0x10u;
      v142[4] = 0;
      v142 += 74;
      --v143;
    }
    while ( v143 );
  }
  v26 = *(unsigned __int16 *)(v21 + 20);
  v151[0] = v26;
  if ( (_WORD)v26 )
  {
    v144 = (_DWORD *)(v21 + 312);
    v145 = v26;
    do
    {
      *v144 |= 0x10u;
      v144[4] = 0;
      v144 += 74;
      --v145;
    }
    while ( v145 );
  }
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)&v159);
  v27 = DXGGLOBAL::GetGlobal();
  MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(v27);
  v28 = 340 * MaximumAdapterCountInSession;
  if ( !is_mul_ok(MaximumAdapterCountInSession, 0x154uLL) )
    v28 = -1LL;
  *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) = operator new[](v28, 0x63644356u, 256LL);
  v30 = *((_QWORD *)this + 8);
  if ( !*(_QWORD *)(v30 + 48) )
  {
    WdLogSingleEntry2(6LL, this, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 3035;
    if ( (_WORD)v26 )
    {
      v129 = (_DWORD *)(v21 + 312);
      v130 = v26;
      do
      {
        v129[4] = 0;
        *v129 &= ~0x10u;
        v129 += 74;
        --v130;
      }
      while ( v130 );
    }
    if ( (_WORD)v25 )
    {
      v131 = v25;
      v132 = (_DWORD *)(v157 + 312);
      do
      {
        v132[4] = 0;
        *v132 &= ~0x10u;
        v132 += 74;
        --v131;
      }
      while ( v131 );
    }
    if ( (_WORD)v23 )
    {
      v133 = (_DWORD *)(v21 + 312);
      v134 = v23;
      do
      {
        v133[3] = 0;
        *v133 &= ~4u;
        v133 += 74;
        --v134;
      }
      while ( v134 );
    }
    if ( (_WORD)v22 )
    {
      v135 = v22;
      v136 = (_DWORD *)(v158 + 312);
      do
      {
        v136[3] = 0;
        *v136 &= ~4u;
        v136 += 74;
        --v135;
      }
      while ( v135 );
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
    if ( v175 )
      KeUnstackDetachProcess(&ApcState);
    return 3221225495LL;
  }
  *(_WORD *)(v30 + 28) = 0;
  v31 = 0;
  v32 = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::GetMaximumAdapterCountInSession(v32) )
  {
    do
    {
      v33 = 340LL * v31;
      memset((void *)(v33 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)), 0, 0x154uLL);
      memset((void *)(v33 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 8LL), 255, 0x40uLL);
      ++v31;
      v34 = DXGGLOBAL::GetGlobal();
    }
    while ( v31 < DXGGLOBAL::GetMaximumAdapterCountInSession(v34) );
  }
  DxgkRemoveAllSessionViewForCurrentSession();
  v35 = 0;
  if ( *(_WORD *)(v21 + 20) )
  {
    v109 = 0;
    do
    {
      v110 = 0;
      v111 = v21 + 296LL * v109;
      *(_DWORD *)(v111 + 328) = 0;
      v112 = *((_QWORD *)this + 8);
      v113 = *(_WORD *)(v112 + 20);
      while ( v110 < v113 )
      {
        if ( CCD_TOPOLOGY::IsMatchingSource(
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v111 + 56),
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v112 + 296LL * v110 + 56))
          && *(_DWORD *)(v111 + 84) == *(_DWORD *)(v114 + 28) )
        {
          if ( !CCD_TOPOLOGY::IsMatchingSource(
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v111 + 324) + v21 + 56),
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v112 + 296LL * *(unsigned int *)(v114 + 268) + 56)) )
          {
            *(_DWORD *)(v116 + v21 + 328) = 1;
            *(_QWORD *)(296LL * *(unsigned int *)(v111 + 324) + v21 + 252) = 0LL;
          }
          break;
        }
        v110 = v115 + 1;
      }
      if ( v110 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      {
        *(_DWORD *)(296LL * *(unsigned int *)(v111 + 324) + v21 + 328) = 1;
        *(_QWORD *)(296LL * *(unsigned int *)(v111 + 324) + v21 + 252) = 0LL;
      }
      v109 = ++v35;
    }
    while ( v35 < *(_WORD *)(v21 + 20) );
  }
  v36 = *((_QWORD *)this + 8);
  v37 = 0;
  if ( *(_WORD *)(v36 + 20) )
  {
    v117 = 0;
    do
    {
      v118 = v36 + 296LL * v117;
      v119 = 0;
      *(_DWORD *)(v118 + 328) = 0;
      v120 = *(_WORD *)(v21 + 20);
      while ( v119 < v120 )
      {
        if ( CCD_TOPOLOGY::IsMatchingSource(
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v118 + 56),
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v119 + v21 + 56))
          && *(_DWORD *)(v121 + 28) == *(_DWORD *)(v118 + 84) )
        {
          v126 = *(unsigned int *)(v122 + v21 + 324);
          if ( (_DWORD)v126 == v119 && *(_DWORD *)(v118 + 324) == v37 )
          {
            *(_QWORD *)(v118 + 252) = *(_QWORD *)(v122 + v21 + 252);
          }
          else
          {
            v146 = *((_QWORD *)this + 8);
            if ( !CCD_TOPOLOGY::IsMatchingSource(
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v118 + 324) + v146 + 56),
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v21 + 296 * v126 + 56)) )
            {
              *(_DWORD *)(v147 + v146 + 328) = 1;
              *(_QWORD *)(296LL * *(unsigned int *)(v118 + 324) + *((_QWORD *)this + 8) + 252) = 0LL;
            }
          }
          break;
        }
        ++v119;
      }
      if ( v119 >= *(_WORD *)(v21 + 20) )
      {
        *(_DWORD *)(296LL * *(unsigned int *)(v118 + 324) + *((_QWORD *)this + 8) + 328) = 1;
        *(_QWORD *)(296LL * *(unsigned int *)(v118 + 324) + *((_QWORD *)this + 8) + 252) = 0LL;
      }
      v36 = *((_QWORD *)this + 8);
      v117 = ++v37;
    }
    while ( v37 < *(_WORD *)(v36 + 20) );
  }
  v38 = 0;
  if ( *(_WORD *)(v21 + 20) )
  {
    v39 = 0;
    v40 = 0;
    do
    {
      v41 = *(_DWORD *)(v36 + 40);
      v42 = 0;
      if ( v41 )
      {
        v123 = *(_QWORD *)(v36 + 48);
        v124 = *(_DWORD *)(296LL * v39 + v21 + 72);
        do
        {
          v125 = 340LL * v42;
          if ( v124 == *(_DWORD *)(v125 + v123) && *(_DWORD *)(296LL * v40 + v21 + 76) == *(_DWORD *)(v125 + v123 + 4) )
            break;
          ++v42;
        }
        while ( v42 < v41 );
      }
      v43 = 340LL * v42;
      v44 = 296LL * v38;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v43 + 80) |= 1 << *(_DWORD *)(v44 + v21 + 80);
      if ( (*(_QWORD *)(v44 + v21 + 56) & 0x1000000000LL) != 0 )
        v45 = 1 << *(_DWORD *)(v44 + v21 + 80);
      else
        v45 = 0;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v43 + 232) |= v45;
      if ( *(_DWORD *)(v44 + v21 + 328) == 1 )
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v43 + 140) |= 1 << *(_DWORD *)(v44 + v21 + 80);
      v36 = *((_QWORD *)this + 8);
      v46 = *(unsigned int *)(v36 + 40);
      if ( v42 >= (unsigned int)v46 )
      {
        *(_QWORD *)(340 * v46 + *(_QWORD *)(v36 + 48)) = *(_QWORD *)(v44 + v21 + 72);
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 40LL);
        v36 = *((_QWORD *)this + 8);
      }
      v39 = ++v38;
      v40 = v38;
    }
    while ( v38 < *(_WORD *)(v21 + 20) );
  }
  v47 = 0;
  if ( !*(_WORD *)(v36 + 20) )
    goto LABEL_35;
  v77 = 0;
  v78 = 0;
  while ( 2 )
  {
    v79 = 296LL * v78;
    v80 = *(_QWORD *)(296LL * v77 + v36 + 56);
    if ( (v80 & 0x187) != 0 )
    {
      *(_QWORD *)(v79 + v36 + 56) = v80 | 0x40000000000000LL;
      *(_QWORD *)(v79 + *((_QWORD *)this + 8) + 64) |= *(_DWORD *)(v79 + *((_QWORD *)this + 8) + 56) & 0x187;
    }
    v81 = 0;
    *(_DWORD *)(*((_QWORD *)this + 8) + v79 + 248) = 0;
    v82 = *((_QWORD *)this + 8);
    v83 = *(_DWORD *)(v82 + 40);
    if ( v83 )
    {
      v84 = *(_QWORD *)(v82 + 48);
      do
      {
        v85 = 340LL * v81;
        if ( *(_DWORD *)(v82 + v79 + 72) == *(_DWORD *)(v85 + v84)
          && *(_DWORD *)(v82 + v79 + 76) == *(_DWORD *)(v85 + v84 + 4) )
        {
          break;
        }
        ++v81;
      }
      while ( v81 < v83 );
    }
    v86 = 340LL * v81;
    *(_DWORD *)(*(_QWORD *)(v82 + 48) + v86 + 84) |= 1 << *(_DWORD *)(296LL * v47 + v82 + 80);
    v87 = *((_QWORD *)this + 8);
    v88 = 296LL * v47;
    if ( (*(_QWORD *)(v88 + v87 + 56) & 0x1000000000LL) != 0 )
      v89 = 1 << *(_DWORD *)(v88 + v87 + 80);
    else
      v89 = 0;
    *(_DWORD *)(*(_QWORD *)(v87 + 48) + v86 + 232) |= v89;
    v90 = *((_QWORD *)this + 8);
    v91 = 296LL * v47;
    v92 = *(_DWORD *)(v91 + v90 + 324);
    if ( v92 == v47 )
    {
      *(_DWORD *)(*(_QWORD *)(v90 + 48) + v86 + 72) |= 1 << *(_DWORD *)(v91 + v90 + 80);
      goto LABEL_81;
    }
    if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v92, v47, 1) )
LABEL_81:
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL)
                + 4 * (85LL * v81 + *(unsigned int *)(296LL * v47 + *((_QWORD *)this + 8) + 80))
                + 8) = v47;
    v93 = *((_QWORD *)this + 8);
    v94 = 296LL * v47;
    if ( *(_DWORD *)(v94 + v93 + 328) == 1 )
      *(_DWORD *)(*(_QWORD *)(v93 + 48) + v86 + 140) |= 1 << *(_DWORD *)(v94 + v93 + 80);
    v95 = *((_QWORD *)this + 8);
    v96 = *(unsigned int *)(v95 + 40);
    if ( v81 >= (unsigned int)v96 )
    {
      *(_QWORD *)(340 * v96 + *(_QWORD *)(v95 + 48)) = *(_QWORD *)(296LL * v47 + v95 + 72);
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 40LL);
    }
    v36 = *((_QWORD *)this + 8);
    v77 = ++v47;
    v78 = v47;
    if ( v47 < *(_WORD *)(v36 + 20) )
      continue;
    break;
  }
  v17 = Current;
LABEL_35:
  v48 = *(_DWORD *)(v36 + 40);
  v49 = 0;
  v50 = v48 != 0;
  if ( v48 )
  {
    LowPart = Luid.LowPart;
    do
    {
      v52 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v49);
      v53 = 340LL * v49;
      v54 = v52;
      if ( v52 < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v49 + 4),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v49),
          *((_QWORD *)this + 8),
          v52);
        v148 = *((_QWORD *)this + 8);
        WdLogGlobalForLineNumber = 3349;
        CCD_TOPOLOGY::MarkPathsApplyFailure(this, (const struct _LUID *)(v53 + *(_QWORD *)(v148 + 48)), -1, v54);
      }
      else if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v53 + 80) )
      {
        v55 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                this,
                v17,
                LowPart,
                v49,
                *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v172.left);
        if ( v55 >= 0 )
        {
          v50 = 0;
        }
        else
        {
          WdLogSingleEntry4(
            2LL,
            *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v49 + 4),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v49),
            *((_QWORD *)this + 8),
            v55);
          WdLogGlobalForLineNumber = 3375;
        }
      }
      ++v49;
    }
    while ( v49 < *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) );
    v21 = v156;
  }
  DxgkInvalidateQdcCache();
  v56 = *((_QWORD *)this + 8);
  v57 = 0;
  if ( *(_WORD *)(v56 + 20) )
  {
    v99 = 0;
    v100 = 0;
    v101 = 0;
    do
    {
      v102 = 296LL * v101;
      v103 = *(_DWORD *)(296LL * v99 + v56 + 324);
      if ( *(int *)(v56 + v102 + 248) >= 0 && (v103 == v100 || !CCD_TOPOLOGY::IsSameCloneGroup(this, v103, v100, 1)) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)this + 8) + v102 + 56) & 0x20800) != 0x20800LL )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3407;
        }
        v104 = *((_QWORD *)this + 8);
        v172.left = *(_DWORD *)(v104 + v102 + 200);
        v172.right = *(_DWORD *)(v104 + v102 + 208) + v172.left;
        v172.top = *(_DWORD *)(v104 + v102 + 204);
        v105 = *(_DWORD *)(v104 + v102 + 212) + v172.top;
        Luid = 0LL;
        v172.bottom = v105;
        if ( *(_DWORD *)(v104 + v102 + 252) || *(_DWORD *)(v104 + v102 + 256) )
        {
          Luid = *(struct _LUID *)(v104 + v102 + 252);
        }
        else
        {
          if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3430;
          }
          v104 = *((_QWORD *)this + 8);
        }
        v106 = DxgkCreateSessionViewForCurrentSession(
                 (struct _LUID *)(296LL * v57 + v104 + 72),
                 *(_DWORD *)(296LL * v57 + v104 + 80),
                 &v172,
                 v103 == v57,
                 &Luid);
        v107 = v106;
        if ( v106 >= 0 )
        {
          if ( v103 == v57 )
            ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
        }
        else
        {
          WdLogSingleEntry4(
            2LL,
            *(int *)(296LL * v57 + *((_QWORD *)this + 8) + 76),
            *(unsigned int *)(296LL * v57 + *((_QWORD *)this + 8) + 72),
            *(unsigned int *)(296LL * v57 + *((_QWORD *)this + 8) + 80),
            v106);
          v108 = *((_QWORD *)this + 8);
          WdLogGlobalForLineNumber = 3448;
          *(_DWORD *)(296LL * v57 + v108 + 248) = v107;
        }
      }
      v56 = *((_QWORD *)this + 8);
      v99 = ++v57;
      v100 = v57;
      v101 = v57;
    }
    while ( v57 < *(_WORD *)(v56 + 20) );
    v21 = v156;
  }
  CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
  for ( i = 0; ; ++i )
  {
    v59 = v165 ? *(_WORD *)(v165 + 20) : 0;
    if ( i >= v59 )
      break;
    v60 = 296LL * i;
    *(_DWORD *)(v60 + v165 + 324) = -27918336;
  }
  v61 = *((_QWORD *)this + 8);
  v62 = 0;
  for ( j = 0; j < *(_DWORD *)(v61 + 40); ++j )
  {
    v97 = 340LL * j;
    v98 = *(_QWORD *)(v61 + 48);
    if ( *(_DWORD *)(v97 + v98 + 96) || *(_DWORD *)(v97 + v98 + 88) )
    {
      v62 = 0;
      break;
    }
    if ( *(_DWORD *)(v97 + v98 + 92)
      || *(_DWORD *)(v97 + v98 + 124)
      || *(_DWORD *)(v97 + v98 + 120)
      || *(_DWORD *)(v97 + v98 + 132) )
    {
      v62 = 1;
    }
  }
  if ( v62 )
  {
    v172 = 0LL;
    v172.left = 11;
    v173 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v172.left) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3509;
    }
  }
  v64 = DXGGLOBAL::GetGlobal();
  v65 = v64;
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) > 1u )
    DXGGLOBAL::RecordFeatureUsage(v64, 0LL, 1LL);
  v66 = *((_QWORD *)this + 8);
  v67 = 0;
  if ( *(_WORD *)(v66 + 20) )
  {
    v127 = 0;
    v128 = 0;
    do
    {
      if ( *(int *)(296LL * v127 + v66 + 248) >= 0 )
      {
        v149 = *(_DWORD *)(296LL * v128 + v66 + 264);
        if ( v149 == 12 )
        {
          v150 = 4LL;
LABEL_206:
          DXGGLOBAL::RecordFeatureUsage(v65, v150, 1LL);
          goto LABEL_145;
        }
        if ( v149 == 30 )
        {
          v150 = 5LL;
          goto LABEL_206;
        }
      }
LABEL_145:
      v66 = *((_QWORD *)this + 8);
      v127 = ++v67;
      v128 = v67;
    }
    while ( v67 < *(_WORD *)(v66 + 20) );
  }
  v68 = v151[0];
  active = v50 ? 0xC0000001 : 0;
  if ( v151[0] )
  {
    v69 = (_DWORD *)(v21 + 312);
    do
    {
      v69[4] = 0;
      *v69 &= ~0x10u;
      v69 += 74;
      --v68;
    }
    while ( v68 );
  }
  v70 = v152;
  if ( v152 )
  {
    v71 = (_DWORD *)(v157 + 312);
    do
    {
      v71[4] = 0;
      *v71 &= ~0x10u;
      v71 += 74;
      --v70;
    }
    while ( v70 );
  }
  v72 = v153;
  if ( v153 )
  {
    v73 = (_DWORD *)(v21 + 312);
    do
    {
      v73[3] = 0;
      *v73 &= ~4u;
      v73 += 74;
      --v72;
    }
    while ( v72 );
  }
  if ( v154 )
  {
    v74 = v154;
    v75 = (_DWORD *)(v158 + 312);
    do
    {
      v75[3] = 0;
      *v75 &= ~4u;
      v75 += 74;
      --v74;
    }
    while ( v74 );
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
  if ( v175 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)active;
}
