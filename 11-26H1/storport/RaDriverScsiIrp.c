/*
 * XREFs of RaDriverScsiIrp @ 0x140003DF0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterIsRegisteredForIdleDetection @ 0x1400034A0 (RaidAdapterIsRegisteredForIdleDetection.c)
 *     StorUnitExecuteNvmeSrb @ 0x1400034B4 (StorUnitExecuteNvmeSrb.c)
 *     StorEtwIORequestDispatch @ 0x1400036E4 (StorEtwIORequestDispatch.c)
 *     RaidNtStatusToSrbStatus @ 0x140003A14 (RaidNtStatusToSrbStatus.c)
 *     RaUnitFlushSrb @ 0x140003AB0 (RaUnitFlushSrb.c)
 *     RaUnitSwallowStopUnitCommand @ 0x140003D58 (RaUnitSwallowStopUnitCommand.c)
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitSubmitRequest @ 0x140004BD0 (RaidUnitSubmitRequest.c)
 *     RaUnitLockQueueSrb @ 0x140007330 (RaUnitLockQueueSrb.c)
 *     RaUnitUnlockQueueSrb @ 0x140028080 (RaUnitUnlockQueueSrb.c)
 *     RaidUnitSubmitResetRequest @ 0x14004CED4 (RaidUnitSubmitResetRequest.c)
 *     RaUnitQuiesceDeviceSrb @ 0x140055AF8 (RaUnitQuiesceDeviceSrb.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     RaUnitClaimDeviceSrb @ 0x140099CAC (RaUnitClaimDeviceSrb.c)
 *     RaUnitFlushQueueSrb @ 0x14009B4F0 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x14009E4CC (RaUnitReleaseDeviceSrb.c)
 *     RaUnitReleaseQueueSrb @ 0x14009E89C (RaUnitReleaseQueueSrb.c)
 *     RaUnitResetBusSrb @ 0x14009F0B0 (RaUnitResetBusSrb.c)
 *     NvmeNamespaceScsiIrp @ 0x14010ECE8 (NvmeNamespaceScsiIrp.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaidAdapterScsiIrp @ 0x140185F18 (RaidAdapterScsiIrp.c)
 *     RaUnitUnknownSrb @ 0x14018F128 (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaDriverScsiIrp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rax
  _BYTE *v8; // r12
  __int64 v9; // r15
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // r14d
  _DWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // r14d
  int v16; // r13d
  unsigned __int8 *v17; // r14
  unsigned int v18; // r11d
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  int v22; // r10d
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  bool v28; // zf
  char *v29; // rdx
  char *v30; // rcx
  char v31; // al
  unsigned int v32; // eax
  bool v33; // bl
  unsigned __int64 v34; // r8
  signed __int32 v35; // eax
  signed __int32 v36; // ett
  int v37; // r10d
  int v38; // edx
  char *v39; // rcx
  char v40; // al
  unsigned __int64 v41; // r8
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  char v44; // al
  char v45; // al
  unsigned __int64 v46; // rdx
  char v47; // bl
  unsigned __int8 v48; // r8
  char v49; // r10
  char v50; // r13
  unsigned __int8 *v51; // r9
  unsigned int v52; // esi
  unsigned __int64 v53; // r8
  signed __int32 v54; // eax
  signed __int32 v55; // ett
  char v56; // al
  unsigned __int8 v57; // r8
  unsigned __int8 *v58; // r9
  unsigned int v59; // esi
  __int64 v60; // rcx
  unsigned __int64 v61; // r8
  signed __int32 v62; // eax
  _DWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  int *v66; // rax
  int v67; // ecx
  char v68; // bl
  unsigned __int8 v69; // r8
  unsigned __int8 *v70; // r9
  unsigned int v71; // esi
  unsigned __int64 v72; // r8
  signed __int32 v73; // eax
  __int64 v74; // r8
  char v75; // bl
  unsigned __int8 v76; // r10
  char v77; // r15
  char v78; // r11
  char v79; // r13
  _BYTE *v80; // rdx
  unsigned __int8 *v81; // r9
  unsigned int v82; // r14d
  char v83; // cl
  __int64 v84; // rcx
  char *v85; // rdx
  char v86; // al
  _DWORD *v87; // r12
  unsigned __int64 v88; // rdx
  char v89; // si
  _BYTE *v90; // r12
  unsigned __int8 v91; // r8
  char v92; // r10
  char v93; // r11
  char v94; // r13
  unsigned __int8 *v95; // r9
  unsigned int v96; // r15d
  __int64 v97; // rcx
  unsigned __int64 v98; // r11
  __int64 v99; // rsi
  int v100; // ecx
  int v101; // ecx
  char v102; // r15
  char *v103; // rcx
  char v104; // r9
  char v105; // al
  unsigned int v106; // eax
  __int64 v107; // rcx
  unsigned __int64 v108; // r11
  __int64 v109; // rbx
  int v110; // ecx
  int v111; // ecx
  char v112; // r11
  unsigned __int64 v113; // rcx
  char v114; // r9
  char v115; // al
  unsigned int v116; // eax
  __int64 v117; // rcx
  unsigned __int64 v118; // r11
  __int64 v119; // rbx
  int v120; // ecx
  int v121; // ecx
  char v122; // al
  unsigned int v123; // eax
  __int64 v124; // rcx
  unsigned __int64 v125; // r11
  __int64 v126; // rbx
  int v127; // ecx
  int v128; // ecx
  char v129; // al
  unsigned int v130; // eax
  signed __int32 v131; // ett
  char v132; // al
  _DWORD *v133; // rax
  unsigned __int64 v134; // rdx
  char v135; // bl
  unsigned __int8 v136; // r8
  char v137; // r10
  char v138; // r13
  char v139; // r15
  unsigned __int8 *v140; // r9
  unsigned int v141; // esi
  __int64 v142; // rcx
  unsigned __int64 v143; // r11
  __int64 v144; // rbx
  int v145; // ecx
  int v146; // ecx
  char v147; // r11
  char *v148; // rcx
  char v149; // r9
  char v150; // al
  unsigned int v151; // eax
  signed __int32 v152; // ett
  char v153; // al
  __int64 v154; // rdx
  char v155; // bl
  unsigned __int8 v156; // r8
  char v157; // r10
  char v158; // r13
  char v159; // r15
  unsigned __int8 *v160; // r9
  unsigned int v161; // esi
  __int64 v162; // rcx
  unsigned __int64 v163; // r11
  __int64 v164; // rbx
  int v165; // ecx
  int v166; // ecx
  char v167; // r11
  char *v168; // rcx
  char v169; // al
  char v170; // r9
  unsigned int v171; // eax
  unsigned __int64 v172; // r8
  __int64 v173; // rcx
  unsigned __int64 v174; // r11
  __int64 v175; // rbx
  int v176; // ecx
  int v177; // ecx
  char v178; // r14
  char *v179; // rcx
  char v180; // al
  char v181; // r9
  unsigned int v182; // eax
  unsigned __int64 v183; // r9
  int v184; // edx
  unsigned __int8 *v185; // rax
  __int64 v186; // rcx
  int *v187; // rax
  int v188; // ecx
  __int64 v189; // r10
  unsigned __int8 v190; // r9
  char v191; // r13
  char v192; // bl
  char v193; // r11
  _BYTE *v194; // rdx
  char *v195; // r8
  unsigned int v196; // r15d
  __int64 v197; // rcx
  unsigned __int64 v198; // r11
  __int64 v199; // rbx
  int v200; // ecx
  int v201; // ecx
  char v202; // r15
  char v203; // cl
  char v204; // al
  char v205; // r8
  unsigned int v206; // eax
  unsigned __int64 v207; // r8
  BOOL v208; // ecx
  unsigned __int64 v209; // r8
  signed __int32 v210; // eax
  signed __int32 v211; // ett
  PDEVICE_OBJECT v212; // rcx
  __int64 v213; // rdx
  unsigned __int64 v214; // r8
  signed __int32 v215; // eax
  signed __int32 v216; // ett
  char v217; // al
  unsigned __int8 v218; // r8
  unsigned __int8 *v219; // r9
  unsigned int v220; // esi
  __int64 v221; // rcx
  unsigned __int64 v222; // r11
  __int64 v223; // rbx
  int v224; // ecx
  int v225; // ecx
  char v226; // al
  unsigned int v227; // eax
  unsigned __int8 *v228; // rdx
  unsigned __int8 *v229; // rax
  __int64 v230; // rcx
  _DWORD *v231; // rax
  __int64 v232; // r9
  char v233; // r11
  unsigned __int8 v234; // r8
  char v235; // r15
  char v236; // r10
  char v237; // r13
  unsigned int v238; // ebx
  __int64 v239; // rcx
  unsigned __int64 v240; // r10
  __int64 v241; // r11
  int v242; // ecx
  int v243; // ecx
  char v244; // bl
  char *v245; // rcx
  char v246; // al
  unsigned int v247; // eax
  unsigned int v248; // [rsp+68h] [rbp-19h]
  unsigned int v249; // [rsp+68h] [rbp-19h]
  unsigned int v250; // [rsp+68h] [rbp-19h]
  unsigned int v251; // [rsp+68h] [rbp-19h]
  unsigned int v252; // [rsp+68h] [rbp-19h]
  unsigned int v253; // [rsp+68h] [rbp-19h]
  unsigned int v254; // [rsp+68h] [rbp-19h]
  unsigned int v255; // [rsp+68h] [rbp-19h]
  unsigned int v256; // [rsp+68h] [rbp-19h]
  BOOL v257; // [rsp+6Ch] [rbp-15h]
  unsigned int v258; // [rsp+6Ch] [rbp-15h]
  __int128 v259; // [rsp+70h] [rbp-11h] BYREF
  __int128 v260; // [rsp+80h] [rbp-1h] BYREF
  __int128 v261; // [rsp+90h] [rbp+Fh] BYREF

  v4 = a1;
  *(_QWORD *)&v260 = a1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v5 = *(_QWORD *)(v4 + 64);
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 1431193940 )
  {
    v7 = *(_QWORD *)(a2 + 184);
    v8 = 0LL;
    v9 = 0LL;
    v261 = 0LL;
    v10 = *(_QWORD *)(v7 + 8);
    if ( v10 )
    {
      LOBYTE(a3) = 1;
      v11 = RaUnitAcquireRemoveLock(v5, a2, a3);
      v12 = v11;
      if ( v11 < 0 )
      {
        v44 = RaidNtStatusToSrbStatus(v11);
        v28 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(v10 + 3) = v44;
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = v12;
        if ( v28 )
          goto LABEL_54;
        v259 = 0LL;
        IoGetActivityIdIrp(a2, &v259);
        v30 = *(char **)(a2 + 184);
        v45 = *v30;
        if ( *v30 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_54;
          v46 = *((_QWORD *)v30 + 1);
          v47 = 0;
          v48 = 0;
          v49 = 0;
          v50 = 0;
          if ( *(_BYTE *)(v46 + 2) == 40 )
          {
            v51 = 0LL;
            if ( *(_DWORD *)(v46 + 20) )
              goto LABEL_54;
            v52 = 0;
            v248 = *(_DWORD *)(v46 + 56);
            if ( !v248 )
              goto LABEL_54;
            while ( 1 )
            {
              v117 = *(unsigned int *)(v46 + 4LL * v52 + 120);
              if ( (unsigned int)v117 >= 0x80 )
              {
                v118 = *(unsigned int *)(v46 + 16);
                if ( (unsigned int)v117 < (unsigned int)v118 )
                {
                  v119 = (unsigned int)v117;
                  v120 = *(_DWORD *)(v46 + v117);
                  if ( v120 == 64 )
                  {
                    if ( v119 + 40 <= v118 )
                    {
LABEL_317:
                      if ( *(_BYTE *)(v46 + v119 + 10) )
                        v51 = (unsigned __int8 *)(v119 + v46 + 24);
                      v112 = *(_BYTE *)(v46 + v119 + 8);
                      v8 = *(_BYTE **)(v46 + v119 + 16);
                      v48 = *(_BYTE *)(v46 + v119 + 9);
LABEL_320:
                      if ( !v51 )
                        goto LABEL_54;
                      LODWORD(v113) = *v51;
                      v47 = 0;
LABEL_326:
                      LOBYTE(v113) = v113 - 8;
                      if ( (v113 & 0x5D) != 0 )
                        goto LABEL_54;
                      v114 = *(_BYTE *)(v46 + 3);
                      if ( v114 == 1 || !v8 || !v48 )
                        goto LABEL_344;
                      v122 = *v8 & 0x7F;
                      if ( v122 == 114 || v122 == 115 )
                      {
                        v113 = (unsigned __int64)&v8[v48];
                        LOBYTE(v46) = 0;
                        if ( (unsigned __int64)(v8 + 8) > v113 )
                          goto LABEL_342;
                        goto LABEL_340;
                      }
                      v113 = (unsigned __int64)&v8[v48];
                      LOBYTE(v46) = 0;
                      if ( (unsigned __int64)(v8 + 8) > v113 )
                        goto LABEL_342;
                      v49 = v8[2] & 0xF;
                      v123 = v48;
                      if ( (unsigned int)(unsigned __int8)v8[7] + 8 <= v48 )
                        v123 = (unsigned __int8)v8[7] + 8;
                      v113 = (unsigned __int64)(v8 + 13);
                      v46 = (unsigned __int64)&v8[v123];
                      if ( (unsigned __int64)(v8 + 13) <= v46 )
LABEL_336:
                        v50 = v8[12];
LABEL_337:
                      if ( (unsigned __int64)(v8 + 14) <= v46 )
                        LOBYTE(v9) = *(_BYTE *)v113;
LABEL_341:
                      LOBYTE(v46) = 1;
                      goto LABEL_342;
                    }
                  }
                  else
                  {
                    v121 = v120 - 65;
                    if ( v121 )
                    {
                      if ( v121 == 1 && v119 + 40 <= v118 )
                      {
                        if ( *(_DWORD *)(v46 + v119 + 12) )
                          v51 = (unsigned __int8 *)(v119 + v46 + 32);
                        v112 = *(_BYTE *)(v46 + v119 + 8);
                        v8 = *(_BYTE **)(v46 + v119 + 24);
                        v48 = *(_BYTE *)(v46 + v119 + 9);
                        goto LABEL_320;
                      }
                    }
                    else if ( v119 + 56 <= v118 )
                    {
                      goto LABEL_317;
                    }
                  }
                }
              }
              if ( ++v52 >= v248 )
              {
                v112 = 0;
                goto LABEL_320;
              }
            }
          }
          LODWORD(v113) = *(unsigned __int8 *)(v46 + 72);
          v8 = *(_BYTE **)(v46 + 32);
          v48 = *(_BYTE *)(v46 + 11);
          v112 = *(_BYTE *)(v46 + 4);
          if ( *(_BYTE *)(v46 + 2) )
            goto LABEL_54;
          goto LABEL_326;
        }
        if ( v45 != 14 )
        {
          if ( v45 != 27 )
            goto LABEL_54;
          if ( v30[1] == 7 && !*((_DWORD *)v30 + 2) )
          {
            if ( (byte_140173442 & 0x40) == 0 )
              goto LABEL_54;
            v63 = *(_DWORD **)(a2 + 56);
            if ( !v63 )
              goto LABEL_264;
            goto LABEL_263;
          }
LABEL_107:
          if ( (byte_140173442 & 0x20) == 0 )
            goto LABEL_54;
          goto LABEL_108;
        }
      }
      else
      {
        v13 = *(_DWORD **)(v5 + 24);
        if ( *v13 == 1314275652 )
        {
          v14 = (__int64)v13 + 274;
        }
        else if ( *v13 == 1094997074 )
        {
          v14 = (__int64)v13 + 482;
        }
        else
        {
          v14 = 98LL;
        }
        if ( *(_BYTE *)(v10 + 2) != 40 )
        {
          v16 = *(_DWORD *)(v10 + 12);
          v15 = *(unsigned __int8 *)(v10 + 2);
          goto LABEL_14;
        }
        if ( *(_BYTE *)v14 == 1 )
        {
          v9 = v10;
          v15 = *(_DWORD *)(v10 + 20);
          v16 = *(_DWORD *)(v10 + 24);
          if ( *(_DWORD *)(v10 + 8) != 1397899864 || *(_DWORD *)(v10 + 48) || *(_QWORD *)(v10 + 72) )
          {
            *(_BYTE *)(v10 + 3) = 6;
            *(_QWORD *)(a2 + 56) = 0LL;
            v72 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
            v73 = *(_DWORD *)(v72 + *(_QWORD *)(v5 + 40));
            while ( (v73 & 1) == 0 )
            {
              v131 = v73;
              v73 = _InterlockedCompareExchange((volatile signed __int32 *)(v72 + *(_QWORD *)(v5 + 40)), v73 - 2, v73);
              if ( v131 == v73 )
                goto LABEL_384;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_384:
            v28 = StorEtwLoggingEnabled == 0;
            v12 = -1073741811;
            *(_DWORD *)(a2 + 48) = -1073741811;
            *(_BYTE *)(a2 + 141) = -84;
            if ( v28 )
              goto LABEL_54;
            v259 = 0LL;
            IoGetActivityIdIrp(a2, &v259);
            v29 = *(char **)(a2 + 184);
            v132 = *v29;
            if ( *v29 == 15 )
            {
              if ( byte_140173441 >= 0 )
                goto LABEL_54;
              v134 = *((_QWORD *)v29 + 1);
              v135 = 0;
              v136 = 0;
              v137 = 0;
              v138 = 0;
              v139 = 0;
              if ( *(_BYTE *)(v134 + 2) != 40 )
              {
                LODWORD(v148) = *(unsigned __int8 *)(v134 + 72);
                v8 = *(_BYTE **)(v134 + 32);
                v136 = *(_BYTE *)(v134 + 11);
                v147 = *(_BYTE *)(v134 + 4);
                if ( *(_BYTE *)(v134 + 2) )
                  goto LABEL_54;
                goto LABEL_421;
              }
              v140 = 0LL;
              if ( *(_DWORD *)(v134 + 20) )
                goto LABEL_54;
              v141 = 0;
              v252 = *(_DWORD *)(v134 + 56);
              if ( !v252 )
                goto LABEL_54;
              while ( 1 )
              {
                v142 = *(unsigned int *)(v134 + 4LL * v141 + 120);
                if ( (unsigned int)v142 >= 0x80 )
                {
                  v143 = *(unsigned int *)(v134 + 16);
                  if ( (unsigned int)v142 < (unsigned int)v143 )
                  {
                    v144 = (unsigned int)v142;
                    v145 = *(_DWORD *)(v142 + v134);
                    if ( v145 == 64 )
                    {
                      if ( v144 + 40 <= v143 )
                      {
LABEL_412:
                        if ( *(_BYTE *)(v144 + v134 + 10) )
                          v140 = (unsigned __int8 *)(v144 + v134 + 24);
                        v147 = *(_BYTE *)(v144 + v134 + 8);
                        v8 = *(_BYTE **)(v144 + v134 + 16);
                        v136 = *(_BYTE *)(v144 + v134 + 9);
LABEL_415:
                        if ( !v140 )
                          goto LABEL_54;
                        LODWORD(v148) = *v140;
                        v135 = 0;
LABEL_421:
                        LOBYTE(v148) = (_BYTE)v148 - 8;
                        if ( ((unsigned __int8)v148 & 0x5D) != 0 )
                          goto LABEL_54;
                        v149 = *(_BYTE *)(v134 + 3);
                        if ( v149 != 1 && v8 && v136 )
                        {
                          v150 = *v8 & 0x7F;
                          if ( v150 == 114 || v150 == 115 )
                          {
                            v148 = &v8[v136];
                            LOBYTE(v134) = 0;
                            if ( v8 + 8 <= v148 )
                            {
                              v138 = v8[2];
                              v137 = v8[1] & 0xF;
                              v139 = v8[3];
                              goto LABEL_436;
                            }
                          }
                          else
                          {
                            v148 = &v8[v136];
                            LOBYTE(v134) = 0;
                            if ( v8 + 8 <= v148 )
                            {
                              v137 = v8[2] & 0xF;
                              v151 = v136;
                              if ( (unsigned int)(unsigned __int8)v8[7] + 8 <= v136 )
                                v151 = (unsigned __int8)v8[7] + 8;
                              v148 = v8 + 13;
                              v134 = (unsigned __int64)&v8[v151];
                              if ( (unsigned __int64)(v8 + 13) <= v134 )
                                v138 = v8[12];
                              if ( (unsigned __int64)(v8 + 14) <= v134 )
                                v139 = *v148;
LABEL_436:
                              LOBYTE(v134) = 1;
                            }
                          }
                          if ( (_BYTE)v134 )
                            v135 = 1;
                        }
                        if ( byte_140173441 < 0 )
                        {
                          if ( !v135 )
                          {
                            v139 = 0;
                            v138 = 0;
                            v137 = 0;
                          }
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            (_DWORD)v148,
                            v134,
                            (unsigned int)&v259,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v149,
                            v147,
                            v137,
                            v138,
                            v139,
                            a2);
                        }
                        goto LABEL_54;
                      }
                    }
                    else
                    {
                      v146 = v145 - 65;
                      if ( v146 )
                      {
                        if ( v146 == 1 && v144 + 40 <= v143 )
                        {
                          if ( *(_DWORD *)(v144 + v134 + 12) )
                            v140 = (unsigned __int8 *)(v144 + v134 + 32);
                          v147 = *(_BYTE *)(v144 + v134 + 8);
                          v8 = *(_BYTE **)(v144 + v134 + 24);
                          v136 = *(_BYTE *)(v144 + v134 + 9);
                          goto LABEL_415;
                        }
                      }
                      else if ( v144 + 56 <= v143 )
                      {
                        goto LABEL_412;
                      }
                    }
                  }
                }
                if ( ++v141 >= v252 )
                {
                  v147 = 0;
                  goto LABEL_415;
                }
              }
            }
            if ( v132 != 14 )
            {
              if ( v132 != 27 )
                goto LABEL_54;
              if ( v29[1] == 7 && !*((_DWORD *)v29 + 2) )
              {
                if ( (byte_140173442 & 0x40) == 0 )
                  goto LABEL_54;
                v133 = *(_DWORD **)(a2 + 56);
                if ( v133 )
LABEL_392:
                  LODWORD(v8) = *v133;
LABEL_264:
                McTemplateK0pqd_EtwWriteTransfer(
                  (_DWORD)v30,
                  (_DWORD)v29,
                  (unsigned int)&v259,
                  a2,
                  (char)v8,
                  *(_DWORD *)(a2 + 48));
                goto LABEL_54;
              }
              goto LABEL_394;
            }
LABEL_396:
            if ( (byte_140173442 & 8) == 0 )
              goto LABEL_54;
LABEL_94:
            McTemplateK0pd_EtwWriteTransfer(v30, &EventNonReadWriteRequestComplete, &v259, a2, *(_DWORD *)(a2 + 48));
            goto LABEL_54;
          }
LABEL_14:
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqD(
              WPP_GLOBAL_Control->AttachedDevice,
              15LL,
              &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
              v5,
              a2,
              v15);
          }
          if ( (v16 & 0x100000) != 0 )
          {
            if ( RaidAdapterIsRegisteredForIdleDetection(*(_QWORD *)(v5 + 24))
              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 5024LL) + 20LL) & 1) == 0
              || (v60 = *(_QWORD *)(v5 + 24), (*(_BYTE *)(v60 + 107) & 4) != 0)
              || *(_DWORD *)(v60 + 348) != 1 )
            {
              *(_BYTE *)(v10 + 3) = 36;
              *(_QWORD *)(a2 + 56) = 0LL;
              v61 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
              v62 = *(_DWORD *)(v61 + *(_QWORD *)(v5 + 40));
              while ( (v62 & 1) == 0 )
              {
                v152 = v62;
                v62 = _InterlockedCompareExchange((volatile signed __int32 *)(v61 + *(_QWORD *)(v5 + 40)), v62 - 2, v62);
                if ( v152 == v62 )
                  goto LABEL_450;
              }
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
                KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_450:
              v28 = StorEtwLoggingEnabled == 0;
              v12 = -1073741823;
              *(_DWORD *)(a2 + 48) = -1073741823;
              *(_BYTE *)(a2 + 141) = -84;
              if ( v28 )
                goto LABEL_54;
              v259 = 0LL;
              IoGetActivityIdIrp(a2, &v259);
              v29 = *(char **)(a2 + 184);
              v153 = *v29;
              if ( *v29 != 15 )
              {
                if ( v153 != 14 )
                {
                  if ( v153 != 27 )
                    goto LABEL_54;
                  if ( v29[1] == 7 && !*((_DWORD *)v29 + 2) )
                  {
                    if ( (byte_140173442 & 0x40) == 0 )
                      goto LABEL_54;
                    v133 = *(_DWORD **)(a2 + 56);
                    if ( v133 )
                      goto LABEL_392;
                    goto LABEL_264;
                  }
                  goto LABEL_394;
                }
                goto LABEL_396;
              }
              if ( byte_140173441 >= 0 )
                goto LABEL_54;
              v154 = *((_QWORD *)v29 + 1);
              v155 = 0;
              v156 = 0;
              v157 = 0;
              v158 = 0;
              v159 = 0;
              if ( *(_BYTE *)(v154 + 2) == 40 )
              {
                v160 = 0LL;
                if ( *(_DWORD *)(v154 + 20) )
                  goto LABEL_54;
                v161 = 0;
                v253 = *(_DWORD *)(v154 + 56);
                if ( !v253 )
                  goto LABEL_54;
                while ( 1 )
                {
                  v162 = *(unsigned int *)(v154 + 4LL * v161 + 120);
                  if ( (unsigned int)v162 >= 0x80 )
                  {
                    v163 = *(unsigned int *)(v154 + 16);
                    if ( (unsigned int)v162 < (unsigned int)v163 )
                    {
                      v164 = (unsigned int)v162;
                      v165 = *(_DWORD *)(v162 + v154);
                      if ( v165 == 64 )
                      {
                        if ( v164 + 40 <= v163 )
                        {
LABEL_473:
                          if ( *(_BYTE *)(v164 + v154 + 10) )
                            v160 = (unsigned __int8 *)(v164 + v154 + 24);
                          v167 = *(_BYTE *)(v164 + v154 + 8);
                          v8 = *(_BYTE **)(v164 + v154 + 16);
                          v156 = *(_BYTE *)(v164 + v154 + 9);
LABEL_476:
                          if ( v160 )
                          {
                            LODWORD(v168) = *v160;
                            v155 = 0;
                            goto LABEL_482;
                          }
                          goto LABEL_54;
                        }
                      }
                      else
                      {
                        v166 = v165 - 65;
                        if ( v166 )
                        {
                          if ( v166 == 1 && v164 + 40 <= v163 )
                          {
                            if ( *(_DWORD *)(v164 + v154 + 12) )
                              v160 = (unsigned __int8 *)(v164 + v154 + 32);
                            v167 = *(_BYTE *)(v164 + v154 + 8);
                            v8 = *(_BYTE **)(v164 + v154 + 24);
                            v156 = *(_BYTE *)(v164 + v154 + 9);
                            goto LABEL_476;
                          }
                        }
                        else if ( v164 + 56 <= v163 )
                        {
                          goto LABEL_473;
                        }
                      }
                    }
                  }
                  if ( ++v161 >= v253 )
                  {
                    v167 = 0;
                    goto LABEL_476;
                  }
                }
              }
              LODWORD(v168) = *(unsigned __int8 *)(v154 + 72);
              v8 = *(_BYTE **)(v154 + 32);
              v156 = *(_BYTE *)(v154 + 11);
              v167 = *(_BYTE *)(v154 + 4);
              if ( *(_BYTE *)(v154 + 2) )
                goto LABEL_54;
LABEL_482:
              LOBYTE(v168) = (_BYTE)v168 - 8;
              if ( ((unsigned __int8)v168 & 0x5D) == 0 )
              {
                if ( *(_BYTE *)(v154 + 3) == 1 || !v8 || !v156 )
                  goto LABEL_500;
                v169 = *v8 & 0x7F;
                if ( v169 != 114 && v169 != 115 )
                {
                  v168 = &v8[v156];
                  v170 = 0;
                  if ( v8 + 8 <= v168 )
                  {
                    v171 = v156;
                    v157 = v8[2] & 0xF;
                    if ( (unsigned int)(unsigned __int8)v8[7] + 8 <= v156 )
                      v171 = (unsigned __int8)v8[7] + 8;
                    v168 = v8 + 13;
                    v172 = (unsigned __int64)&v8[v171];
                    if ( (unsigned __int64)(v8 + 13) <= v172 )
                      goto LABEL_492;
                    goto LABEL_493;
                  }
                  goto LABEL_498;
                }
                v168 = &v8[v156];
                v170 = 0;
                if ( v8 + 8 > v168 )
                  goto LABEL_498;
                goto LABEL_496;
              }
LABEL_54:
              IofCompleteRequest((PIRP)a2, 0);
              goto LABEL_41;
            }
          }
          switch ( v15 )
          {
            case 0:
              if ( *(_BYTE *)(v10 + 2) != 40 )
              {
                v17 = (unsigned __int8 *)(v10 + 72);
                goto LABEL_30;
              }
              v17 = 0LL;
              if ( *(_BYTE *)(v9 + 2) == 40 && !*(_DWORD *)(v9 + 20) )
              {
                v18 = *(_DWORD *)(v9 + 56);
                v19 = 0;
                if ( v18 )
                {
                  while ( 1 )
                  {
                    v20 = *(unsigned int *)(v9 + 4LL * v19 + 120);
                    if ( (unsigned int)v20 < 0x80 )
                      goto LABEL_27;
                    v21 = *(unsigned int *)(v9 + 16);
                    if ( (unsigned int)v20 >= (unsigned int)v21 )
                      goto LABEL_27;
                    v22 = *(_DWORD *)(v9 + v20);
                    v23 = v9 + v20;
                    if ( v22 == 64 )
                      break;
                    v37 = v22 - 65;
                    if ( !v37 )
                    {
                      v24 = v20 + 56;
LABEL_26:
                      if ( v24 <= v21 )
                      {
                        if ( *(_BYTE *)(v23 + 10) )
                          v17 = (unsigned __int8 *)(v23 + 24);
                        goto LABEL_30;
                      }
                      goto LABEL_27;
                    }
                    if ( v37 == 1 && v20 + 40 <= v21 )
                    {
                      if ( *(_DWORD *)(v23 + 12) )
                        v17 = (unsigned __int8 *)(v23 + 32);
                      goto LABEL_30;
                    }
LABEL_27:
                    if ( ++v19 >= v18 )
                      goto LABEL_30;
                  }
                  v24 = v20 + 40;
                  goto LABEL_26;
                }
              }
LABEL_30:
              if ( !v17 )
                goto LABEL_34;
              if ( *v17 == 27 && (v17[4] & 1) == 0 && RaUnitSwallowStopUnitCommand(v5) )
              {
                v28 = StorEtwLoggingEnabled == 0;
                *(_BYTE *)(v10 + 3) = 1;
                *(_QWORD *)(a2 + 56) = 0LL;
                *(_BYTE *)(a2 + 141) = -84;
                *(_DWORD *)(a2 + 48) = 0;
                if ( v28 )
                  goto LABEL_75;
                v259 = 0LL;
                IoGetActivityIdIrp(a2, &v259);
                v39 = *(char **)(a2 + 184);
                v40 = *v39;
                if ( *v39 != 15 )
                {
                  if ( v40 == 14 )
                  {
                    if ( (byte_140173442 & 8) != 0 )
                      McTemplateK0pd_EtwWriteTransfer(
                        v39,
                        &EventNonReadWriteRequestComplete,
                        &v259,
                        a2,
                        *(_DWORD *)(a2 + 48));
                  }
                  else if ( v40 == 27 )
                  {
                    if ( v39[1] != 7 || *((_DWORD *)v39 + 2) )
                    {
                      if ( (byte_140173442 & 0x20) != 0 )
                        McTemplateK0pd_EtwWriteTransfer(v39, &EventPnpRequestComplete, &v259, a2, *(_DWORD *)(a2 + 48));
                    }
                    else if ( (byte_140173442 & 0x40) != 0 )
                    {
                      v66 = *(int **)(a2 + 56);
                      if ( v66 )
                        v67 = *v66;
                      else
                        v67 = 0;
                      McTemplateK0pqd_EtwWriteTransfer(v67, v38, (unsigned int)&v259, a2, v67, *(_DWORD *)(a2 + 48));
                    }
                  }
                  goto LABEL_75;
                }
                if ( byte_140173441 >= 0 )
                {
LABEL_75:
                  IofCompleteRequest((PIRP)a2, 0);
                  v41 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
                  v42 = *(_DWORD *)(v41 + *(_QWORD *)(v5 + 40));
                  while ( (v42 & 1) == 0 )
                  {
                    v43 = v42;
                    v42 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)(v41 + *(_QWORD *)(v5 + 40)),
                            v42 - 2,
                            v42);
                    if ( v43 == v42 )
                      goto LABEL_78;
                  }
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
                    KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_78:
                  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                  {
                    WPP_SF_qq(
                      WPP_GLOBAL_Control->AttachedDevice,
                      16LL,
                      &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
                      v5,
                      a2);
                  }
                  v12 = 0;
                  goto LABEL_41;
                }
                v74 = *((_QWORD *)v39 + 1);
                v75 = 0;
                v76 = 0;
                v77 = 0;
                v78 = 0;
                v79 = 0;
                v80 = 0LL;
                if ( *(_BYTE *)(v74 + 2) == 40 )
                {
                  v81 = 0LL;
                  if ( *(_DWORD *)(v74 + 20) )
                    goto LABEL_75;
                  v82 = 0;
                  v251 = *(_DWORD *)(v74 + 56);
                  if ( !v251 )
                    goto LABEL_75;
                  while ( 1 )
                  {
                    v173 = *(unsigned int *)(v74 + 4LL * v82 + 120);
                    if ( (unsigned int)v173 >= 0x80 )
                    {
                      v174 = *(unsigned int *)(v74 + 16);
                      if ( (unsigned int)v173 < (unsigned int)v174 )
                      {
                        v175 = (unsigned int)v173;
                        v176 = *(_DWORD *)(v74 + v173);
                        if ( v176 == 64 )
                        {
                          if ( v175 + 40 <= v174 )
                          {
LABEL_515:
                            if ( *(_BYTE *)(v74 + v175 + 10) )
                              v81 = (unsigned __int8 *)(v175 + v74 + 24);
                            v178 = *(_BYTE *)(v74 + v175 + 8);
                            v80 = *(_BYTE **)(v74 + v175 + 16);
                            v76 = *(_BYTE *)(v74 + v175 + 9);
LABEL_518:
                            if ( v81 )
                            {
                              LODWORD(v179) = *v81;
                              v78 = 0;
                              v75 = 0;
                              goto LABEL_524;
                            }
                            goto LABEL_75;
                          }
                        }
                        else
                        {
                          v177 = v176 - 65;
                          if ( v177 )
                          {
                            if ( v177 == 1 && v175 + 40 <= v174 )
                            {
                              if ( *(_DWORD *)(v74 + v175 + 12) )
                                v81 = (unsigned __int8 *)(v175 + v74 + 32);
                              v178 = *(_BYTE *)(v74 + v175 + 8);
                              v80 = *(_BYTE **)(v74 + v175 + 24);
                              v76 = *(_BYTE *)(v74 + v175 + 9);
                              goto LABEL_518;
                            }
                          }
                          else if ( v175 + 56 <= v174 )
                          {
                            goto LABEL_515;
                          }
                        }
                      }
                    }
                    if ( ++v82 >= v251 )
                    {
                      v178 = 0;
                      goto LABEL_518;
                    }
                  }
                }
                LODWORD(v179) = *(unsigned __int8 *)(v74 + 72);
                v80 = *(_BYTE **)(v74 + 32);
                v76 = *(_BYTE *)(v74 + 11);
                v178 = *(_BYTE *)(v74 + 4);
                if ( *(_BYTE *)(v74 + 2) )
                  goto LABEL_75;
LABEL_524:
                LOBYTE(v179) = (_BYTE)v179 - 8;
                if ( ((unsigned __int8)v179 & 0x5D) != 0 )
                  goto LABEL_75;
                if ( *(_BYTE *)(v74 + 3) == 1 || !v80 || !v76 )
                {
LABEL_543:
                  if ( byte_140173441 < 0 )
                  {
                    if ( !v75 )
                    {
                      v79 = 0;
                      v78 = 0;
                      v77 = 0;
                    }
                    McTemplateK0pduuuuup_EtwWriteTransfer(
                      (_DWORD)v179,
                      (_DWORD)v80,
                      (unsigned int)&v259,
                      a2,
                      *(_DWORD *)(a2 + 48),
                      *(_BYTE *)(v74 + 3),
                      v178,
                      v77,
                      v78,
                      v79,
                      a2);
                  }
                  goto LABEL_75;
                }
                v180 = *v80 & 0x7F;
                if ( v180 == 114 || v180 == 115 )
                {
                  v179 = &v80[v76];
                  v181 = 0;
                  if ( v80 + 8 > v179 )
                    goto LABEL_541;
                  v78 = v80[2];
                  v77 = v80[1] & 0xF;
                  v79 = v80[3];
                }
                else
                {
                  v179 = &v80[v76];
                  v181 = 0;
                  if ( v80 + 8 > v179 )
                    goto LABEL_541;
                  v77 = v80[2] & 0xF;
                  v182 = v76;
                  if ( (unsigned int)(unsigned __int8)v80[7] + 8 <= v76 )
                    v182 = (unsigned __int8)v80[7] + 8;
                  v179 = v80 + 13;
                  v183 = (unsigned __int64)&v80[v182];
                  if ( (unsigned __int64)(v80 + 13) > v183 )
                    v78 = 0;
                  else
                    v78 = v80[12];
                  if ( (unsigned __int64)(v80 + 14) <= v183 )
                    v79 = *v179;
                }
                v181 = 1;
LABEL_541:
                if ( v181 )
                  v75 = 1;
                goto LABEL_543;
              }
              v25 = *(_QWORD *)(v5 + 24);
              if ( (*(_DWORD *)(v25 + 128) & 4) == 0 && !*(_DWORD *)(v25 + 328) )
              {
LABEL_34:
                if ( DisableIEEE1667 && v17 )
                {
                  if ( *v17 == 0xA2 )
                  {
                    if ( v17[1] != 0xEE )
                      goto LABEL_35;
LABEL_634:
                    *(_BYTE *)(v10 + 3) = 4;
                    *(_QWORD *)(a2 + 56) = 0LL;
                    v214 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
                    v215 = *(_DWORD *)(v214 + *(_QWORD *)(v5 + 40));
                    while ( (v215 & 1) == 0 )
                    {
                      v216 = v215;
                      v215 = _InterlockedCompareExchange(
                               (volatile signed __int32 *)(v214 + *(_QWORD *)(v5 + 40)),
                               v215 - 2,
                               v215);
                      if ( v216 == v215 )
                        goto LABEL_640;
                    }
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
                      KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_640:
                    v28 = StorEtwLoggingEnabled == 0;
                    v12 = -1073741637;
                    *(_DWORD *)(a2 + 48) = -1073741637;
                    *(_BYTE *)(a2 + 141) = -84;
                    if ( v28 )
                      goto LABEL_54;
                    v259 = 0LL;
                    IoGetActivityIdIrp(a2, &v259);
                    v29 = *(char **)(a2 + 184);
                    v217 = *v29;
                    if ( *v29 == 15 )
                    {
                      if ( byte_140173441 >= 0 )
                        goto LABEL_54;
                      v154 = *((_QWORD *)v29 + 1);
                      v155 = 0;
                      v218 = 0;
                      v157 = 0;
                      v158 = 0;
                      v159 = 0;
                      if ( *(_BYTE *)(v154 + 2) != 40 )
                      {
                        LODWORD(v168) = *(unsigned __int8 *)(v154 + 72);
                        v8 = *(_BYTE **)(v154 + 32);
                        v218 = *(_BYTE *)(v154 + 11);
                        v167 = *(_BYTE *)(v154 + 4);
                        if ( *(_BYTE *)(v154 + 2) )
                          goto LABEL_54;
                        goto LABEL_672;
                      }
                      v219 = 0LL;
                      if ( *(_DWORD *)(v154 + 20) )
                        goto LABEL_54;
                      v220 = 0;
                      v255 = *(_DWORD *)(v154 + 56);
                      if ( !v255 )
                        goto LABEL_54;
                      while ( 1 )
                      {
                        v221 = *(unsigned int *)(v154 + 4LL * v220 + 120);
                        if ( (unsigned int)v221 >= 0x80 )
                        {
                          v222 = *(unsigned int *)(v154 + 16);
                          if ( (unsigned int)v221 < (unsigned int)v222 )
                          {
                            v223 = (unsigned int)v221;
                            v224 = *(_DWORD *)(v221 + v154);
                            if ( v224 == 64 )
                            {
                              if ( v223 + 40 <= v222 )
                              {
LABEL_663:
                                if ( *(_BYTE *)(v223 + v154 + 10) )
                                  v219 = (unsigned __int8 *)(v223 + v154 + 24);
                                v167 = *(_BYTE *)(v223 + v154 + 8);
                                v8 = *(_BYTE **)(v223 + v154 + 16);
                                v218 = *(_BYTE *)(v223 + v154 + 9);
LABEL_666:
                                if ( !v219 )
                                  goto LABEL_54;
                                LODWORD(v168) = *v219;
                                v155 = 0;
LABEL_672:
                                LOBYTE(v168) = (_BYTE)v168 - 8;
                                if ( ((unsigned __int8)v168 & 0x5D) != 0 )
                                  goto LABEL_54;
                                if ( *(_BYTE *)(v154 + 3) == 1 || !v8 || !v218 )
                                  goto LABEL_500;
                                v226 = *v8 & 0x7F;
                                if ( v226 != 114 && v226 != 115 )
                                {
                                  v168 = &v8[v218];
                                  v170 = 0;
                                  if ( v8 + 8 <= v168 )
                                  {
                                    v227 = v218;
                                    v157 = v8[2] & 0xF;
                                    if ( (unsigned int)(unsigned __int8)v8[7] + 8 <= v218 )
                                      v227 = (unsigned __int8)v8[7] + 8;
                                    v168 = v8 + 13;
                                    v172 = (unsigned __int64)&v8[v227];
                                    if ( (unsigned __int64)(v8 + 13) <= v172 )
LABEL_492:
                                      v158 = v8[12];
LABEL_493:
                                    if ( (unsigned __int64)(v8 + 14) <= v172 )
                                      v159 = *v168;
LABEL_497:
                                    v170 = 1;
                                  }
LABEL_498:
                                  if ( v170 )
                                    v155 = 1;
LABEL_500:
                                  if ( byte_140173441 < 0 )
                                  {
                                    if ( !v155 )
                                    {
                                      v159 = 0;
                                      v158 = 0;
                                      v157 = 0;
                                    }
                                    McTemplateK0pduuuuup_EtwWriteTransfer(
                                      (_DWORD)v168,
                                      v154,
                                      (unsigned int)&v259,
                                      a2,
                                      *(_DWORD *)(a2 + 48),
                                      *(_BYTE *)(v154 + 3),
                                      v167,
                                      v157,
                                      v158,
                                      v159,
                                      a2);
                                  }
                                  goto LABEL_54;
                                }
                                v168 = &v8[v218];
                                v170 = 0;
                                if ( v8 + 8 > v168 )
                                  goto LABEL_498;
LABEL_496:
                                v158 = v8[2];
                                v157 = v8[1] & 0xF;
                                v159 = v8[3];
                                goto LABEL_497;
                              }
                            }
                            else
                            {
                              v225 = v224 - 65;
                              if ( v225 )
                              {
                                if ( v225 == 1 && v223 + 40 <= v222 )
                                {
                                  if ( *(_DWORD *)(v223 + v154 + 12) )
                                    v219 = (unsigned __int8 *)(v223 + v154 + 32);
                                  v167 = *(_BYTE *)(v223 + v154 + 8);
                                  v8 = *(_BYTE **)(v223 + v154 + 24);
                                  v218 = *(_BYTE *)(v223 + v154 + 9);
                                  goto LABEL_666;
                                }
                              }
                              else if ( v223 + 56 <= v222 )
                              {
                                goto LABEL_663;
                              }
                            }
                          }
                        }
                        if ( ++v220 >= v255 )
                        {
                          v167 = 0;
                          goto LABEL_666;
                        }
                      }
                    }
                    if ( v217 != 14 )
                    {
                      if ( v217 != 27 )
                        goto LABEL_54;
                      if ( v29[1] == 7 && !*((_DWORD *)v29 + 2) )
                      {
                        if ( (byte_140173442 & 0x40) == 0 )
                          goto LABEL_54;
                        v133 = *(_DWORD **)(a2 + 56);
                        if ( v133 )
                          goto LABEL_392;
                        goto LABEL_264;
                      }
LABEL_394:
                      if ( (byte_140173442 & 0x20) == 0 )
                        goto LABEL_54;
LABEL_108:
                      McTemplateK0pd_EtwWriteTransfer(v30, &EventPnpRequestComplete, &v259, a2, *(_DWORD *)(a2 + 48));
                      goto LABEL_54;
                    }
                    goto LABEL_396;
                  }
                  if ( *v17 == 0xB5 && v17[1] == 0xEE )
                    goto LABEL_634;
                }
LABEL_35:
                if ( StorEtwLoggingEnabled && (byte_140173441 & 0x1E) != 0 )
                {
                  if ( (v26 = *v17, (_BYTE)v26 == 8)
                    || (unsigned __int8)v26 <= 0x2Au && (v64 = 0x50000000400LL, _bittest64(&v64, v26))
                    || (LOBYTE(v26) = v26 + 120, (unsigned __int8)v26 <= 0x22u)
                    && (v65 = 0x500000005LL, _bittest64(&v65, v26)) )
                  {
                    IoGetActivityIdIrp(a2, &v261);
                    StorEtwIORequestDispatch(a2);
                  }
                }
                v12 = RaidUnitSubmitRequest(v5, a2);
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                {
                  WPP_SF_qqD(
                    WPP_GLOBAL_Control->AttachedDevice,
                    19LL,
                    &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
                    v5,
                    a2,
                    v12);
                }
                goto LABEL_41;
              }
              v83 = 0;
              if ( (v16 & 0x800) != 0 && (*(_DWORD *)(v5 + 512) & 0x40) != 0 )
              {
                if ( *v17 == 53 )
                {
LABEL_547:
                  v83 = 1;
                  goto LABEL_548;
                }
                if ( *v17 == 27 )
                {
                  if ( (v17[4] & 1) != 0 )
                    goto LABEL_550;
                  goto LABEL_547;
                }
              }
LABEL_548:
              if ( *v17 != 27 || (v17[4] & 1) == 0 )
              {
LABEL_551:
                if ( !v83 )
                  goto LABEL_34;
LABEL_552:
                v28 = StorEtwLoggingEnabled == 0;
                *(_BYTE *)(v10 + 3) = 1;
                *(_QWORD *)(a2 + 56) = 0LL;
                *(_BYTE *)(a2 + 141) = -84;
                *(_DWORD *)(a2 + 48) = 0;
                if ( !v28 )
                {
                  v259 = 0LL;
                  IoGetActivityIdIrp(a2, &v259);
                  v185 = *(unsigned __int8 **)(a2 + 184);
                  v186 = *v185;
                  if ( (_BYTE)v186 != 15 )
                  {
                    if ( (_BYTE)v186 == 14 )
                    {
                      if ( (byte_140173442 & 8) != 0 )
                        McTemplateK0pd_EtwWriteTransfer(
                          v186,
                          &EventNonReadWriteRequestComplete,
                          &v259,
                          a2,
                          *(_DWORD *)(a2 + 48));
                    }
                    else if ( (_BYTE)v186 == 27 )
                    {
                      if ( v185[1] != 7 || *((_DWORD *)v185 + 2) )
                      {
                        if ( (byte_140173442 & 0x20) != 0 )
                          McTemplateK0pd_EtwWriteTransfer(
                            v186,
                            &EventPnpRequestComplete,
                            &v259,
                            a2,
                            *(_DWORD *)(a2 + 48));
                      }
                      else if ( (byte_140173442 & 0x40) != 0 )
                      {
                        v187 = *(int **)(a2 + 56);
                        if ( v187 )
                          v188 = *v187;
                        else
                          v188 = 0;
                        McTemplateK0pqd_EtwWriteTransfer(
                          v188,
                          v184,
                          (unsigned int)&v259,
                          a2,
                          v188,
                          *(_DWORD *)(a2 + 48));
                      }
                    }
                    goto LABEL_614;
                  }
                  if ( byte_140173441 < 0 )
                  {
                    v189 = *((_QWORD *)v185 + 1);
                    v190 = 0;
                    v191 = 0;
                    v192 = 0;
                    v193 = 0;
                    v194 = 0LL;
                    LOBYTE(v257) = 0;
                    if ( *(_BYTE *)(v189 + 2) == 40 )
                    {
                      v195 = 0LL;
                      if ( *(_DWORD *)(v189 + 20) )
                        goto LABEL_614;
                      v196 = 0;
                      v254 = *(_DWORD *)(v189 + 56);
                      if ( !v254 )
                        goto LABEL_614;
                      while ( 1 )
                      {
                        v197 = *(unsigned int *)(v189 + 4LL * v196 + 120);
                        if ( (unsigned int)v197 >= 0x80 )
                        {
                          v198 = *(unsigned int *)(v189 + 16);
                          if ( (unsigned int)v197 < (unsigned int)v198 )
                          {
                            v199 = (unsigned int)v197;
                            v200 = *(_DWORD *)(v189 + v197);
                            if ( v200 == 64 )
                            {
                              if ( v199 + 40 <= v198 )
                              {
LABEL_581:
                                if ( *(_BYTE *)(v189 + v199 + 10) )
                                  v195 = (char *)(v199 + v189 + 24);
                                v202 = *(_BYTE *)(v189 + v199 + 8);
                                v194 = *(_BYTE **)(v189 + v199 + 16);
                                v190 = *(_BYTE *)(v189 + v199 + 9);
LABEL_584:
                                if ( v195 )
                                {
                                  v203 = *v195;
                                  v193 = 0;
                                  v192 = 0;
                                  goto LABEL_590;
                                }
                                goto LABEL_614;
                              }
                            }
                            else
                            {
                              v201 = v200 - 65;
                              if ( v201 )
                              {
                                if ( v201 == 1 && v199 + 40 <= v198 )
                                {
                                  if ( *(_DWORD *)(v189 + v199 + 12) )
                                    v195 = (char *)(v199 + v189 + 32);
                                  v202 = *(_BYTE *)(v189 + v199 + 8);
                                  v194 = *(_BYTE **)(v189 + v199 + 24);
                                  v190 = *(_BYTE *)(v189 + v199 + 9);
                                  goto LABEL_584;
                                }
                              }
                              else if ( v199 + 56 <= v198 )
                              {
                                goto LABEL_581;
                              }
                            }
                          }
                        }
                        if ( ++v196 >= v254 )
                        {
                          v202 = 0;
                          goto LABEL_584;
                        }
                      }
                    }
                    v203 = *(_BYTE *)(v189 + 72);
                    v194 = *(_BYTE **)(v189 + 32);
                    v190 = *(_BYTE *)(v189 + 11);
                    v202 = *(_BYTE *)(v189 + 4);
                    if ( *(_BYTE *)(v189 + 2) )
                      goto LABEL_614;
LABEL_590:
                    if ( ((v203 - 8) & 0x5D) != 0 )
                      goto LABEL_614;
                    if ( *(_BYTE *)(v189 + 3) == 1 || !v194 || !v190 )
                    {
                      v208 = v257;
LABEL_610:
                      if ( byte_140173441 < 0 )
                      {
                        if ( !v208 )
                        {
                          v193 = 0;
                          v192 = 0;
                          v191 = 0;
                        }
                        McTemplateK0pduuuuup_EtwWriteTransfer(
                          v208,
                          (_DWORD)v194,
                          (unsigned int)&v259,
                          a2,
                          *(_DWORD *)(a2 + 48),
                          *(_BYTE *)(v189 + 3),
                          v202,
                          v191,
                          v192,
                          v193,
                          a2);
                      }
                      goto LABEL_614;
                    }
                    v204 = *v194 & 0x7F;
                    if ( v204 == 114 || v204 == 115 )
                    {
                      v205 = 0;
                      if ( v194 + 8 <= &v194[v190] )
                      {
                        v192 = v194[2];
                        v191 = v194[1] & 0xF;
                        v193 = v194[3];
LABEL_607:
                        v205 = 1;
                      }
                    }
                    else
                    {
                      v205 = 0;
                      if ( v194 + 8 <= &v194[v190] )
                      {
                        v191 = v194[2] & 0xF;
                        v206 = v190;
                        if ( (unsigned int)(unsigned __int8)v194[7] + 8 <= v190 )
                          v206 = (unsigned __int8)v194[7] + 8;
                        v207 = (unsigned __int64)&v194[v206];
                        if ( (unsigned __int64)(v194 + 13) > v207 )
                          v192 = 0;
                        else
                          v192 = v194[12];
                        if ( (unsigned __int64)(v194 + 14) > v207 )
                          v193 = 0;
                        else
                          v193 = v194[13];
                        goto LABEL_607;
                      }
                    }
                    v208 = v205 != 0;
                    goto LABEL_610;
                  }
                }
LABEL_614:
                IofCompleteRequest((PIRP)a2, 0);
                v209 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
                v210 = *(_DWORD *)(v209 + *(_QWORD *)(v5 + 40));
                while ( (v210 & 1) == 0 )
                {
                  v211 = v210;
                  v210 = _InterlockedCompareExchange(
                           (volatile signed __int32 *)(v209 + *(_QWORD *)(v5 + 40)),
                           v210 - 2,
                           v210);
                  if ( v211 == v210 )
                    goto LABEL_620;
                }
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
                  KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_620:
                if ( *v17 == 53 )
                {
                  v212 = WPP_GLOBAL_Control;
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
                    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
                  {
                    goto LABEL_631;
                  }
                  v213 = 17LL;
                }
                else
                {
                  if ( *v17 != 27 )
                    goto LABEL_631;
                  v212 = WPP_GLOBAL_Control;
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
                    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
                  {
                    goto LABEL_631;
                  }
                  v213 = 18LL;
                }
                WPP_SF_qq(v212->AttachedDevice, v213, &WPP_25fa594137633db1985de5dda85c818b_Traceguids, v5, a2);
LABEL_631:
                v12 = 0;
                goto LABEL_41;
              }
LABEL_550:
              if ( (*(_DWORD *)(v5 + 512) & 0x20) != 0 )
                goto LABEL_552;
              goto LABEL_551;
            case 10:
              v12 = StorUnitExecuteNvmeSrb(v5, a2);
LABEL_41:
              v4 = v260;
              goto LABEL_42;
            case 7:
LABEL_57:
              v32 = RaidUnitSubmitRequest(v5, a2);
              v33 = 0;
              break;
            case 8:
              v32 = RaUnitFlushSrb(v5, a2);
              v33 = v32 != 259;
              break;
            default:
              switch ( v15 )
              {
                case 1:
                  v32 = RaUnitClaimDeviceSrb(v5, a2);
                  v33 = 1;
                  goto LABEL_58;
                case 2:
                case 9:
                  goto LABEL_57;
                case 4:
                  v32 = RaUnitReleaseQueueSrb(v5, a2);
                  v33 = 1;
                  goto LABEL_58;
                case 6:
                  v32 = RaUnitReleaseDeviceSrb(v5, a2);
                  v33 = 1;
                  goto LABEL_58;
                case 16:
                case 19:
                case 32:
                  v32 = RaidUnitSubmitResetRequest(v5, a2);
                  v33 = 1;
                  goto LABEL_58;
                case 18:
                  v32 = RaUnitResetBusSrb(v5, a2);
                  v33 = 1;
                  goto LABEL_58;
                case 21:
                  v32 = RaUnitFlushQueueSrb(v5, a2);
                  v33 = 1;
                  goto LABEL_58;
                case 23:
                  v28 = StorEtwLoggingEnabled == 0;
                  v12 = -1073741808;
                  *(_DWORD *)(a2 + 48) = -1073741808;
                  *(_BYTE *)(a2 + 141) = -84;
                  if ( v28 )
                    goto LABEL_745;
                  v259 = 0LL;
                  IoGetActivityIdIrp(a2, &v259);
                  v229 = *(unsigned __int8 **)(a2 + 184);
                  v230 = *v229;
                  if ( (_BYTE)v230 != 15 )
                  {
                    if ( (_BYTE)v230 == 14 )
                    {
                      if ( (byte_140173442 & 8) != 0 )
                        McTemplateK0pd_EtwWriteTransfer(
                          v230,
                          &EventNonReadWriteRequestComplete,
                          &v259,
                          a2,
                          *(_DWORD *)(a2 + 48));
                    }
                    else if ( (_BYTE)v230 == 27 )
                    {
                      if ( v229[1] != 7 || *((_DWORD *)v229 + 2) )
                      {
                        if ( (byte_140173442 & 0x20) != 0 )
                          McTemplateK0pd_EtwWriteTransfer(
                            v230,
                            &EventPnpRequestComplete,
                            &v259,
                            a2,
                            *(_DWORD *)(a2 + 48));
                      }
                      else if ( (byte_140173442 & 0x40) != 0 )
                      {
                        v231 = *(_DWORD **)(a2 + 56);
                        if ( v231 )
                          LODWORD(v8) = *v231;
                        McTemplateK0pqd_EtwWriteTransfer(
                          v230,
                          (_DWORD)v228,
                          (unsigned int)&v259,
                          a2,
                          (char)v8,
                          *(_DWORD *)(a2 + 48));
                      }
                    }
                    goto LABEL_745;
                  }
                  if ( byte_140173441 >= 0 )
                    goto LABEL_745;
                  v232 = *((_QWORD *)v229 + 1);
                  v233 = 0;
                  v234 = 0;
                  v235 = 0;
                  v236 = 0;
                  v237 = 0;
                  if ( *(_BYTE *)(v232 + 2) == 40 )
                  {
                    v228 = 0LL;
                    if ( *(_DWORD *)(v232 + 20) )
                      goto LABEL_745;
                    v238 = 0;
                    v256 = *(_DWORD *)(v232 + 56);
                    if ( !v256 )
                      goto LABEL_745;
                    while ( 1 )
                    {
                      v239 = *(unsigned int *)(v232 + 4LL * v238 + 120);
                      if ( (unsigned int)v239 >= 0x80 )
                      {
                        v240 = *(unsigned int *)(v232 + 16);
                        if ( (unsigned int)v239 < (unsigned int)v240 )
                        {
                          v241 = (unsigned int)v239;
                          v242 = *(_DWORD *)(v239 + v232);
                          if ( v242 == 64 )
                          {
                            if ( v241 + 40 <= v240 )
                            {
LABEL_713:
                              if ( *(_BYTE *)(v241 + v232 + 10) )
                                v228 = (unsigned __int8 *)(v241 + v232 + 24);
                              v244 = *(_BYTE *)(v241 + v232 + 8);
                              v8 = *(_BYTE **)(v241 + v232 + 16);
                              v234 = *(_BYTE *)(v241 + v232 + 9);
                              goto LABEL_716;
                            }
                          }
                          else
                          {
                            v243 = v242 - 65;
                            if ( v243 )
                            {
                              if ( v243 == 1 && v241 + 40 <= v240 )
                              {
                                if ( *(_DWORD *)(v241 + v232 + 12) )
                                  v228 = (unsigned __int8 *)(v241 + v232 + 32);
                                v244 = *(_BYTE *)(v241 + v232 + 8);
                                v8 = *(_BYTE **)(v241 + v232 + 24);
                                v234 = *(_BYTE *)(v241 + v232 + 9);
                                goto LABEL_716;
                              }
                            }
                            else if ( v241 + 56 <= v240 )
                            {
                              goto LABEL_713;
                            }
                          }
                        }
                      }
                      if ( ++v238 >= v256 )
                      {
                        v244 = 0;
LABEL_716:
                        if ( !v228 )
                          goto LABEL_745;
                        LODWORD(v245) = *v228;
                        v236 = 0;
                        v233 = 0;
                        goto LABEL_722;
                      }
                    }
                  }
                  LODWORD(v245) = *(unsigned __int8 *)(v232 + 72);
                  v8 = *(_BYTE **)(v232 + 32);
                  v234 = *(_BYTE *)(v232 + 11);
                  v244 = *(_BYTE *)(v232 + 4);
                  if ( *(_BYTE *)(v232 + 2) )
                    goto LABEL_745;
LABEL_722:
                  LOBYTE(v245) = (_BYTE)v245 - 8;
                  if ( ((unsigned __int8)v245 & 0x5D) != 0 )
                    goto LABEL_745;
                  if ( *(_BYTE *)(v232 + 3) == 1 || !v8 || !v234 )
                    goto LABEL_741;
                  v246 = *v8 & 0x7F;
                  if ( v246 == 114 || v246 == 115 )
                  {
                    v245 = &v8[v234];
                    LOBYTE(v228) = 0;
                    if ( v8 + 8 > v245 )
                      goto LABEL_739;
                    v236 = v8[2];
                    v235 = v8[1] & 0xF;
                    v237 = v8[3];
                  }
                  else
                  {
                    v245 = &v8[v234];
                    LOBYTE(v228) = 0;
                    if ( v8 + 8 > v245 )
                      goto LABEL_739;
                    v235 = v8[2] & 0xF;
                    v247 = v234;
                    if ( (unsigned int)(unsigned __int8)v8[7] + 8 <= v234 )
                      v247 = (unsigned __int8)v8[7] + 8;
                    v245 = v8 + 13;
                    v228 = &v8[v247];
                    if ( v8 + 13 > v228 )
                      v236 = 0;
                    else
                      v236 = v8[12];
                    if ( v8 + 14 <= v228 )
                      v237 = *v245;
                  }
                  LOBYTE(v228) = 1;
LABEL_739:
                  if ( (_BYTE)v228 )
                    v233 = 1;
LABEL_741:
                  if ( byte_140173441 < 0 )
                  {
                    if ( !v233 )
                    {
                      v237 = 0;
                      v236 = 0;
                      v235 = 0;
                    }
                    McTemplateK0pduuuuup_EtwWriteTransfer(
                      (_DWORD)v245,
                      (_DWORD)v228,
                      (unsigned int)&v259,
                      a2,
                      *(_DWORD *)(a2 + 48),
                      *(_BYTE *)(v232 + 3),
                      v244,
                      v235,
                      v236,
                      v237,
                      a2);
                  }
LABEL_745:
                  IofCompleteRequest((PIRP)a2, 0);
                  v33 = 1;
                  break;
                case 24:
                  v32 = RaUnitLockQueueSrb(v5, a2);
                  v33 = 1;
                  goto LABEL_58;
                case 25:
                  v32 = RaUnitUnlockQueueSrb(v5, a2);
                  v33 = 1;
                  goto LABEL_58;
                case 26:
                  v32 = RaUnitQuiesceDeviceSrb(v5, a2);
                  v33 = v32 != 259;
                  goto LABEL_58;
                default:
                  v32 = RaUnitUnknownSrb(v5, a2);
                  v33 = 1;
                  goto LABEL_58;
              }
              goto LABEL_59;
          }
LABEL_58:
          v12 = v32;
LABEL_59:
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqD(
              WPP_GLOBAL_Control->AttachedDevice,
              20LL,
              &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
              v5,
              a2,
              v12);
          }
          if ( v33 )
          {
            v34 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
            v35 = *(_DWORD *)(v34 + *(_QWORD *)(v5 + 40));
            while ( (v35 & 1) == 0 )
            {
              v36 = v35;
              v35 = _InterlockedCompareExchange((volatile signed __int32 *)(v34 + *(_QWORD *)(v5 + 40)), v35 - 2, v35);
              if ( v36 == v35 )
                goto LABEL_41;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
          }
          goto LABEL_41;
        }
        *(_BYTE *)(v10 + 3) = 6;
        *(_QWORD *)(a2 + 56) = 0LL;
        v53 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v54 = *(_DWORD *)(v53 + *(_QWORD *)(v5 + 40));
        while ( (v54 & 1) == 0 )
        {
          v55 = v54;
          v54 = _InterlockedCompareExchange((volatile signed __int32 *)(v53 + *(_QWORD *)(v5 + 40)), v54 - 2, v54);
          if ( v55 == v54 )
            goto LABEL_98;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_98:
        v28 = StorEtwLoggingEnabled == 0;
        v12 = -1073741637;
        *(_DWORD *)(a2 + 48) = -1073741637;
        *(_BYTE *)(a2 + 141) = -84;
        if ( v28 )
          goto LABEL_54;
        v259 = 0LL;
        IoGetActivityIdIrp(a2, &v259);
        v30 = *(char **)(a2 + 184);
        v56 = *v30;
        if ( *v30 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_54;
          v46 = *((_QWORD *)v30 + 1);
          v47 = 0;
          v57 = 0;
          v49 = 0;
          v50 = 0;
          if ( *(_BYTE *)(v46 + 2) != 40 )
          {
            LODWORD(v113) = *(unsigned __int8 *)(v46 + 72);
            v8 = *(_BYTE **)(v46 + 32);
            v57 = *(_BYTE *)(v46 + 11);
            v112 = *(_BYTE *)(v46 + 4);
            if ( *(_BYTE *)(v46 + 2) )
              goto LABEL_54;
            goto LABEL_366;
          }
          v58 = 0LL;
          if ( *(_DWORD *)(v46 + 20) )
            goto LABEL_54;
          v59 = 0;
          v249 = *(_DWORD *)(v46 + 56);
          if ( !v249 )
            goto LABEL_54;
          while ( 1 )
          {
            v124 = *(unsigned int *)(v46 + 4LL * v59 + 120);
            if ( (unsigned int)v124 >= 0x80 )
            {
              v125 = *(unsigned int *)(v46 + 16);
              if ( (unsigned int)v124 < (unsigned int)v125 )
              {
                v126 = (unsigned int)v124;
                v127 = *(_DWORD *)(v46 + v124);
                if ( v127 == 64 )
                {
                  if ( v126 + 40 <= v125 )
                  {
LABEL_357:
                    if ( *(_BYTE *)(v46 + v126 + 10) )
                      v58 = (unsigned __int8 *)(v126 + v46 + 24);
                    v112 = *(_BYTE *)(v46 + v126 + 8);
                    v8 = *(_BYTE **)(v46 + v126 + 16);
                    v57 = *(_BYTE *)(v46 + v126 + 9);
LABEL_360:
                    if ( !v58 )
                      goto LABEL_54;
                    LODWORD(v113) = *v58;
                    v47 = 0;
LABEL_366:
                    LOBYTE(v113) = v113 - 8;
                    if ( (v113 & 0x5D) != 0 )
                      goto LABEL_54;
                    v114 = *(_BYTE *)(v46 + 3);
                    if ( v114 == 1 || !v8 || !v57 )
                      goto LABEL_344;
                    v129 = *v8 & 0x7F;
                    if ( v129 != 114 && v129 != 115 )
                    {
                      v113 = (unsigned __int64)&v8[v57];
                      LOBYTE(v46) = 0;
                      if ( (unsigned __int64)(v8 + 8) <= v113 )
                      {
                        v49 = v8[2] & 0xF;
                        v130 = v57;
                        if ( (unsigned int)(unsigned __int8)v8[7] + 8 <= v57 )
                          v130 = (unsigned __int8)v8[7] + 8;
                        v113 = (unsigned __int64)(v8 + 13);
                        v46 = (unsigned __int64)&v8[v130];
                        if ( (unsigned __int64)(v8 + 13) <= v46 )
                          goto LABEL_336;
                        goto LABEL_337;
                      }
LABEL_342:
                      if ( (_BYTE)v46 )
                        v47 = 1;
LABEL_344:
                      if ( byte_140173441 >= 0 )
                        goto LABEL_54;
                      if ( !v47 )
                      {
LABEL_304:
                        LOBYTE(v9) = 0;
                        v50 = 0;
                        v49 = 0;
                      }
LABEL_305:
                      McTemplateK0pduuuuup_EtwWriteTransfer(
                        v113,
                        v46,
                        (unsigned int)&v259,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v114,
                        v112,
                        v49,
                        v50,
                        v9,
                        a2);
                      goto LABEL_54;
                    }
                    v113 = (unsigned __int64)&v8[v57];
                    LOBYTE(v46) = 0;
                    if ( (unsigned __int64)(v8 + 8) > v113 )
                      goto LABEL_342;
LABEL_340:
                    v50 = v8[2];
                    v49 = v8[1] & 0xF;
                    LOBYTE(v9) = v8[3];
                    goto LABEL_341;
                  }
                }
                else
                {
                  v128 = v127 - 65;
                  if ( v128 )
                  {
                    if ( v128 == 1 && v126 + 40 <= v125 )
                    {
                      if ( *(_DWORD *)(v46 + v126 + 12) )
                        v58 = (unsigned __int8 *)(v126 + v46 + 32);
                      v112 = *(_BYTE *)(v46 + v126 + 8);
                      v8 = *(_BYTE **)(v46 + v126 + 24);
                      v57 = *(_BYTE *)(v46 + v126 + 9);
                      goto LABEL_360;
                    }
                  }
                  else if ( v126 + 56 <= v125 )
                  {
                    goto LABEL_357;
                  }
                }
              }
            }
            if ( ++v59 >= v249 )
            {
              v112 = 0;
              goto LABEL_360;
            }
          }
        }
        if ( v56 != 14 )
        {
          if ( v56 != 27 )
            goto LABEL_54;
          if ( v30[1] == 7 && !*((_DWORD *)v30 + 2) )
          {
            if ( (byte_140173442 & 0x40) == 0 )
              goto LABEL_54;
            v63 = *(_DWORD **)(a2 + 56);
            if ( !v63 )
              goto LABEL_264;
LABEL_263:
            LODWORD(v8) = *v63;
            goto LABEL_264;
          }
          goto LABEL_107;
        }
      }
    }
    else
    {
      v28 = StorEtwLoggingEnabled == 0;
      v12 = -1073741811;
      *(_DWORD *)(a2 + 48) = -1073741811;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v28 )
        goto LABEL_54;
      v259 = 0LL;
      IoGetActivityIdIrp(a2, &v259);
      v30 = *(char **)(a2 + 184);
      v31 = *v30;
      if ( *v30 == 15 )
      {
        if ( byte_140173441 >= 0 )
          goto LABEL_54;
        v46 = *((_QWORD *)v30 + 1);
        v68 = 0;
        v69 = 0;
        v49 = 0;
        v50 = 0;
        if ( *(_BYTE *)(v46 + 2) != 40 )
        {
          LODWORD(v113) = *(unsigned __int8 *)(v46 + 72);
          v8 = *(_BYTE **)(v46 + 32);
          v69 = *(_BYTE *)(v46 + 11);
          v112 = *(_BYTE *)(v46 + 4);
          if ( *(_BYTE *)(v46 + 2) )
            goto LABEL_54;
          goto LABEL_284;
        }
        v70 = 0LL;
        if ( *(_DWORD *)(v46 + 20) )
          goto LABEL_54;
        v71 = 0;
        v250 = *(_DWORD *)(v46 + 56);
        if ( !v250 )
          goto LABEL_54;
        while ( 1 )
        {
          v107 = *(unsigned int *)(v46 + 4LL * v71 + 120);
          if ( (unsigned int)v107 >= 0x80 )
          {
            v108 = *(unsigned int *)(v46 + 16);
            if ( (unsigned int)v107 < (unsigned int)v108 )
            {
              v109 = (unsigned int)v107;
              v110 = *(_DWORD *)(v107 + v46);
              if ( v110 == 64 )
              {
                if ( v109 + 40 <= v108 )
                {
LABEL_275:
                  if ( *(_BYTE *)(v109 + v46 + 10) )
                    v70 = (unsigned __int8 *)(v109 + v46 + 24);
                  v112 = *(_BYTE *)(v109 + v46 + 8);
                  v8 = *(_BYTE **)(v109 + v46 + 16);
                  v69 = *(_BYTE *)(v109 + v46 + 9);
LABEL_278:
                  if ( !v70 )
                    goto LABEL_54;
                  LODWORD(v113) = *v70;
                  v68 = 0;
LABEL_284:
                  LOBYTE(v113) = v113 - 8;
                  if ( (v113 & 0x5D) != 0 )
                    goto LABEL_54;
                  v114 = *(_BYTE *)(v46 + 3);
                  if ( v114 != 1 && v8 && v69 )
                  {
                    v115 = *v8 & 0x7F;
                    if ( v115 == 114 || v115 == 115 )
                    {
                      v113 = (unsigned __int64)&v8[v69];
                      LOBYTE(v46) = 0;
                      if ( (unsigned __int64)(v8 + 8) <= v113 )
                      {
                        v50 = v8[2];
                        v49 = v8[1] & 0xF;
                        LOBYTE(v9) = v8[3];
                        goto LABEL_299;
                      }
                    }
                    else
                    {
                      v113 = (unsigned __int64)&v8[v69];
                      LOBYTE(v46) = 0;
                      if ( (unsigned __int64)(v8 + 8) <= v113 )
                      {
                        v49 = v8[2] & 0xF;
                        v116 = v69;
                        if ( (unsigned int)(unsigned __int8)v8[7] + 8 <= v69 )
                          v116 = (unsigned __int8)v8[7] + 8;
                        v113 = (unsigned __int64)(v8 + 13);
                        v46 = (unsigned __int64)&v8[v116];
                        if ( (unsigned __int64)(v8 + 13) <= v46 )
                          v50 = v8[12];
                        if ( (unsigned __int64)(v8 + 14) <= v46 )
                          LOBYTE(v9) = *(_BYTE *)v113;
LABEL_299:
                        LOBYTE(v46) = 1;
                      }
                    }
                    if ( (_BYTE)v46 )
                      v68 = 1;
                  }
                  if ( byte_140173441 >= 0 )
                    goto LABEL_54;
                  if ( !v68 )
                    goto LABEL_304;
                  goto LABEL_305;
                }
              }
              else
              {
                v111 = v110 - 65;
                if ( v111 )
                {
                  if ( v111 == 1 && v109 + 40 <= v108 )
                  {
                    if ( *(_DWORD *)(v109 + v46 + 12) )
                      v70 = (unsigned __int8 *)(v109 + v46 + 32);
                    v112 = *(_BYTE *)(v109 + v46 + 8);
                    v8 = *(_BYTE **)(v109 + v46 + 24);
                    v69 = *(_BYTE *)(v109 + v46 + 9);
                    goto LABEL_278;
                  }
                }
                else if ( v109 + 56 <= v108 )
                {
                  goto LABEL_275;
                }
              }
            }
          }
          if ( ++v71 >= v250 )
          {
            v112 = 0;
            goto LABEL_278;
          }
        }
      }
      if ( v31 != 14 )
      {
        if ( v31 != 27 )
          goto LABEL_54;
        if ( v30[1] == 7 && !*((_DWORD *)v30 + 2) )
        {
          if ( (byte_140173442 & 0x40) == 0 )
            goto LABEL_54;
          v63 = *(_DWORD **)(a2 + 56);
          if ( !v63 )
            goto LABEL_264;
          goto LABEL_263;
        }
        goto LABEL_107;
      }
    }
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_54;
    goto LABEL_94;
  }
  switch ( v6 )
  {
    case 1094997074:
      v12 = RaidAdapterScsiIrp(v5, a2);
      break;
    case 1314275652:
      v28 = StorEtwLoggingEnabled == 0;
      v12 = -1073741823;
      *(_DWORD *)(a2 + 48) = -1073741823;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v28 )
        goto LABEL_261;
      v260 = 0LL;
      IoGetActivityIdIrp(a2, &v260);
      v85 = *(char **)(a2 + 184);
      v86 = *v85;
      if ( *v85 != 15 )
      {
        if ( v86 == 14 )
        {
          if ( (byte_140173442 & 8) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v84, &EventNonReadWriteRequestComplete, &v260, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( v86 == 27 )
        {
          if ( v85[1] != 7 || *((_DWORD *)v85 + 2) )
          {
            if ( (byte_140173442 & 0x20) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v84, &EventPnpRequestComplete, &v260, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( (byte_140173442 & 0x40) != 0 )
          {
            v87 = *(_DWORD **)(a2 + 56);
            if ( v87 )
              LODWORD(v87) = *v87;
            McTemplateK0pqd_EtwWriteTransfer(v84, (_DWORD)v85, (unsigned int)&v260, a2, (char)v87, *(_DWORD *)(a2 + 48));
          }
        }
        goto LABEL_261;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_261;
      v88 = *((_QWORD *)v85 + 1);
      v89 = 0;
      v90 = 0LL;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v94 = 0;
      if ( *(_BYTE *)(v88 + 2) == 40 )
      {
        v95 = 0LL;
        if ( *(_DWORD *)(v88 + 20) )
          goto LABEL_261;
        v96 = 0;
        v258 = *(_DWORD *)(v88 + 56);
        if ( !v258 )
          goto LABEL_261;
        while ( 1 )
        {
          v97 = *(unsigned int *)(v88 + 4LL * v96 + 120);
          if ( (unsigned int)v97 >= 0x80 )
          {
            v98 = *(unsigned int *)(v88 + 16);
            if ( (unsigned int)v97 < (unsigned int)v98 )
            {
              v99 = (unsigned int)v97;
              v100 = *(_DWORD *)(v97 + v88);
              if ( v100 == 64 )
              {
                if ( v99 + 40 <= v98 )
                {
LABEL_229:
                  if ( *(_BYTE *)(v99 + v88 + 10) )
                    v95 = (unsigned __int8 *)(v99 + v88 + 24);
                  v102 = *(_BYTE *)(v99 + v88 + 8);
                  v90 = *(_BYTE **)(v99 + v88 + 16);
                  v91 = *(_BYTE *)(v99 + v88 + 9);
LABEL_232:
                  if ( v95 )
                  {
                    LODWORD(v103) = *v95;
                    v93 = 0;
                    v89 = 0;
                    goto LABEL_238;
                  }
                  goto LABEL_261;
                }
              }
              else
              {
                v101 = v100 - 65;
                if ( v101 )
                {
                  if ( v101 == 1 && v99 + 40 <= v98 )
                  {
                    if ( *(_DWORD *)(v99 + v88 + 12) )
                      v95 = (unsigned __int8 *)(v99 + v88 + 32);
                    v102 = *(_BYTE *)(v99 + v88 + 8);
                    v90 = *(_BYTE **)(v99 + v88 + 24);
                    v91 = *(_BYTE *)(v99 + v88 + 9);
                    goto LABEL_232;
                  }
                }
                else if ( v99 + 56 <= v98 )
                {
                  goto LABEL_229;
                }
              }
            }
          }
          if ( ++v96 >= v258 )
          {
            v102 = 0;
            goto LABEL_232;
          }
        }
      }
      LODWORD(v103) = *(unsigned __int8 *)(v88 + 72);
      v90 = *(_BYTE **)(v88 + 32);
      v91 = *(_BYTE *)(v88 + 11);
      v102 = *(_BYTE *)(v88 + 4);
      if ( *(_BYTE *)(v88 + 2) )
        goto LABEL_261;
LABEL_238:
      LOBYTE(v103) = (_BYTE)v103 - 8;
      if ( ((unsigned __int8)v103 & 0x5D) != 0 )
      {
LABEL_261:
        IofCompleteRequest((PIRP)a2, 0);
        break;
      }
      v104 = *(_BYTE *)(v88 + 3);
      if ( v104 == 1 || !v90 || !v91 )
      {
LABEL_257:
        if ( byte_140173441 < 0 )
        {
          if ( !v89 )
          {
            v94 = 0;
            v93 = 0;
            v92 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            (_DWORD)v103,
            v88,
            (unsigned int)&v260,
            a2,
            *(_DWORD *)(a2 + 48),
            v104,
            v102,
            v92,
            v93,
            v94,
            a2);
        }
        goto LABEL_261;
      }
      v105 = *v90 & 0x7F;
      if ( v105 == 114 || v105 == 115 )
      {
        v103 = &v90[v91];
        LOBYTE(v88) = 0;
        if ( v90 + 8 > v103 )
          goto LABEL_255;
        v93 = v90[2];
        v92 = v90[1] & 0xF;
        v94 = v90[3];
      }
      else
      {
        v103 = &v90[v91];
        LOBYTE(v88) = 0;
        if ( v90 + 8 > v103 )
          goto LABEL_255;
        v92 = v90[2] & 0xF;
        v106 = v91;
        if ( (unsigned int)(unsigned __int8)v90[7] + 8 <= v91 )
          v106 = (unsigned __int8)v90[7] + 8;
        v103 = v90 + 13;
        v88 = (unsigned __int64)&v90[v106];
        if ( (unsigned __int64)(v90 + 13) > v88 )
          v93 = 0;
        else
          v93 = v90[12];
        if ( (unsigned __int64)(v90 + 14) <= v88 )
          v94 = *v103;
      }
      LOBYTE(v88) = 1;
LABEL_255:
      if ( (_BYTE)v88 )
        v89 = 1;
      goto LABEL_257;
    case 1314278989:
      v12 = NvmeNamespaceScsiIrp(v5, a2);
      break;
    default:
      v12 = -1073741823;
      break;
  }
LABEL_42:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids, v4, a2, v12);
  }
  return v12;
}
