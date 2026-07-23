/*
 * XREFs of PpmParkComputeUnparkMask @ 0x14025E0F0
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     PpmParkBuildTopologyCandidates @ 0x140253B8C (PpmParkBuildTopologyCandidates.c)
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14025DB70 (PpmParkFindSpecificTopologyMask.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x14025DE90 (KeGetTopologySiblingAffinityForProcessor.c)
 *     KeFindNextProcessorIndexEx @ 0x14025F64C (KeFindNextProcessorIndexEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmEventTraceCoreParkingSelection @ 0x140418C30 (PpmEventTraceCoreParkingSelection.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1404201A8 (PpmHeteroRestrictToFavoredClass.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     ?RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140452C14 (-RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14048A580 (KeFindFirstSetRightAffinityEx.c)
 *     Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140494CFC (Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkSeedToIndex @ 0x1404F44AC (PpmParkSeedToIndex.c)
 *     PpmEventParkNodePreference @ 0x1406118C0 (PpmEventParkNodePreference.c)
 *     Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline @ 0x1406122BC (Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkApplyMixedTopologyPolicy @ 0x140612450 (PpmParkApplyMixedTopologyPolicy.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PpmParkComputeUnparkMask(
        __int64 a1,
        struct _KAFFINITY_EX *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int a6,
        struct _KAFFINITY_EX *a7,
        unsigned __int16 *a8,
        struct _KAFFINITY_EX *a9,
        struct _KAFFINITY_EX *a10,
        _DWORD *a11,
        __int64 *a12,
        unsigned int a13,
        char a14,
        char a15,
        int a16)
{
  _DWORD *v17; // r14
  _BYTE *v19; // rdi
  int Next_high; // eax
  __int64 v21; // rbx
  struct _KAFFINITY_EX *v22; // r13
  struct _KAFFINITY_EX *v23; // r12
  struct _KAFFINITY_EX *v24; // rax
  size_t v25; // r8
  struct _KAFFINITY_EX *v26; // rcx
  struct _KAFFINITY_EX *v27; // rax
  $B38C3B1372D6E954799962D5DD404846 *v28; // rcx
  struct _KAFFINITY_EX *v29; // rax
  size_t v30; // r8
  struct _KAFFINITY_EX *v31; // rax
  unsigned __int16 *v32; // rcx
  struct _KAFFINITY_EX *v33; // rax
  struct _KAFFINITY_EX *v34; // rcx
  struct _KAFFINITY_EX *v35; // rcx
  struct _KAFFINITY_EX *v36; // r8
  char v37; // al
  struct _KAFFINITY_EX *v38; // rdi
  struct _KAFFINITY_EX *v39; // rbx
  struct _KAFFINITY_EX *v40; // rdi
  struct _KAFFINITY_EX *v41; // rsi
  char v42; // bl
  int v43; // eax
  struct _KAFFINITY_EX *v44; // rbx
  $B38C3B1372D6E954799962D5DD404846 *v45; // rcx
  struct _KAFFINITY_EX *v46; // r8
  struct _KAFFINITY_EX *v47; // rcx
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  char v51; // al
  struct _KAFFINITY_EX *v52; // rdi
  unsigned __int16 v53; // cx
  struct _KAFFINITY_EX *v54; // r8
  unsigned __int16 Count; // r8
  struct _KAFFINITY_EX *v56; // r9
  unsigned __int16 v57; // dx
  struct _KAFFINITY_EX *v58; // r8
  struct _KAFFINITY_EX *v59; // r8
  struct _KAFFINITY_EX *v60; // r8
  struct _KAFFINITY_EX *Prcb; // rax
  size_t v62; // r8
  bool v63; // zf
  struct _KAFFINITY_EX *v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int16 v67; // cx
  unsigned int FirstSetRightAffinity; // eax
  int v69; // ecx
  unsigned __int64 v70; // rax
  unsigned int v71; // esi
  __int64 v72; // rdi
  __int64 v73; // r13
  __int16 v74; // ax
  int v75; // eax
  size_t v76; // r8
  struct _KAFFINITY_EX *v77; // rdx
  __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int16 v80; // cx
  unsigned __int16 v81; // cx
  unsigned __int16 v82; // cx
  int v83; // eax
  struct _KAFFINITY_EX *v84; // rbx
  char v85; // bl
  struct _KAFFINITY_EX *v86; // rdx
  struct _KAFFINITY_EX *v87; // rdx
  char v88; // bl
  char v89; // bl
  char v90; // al
  struct _KAFFINITY_EX *v91; // rbx
  unsigned __int16 *v92; // rdx
  _WORD v93[2]; // [rsp+B0h] [rbp-80h] BYREF
  char v94; // [rsp+B4h] [rbp-7Ch]
  char v95; // [rsp+B5h] [rbp-7Bh]
  unsigned int v96; // [rsp+B8h] [rbp-78h]
  char v97; // [rsp+BCh] [rbp-74h]
  char v98; // [rsp+BDh] [rbp-73h] BYREF
  char v99; // [rsp+BEh] [rbp-72h]
  int v100; // [rsp+C0h] [rbp-70h]
  struct _KAFFINITY_EX *v101; // [rsp+C8h] [rbp-68h]
  char v102; // [rsp+D0h] [rbp-60h]
  int v103; // [rsp+D4h] [rbp-5Ch]
  struct _KAFFINITY_EX *v104; // [rsp+D8h] [rbp-58h]
  struct _KAFFINITY_EX *v105; // [rsp+E0h] [rbp-50h]
  struct _KAFFINITY_EX *v106; // [rsp+E8h] [rbp-48h]
  int v107; // [rsp+F0h] [rbp-40h]
  unsigned int v108; // [rsp+F4h] [rbp-3Ch] BYREF
  struct _KAFFINITY_EX *v109; // [rsp+F8h] [rbp-38h]
  struct _KAFFINITY_EX *v110; // [rsp+100h] [rbp-30h]
  struct _KAFFINITY_EX *v111; // [rsp+108h] [rbp-28h]
  struct _KAFFINITY_EX *v112; // [rsp+110h] [rbp-20h]
  unsigned int NextProcessorIndex; // [rsp+118h] [rbp-18h]
  struct _KAFFINITY_EX *v114; // [rsp+120h] [rbp-10h]
  struct _KAFFINITY_EX *v115; // [rsp+128h] [rbp-8h]
  struct _KAFFINITY_EX *v116; // [rsp+130h] [rbp+0h]
  struct _KAFFINITY_EX *v117; // [rsp+138h] [rbp+8h]
  struct _KAFFINITY_EX *v118; // [rsp+140h] [rbp+10h]
  __int64 v119; // [rsp+148h] [rbp+18h]
  struct _KAFFINITY_EX *v120; // [rsp+150h] [rbp+20h]
  __int64 v121; // [rsp+158h] [rbp+28h]
  struct _KAFFINITY_EX *v122; // [rsp+160h] [rbp+30h]
  struct _KAFFINITY_EX *v123; // [rsp+168h] [rbp+38h]
  __int64 *v124; // [rsp+170h] [rbp+40h]
  struct _KAFFINITY_EX *v125; // [rsp+178h] [rbp+48h]
  struct _KAFFINITY_EX *v126; // [rsp+180h] [rbp+50h]
  struct _KAFFINITY_EX *v127; // [rsp+188h] [rbp+58h]
  int v128; // [rsp+190h] [rbp+60h]
  int v129; // [rsp+194h] [rbp+64h]
  unsigned __int16 *v130; // [rsp+198h] [rbp+68h]
  void *v131; // [rsp+1A0h] [rbp+70h]
  struct _KAFFINITY_EX *v132; // [rsp+1A8h] [rbp+78h]
  __int64 v133; // [rsp+1B0h] [rbp+80h]
  __int64 v134; // [rsp+1B8h] [rbp+88h]
  __int64 v135; // [rsp+1C0h] [rbp+90h]
  __int64 v136; // [rsp+1C8h] [rbp+98h]
  __int64 v137; // [rsp+1D0h] [rbp+A0h]
  __int128 v138; // [rsp+1D8h] [rbp+A8h] BYREF
  __int64 v139; // [rsp+1E8h] [rbp+B8h]
  _DWORD *v140; // [rsp+1F0h] [rbp+C0h]
  struct _KAFFINITY_EX *v141; // [rsp+1F8h] [rbp+C8h]
  void *v142; // [rsp+200h] [rbp+D0h]
  struct _KAFFINITY_EX v143; // [rsp+210h] [rbp+E0h] BYREF

  v17 = a11;
  v124 = a12;
  v132 = a10;
  v105 = a7;
  v115 = a2;
  v119 = a1;
  v116 = (struct _KAFFINITY_EX *)a8;
  v130 = a4;
  v140 = a11;
  memset_0(&v143.8, 0, sizeof(v143.8));
  v19 = PpmCurrentProfile;
  v139 = 0LL;
  Next_high = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v21 = 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v138 = 0LL;
  v108 = 0;
  v96 = 0;
  *(_QWORD *)&v143.Count = 2097153LL;
  LOBYTE(Next_high) = *((_BYTE *)PpmCurrentProfile + v21 + 708);
  v107 = Next_high;
  LOBYTE(Next_high) = *((_BYTE *)PpmCurrentProfile + v21 + 709);
  v103 = Next_high;
  v128 = *(unsigned __int16 *)(a1 + 1212);
  v133 = *(_QWORD *)(a1 + 1216);
  v122 = PpmParkPerfCheckAffinities + 9;
  v22 = PpmParkPerfCheckAffinities + 22;
  v141 = PpmParkPerfCheckAffinities + 22;
  v123 = PpmParkPerfCheckAffinities + 10;
  v23 = PpmParkPerfCheckAffinities + 11;
  v101 = PpmParkPerfCheckAffinities + 12;
  v114 = PpmParkPerfCheckAffinities + 13;
  v126 = PpmParkPerfCheckAffinities + 14;
  v117 = PpmParkPerfCheckAffinities + 15;
  v106 = PpmParkPerfCheckAffinities + 16;
  v104 = PpmParkPerfCheckAffinities + 18;
  v127 = PpmParkPerfCheckAffinities + 19;
  v110 = PpmParkPerfCheckAffinities + 20;
  v125 = PpmParkPerfCheckAffinities + 21;
  v112 = PpmParkPerfCheckAffinities + 23;
  v121 = (__int64)&PpmParkPerfCheckAffinities[17];
  v109 = PpmParkPerfCheckAffinities + 24;
  v111 = PpmParkPerfCheckAffinities + 25;
  v120 = PpmParkPerfCheckAffinities + 26;
  v118 = PpmParkPerfCheckAffinities + 27;
  memset_0(&v143.8, 0, sizeof(v143.8));
  memset_0(&v122->8, 0, 8LL * v122->Count);
  v122->Count = 1;
  memset_0(&v123->8, 0, 8LL * v123->Count);
  v123->Count = 1;
  memset_0(&v23->8, 0, 8LL * v23->Count);
  v24 = v101;
  v23->Count = 1;
  v25 = 8LL * v24->Count;
  v131 = &v24->8;
  memset_0(&v24->8, 0, v25);
  v26 = v114;
  v101->Count = 1;
  memset_0(&v26->8, 0, 8LL * v26->Count);
  v27 = v126;
  v28 = &v126->8;
  v114->Count = 1;
  memset_0(v28, 0, 8LL * v27->Count);
  v29 = v117;
  v126->Count = 1;
  memset_0(&v29->8, 0, 8LL * v29->Count);
  v117->Count = 1;
  memset_0(&v106->8, 0, 8LL * v106->Count);
  v106->Count = 1;
  v30 = 8LL * v104->Count;
  v142 = &v104->8;
  memset_0(&v104->8, 0, v30);
  v104->Count = 1;
  memset_0(&v127->8, 0, 8LL * v127->Count);
  v127->Count = 1;
  memset_0(&v110->8, 0, 8LL * v110->Count);
  v110->Count = 1;
  memset_0(&v125->8, 0, 8LL * v125->Count);
  v125->Count = 1;
  memset_0(&v22->8, 0, 8LL * v22->Count);
  v31 = v112;
  v22->Count = 1;
  memset_0(&v31->8, 0, 8LL * v31->Count);
  v32 = (unsigned __int16 *)v121;
  v112->Count = 1;
  memset_0(v32 + 4, 0, 8LL * *v32);
  *(_WORD *)v121 = 1;
  memset_0(&v109->8, 0, 8LL * v109->Count);
  v33 = v111;
  v109->Count = 1;
  memset_0(&v33->8, 0, 8LL * v33->Count);
  v34 = v120;
  v111->Count = 1;
  memset_0(&v34->8, 0, 8LL * v34->Count);
  v35 = v118;
  v120->Count = 1;
  memset_0(&v35->8, 0, 8LL * v35->Count);
  v36 = v115;
  v118->Count = 1;
  RtlpCopyAffinityEx(v114, v114->Size, v36);
  v37 = v19[v21 + 710];
  v38 = v115;
  v102 = v37;
  RtlAndAffinityEx(a3, &v115->Count, (__int64)v117);
  memset_0(&a9->8, 0, 8LL * a9->Count);
  v39 = v132;
  a9->Count = 1;
  memset_0(&v39->8, 0, 8LL * v39->Count);
  v39->Count = 1;
  if ( a6 && a5 )
  {
    if ( PpmParkPreferenceHandler )
    {
      guard_dispatch_icall_no_overrides(0LL, PpmCheckTime, a5);
      PpmEventParkNodePreference(
        (_DWORD)v38,
        (unsigned __int16)a5,
        (_DWORD)v105,
        (_DWORD)v116,
        (__int64)v110,
        (__int64)v112);
      memset_0(&v143.8, 0, 8LL * v143.Count);
      v143.Count = 1;
      RtlOrAffinityEx(v105, v116, (__int64)&v143);
      RtlSubtractAffinityEx(v110, &v143, (__int64)v110);
      RtlSubtractAffinityEx(v112, &v143, (__int64)v112);
    }
    v40 = v127;
    RtlSubtractAffinityEx(v115, v105, (__int64)v127);
    RtlSubtractAffinityEx(v40, v116, (__int64)v40);
    RtlSubtractAffinityEx(v40, v110, (__int64)v40);
    RtlSubtractAffinityEx(v40, v112, (__int64)v40);
    RtlpCopyAffinityEx(a9, a9->Size, v115);
    v41 = v126;
    v42 = 0;
    if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v116->Count, (__int64)v126) )
    {
      *a11 |= 0x200u;
      v42 = 0;
      goto LABEL_18;
    }
    if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v112->Count, (__int64)v126) )
    {
      v43 = 1024;
LABEL_14:
      *a11 |= v43;
      v42 = v43;
      goto LABEL_18;
    }
    if ( (PpmHeteroHgsContainmentState & 8) != 0 )
    {
      v44 = v114;
      v45 = &v114->8;
      *(_QWORD *)&v114->Count = 2097153LL;
      memset_0(v45, 0, sizeof($B38C3B1372D6E954799962D5DD404846));
      RtlpCopyAffinityEx(
        v44,
        v44->Size,
        (struct _KAFFINITY_EX *)(264LL * *(int *)(*(_QWORD *)(v119 + 1240) + 4LL) + *(_QWORD *)(v119 + 1240) + 16LL));
      if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v44->Count, (__int64)v41) )
      {
        v43 = 0x400000;
        goto LABEL_14;
      }
      v42 = v96;
    }
    else
    {
      if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v127->Count, (__int64)v126) )
      {
        v43 = 2048;
        goto LABEL_14;
      }
      if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v110->Count, (__int64)v126) )
      {
        v43 = 0x80000;
        goto LABEL_14;
      }
    }
LABEL_18:
    RtlpCopyAffinityEx(v22, v22->Size, v41);
    memset_0(&v101->8, 0, 8LL * v101->Count);
    v101->Count = 1;
    memset_0(&v104->8, 0, 8LL * v104->Count);
    v104->Count = 1;
    RtlpCopyAffinityEx(v23, v23->Size, v22);
    RtlAndAffinityEx(&v117->Count, v130, (__int64)v122);
    RtlSubtractAffinityEx(v115, v117, (__int64)v123);
    RtlAndAffinityEx(&v123->Count, v130, (__int64)v123);
    v100 = 0;
    v99 = -1;
    memset_0((void *)(v121 + 8), 0, 8LL * *(unsigned __int16 *)v121);
    *(_WORD *)v121 = 1;
    NextProcessorIndex = -1;
    v98 = 0;
    memset_0(&v120->8, 0, 8LL * v120->Count);
    v120->Count = 1;
    memset_0(&v118->8, 0, 8LL * v118->Count);
    v46 = v114;
    v47 = v109;
    v118->Count = 1;
    RtlpCopyAffinityEx(v47, v47->Size, v46);
    v97 = 0;
    v48 = *(_QWORD *)(v119 + 1248);
    v95 = v103;
    v94 = v107;
    v93[0] = 0;
    v135 = v48 + 16;
    v134 = v48 + 280;
    v137 = v48 + 560;
    v136 = v48 + 824;
    if ( (unsigned __int8)(v107 - 3) > 3u && (unsigned __int8)(v103 - 3) > 3u )
      goto LABEL_37;
    v97 = 1;
    if ( PopHeteroSystem != 5 && !PpmParkTopologyMixedPolicyEnabled || (unsigned __int8)PpmMaxCoreClasses > 2u )
    {
      v49 = (unsigned __int8)v107;
      v50 = (unsigned __int8)v103;
      if ( (unsigned __int8)(v107 - 3) <= 3u )
        v49 = 0;
      v107 = v49;
      if ( (unsigned __int8)(v103 - 3) <= 3u )
        v50 = 0;
      v103 = v50;
    }
    if ( PopHeteroSystem != 2 )
    {
      if ( PopHeteroSystem == 3 )
        goto LABEL_32;
      if ( PopHeteroSystem == 5 )
      {
        v93[0] = 257;
        goto LABEL_37;
      }
      if ( PopHeteroSystem != 6 )
      {
LABEL_32:
        v93[0] = 1;
LABEL_37:
        v52 = v125;
        while ( 1 )
        {
          v53 = 0;
          if ( !v23->Count )
            return;
          while ( !v23->Bitmap[v53] )
          {
            if ( ++v53 >= v23->Count )
              return;
          }
          if ( (unsigned int)RtlAndAffinityEx(&v23->Count, &v122->Count, (__int64)v106) )
          {
            v54 = v106;
            *v17 |= 0x20000u;
            RtlpCopyAffinityEx(v23, v23->Size, v54);
          }
          if ( ((PopHeteroSystem - 3) & 0xFFFFFFFC) == 0 && PopHeteroSystem != 4 )
          {
            *v17 |= 0x8000u;
            PpmHeteroRestrictToFavoredClass(v23, a13, v100, a16, v121, (__int64)v114, (__int64)&v143);
            if ( PopHeteroSystem == 5 && v97 && PpmHeteroPolicy == 4 )
              LOBYTE(v93[0]) = v100 < a13;
            Count = v143.Count;
            if ( v143.Count >= v109->Count )
            {
              v56 = &v143;
              Count = v109->Count;
            }
            else
            {
              v56 = v109;
            }
            v57 = 0;
            if ( Count )
            {
              while ( v143.Bitmap[v57] == v109->Bitmap[v57] )
              {
                if ( ++v57 >= Count )
                  goto LABEL_59;
              }
LABEL_61:
              v98 = 1;
              RtlpCopyAffinityEx(v118, v118->Size, &v143);
              RtlpCopyAffinityEx(v109, v109->Size, &v143);
            }
            else
            {
LABEL_59:
              while ( v57 < v56->Count )
              {
                if ( v56->Bitmap[v57] )
                  goto LABEL_61;
                ++v57;
              }
            }
          }
          RtlpCopyAffinityEx(v111, v111->Size, v115);
          PpmParkFindSpecificTopologyMask(
            &v109->Count,
            v111,
            &v23->Count,
            *v124,
            NextProcessorIndex,
            5u,
            v95,
            0LL,
            0LL,
            &v98);
          PpmParkFindSpecificTopologyMask(
            &v109->Count,
            v111,
            &v23->Count,
            *v124,
            NextProcessorIndex,
            2u,
            v94,
            v120,
            v118,
            0LL);
          RtlAndAffinityEx(&v111->Count, &v109->Count, (__int64)v106);
          v96 = PpmParkSeedToIndex(v106, *v124);
          if ( (unsigned int)RtlAndAffinityEx(&v23->Count, &v123->Count, (__int64)v106) )
          {
            v58 = v106;
            *v17 |= 0x1000u;
            RtlpCopyAffinityEx(v23, v23->Size, v58);
          }
          if ( !*((_BYTE *)v124 + 16) && RtlSubtractAffinityEx(v23, v117, (__int64)v106) )
          {
            v59 = v106;
            *v17 |= 0x2000u;
            RtlpCopyAffinityEx(v23, v23->Size, v59);
          }
          if ( (unsigned int)RtlAndAffinityEx(&v23->Count, &v111->Count, (__int64)v106) )
          {
            v60 = v106;
            *v17 |= 0x1000000u;
            RtlpCopyAffinityEx(v23, v23->Size, v60);
          }
          NextProcessorIndex = KeFindNextProcessorIndexEx(v23, v96);
          Prcb = (struct _KAFFINITY_EX *)KeGetPrcb(NextProcessorIndex);
          v62 = 8LL * v52->Count;
          v105 = Prcb;
          memset_0(&v52->8, 0, v62);
          v63 = PpmParkCoreMask == 0;
          v64 = v105;
          v52->Count = 1;
          v65 = LOBYTE(v64->StaticBitmap[25]);
          if ( v63 )
            v66 = v64->StaticBitmap[24];
          else
            v66 = v64[138].StaticBitmap[9];
          if ( LOBYTE(v64->StaticBitmap[25]) )
          {
            if ( v52->Size <= (unsigned __int16)v65 )
              goto LABEL_76;
            v52->Count = v65 + 1;
          }
          v52->Bitmap[v65] |= v66;
LABEL_76:
          RtlSubtractAffinityEx(a9, v52, (__int64)a9);
          if ( v100 < a5 )
          {
            if ( v133 && *(_DWORD *)(v119 + 1192) == 3 )
            {
              LOWORD(v139) = 0;
              *(_QWORD *)&v138 = v52;
              v70 = v52->Bitmap[0];
              v129 = v128 - v100 + a5 - 1;
              *((_QWORD *)&v138 + 1) = v70;
              if ( !(unsigned int)KeEnumerateNextProcessor(&v108, &v138) )
              {
                v71 = v129;
                v72 = v119;
                v73 = v133;
                do
                {
                  if ( v71 < *(unsigned __int16 *)(v72 + 8) && *(_DWORD *)(v73 + 4LL * v71) != v108 )
                  {
                    *(_DWORD *)(v73 + 4LL * v71) = v108;
                    *(_BYTE *)(v72 + 1214) = 1;
                  }
                  --v71;
                }
                while ( !(unsigned int)KeEnumerateNextProcessor(&v108, &v138) );
                v17 = v140;
                v22 = v141;
                v52 = v125;
                v41 = v126;
              }
              v74 = RtlCountSetBitsAffinityEx(&v52->Count);
              *(_WORD *)(v119 + 1212) += v74;
            }
          }
          else
          {
            RtlOrAffinityEx(v132, v52, (__int64)v132);
            RtlpCopyAffinityEx(&v143, v143.Size, v52);
            if ( PpmParkNewSoftParkRankList && PpmParkOldSoftParkRankList )
            {
              while ( 1 )
              {
                v67 = 0;
                if ( !v143.Count )
                  break;
                while ( !v143.Bitmap[v67] )
                {
                  if ( ++v67 >= v143.Count )
                    goto LABEL_96;
                }
                FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&v143);
                v69 = PpmParkSoftParkCurrentRank;
                v108 = FirstSetRightAffinity;
                *((_DWORD *)PpmParkNewSoftParkRankList + FirstSetRightAffinity) = PpmParkSoftParkCurrentRank;
                if ( v69 != *((_DWORD *)PpmParkOldSoftParkRankList + FirstSetRightAffinity) )
                  PpmParkSoftParkRankListChanged = 1;
                PpmParkSoftParkCurrentRank = v69 + 1;
                KeRemoveProcessorAffinityEx(&v143, FirstSetRightAffinity);
              }
            }
          }
LABEL_96:
          v75 = RtlCountSetBitsAffinityEx(&v52->Count);
          v100 += v75;
          PpmEventTraceCoreParkingSelection(
            (_DWORD)v115,
            a5,
            a6,
            v100,
            a13,
            v42,
            (__int64)v23,
            (__int64)a9,
            (__int64)v52,
            (__int64)v101,
            (__int64)v104,
            (__int64)v22,
            (__int64)v41,
            (__int64)v130,
            v121,
            v99,
            v96,
            (__int64)v109,
            (__int64)v111,
            (__int64)v120,
            v95,
            v94);
          v76 = 8LL * v23->Count;
          v96 = 0;
          v42 = 0;
          memset_0(&v23->8, 0, v76);
          v77 = (struct _KAFFINITY_EX *)((char *)v105 + 35920);
          v23->Count = 1;
          RtlSubtractAffinityEx(v22, v77, (__int64)v22);
          KeGetTopologySiblingAffinityForProcessor((__int64)v105, 5, &v143.Count);
          if ( !(_BYTE)v103 )
          {
LABEL_103:
            memset_0(v131, 0, 8LL * v101->Count);
            v101->Count = 1;
            goto LABEL_104;
          }
          if ( (unsigned __int8)v103 == 1 )
          {
            if ( (unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
              goto LABEL_104;
            RtlpComplementAffinityEx(&v143, v143.Size, &v143);
            goto LABEL_119;
          }
          if ( (unsigned __int8)v103 == 2 )
          {
            if ( (unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
              goto LABEL_104;
            RtlSubtractAffinityEx(&v143, v52, (__int64)&v143);
LABEL_119:
            PpmParkBuildTopologyCandidates(v101, &v143, a9);
            goto LABEL_104;
          }
          if ( (unsigned __int8)v103 != 3 && (unsigned __int8)v103 != 4 && (unsigned int)(unsigned __int8)v103 - 5 > 1
            || !(unsigned int)Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline() )
          {
            goto LABEL_103;
          }
LABEL_104:
          KeGetTopologySiblingAffinityForProcessor((__int64)v105, 2, &v143.Count);
          if ( !(_BYTE)v107 )
            goto LABEL_125;
          if ( (unsigned __int8)v107 == 1 )
          {
            if ( (unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
              goto LABEL_111;
            RtlpComplementAffinityEx(&v143, v143.Size, &v143);
            goto LABEL_122;
          }
          if ( (unsigned __int8)v107 == 2 )
          {
            if ( !(unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
            {
              RtlSubtractAffinityEx(&v143, v52, (__int64)&v143);
LABEL_122:
              PpmParkBuildTopologyCandidates(v104, &v143, a9);
            }
          }
          else if ( (unsigned __int8)v107 != 3
                 && (unsigned __int8)v107 != 4
                 && (unsigned int)(unsigned __int8)v107 - 5 > 1
                 || !(unsigned int)Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline() )
          {
LABEL_125:
            memset_0(v142, 0, 8LL * v104->Count);
            v104->Count = 1;
          }
LABEL_111:
          if ( v102 && v102 == 3 )
          {
            v78 = LOBYTE(v105->StaticBitmap[25]);
            if ( v41->Count <= (unsigned __int16)v78 )
              goto LABEL_129;
            v79 = v105->StaticBitmap[24];
          }
          else
          {
            v78 = LOBYTE(v105->StaticBitmap[25]);
            if ( v41->Count <= (unsigned __int16)v78 )
              goto LABEL_129;
            v79 = v105[138].StaticBitmap[9];
          }
          v41->Bitmap[v78] &= ~v79;
LABEL_129:
          v80 = 0;
          if ( v23->Count )
          {
            while ( !v23->Bitmap[v80] )
            {
              if ( ++v80 >= v23->Count )
                goto LABEL_132;
            }
            goto LABEL_188;
          }
LABEL_132:
          v81 = 0;
          if ( v22->Count )
          {
            while ( !v22->Bitmap[v81] )
            {
              if ( ++v81 >= v22->Count )
                goto LABEL_135;
            }
            goto LABEL_187;
          }
LABEL_135:
          v82 = 0;
          if ( v41->Count )
          {
            while ( !v41->Bitmap[v82] )
            {
              if ( ++v82 >= v41->Count )
                goto LABEL_138;
            }
          }
          else
          {
LABEL_138:
            if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v116->Count, (__int64)v41) )
            {
              v83 = 512;
            }
            else if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v112->Count, (__int64)v41) )
            {
              v83 = 1024;
            }
            else if ( (PpmHeteroHgsContainmentState & 8) != 0 )
            {
              if ( !(unsigned int)RtlAndAffinityEx(&a9->Count, &v114->Count, (__int64)v41) )
                goto LABEL_150;
              v83 = 0x400000;
            }
            else if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v127->Count, (__int64)v41) )
            {
              v83 = 2048;
            }
            else
            {
              if ( !(unsigned int)RtlAndAffinityEx(&a9->Count, &v110->Count, (__int64)v41) )
                goto LABEL_150;
              v83 = 0x80000;
            }
            *v17 |= v83;
            v96 = v83;
          }
LABEL_150:
          RtlpCopyAffinityEx(v22, v22->Size, v41);
          v84 = v105;
          KeGetTopologySiblingAffinityForProcessor((__int64)v105, 5, &v143.Count);
          if ( !(unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
            goto LABEL_163;
          if ( (unsigned __int8)(v103 - 3) <= 3u )
          {
            if ( (unsigned int)Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline() )
            {
              v85 = v93[0];
              v95 = PpmParkApplyMixedTopologyPolicy(a9, v103, (__int64)v93, v100, a13, (__int64)&v143);
              if ( v85 != LOBYTE(v93[0]) )
              {
                memset_0(v131, 0, 8LL * v101->Count);
                v86 = v101;
                v84 = v105;
                v101->Count = 1;
                goto LABEL_158;
              }
              v84 = v105;
            }
            else
            {
              v95 = PpmParkApplyMixedTopologyPolicy(a9, v103, (__int64)v93, v100, a13, (__int64)&v143);
            }
          }
          v86 = v101;
LABEL_158:
          if ( v95 )
          {
            if ( v95 == 1 )
            {
              RtlpComplementAffinityEx(&v143, v143.Size, &v143);
              goto LABEL_162;
            }
            if ( v95 == 2 )
            {
              RtlSubtractAffinityEx(&v143, v52, (__int64)&v143);
LABEL_162:
              PpmParkBuildTopologyCandidates(v101, &v143, v22);
LABEL_163:
              v87 = v101;
              goto LABEL_164;
            }
          }
          memset_0(v131, 0, 8LL * v86->Count);
          v87 = v101;
          v101->Count = 1;
LABEL_164:
          if ( (unsigned int)RtlpAndAffinityExNoResult(v22, v87) )
            RtlAndAffinityEx(&v22->Count, &v101->Count, (__int64)v22);
          KeGetTopologySiblingAffinityForProcessor((__int64)v84, 2, &v143.Count);
          if ( !(unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
          {
            v91 = v104;
            goto LABEL_184;
          }
          v88 = v107;
          if ( (unsigned __int8)(v107 - 3) > 3u )
          {
            v91 = v104;
          }
          else
          {
            if ( !(unsigned int)Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline() )
            {
              v90 = PpmParkApplyMixedTopologyPolicy(a9, v88, (__int64)v93, v100, a13, (__int64)&v143);
              v91 = v104;
              v94 = v90;
              goto LABEL_176;
            }
            v89 = v93[0];
            v90 = PpmParkApplyMixedTopologyPolicy(a9, v107, (__int64)v93, v100, a13, (__int64)&v143);
            v63 = v89 == LOBYTE(v93[0]);
            v91 = v104;
            v94 = v90;
            if ( v63 )
              goto LABEL_176;
            memset_0(&v104->8, 0, 8LL * v104->Count);
            v91->Count = 1;
          }
          v90 = v94;
LABEL_176:
          switch ( v90 )
          {
            case 0:
              goto LABEL_182;
            case 1:
              RtlpComplementAffinityEx(&v143, v143.Size, &v143);
              break;
            case 2:
              RtlSubtractAffinityEx(&v143, v52, (__int64)&v143);
              break;
            default:
LABEL_182:
              memset_0(&v91->8, 0, 8LL * v91->Count);
              v91->Count = 1;
              goto LABEL_184;
          }
          PpmParkBuildTopologyCandidates(v91, &v143, v22);
LABEL_184:
          if ( (unsigned int)RtlpAndAffinityExNoResult(v22, v91) )
            RtlAndAffinityEx(&v22->Count, v92, (__int64)v22);
          v42 = v96;
LABEL_187:
          RtlpCopyAffinityEx(v23, v23->Size, v22);
LABEL_188:
          if ( v100 >= a6 )
            return;
        }
      }
    }
    v51 = v93[0];
    if ( a16 )
      v51 = 1;
    LOBYTE(v93[0]) = v51;
    goto LABEL_37;
  }
  RtlpCopyAffinityEx(a9, a9->Size, v38);
}
