/*
 * XREFs of PpmParkComputeUnparkMask @ 0x14025D7A0
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 *     PpmParkBuildTopologyCandidates @ 0x14025222C (PpmParkBuildTopologyCandidates.c)
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14025234C (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     RtlAndAffinityEx @ 0x140252394 (RtlAndAffinityEx.c)
 *     RtlOrAffinityEx @ 0x14025A978 (RtlOrAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     ?RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403EE0E4 (-RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403EF310 (KeRemoveProcessorAffinityEx.c)
 *     PpmEventTraceCoreParkingSelection @ 0x1404213F0 (PpmEventTraceCoreParkingSelection.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x14042BAD8 (PpmHeteroRestrictToFavoredClass.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14045E650 (PpmParkFindSpecificTopologyMask.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x14045E970 (KeGetTopologySiblingAffinityForProcessor.c)
 *     KeFindNextProcessorIndexEx @ 0x14045EADC (KeFindNextProcessorIndexEx.c)
 *     KeFindFirstSetRightAffinityEx @ 0x140490A30 (KeFindFirstSetRightAffinityEx.c)
 *     Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14049B1AC (Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkSeedToIndex @ 0x1404FAE9C (PpmParkSeedToIndex.c)
 *     PpmEventParkNodePreference @ 0x14060E7C0 (PpmEventParkNodePreference.c)
 *     Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline @ 0x14060F058 (Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkApplyMixedTopologyPolicy @ 0x14060F1EC (PpmParkApplyMixedTopologyPolicy.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
        _QWORD *a12,
        unsigned int a13,
        char a14,
        char a15,
        int a16)
{
  _DWORD *v17; // r14
  __int64 *v19; // rdi
  int v20; // eax
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
  int TrapFrame; // ecx
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
  struct _KAFFINITY_EX *v93; // [rsp+30h] [rbp-100h]
  int v94[2]; // [rsp+30h] [rbp-100h]
  _WORD v95[2]; // [rsp+B0h] [rbp-80h] BYREF
  char v96; // [rsp+B4h] [rbp-7Ch]
  char v97; // [rsp+B5h] [rbp-7Bh]
  unsigned int v98; // [rsp+B8h] [rbp-78h]
  char v99; // [rsp+BCh] [rbp-74h]
  char v100; // [rsp+BDh] [rbp-73h] BYREF
  char v101; // [rsp+BEh] [rbp-72h]
  int v102; // [rsp+C0h] [rbp-70h]
  struct _KAFFINITY_EX *v103; // [rsp+C8h] [rbp-68h]
  char v104; // [rsp+D0h] [rbp-60h]
  int v105; // [rsp+D4h] [rbp-5Ch]
  struct _KAFFINITY_EX *v106; // [rsp+D8h] [rbp-58h]
  struct _KAFFINITY_EX *v107; // [rsp+E0h] [rbp-50h]
  struct _KAFFINITY_EX *v108; // [rsp+E8h] [rbp-48h]
  int v109; // [rsp+F0h] [rbp-40h]
  unsigned int v110; // [rsp+F4h] [rbp-3Ch] BYREF
  struct _KAFFINITY_EX *v111; // [rsp+F8h] [rbp-38h]
  struct _KAFFINITY_EX *v112; // [rsp+100h] [rbp-30h]
  struct _KAFFINITY_EX *v113; // [rsp+108h] [rbp-28h]
  struct _KAFFINITY_EX *v114; // [rsp+110h] [rbp-20h]
  unsigned int NextProcessorIndex; // [rsp+118h] [rbp-18h]
  struct _KAFFINITY_EX *v116; // [rsp+120h] [rbp-10h]
  struct _KAFFINITY_EX *v117; // [rsp+128h] [rbp-8h]
  struct _KAFFINITY_EX *v118; // [rsp+130h] [rbp+0h]
  struct _KAFFINITY_EX *v119; // [rsp+138h] [rbp+8h]
  struct _KAFFINITY_EX *v120; // [rsp+140h] [rbp+10h]
  __int64 v121; // [rsp+148h] [rbp+18h]
  struct _KAFFINITY_EX *v122; // [rsp+150h] [rbp+20h]
  __int64 v123; // [rsp+158h] [rbp+28h]
  struct _KAFFINITY_EX *v124; // [rsp+160h] [rbp+30h]
  struct _KAFFINITY_EX *v125; // [rsp+168h] [rbp+38h]
  _QWORD *v126; // [rsp+170h] [rbp+40h]
  struct _KAFFINITY_EX *v127; // [rsp+178h] [rbp+48h]
  struct _KAFFINITY_EX *v128; // [rsp+180h] [rbp+50h]
  struct _KAFFINITY_EX *v129; // [rsp+188h] [rbp+58h]
  int v130; // [rsp+190h] [rbp+60h]
  int v131; // [rsp+194h] [rbp+64h]
  unsigned __int16 *v132; // [rsp+198h] [rbp+68h]
  void *v133; // [rsp+1A0h] [rbp+70h]
  struct _KAFFINITY_EX *v134; // [rsp+1A8h] [rbp+78h]
  __int64 v135; // [rsp+1B0h] [rbp+80h]
  __int64 v136; // [rsp+1B8h] [rbp+88h]
  __int64 v137; // [rsp+1C0h] [rbp+90h]
  __int64 v138; // [rsp+1C8h] [rbp+98h]
  __int64 v139; // [rsp+1D0h] [rbp+A0h]
  __int128 v140; // [rsp+1D8h] [rbp+A8h] BYREF
  __int64 v141; // [rsp+1E8h] [rbp+B8h]
  _DWORD *v142; // [rsp+1F0h] [rbp+C0h]
  struct _KAFFINITY_EX *v143; // [rsp+1F8h] [rbp+C8h]
  void *v144; // [rsp+200h] [rbp+D0h]
  struct _KAFFINITY_EX v145; // [rsp+210h] [rbp+E0h] BYREF

  v17 = a11;
  v126 = a12;
  v134 = a10;
  v107 = a7;
  v117 = a2;
  v121 = a1;
  v118 = (struct _KAFFINITY_EX *)a8;
  v132 = a4;
  v142 = a11;
  memset_0(&v145.8, 0, sizeof(v145.8));
  v19 = PpmCurrentProfile;
  v141 = 0LL;
  v20 = dword_140F106CC;
  v21 = 89LL * dword_140F106CC;
  v140 = 0LL;
  v110 = 0;
  v98 = 0;
  *(_QWORD *)&v145.Count = 2097153LL;
  LOBYTE(v20) = BYTE4(PpmCurrentProfile[v21 + 88]);
  v109 = v20;
  LOBYTE(v20) = BYTE5(PpmCurrentProfile[v21 + 88]);
  v105 = v20;
  v130 = *(unsigned __int16 *)(a1 + 1212);
  v135 = *(_QWORD *)(a1 + 1216);
  v124 = PpmParkPerfCheckAffinities + 9;
  v22 = PpmParkPerfCheckAffinities + 22;
  v143 = PpmParkPerfCheckAffinities + 22;
  v125 = PpmParkPerfCheckAffinities + 10;
  v23 = PpmParkPerfCheckAffinities + 11;
  v103 = PpmParkPerfCheckAffinities + 12;
  v116 = PpmParkPerfCheckAffinities + 13;
  v128 = PpmParkPerfCheckAffinities + 14;
  v119 = PpmParkPerfCheckAffinities + 15;
  v108 = PpmParkPerfCheckAffinities + 16;
  v106 = PpmParkPerfCheckAffinities + 18;
  v129 = PpmParkPerfCheckAffinities + 19;
  v112 = PpmParkPerfCheckAffinities + 20;
  v127 = PpmParkPerfCheckAffinities + 21;
  v114 = PpmParkPerfCheckAffinities + 23;
  v123 = (__int64)&PpmParkPerfCheckAffinities[17];
  v111 = PpmParkPerfCheckAffinities + 24;
  v113 = PpmParkPerfCheckAffinities + 25;
  v122 = PpmParkPerfCheckAffinities + 26;
  v120 = PpmParkPerfCheckAffinities + 27;
  memset_0(&v145.8, 0, sizeof(v145.8));
  memset_0(&v124->8, 0, 8LL * v124->Count);
  v124->Count = 1;
  memset_0(&v125->8, 0, 8LL * v125->Count);
  v125->Count = 1;
  memset_0(&v23->8, 0, 8LL * v23->Count);
  v24 = v103;
  v23->Count = 1;
  v25 = 8LL * v24->Count;
  v133 = &v24->8;
  memset_0(&v24->8, 0, v25);
  v26 = v116;
  v103->Count = 1;
  memset_0(&v26->8, 0, 8LL * v26->Count);
  v27 = v128;
  v28 = &v128->8;
  v116->Count = 1;
  memset_0(v28, 0, 8LL * v27->Count);
  v29 = v119;
  v128->Count = 1;
  memset_0(&v29->8, 0, 8LL * v29->Count);
  v119->Count = 1;
  memset_0(&v108->8, 0, 8LL * v108->Count);
  v108->Count = 1;
  v30 = 8LL * v106->Count;
  v144 = &v106->8;
  memset_0(&v106->8, 0, v30);
  v106->Count = 1;
  memset_0(&v129->8, 0, 8LL * v129->Count);
  v129->Count = 1;
  memset_0(&v112->8, 0, 8LL * v112->Count);
  v112->Count = 1;
  memset_0(&v127->8, 0, 8LL * v127->Count);
  v127->Count = 1;
  memset_0(&v22->8, 0, 8LL * v22->Count);
  v31 = v114;
  v22->Count = 1;
  memset_0(&v31->8, 0, 8LL * v31->Count);
  v32 = (unsigned __int16 *)v123;
  v114->Count = 1;
  memset_0(v32 + 4, 0, 8LL * *v32);
  *(_WORD *)v123 = 1;
  memset_0(&v111->8, 0, 8LL * v111->Count);
  v33 = v113;
  v111->Count = 1;
  memset_0(&v33->8, 0, 8LL * v33->Count);
  v34 = v122;
  v113->Count = 1;
  memset_0(&v34->8, 0, 8LL * v34->Count);
  v35 = v120;
  v122->Count = 1;
  memset_0(&v35->8, 0, 8LL * v35->Count);
  v36 = v117;
  v120->Count = 1;
  RtlpCopyAffinityEx(v116, v116->Size, v36);
  v37 = BYTE6(v19[v21 + 88]);
  v38 = v117;
  v104 = v37;
  RtlAndAffinityEx(a3, &v117->Count, (__int64)v119);
  memset_0(&a9->8, 0, 8LL * a9->Count);
  v39 = v134;
  a9->Count = 1;
  memset_0(&v39->8, 0, 8LL * v39->Count);
  v39->Count = 1;
  if ( a6 && a5 )
  {
    if ( qword_140F12250 )
    {
      v93 = v112;
      guard_dispatch_icall_no_overrides(0LL, *(_QWORD *)&PopSleepstudySessionLock.SystemCallNumber, a5);
      PpmEventParkNodePreference(
        (_DWORD)v38,
        (unsigned __int16)a5,
        (_DWORD)v107,
        (_DWORD)v118,
        (__int64)v112,
        (__int64)v114);
      memset_0(&v145.8, 0, 8LL * v145.Count);
      v145.Count = 1;
      RtlOrAffinityEx(v107, v118, (__int64)&v145);
      RtlSubtractAffinityEx(v112, &v145, (__int64)v112);
      RtlSubtractAffinityEx(v114, &v145, (__int64)v114);
    }
    v40 = v129;
    RtlSubtractAffinityEx(v117, v107, (__int64)v129);
    RtlSubtractAffinityEx(v40, v118, (__int64)v40);
    RtlSubtractAffinityEx(v40, v112, (__int64)v40);
    RtlSubtractAffinityEx(v40, v114, (__int64)v40);
    RtlpCopyAffinityEx(a9, a9->Size, v117);
    v41 = v128;
    v42 = 0;
    if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v118->Count, (__int64)v128) )
    {
      *a11 |= 0x200u;
      v42 = 0;
      goto LABEL_18;
    }
    if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v114->Count, (__int64)v128) )
    {
      v43 = 1024;
LABEL_14:
      *a11 |= v43;
      v42 = v43;
      goto LABEL_18;
    }
    if ( (PpmHeteroHgsContainmentState & 8) != 0 )
    {
      v44 = v116;
      v45 = &v116->8;
      *(_QWORD *)&v116->Count = 2097153LL;
      memset_0(v45, 0, sizeof($B38C3B1372D6E954799962D5DD404846));
      RtlpCopyAffinityEx(
        v44,
        v44->Size,
        (struct _KAFFINITY_EX *)(264LL * *(int *)(*(_QWORD *)(v121 + 1240) + 4LL) + *(_QWORD *)(v121 + 1240) + 16LL));
      if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v44->Count, (__int64)v41) )
      {
        v43 = 0x400000;
        goto LABEL_14;
      }
      v42 = v98;
    }
    else
    {
      if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v129->Count, (__int64)v128) )
      {
        v43 = 2048;
        goto LABEL_14;
      }
      if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v112->Count, (__int64)v128) )
      {
        v43 = 0x80000;
        goto LABEL_14;
      }
    }
LABEL_18:
    RtlpCopyAffinityEx(v22, v22->Size, v41);
    memset_0(&v103->8, 0, 8LL * v103->Count);
    v103->Count = 1;
    memset_0(&v106->8, 0, 8LL * v106->Count);
    v106->Count = 1;
    RtlpCopyAffinityEx(v23, v23->Size, v22);
    RtlAndAffinityEx(&v119->Count, v132, (__int64)v124);
    RtlSubtractAffinityEx(v117, v119, (__int64)v125);
    RtlAndAffinityEx(&v125->Count, v132, (__int64)v125);
    v102 = 0;
    v101 = -1;
    memset_0((void *)(v123 + 8), 0, 8LL * *(unsigned __int16 *)v123);
    *(_WORD *)v123 = 1;
    NextProcessorIndex = -1;
    v100 = 0;
    memset_0(&v122->8, 0, 8LL * v122->Count);
    v122->Count = 1;
    memset_0(&v120->8, 0, 8LL * v120->Count);
    v46 = v116;
    v47 = v111;
    v120->Count = 1;
    RtlpCopyAffinityEx(v47, v47->Size, v46);
    v99 = 0;
    v48 = *(_QWORD *)(v121 + 1248);
    v97 = v105;
    v96 = v109;
    v95[0] = 0;
    v137 = v48 + 16;
    v136 = v48 + 280;
    v139 = v48 + 560;
    v138 = v48 + 824;
    if ( (unsigned __int8)(v109 - 3) > 3u && (unsigned __int8)(v105 - 3) > 3u )
      goto LABEL_37;
    v99 = 1;
    if ( PopHeteroSystem != 5 && !PpmParkTopologyMixedPolicyEnabled || (unsigned __int8)PpmMaxCoreClasses > 2u )
    {
      v49 = (unsigned __int8)v109;
      v50 = (unsigned __int8)v105;
      if ( (unsigned __int8)(v109 - 3) <= 3u )
        v49 = 0;
      v109 = v49;
      if ( (unsigned __int8)(v105 - 3) <= 3u )
        v50 = 0;
      v105 = v50;
    }
    if ( PopHeteroSystem != 2 )
    {
      if ( PopHeteroSystem == 3 )
        goto LABEL_32;
      if ( PopHeteroSystem == 5 )
      {
        v95[0] = 257;
        goto LABEL_37;
      }
      if ( PopHeteroSystem != 6 )
      {
LABEL_32:
        v95[0] = 1;
LABEL_37:
        v52 = v127;
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
          if ( (unsigned int)RtlAndAffinityEx(&v23->Count, &v124->Count, (__int64)v108) )
          {
            v54 = v108;
            *v17 |= 0x20000u;
            RtlpCopyAffinityEx(v23, v23->Size, v54);
          }
          if ( ((PopHeteroSystem - 3) & 0xFFFFFFFC) == 0 && PopHeteroSystem != 4 )
          {
            *v17 |= 0x8000u;
            PpmHeteroRestrictToFavoredClass(v23, a13, v102, a16, v123, (__int64)v116, (__int64)&v145);
            if ( PopHeteroSystem == 5 && v99 && PpmHeteroPolicy == 4 )
              LOBYTE(v95[0]) = v102 < a13;
            Count = v145.Count;
            if ( v145.Count >= v111->Count )
            {
              v56 = &v145;
              Count = v111->Count;
            }
            else
            {
              v56 = v111;
            }
            v57 = 0;
            if ( Count )
            {
              while ( v145.Bitmap[v57] == v111->Bitmap[v57] )
              {
                if ( ++v57 >= Count )
                  goto LABEL_59;
              }
LABEL_61:
              v100 = 1;
              RtlpCopyAffinityEx(v120, v120->Size, &v145);
              RtlpCopyAffinityEx(v111, v111->Size, &v145);
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
          RtlpCopyAffinityEx(v113, v113->Size, v117);
          LOBYTE(v93) = v97;
          PpmParkFindSpecificTopologyMask(v111, v113, v23, *v126, NextProcessorIndex, 5, v93, 0LL, 0LL, &v100);
          LOBYTE(v94[0]) = v96;
          PpmParkFindSpecificTopologyMask(
            v111,
            v113,
            v23,
            *v126,
            NextProcessorIndex,
            2,
            *(_QWORD *)v94,
            v122,
            v120,
            0LL);
          RtlAndAffinityEx(&v113->Count, &v111->Count, (__int64)v108);
          v98 = PpmParkSeedToIndex(v108, *v126);
          if ( (unsigned int)RtlAndAffinityEx(&v23->Count, &v125->Count, (__int64)v108) )
          {
            v58 = v108;
            *v17 |= 0x1000u;
            RtlpCopyAffinityEx(v23, v23->Size, v58);
          }
          if ( !*((_BYTE *)v126 + 16) && RtlSubtractAffinityEx(v23, v119, (__int64)v108) )
          {
            v59 = v108;
            *v17 |= 0x2000u;
            RtlpCopyAffinityEx(v23, v23->Size, v59);
          }
          if ( (unsigned int)RtlAndAffinityEx(&v23->Count, &v113->Count, (__int64)v108) )
          {
            v60 = v108;
            *v17 |= 0x1000000u;
            RtlpCopyAffinityEx(v23, v23->Size, v60);
          }
          NextProcessorIndex = KeFindNextProcessorIndexEx(v23, v98);
          Prcb = (struct _KAFFINITY_EX *)KeGetPrcb(NextProcessorIndex);
          v62 = 8LL * v52->Count;
          v107 = Prcb;
          memset_0(&v52->8, 0, v62);
          v63 = PopModernStandbyStateNotify.ApcStateFill[16] == 0;
          v64 = v107;
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
          if ( v102 < a5 )
          {
            if ( v135 && *(_DWORD *)(v121 + 1192) == 3 )
            {
              LOWORD(v141) = 0;
              *(_QWORD *)&v140 = v52;
              v70 = v52->Bitmap[0];
              v131 = v130 - v102 + a5 - 1;
              *((_QWORD *)&v140 + 1) = v70;
              if ( !(unsigned int)KeEnumerateNextProcessor(&v110, &v140) )
              {
                v71 = v131;
                v72 = v121;
                v73 = v135;
                do
                {
                  if ( v71 < *(unsigned __int16 *)(v72 + 8) && *(_DWORD *)(v73 + 4LL * v71) != v110 )
                  {
                    *(_DWORD *)(v73 + 4LL * v71) = v110;
                    *(_BYTE *)(v72 + 1214) = 1;
                  }
                  --v71;
                }
                while ( !(unsigned int)KeEnumerateNextProcessor(&v110, &v140) );
                v17 = v142;
                v22 = v143;
                v52 = v127;
                v41 = v128;
              }
              v74 = RtlCountSetBitsAffinityEx(&v52->Count);
              *(_WORD *)(v121 + 1212) += v74;
            }
          }
          else
          {
            RtlOrAffinityEx(v134, v52, (__int64)v134);
            RtlpCopyAffinityEx(&v145, v145.Size, v52);
            if ( PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink
              && PopModernStandbyStateNotify.ApcState.ApcListHead[0].Flink )
            {
              while ( 1 )
              {
                v67 = 0;
                if ( !v145.Count )
                  break;
                while ( !v145.Bitmap[v67] )
                {
                  if ( ++v67 >= v145.Count )
                    goto LABEL_96;
                }
                FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&v145);
                TrapFrame = (int)PopModernStandbyStateNotify.TrapFrame;
                v110 = FirstSetRightAffinity;
                *((_DWORD *)&PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink->Flink + FirstSetRightAffinity) = PopModernStandbyStateNotify.TrapFrame;
                if ( TrapFrame != *((_DWORD *)&PopModernStandbyStateNotify.ApcState.ApcListHead[0].Flink->Flink
                                  + FirstSetRightAffinity) )
                  BYTE4(PopModernStandbyStateNotify.TrapFrame) = 1;
                LODWORD(PopModernStandbyStateNotify.TrapFrame) = TrapFrame + 1;
                KeRemoveProcessorAffinityEx(&v145, FirstSetRightAffinity);
              }
            }
          }
LABEL_96:
          v75 = RtlCountSetBitsAffinityEx(&v52->Count);
          v102 += v75;
          PpmEventTraceCoreParkingSelection(
            (_DWORD)v117,
            a5,
            a6,
            v102,
            a13,
            v42,
            (__int64)v23,
            (__int64)a9,
            (__int64)v52,
            (__int64)v103,
            (__int64)v106,
            (__int64)v22,
            (__int64)v41,
            (__int64)v132,
            v123,
            v101,
            v98,
            (__int64)v111,
            (__int64)v113,
            (__int64)v122,
            v97,
            v96);
          v76 = 8LL * v23->Count;
          v98 = 0;
          v42 = 0;
          memset_0(&v23->8, 0, v76);
          v77 = (struct _KAFFINITY_EX *)((char *)v107 + 35920);
          v23->Count = 1;
          RtlSubtractAffinityEx(v22, v77, (__int64)v22);
          KeGetTopologySiblingAffinityForProcessor(v107, 5LL, &v145);
          if ( !(_BYTE)v105 )
          {
LABEL_103:
            memset_0(v133, 0, 8LL * v103->Count);
            v103->Count = 1;
            goto LABEL_104;
          }
          if ( (unsigned __int8)v105 == 1 )
          {
            if ( (unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
              goto LABEL_104;
            RtlpComplementAffinityEx(&v145, v145.Size, &v145);
            goto LABEL_119;
          }
          if ( (unsigned __int8)v105 == 2 )
          {
            if ( (unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
              goto LABEL_104;
            RtlSubtractAffinityEx(&v145, v52, (__int64)&v145);
LABEL_119:
            PpmParkBuildTopologyCandidates(v103, &v145, a9);
            goto LABEL_104;
          }
          if ( (unsigned __int8)v105 != 3 && (unsigned __int8)v105 != 4 && (unsigned int)(unsigned __int8)v105 - 5 > 1
            || !(unsigned int)Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline() )
          {
            goto LABEL_103;
          }
LABEL_104:
          KeGetTopologySiblingAffinityForProcessor(v107, 2LL, &v145);
          if ( !(_BYTE)v109 )
            goto LABEL_125;
          if ( (unsigned __int8)v109 == 1 )
          {
            if ( (unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
              goto LABEL_111;
            RtlpComplementAffinityEx(&v145, v145.Size, &v145);
            goto LABEL_122;
          }
          if ( (unsigned __int8)v109 == 2 )
          {
            if ( !(unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
            {
              RtlSubtractAffinityEx(&v145, v52, (__int64)&v145);
LABEL_122:
              PpmParkBuildTopologyCandidates(v106, &v145, a9);
            }
          }
          else if ( (unsigned __int8)v109 != 3
                 && (unsigned __int8)v109 != 4
                 && (unsigned int)(unsigned __int8)v109 - 5 > 1
                 || !(unsigned int)Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline() )
          {
LABEL_125:
            memset_0(v144, 0, 8LL * v106->Count);
            v106->Count = 1;
          }
LABEL_111:
          if ( v104 && v104 == 3 )
          {
            v78 = LOBYTE(v107->StaticBitmap[25]);
            if ( v41->Count <= (unsigned __int16)v78 )
              goto LABEL_129;
            v79 = v107->StaticBitmap[24];
          }
          else
          {
            v78 = LOBYTE(v107->StaticBitmap[25]);
            if ( v41->Count <= (unsigned __int16)v78 )
              goto LABEL_129;
            v79 = v107[138].StaticBitmap[9];
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
            if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v118->Count, (__int64)v41) )
            {
              v83 = 512;
            }
            else if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v114->Count, (__int64)v41) )
            {
              v83 = 1024;
            }
            else if ( (PpmHeteroHgsContainmentState & 8) != 0 )
            {
              if ( !(unsigned int)RtlAndAffinityEx(&a9->Count, &v116->Count, (__int64)v41) )
                goto LABEL_150;
              v83 = 0x400000;
            }
            else if ( (unsigned int)RtlAndAffinityEx(&a9->Count, &v129->Count, (__int64)v41) )
            {
              v83 = 2048;
            }
            else
            {
              if ( !(unsigned int)RtlAndAffinityEx(&a9->Count, &v112->Count, (__int64)v41) )
                goto LABEL_150;
              v83 = 0x80000;
            }
            *v17 |= v83;
            v98 = v83;
          }
LABEL_150:
          RtlpCopyAffinityEx(v22, v22->Size, v41);
          v84 = v107;
          KeGetTopologySiblingAffinityForProcessor(v107, 5LL, &v145);
          if ( !(unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
            goto LABEL_163;
          if ( (unsigned __int8)(v105 - 3) <= 3u )
          {
            if ( (unsigned int)Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline() )
            {
              v85 = v95[0];
              v97 = PpmParkApplyMixedTopologyPolicy(a9, v105, (__int64)v95, v102, a13, (__int64)&v145);
              if ( v85 != LOBYTE(v95[0]) )
              {
                memset_0(v133, 0, 8LL * v103->Count);
                v86 = v103;
                v84 = v107;
                v103->Count = 1;
                goto LABEL_158;
              }
              v84 = v107;
            }
            else
            {
              v97 = PpmParkApplyMixedTopologyPolicy(a9, v105, (__int64)v95, v102, a13, (__int64)&v145);
            }
          }
          v86 = v103;
LABEL_158:
          if ( v97 )
          {
            if ( v97 == 1 )
            {
              RtlpComplementAffinityEx(&v145, v145.Size, &v145);
              goto LABEL_162;
            }
            if ( v97 == 2 )
            {
              RtlSubtractAffinityEx(&v145, v52, (__int64)&v145);
LABEL_162:
              PpmParkBuildTopologyCandidates(v103, &v145, v22);
LABEL_163:
              v87 = v103;
              goto LABEL_164;
            }
          }
          memset_0(v133, 0, 8LL * v86->Count);
          v87 = v103;
          v103->Count = 1;
LABEL_164:
          if ( (unsigned int)RtlpAndAffinityExNoResult(v22, v87) )
            RtlAndAffinityEx(&v22->Count, &v103->Count, (__int64)v22);
          KeGetTopologySiblingAffinityForProcessor(v84, 2LL, &v145);
          if ( !(unsigned int)Feature_Servicing_PpmParkTopologyPolicy__private_IsEnabledDeviceUsageNoInline() )
          {
            v91 = v106;
            goto LABEL_184;
          }
          v88 = v109;
          if ( (unsigned __int8)(v109 - 3) > 3u )
          {
            v91 = v106;
          }
          else
          {
            if ( !(unsigned int)Feature_PpmParkMixedTopologyPolicyCandidateReset__private_IsEnabledDeviceUsageNoInline() )
            {
              v90 = PpmParkApplyMixedTopologyPolicy(a9, v88, (__int64)v95, v102, a13, (__int64)&v145);
              v91 = v106;
              v96 = v90;
              goto LABEL_176;
            }
            v89 = v95[0];
            v90 = PpmParkApplyMixedTopologyPolicy(a9, v109, (__int64)v95, v102, a13, (__int64)&v145);
            v63 = v89 == LOBYTE(v95[0]);
            v91 = v106;
            v96 = v90;
            if ( v63 )
              goto LABEL_176;
            memset_0(&v106->8, 0, 8LL * v106->Count);
            v91->Count = 1;
          }
          v90 = v96;
LABEL_176:
          switch ( v90 )
          {
            case 0:
              goto LABEL_182;
            case 1:
              RtlpComplementAffinityEx(&v145, v145.Size, &v145);
              break;
            case 2:
              RtlSubtractAffinityEx(&v145, v52, (__int64)&v145);
              break;
            default:
LABEL_182:
              memset_0(&v91->8, 0, 8LL * v91->Count);
              v91->Count = 1;
              goto LABEL_184;
          }
          PpmParkBuildTopologyCandidates(v91, &v145, v22);
LABEL_184:
          if ( (unsigned int)RtlpAndAffinityExNoResult(v22, v91) )
            RtlAndAffinityEx(&v22->Count, v92, (__int64)v22);
          v42 = v98;
LABEL_187:
          RtlpCopyAffinityEx(v23, v23->Size, v22);
LABEL_188:
          if ( v102 >= a6 )
            return;
        }
      }
    }
    v51 = v95[0];
    if ( a16 )
      v51 = 1;
    LOBYTE(v95[0]) = v51;
    goto LABEL_37;
  }
  RtlpCopyAffinityEx(a9, a9->Size, v38);
}
