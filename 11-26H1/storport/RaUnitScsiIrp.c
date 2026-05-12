/*
 * XREFs of RaUnitScsiIrp @ 0x140004D30
 * Callers:
 *     <none>
 * Callees:
 *     StorUnitExecuteNvmeSrb @ 0x1400034B4 (StorUnitExecuteNvmeSrb.c)
 *     StorEtwIORequestDispatch @ 0x1400036E4 (StorEtwIORequestDispatch.c)
 *     RaidUnitSubmitRequest @ 0x140004BD0 (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 *     RaUnitLockQueueSrb @ 0x140007330 (RaUnitLockQueueSrb.c)
 *     RaUnitUnlockQueueSrb @ 0x140028080 (RaUnitUnlockQueueSrb.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaidUnitSubmitResetRequest @ 0x14004CED4 (RaidUnitSubmitResetRequest.c)
 *     RaUnitQuiesceDeviceSrb @ 0x140055AF8 (RaUnitQuiesceDeviceSrb.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     RaidSrbFunctionFromIrp @ 0x140070658 (RaidSrbFunctionFromIrp.c)
 *     RaUnitClaimDeviceSrb @ 0x140099CAC (RaUnitClaimDeviceSrb.c)
 *     RaUnitFlushQueueSrb @ 0x14009B4F0 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x14009E4CC (RaUnitReleaseDeviceSrb.c)
 *     RaUnitReleaseQueueSrb @ 0x14009E89C (RaUnitReleaseQueueSrb.c)
 *     RaUnitResetBusSrb @ 0x14009F0B0 (RaUnitResetBusSrb.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaUnitUnknownSrb @ 0x14018F128 (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // r13
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  int v11; // eax
  int v12; // esi
  bool v13; // zf
  char *v14; // rdx
  char *v15; // rcx
  char v16; // al
  unsigned __int8 *v18; // rcx
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  char v21; // al
  char v22; // dl
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rcx
  int v26; // esi
  int v27; // r12d
  PDEVICE_OBJECT v28; // rcx
  unsigned __int8 *v29; // rsi
  unsigned int v30; // r10d
  unsigned int v31; // r8d
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  int v34; // r11d
  __int64 v35; // r9
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // r15d
  bool v44; // bl
  unsigned __int64 v45; // r8
  signed __int32 v46; // eax
  signed __int32 v47; // ett
  int v48; // r11d
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  bool v52; // al
  _DWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // edx
  char *v58; // rcx
  char v59; // al
  int v60; // edx
  char *v61; // rcx
  char v62; // al
  unsigned __int64 v63; // r8
  signed __int32 v64; // eax
  signed __int32 v65; // ett
  PDEVICE_OBJECT v66; // rcx
  unsigned __int64 v67; // r8
  signed __int32 v68; // eax
  signed __int32 v69; // ett
  char *v70; // rdx
  unsigned __int8 *v71; // rax
  __int64 v72; // rcx
  _DWORD *Reserved; // rax
  unsigned __int64 v74; // r8
  signed __int32 v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rax
  _DWORD *v78; // rax
  int *v79; // rax
  int v80; // ecx
  _DWORD *v81; // rax
  int v82; // edx
  unsigned __int8 *v83; // rax
  __int64 v84; // rcx
  _DWORD *v85; // rax
  __int64 v86; // rdx
  char v87; // bl
  char v88; // r12
  unsigned __int8 v89; // r8
  char v90; // r10
  char v91; // r11
  unsigned __int8 *v92; // r9
  unsigned int v93; // edi
  __int64 v94; // rcx
  __int64 v95; // rdx
  char v96; // bl
  char v97; // r12
  unsigned __int8 v98; // r8
  char v99; // r10
  char v100; // r11
  unsigned __int8 *v101; // r9
  unsigned int v102; // edi
  unsigned __int64 v103; // r8
  signed __int32 v104; // eax
  __int64 v105; // rdx
  char v106; // bl
  unsigned __int8 v107; // r8
  char v108; // r10
  char v109; // r12
  char v110; // r15
  unsigned __int8 *v111; // r9
  unsigned int v112; // ebx
  __int64 v113; // rdx
  char v114; // cl
  __int64 v115; // r8
  char v116; // si
  unsigned __int8 v117; // r10
  char v118; // r15
  char v119; // r11
  char v120; // r12
  _BYTE *v121; // rdx
  unsigned __int8 *v122; // r9
  unsigned int v123; // ebx
  __int64 v124; // rcx
  unsigned __int64 v125; // rbx
  __int64 v126; // rsi
  int v127; // ecx
  int v128; // ecx
  unsigned __int64 v129; // rcx
  char v130; // r9
  char v131; // al
  char *v132; // r11
  unsigned int v133; // eax
  __int64 v134; // rcx
  unsigned __int64 v135; // rbx
  __int64 v136; // rsi
  int v137; // ecx
  int v138; // ecx
  unsigned __int64 v139; // rcx
  char v140; // r9
  char v141; // al
  char *v142; // r11
  unsigned int v143; // eax
  signed __int32 v144; // ett
  char v145; // al
  __int64 v146; // rdx
  char v147; // bl
  char v148; // r12
  unsigned __int8 v149; // r8
  char v150; // r10
  char v151; // r15
  char v152; // r11
  unsigned __int8 *v153; // r9
  unsigned int v154; // edi
  __int64 v155; // rcx
  unsigned __int64 v156; // rbx
  __int64 v157; // rsi
  int v158; // ecx
  int v159; // ecx
  unsigned __int64 v160; // rcx
  char v161; // r9
  char v162; // al
  char v163; // dl
  char *v164; // r11
  unsigned int v165; // eax
  signed __int32 v166; // ett
  __int64 v167; // rcx
  char *v168; // rdx
  char v169; // al
  _DWORD *v170; // rax
  __int64 v171; // rdx
  char v172; // di
  char v173; // r15
  unsigned __int8 v174; // r8
  char v175; // r10
  char v176; // bl
  char v177; // r11
  char *v178; // r9
  unsigned int v179; // esi
  __int64 v180; // rcx
  unsigned __int64 v181; // rdi
  __int64 v182; // r12
  int v183; // ecx
  int v184; // ecx
  char v185; // cl
  char v186; // al
  char v187; // r9
  char *v188; // r11
  unsigned int v189; // eax
  unsigned __int64 v190; // rcx
  __int64 v191; // rcx
  unsigned __int64 v192; // r11
  __int64 v193; // rsi
  int v194; // ecx
  int v195; // ecx
  char v196; // r11
  char *v197; // rcx
  char v198; // al
  char v199; // r9
  unsigned int v200; // eax
  unsigned __int64 v201; // r8
  int v202; // edx
  unsigned __int8 *v203; // rax
  __int64 v204; // rcx
  _DWORD *v205; // rax
  __int64 v206; // rdx
  char v207; // r15
  unsigned __int8 v208; // r8
  char v209; // r10
  char v210; // r11
  char v211; // r12
  unsigned __int8 *v212; // r9
  unsigned int v213; // ebx
  __int64 v214; // rcx
  unsigned __int64 v215; // r11
  __int64 v216; // r15
  int v217; // ecx
  int v218; // ecx
  char v219; // bl
  char *v220; // rcx
  char v221; // al
  char v222; // r9
  unsigned int v223; // eax
  unsigned __int64 v224; // r8
  unsigned __int64 v225; // r8
  signed __int32 v226; // eax
  signed __int32 v227; // ett
  unsigned __int64 v228; // r8
  signed __int32 v229; // eax
  signed __int32 v230; // ett
  char v231; // al
  __int64 v232; // rdx
  char v233; // bl
  char v234; // r12
  unsigned __int8 v235; // r8
  char v236; // r10
  char v237; // di
  char v238; // r11
  char *v239; // r9
  unsigned int v240; // esi
  __int64 v241; // rcx
  unsigned __int64 v242; // rbx
  __int64 v243; // r15
  int v244; // ecx
  int v245; // ecx
  char v246; // cl
  char v247; // al
  char v248; // r9
  char *v249; // r11
  unsigned int v250; // eax
  unsigned __int64 v251; // rcx
  unsigned __int8 *v252; // rdx
  unsigned __int8 *v253; // rax
  __int64 v254; // rcx
  _DWORD *v255; // rax
  __int64 v256; // r8
  char v257; // r11
  unsigned __int8 v258; // r9
  char v259; // si
  char v260; // r10
  char v261; // r12
  unsigned int v262; // ebx
  __int64 v263; // rcx
  unsigned __int64 v264; // r10
  __int64 v265; // r11
  int v266; // ecx
  int v267; // ecx
  char v268; // bl
  char *v269; // rcx
  char v270; // al
  unsigned int v271; // eax
  __int64 v272; // rcx
  unsigned __int64 v273; // r11
  __int64 v274; // rsi
  int v275; // ecx
  int v276; // ecx
  char v277; // bl
  char *v278; // rcx
  char v279; // al
  char v280; // r9
  unsigned int v281; // eax
  unsigned __int64 v282; // r9
  unsigned __int64 v283; // rdx
  char v284; // cl
  char v285; // r15
  char v286; // r11
  unsigned __int8 v287; // r8
  char v288; // r10
  char v289; // bl
  char v290; // di
  int v291; // r12d
  char *v292; // r9
  unsigned int v293; // r15d
  __int64 v294; // rcx
  unsigned __int64 v295; // rbx
  __int64 v296; // r12
  int v297; // ecx
  int v298; // ecx
  int v299; // r9d
  char v300; // r11
  char v301; // al
  unsigned int v302; // eax
  char v303; // [rsp+60h] [rbp-19h]
  unsigned int v304; // [rsp+64h] [rbp-15h]
  unsigned int v305; // [rsp+68h] [rbp-11h]
  unsigned int v306; // [rsp+68h] [rbp-11h]
  unsigned int v307; // [rsp+68h] [rbp-11h]
  unsigned int v308; // [rsp+68h] [rbp-11h]
  unsigned int v309; // [rsp+68h] [rbp-11h]
  unsigned int v310; // [rsp+68h] [rbp-11h]
  unsigned int v311; // [rsp+68h] [rbp-11h]
  unsigned int v312; // [rsp+68h] [rbp-11h]
  unsigned int v313; // [rsp+68h] [rbp-11h]
  __int128 v314; // [rsp+70h] [rbp-9h] BYREF
  __int128 v315; // [rsp+80h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0LL;
  v315 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(v2 + 8);
  if ( !v7 )
  {
    v13 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v13 )
      goto LABEL_12;
    v314 = 0LL;
    IoGetActivityIdIrp(a2, &v314);
    v15 = *(char **)(a2 + 184);
    v16 = *v15;
    if ( *v15 == 15 )
    {
      if ( byte_140173441 >= 0 )
        goto LABEL_12;
      v86 = *((_QWORD *)v15 + 1);
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v90 = 0;
      v91 = 0;
      if ( *(_BYTE *)(v86 + 2) != 40 )
      {
        LODWORD(v129) = *(unsigned __int8 *)(v86 + 72);
        v3 = *(_BYTE **)(v86 + 32);
        v89 = *(_BYTE *)(v86 + 11);
        v88 = *(_BYTE *)(v86 + 4);
        if ( *(_BYTE *)(v86 + 2) )
          goto LABEL_12;
        goto LABEL_276;
      }
      v92 = 0LL;
      if ( *(_DWORD *)(v86 + 20) )
        goto LABEL_12;
      v93 = 0;
      v304 = *(_DWORD *)(v86 + 56);
      if ( !v304 )
        goto LABEL_12;
      while ( 1 )
      {
        v124 = *(unsigned int *)(v86 + 4LL * v93 + 120);
        if ( (unsigned int)v124 >= 0x80 )
        {
          v125 = *(unsigned int *)(v86 + 16);
          if ( (unsigned int)v124 < (unsigned int)v125 )
          {
            v126 = (unsigned int)v124;
            v127 = *(_DWORD *)(v124 + v86);
            if ( v127 == 64 )
            {
              if ( v126 + 40 <= v125 )
              {
                if ( !*(_BYTE *)(v126 + v86 + 10) )
                  goto LABEL_266;
LABEL_265:
                v92 = (unsigned __int8 *)(v126 + v86 + 24);
LABEL_266:
                v3 = *(_BYTE **)(v126 + v86 + 16);
LABEL_267:
                v88 = *(_BYTE *)(v126 + v86 + 8);
                v89 = *(_BYTE *)(v126 + v86 + 9);
LABEL_268:
                if ( !v92 )
                  goto LABEL_12;
                LODWORD(v129) = *v92;
                v87 = 0;
LABEL_276:
                LOBYTE(v129) = v129 - 8;
                if ( (v129 & 0x5D) != 0 )
                  goto LABEL_12;
                v130 = *(_BYTE *)(v86 + 3);
                if ( v130 != 1 && v3 && v89 )
                {
                  v131 = *v3 & 0x7F;
                  if ( v131 == 114 || v131 == 115 )
                  {
                    v129 = (unsigned __int64)&v3[v89];
                    LOBYTE(v86) = 0;
                    if ( (unsigned __int64)(v3 + 8) <= v129 )
                    {
                      LOBYTE(v6) = v3[2];
                      v90 = v3[1] & 0xF;
                      v91 = v3[3];
                      goto LABEL_292;
                    }
                  }
                  else
                  {
                    v129 = (unsigned __int64)&v3[v89];
                    LOBYTE(v86) = 0;
                    if ( (unsigned __int64)(v3 + 8) <= v129 )
                    {
                      v132 = v3 + 13;
                      v90 = v3[2] & 0xF;
                      v133 = v89;
                      if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v89 )
                        v133 = (unsigned __int8)v3[7] + 8;
                      v129 = (unsigned __int64)&v3[v133];
                      if ( (unsigned __int64)v132 <= v129 )
                        LOBYTE(v6) = v3[12];
                      if ( (unsigned __int64)(v3 + 14) > v129 )
                        v91 = 0;
                      else
                        v91 = *v132;
LABEL_292:
                      LOBYTE(v86) = 1;
                    }
                  }
                  if ( (_BYTE)v86 )
                    v87 = 1;
                }
                if ( byte_140173441 < 0 )
                {
                  if ( !v87 )
                  {
                    v91 = 0;
                    LOBYTE(v6) = 0;
                    v90 = 0;
                  }
                  McTemplateK0pduuuuup_EtwWriteTransfer(
                    v129,
                    v86,
                    (unsigned int)&v314,
                    a2,
                    *(_DWORD *)(a2 + 48),
                    v130,
                    v88,
                    v90,
                    v6,
                    v91,
                    a2);
                }
                goto LABEL_12;
              }
            }
            else
            {
              v128 = v127 - 65;
              if ( v128 )
              {
                if ( v128 == 1 && v126 + 40 <= v125 )
                {
                  if ( *(_DWORD *)(v126 + v86 + 12) )
                    v92 = (unsigned __int8 *)(v126 + v86 + 32);
                  v3 = *(_BYTE **)(v126 + v86 + 24);
                  goto LABEL_267;
                }
              }
              else if ( v126 + 56 <= v125 )
              {
                if ( *(_BYTE *)(v126 + v86 + 10) )
                  goto LABEL_265;
                goto LABEL_266;
              }
            }
          }
        }
        if ( ++v93 >= v304 )
          goto LABEL_268;
      }
    }
    if ( v16 != 14 )
    {
      if ( v16 != 27 )
        goto LABEL_12;
      if ( v15[1] == 7 && !*((_DWORD *)v15 + 2) )
      {
        if ( (byte_140173442 & 0x40) == 0 )
          goto LABEL_12;
        v23 = *(_DWORD **)(a2 + 56);
        if ( !v23 )
          goto LABEL_368;
        goto LABEL_367;
      }
LABEL_28:
      if ( (byte_140173442 & 0x20) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v15, &EventPnpRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_12;
    }
LABEL_24:
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v15, &EventNonReadWriteRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_12;
  }
  v8 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v9 = *(_DWORD *)(v8 + *(_QWORD *)(a1 + 40));
  while ( (v9 & 1) == 0 )
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + *(_QWORD *)(a1 + 40)), v9 + 2, v9);
    if ( v10 == v9 )
      goto LABEL_5;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 1032));
LABEL_5:
  v11 = *(_DWORD *)(a1 + 56);
  if ( v11 == 6 )
  {
    v12 = -1073741738;
    goto LABEL_7;
  }
  if ( v11 == 5 )
  {
    v94 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v94 == 27 )
    {
      v12 = 0;
      goto LABEL_34;
    }
    if ( *(_BYTE *)v94 == 14 && *(_DWORD *)(v94 + 24) == 266276 )
      goto LABEL_308;
    goto LABEL_305;
  }
  if ( v11 != 7 )
    goto LABEL_35;
  v18 = *(unsigned __int8 **)(a2 + 184);
  v19 = *v18;
  v20 = v18[1];
  if ( *v18 == 15 )
  {
    v21 = RaidSrbFunctionFromIrp(a2, v20);
    if ( v22 == -16 || v21 == 1 )
      goto LABEL_308;
    goto LABEL_305;
  }
  if ( v19 == 27 )
  {
    v12 = 0;
    goto LABEL_34;
  }
  if ( v19 == 14 )
  {
    if ( *((_DWORD *)v18 + 6) == 266264 )
    {
      v12 = 0;
      goto LABEL_34;
    }
    goto LABEL_305;
  }
  if ( __PAIR16__(v20, v19) != 534 )
  {
LABEL_305:
    v12 = -1073741738;
    goto LABEL_34;
  }
LABEL_308:
  v12 = 0;
LABEL_34:
  if ( v12 < 0 )
  {
LABEL_7:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
    v13 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v7 + 3) = 4;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v12;
    if ( !v13 )
    {
      v314 = 0LL;
      IoGetActivityIdIrp(a2, &v314);
      v83 = *(unsigned __int8 **)(a2 + 184);
      v84 = *v83;
      if ( (_BYTE)v84 != 15 )
      {
        if ( (_BYTE)v84 == 14 )
        {
          if ( (byte_140173442 & 8) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v84, &EventNonReadWriteRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (_BYTE)v84 == 27 )
        {
          if ( v83[1] != 7 || *((_DWORD *)v83 + 2) )
          {
            if ( (byte_140173442 & 0x20) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v84, &EventPnpRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( (byte_140173442 & 0x40) != 0 )
          {
            v85 = *(_DWORD **)(a2 + 56);
            if ( v85 )
              LODWORD(v3) = *v85;
            McTemplateK0pqd_EtwWriteTransfer(v84, v82, (unsigned int)&v314, a2, (char)v3, *(_DWORD *)(a2 + 48));
          }
        }
        goto LABEL_191;
      }
      if ( byte_140173441 < 0 )
      {
        v283 = *((_QWORD *)v83 + 1);
        v284 = 0;
        v285 = 0;
        v303 = 0;
        v286 = 0;
        v287 = 0;
        v288 = 0;
        v289 = 0;
        v290 = 0;
        if ( *(_BYTE *)(v283 + 2) != 40 )
        {
          v284 = *(_BYTE *)(v283 + 4);
          v291 = *(unsigned __int8 *)(v283 + 2);
          v286 = *(_BYTE *)(v283 + 72);
          v3 = *(_BYTE **)(v283 + 32);
          v287 = *(_BYTE *)(v283 + 11);
          v303 = v284;
          goto LABEL_810;
        }
        v291 = *(_DWORD *)(v283 + 20);
        v292 = 0LL;
        if ( !v291 )
        {
          v293 = 0;
          v313 = *(_DWORD *)(v283 + 56);
          if ( !v313 )
          {
            v285 = 0;
            goto LABEL_810;
          }
          while ( 1 )
          {
            v294 = *(unsigned int *)(v283 + 4LL * v293 + 120);
            if ( (unsigned int)v294 >= 0x80 )
            {
              v295 = *(unsigned int *)(v283 + 16);
              if ( (unsigned int)v294 < (unsigned int)v295 )
              {
                v296 = (unsigned int)v294;
                v297 = *(_DWORD *)(v294 + v283);
                if ( v297 == 64 )
                {
                  if ( v296 + 40 <= v295 )
                  {
LABEL_800:
                    if ( *(_BYTE *)(v296 + v283 + 10) )
                      v292 = (char *)(v296 + v283 + 24);
                    v284 = *(_BYTE *)(v296 + v283 + 8);
                    v3 = *(_BYTE **)(v296 + v283 + 16);
                    v287 = *(_BYTE *)(v296 + v283 + 9);
                    v303 = v284;
LABEL_803:
                    v285 = 0;
                    v289 = 0;
                    if ( v292 )
                    {
                      v286 = *v292;
                      v299 = v12;
                      goto LABEL_811;
                    }
                    v291 = 0;
LABEL_810:
                    v299 = v12;
                    if ( !v291 )
                    {
LABEL_811:
                      if ( ((v286 - 8) & 0x5D) == 0 )
                      {
                        v300 = *(_BYTE *)(v283 + 3);
                        if ( v300 != 1 && v3 && v287 )
                        {
                          v301 = *v3 & 0x7F;
                          if ( v301 == 114 || v301 == 115 )
                          {
                            LOBYTE(v283) = 0;
                            if ( v3 + 8 <= &v3[v287] )
                            {
                              v289 = v3[2];
                              v288 = v3[1] & 0xF;
                              v290 = v3[3];
                              goto LABEL_827;
                            }
                          }
                          else
                          {
                            LOBYTE(v283) = 0;
                            if ( v3 + 8 <= &v3[v287] )
                            {
                              v288 = v3[2] & 0xF;
                              v302 = v287;
                              if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v287 )
                                v302 = (unsigned __int8)v3[7] + 8;
                              v283 = (unsigned __int64)&v3[v302];
                              if ( (unsigned __int64)(v3 + 13) > v283 )
                                v289 = 0;
                              else
                                v289 = v3[12];
                              if ( (unsigned __int64)(v3 + 14) <= v283 )
                                v290 = v3[13];
LABEL_827:
                              LOBYTE(v283) = 1;
                            }
                          }
                          v284 = v303;
                          if ( (_BYTE)v283 )
                            v285 = 1;
                        }
                        if ( byte_140173441 < 0 )
                        {
                          v12 = v299;
                          if ( !v285 )
                          {
                            v290 = 0;
                            v289 = 0;
                            v288 = 0;
                          }
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            *(_DWORD *)(a2 + 48),
                            v283,
                            (unsigned int)&v314,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v300,
                            v284,
                            v288,
                            v289,
                            v290,
                            a2);
                        }
                      }
                    }
                    break;
                  }
                }
                else
                {
                  v298 = v297 - 65;
                  if ( v298 )
                  {
                    if ( v298 == 1 && v296 + 40 <= v295 )
                    {
                      if ( *(_DWORD *)(v296 + v283 + 12) )
                        v292 = (char *)(v296 + v283 + 32);
                      v284 = *(_BYTE *)(v296 + v283 + 8);
                      v3 = *(_BYTE **)(v296 + v283 + 24);
                      v287 = *(_BYTE *)(v296 + v283 + 9);
                      v303 = v284;
                      goto LABEL_803;
                    }
                  }
                  else if ( v296 + 56 <= v295 )
                  {
                    goto LABEL_800;
                  }
                }
              }
            }
            if ( ++v293 >= v313 )
            {
              v284 = 0;
              goto LABEL_803;
            }
          }
        }
      }
    }
LABEL_191:
    IofCompleteRequest((PIRP)a2, 0);
    return (unsigned int)v12;
  }
LABEL_35:
  v24 = *(_DWORD **)(a1 + 24);
  if ( *v24 == 1314275652 )
  {
    v25 = (__int64)v24 + 274;
  }
  else if ( *v24 == 1094997074 )
  {
    v25 = (__int64)v24 + 482;
  }
  else
  {
    v25 = 98LL;
  }
  if ( *(_BYTE *)(v7 + 2) != 40 )
  {
    v27 = *(_DWORD *)(v7 + 12);
    v26 = *(unsigned __int8 *)(v7 + 2);
    goto LABEL_43;
  }
  if ( *(_BYTE *)v25 != 1 )
  {
    *(_BYTE *)(v7 + 3) = 6;
    *(_QWORD *)(a2 + 56) = 0LL;
    v67 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v68 = *(_DWORD *)(v67 + *(_QWORD *)(a1 + 40));
    while ( (v68 & 1) == 0 )
    {
      v69 = v68;
      v68 = _InterlockedCompareExchange((volatile signed __int32 *)(v67 + *(_QWORD *)(a1 + 40)), v68 - 2, v68);
      if ( v69 == v68 )
        goto LABEL_125;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_125:
    v13 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741637;
    if ( v13 )
      goto LABEL_128;
    v314 = 0LL;
    IoGetActivityIdIrp(a2, &v314);
    v71 = *(unsigned __int8 **)(a2 + 184);
    v72 = *v71;
    if ( (_BYTE)v72 == 15 )
    {
      if ( byte_140173441 >= 0 )
        goto LABEL_128;
      v95 = *((_QWORD *)v71 + 1);
      v96 = 0;
      v97 = 0;
      v98 = 0;
      v99 = 0;
      v100 = 0;
      if ( *(_BYTE *)(v95 + 2) != 40 )
      {
        LODWORD(v139) = *(unsigned __int8 *)(v95 + 72);
        v3 = *(_BYTE **)(v95 + 32);
        v98 = *(_BYTE *)(v95 + 11);
        v97 = *(_BYTE *)(v95 + 4);
        if ( *(_BYTE *)(v95 + 2) )
          goto LABEL_128;
        goto LABEL_331;
      }
      v101 = 0LL;
      if ( *(_DWORD *)(v95 + 20) )
        goto LABEL_128;
      v102 = 0;
      v305 = *(_DWORD *)(v95 + 56);
      if ( !v305 )
        goto LABEL_128;
      while ( 1 )
      {
        v134 = *(unsigned int *)(v95 + 4LL * v102 + 120);
        if ( (unsigned int)v134 >= 0x80 )
        {
          v135 = *(unsigned int *)(v95 + 16);
          if ( (unsigned int)v134 < (unsigned int)v135 )
          {
            v136 = (unsigned int)v134;
            v137 = *(_DWORD *)(v134 + v95);
            if ( v137 == 64 )
            {
              if ( v136 + 40 <= v135 )
              {
                if ( !*(_BYTE *)(v136 + v95 + 10) )
                  goto LABEL_321;
LABEL_320:
                v101 = (unsigned __int8 *)(v136 + v95 + 24);
LABEL_321:
                v3 = *(_BYTE **)(v136 + v95 + 16);
LABEL_322:
                v97 = *(_BYTE *)(v136 + v95 + 8);
                v98 = *(_BYTE *)(v136 + v95 + 9);
LABEL_323:
                if ( !v101 )
                  goto LABEL_128;
                LODWORD(v139) = *v101;
                v96 = 0;
LABEL_331:
                LOBYTE(v139) = v139 - 8;
                if ( (v139 & 0x5D) != 0 )
                  goto LABEL_128;
                v140 = *(_BYTE *)(v95 + 3);
                if ( v140 != 1 && v3 && v98 )
                {
                  v141 = *v3 & 0x7F;
                  if ( v141 == 114 || v141 == 115 )
                  {
                    v139 = (unsigned __int64)&v3[v98];
                    LOBYTE(v95) = 0;
                    if ( (unsigned __int64)(v3 + 8) <= v139 )
                    {
                      LOBYTE(v6) = v3[2];
                      v99 = v3[1] & 0xF;
                      v100 = v3[3];
                      goto LABEL_347;
                    }
                  }
                  else
                  {
                    v139 = (unsigned __int64)&v3[v98];
                    LOBYTE(v95) = 0;
                    if ( (unsigned __int64)(v3 + 8) <= v139 )
                    {
                      v142 = v3 + 13;
                      v99 = v3[2] & 0xF;
                      v143 = v98;
                      if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v98 )
                        v143 = (unsigned __int8)v3[7] + 8;
                      v139 = (unsigned __int64)&v3[v143];
                      if ( (unsigned __int64)v142 <= v139 )
                        LOBYTE(v6) = v3[12];
                      if ( (unsigned __int64)(v3 + 14) > v139 )
                        v100 = 0;
                      else
                        v100 = *v142;
LABEL_347:
                      LOBYTE(v95) = 1;
                    }
                  }
                  if ( (_BYTE)v95 )
                    v96 = 1;
                }
                if ( byte_140173441 < 0 )
                {
                  if ( !v96 )
                  {
                    v100 = 0;
                    LOBYTE(v6) = 0;
                    v99 = 0;
                  }
                  McTemplateK0pduuuuup_EtwWriteTransfer(
                    v139,
                    v95,
                    (unsigned int)&v314,
                    a2,
                    *(_DWORD *)(a2 + 48),
                    v140,
                    v97,
                    v99,
                    v6,
                    v100,
                    a2);
                }
                goto LABEL_128;
              }
            }
            else
            {
              v138 = v137 - 65;
              if ( v138 )
              {
                if ( v138 == 1 && v136 + 40 <= v135 )
                {
                  if ( *(_DWORD *)(v136 + v95 + 12) )
                    v101 = (unsigned __int8 *)(v136 + v95 + 32);
                  v3 = *(_BYTE **)(v136 + v95 + 24);
                  goto LABEL_322;
                }
              }
              else if ( v136 + 56 <= v135 )
              {
                if ( *(_BYTE *)(v136 + v95 + 10) )
                  goto LABEL_320;
                goto LABEL_321;
              }
            }
          }
        }
        if ( ++v102 >= v305 )
          goto LABEL_323;
      }
    }
    if ( (_BYTE)v72 != 14 )
    {
      if ( (_BYTE)v72 != 27 )
        goto LABEL_128;
      if ( v71[1] == 7 && !*((_DWORD *)v71 + 2) )
      {
        if ( (byte_140173442 & 0x40) == 0 )
          goto LABEL_128;
        v81 = *(_DWORD **)(a2 + 56);
        if ( !v81 )
          goto LABEL_628;
        goto LABEL_627;
      }
LABEL_178:
      if ( (byte_140173442 & 0x20) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v72, &EventPnpRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_128;
    }
LABEL_170:
    if ( (byte_140173442 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v72, &EventNonReadWriteRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_128;
  }
  v6 = v7;
  v26 = *(_DWORD *)(v7 + 20);
  v27 = *(_DWORD *)(v7 + 24);
  if ( *(_DWORD *)(v7 + 8) != 1397899864 || *(_DWORD *)(v7 + 48) || *(_QWORD *)(v7 + 72) )
  {
    *(_BYTE *)(v7 + 3) = 6;
    *(_QWORD *)(a2 + 56) = 0LL;
    v103 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v104 = *(_DWORD *)(v103 + *(_QWORD *)(a1 + 40));
    while ( (v104 & 1) == 0 )
    {
      v144 = v104;
      v104 = _InterlockedCompareExchange((volatile signed __int32 *)(v103 + *(_QWORD *)(a1 + 40)), v104 - 2, v104);
      if ( v144 == v104 )
        goto LABEL_359;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_359:
    v13 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v13 )
      goto LABEL_12;
    v314 = 0LL;
    IoGetActivityIdIrp(a2, &v314);
    v14 = *(char **)(a2 + 184);
    v145 = *v14;
    if ( *v14 != 15 )
    {
      if ( v145 != 14 )
      {
        if ( v145 != 27 )
          goto LABEL_12;
        if ( v14[1] == 7 && !*((_DWORD *)v14 + 2) )
        {
          if ( (byte_140173442 & 0x40) == 0 )
            goto LABEL_12;
          v23 = *(_DWORD **)(a2 + 56);
          if ( !v23 )
            goto LABEL_368;
LABEL_367:
          LODWORD(v3) = *v23;
LABEL_368:
          McTemplateK0pqd_EtwWriteTransfer(
            (_DWORD)v15,
            (_DWORD)v14,
            (unsigned int)&v314,
            a2,
            (char)v3,
            *(_DWORD *)(a2 + 48));
          goto LABEL_12;
        }
        goto LABEL_28;
      }
      goto LABEL_24;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_12;
    v146 = *((_QWORD *)v14 + 1);
    v147 = 0;
    v148 = 0;
    v149 = 0;
    v150 = 0;
    v151 = 0;
    v152 = 0;
    if ( *(_BYTE *)(v146 + 2) == 40 )
    {
      v153 = 0LL;
      if ( *(_DWORD *)(v146 + 20) )
        goto LABEL_12;
      v154 = 0;
      v308 = *(_DWORD *)(v146 + 56);
      if ( !v308 )
        goto LABEL_12;
      while ( 1 )
      {
        v155 = *(unsigned int *)(v146 + 4LL * v154 + 120);
        if ( (unsigned int)v155 >= 0x80 )
        {
          v156 = *(unsigned int *)(v146 + 16);
          if ( (unsigned int)v155 < (unsigned int)v156 )
          {
            v157 = (unsigned int)v155;
            v158 = *(_DWORD *)(v155 + v146);
            if ( v158 == 64 )
            {
              if ( v157 + 40 <= v156 )
              {
                if ( !*(_BYTE *)(v157 + v146 + 10) )
                  goto LABEL_385;
LABEL_384:
                v153 = (unsigned __int8 *)(v157 + v146 + 24);
LABEL_385:
                v3 = *(_BYTE **)(v157 + v146 + 16);
                goto LABEL_386;
              }
            }
            else
            {
              v159 = v158 - 65;
              if ( v159 )
              {
                if ( v159 == 1 && v157 + 40 <= v156 )
                {
                  if ( *(_DWORD *)(v157 + v146 + 12) )
                    v153 = (unsigned __int8 *)(v157 + v146 + 32);
                  v3 = *(_BYTE **)(v157 + v146 + 24);
LABEL_386:
                  v148 = *(_BYTE *)(v157 + v146 + 8);
                  v149 = *(_BYTE *)(v157 + v146 + 9);
LABEL_387:
                  if ( v153 )
                  {
                    LODWORD(v160) = *v153;
                    v147 = 0;
                    goto LABEL_395;
                  }
                  goto LABEL_12;
                }
              }
              else if ( v157 + 56 <= v156 )
              {
                if ( *(_BYTE *)(v157 + v146 + 10) )
                  goto LABEL_384;
                goto LABEL_385;
              }
            }
          }
        }
        if ( ++v154 >= v308 )
          goto LABEL_387;
      }
    }
    LODWORD(v160) = *(unsigned __int8 *)(v146 + 72);
    v3 = *(_BYTE **)(v146 + 32);
    v149 = *(_BYTE *)(v146 + 11);
    v148 = *(_BYTE *)(v146 + 4);
    if ( *(_BYTE *)(v146 + 2) )
      goto LABEL_12;
LABEL_395:
    LOBYTE(v160) = v160 - 8;
    if ( (v160 & 0x5D) != 0 )
    {
LABEL_12:
      IofCompleteRequest((PIRP)a2, 0);
      return 3221225485LL;
    }
    v161 = *(_BYTE *)(v146 + 3);
    if ( v161 == 1 || !v3 || !v149 )
    {
LABEL_414:
      if ( byte_140173441 < 0 )
      {
        if ( !v147 )
        {
          v152 = 0;
          v151 = 0;
          v150 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v160,
          *(_DWORD *)(a2 + 48),
          (unsigned int)&v314,
          a2,
          *(_DWORD *)(a2 + 48),
          v161,
          v148,
          v150,
          v151,
          v152,
          a2);
      }
      goto LABEL_12;
    }
    v162 = *v3 & 0x7F;
    if ( v162 == 114 || v162 == 115 )
    {
      v160 = (unsigned __int64)&v3[v149];
      v163 = 0;
      if ( (unsigned __int64)(v3 + 8) > v160 )
        goto LABEL_412;
      v151 = v3[2];
      v150 = v3[1] & 0xF;
      v152 = v3[3];
    }
    else
    {
      v160 = (unsigned __int64)&v3[v149];
      v163 = 0;
      if ( (unsigned __int64)(v3 + 8) > v160 )
        goto LABEL_412;
      v164 = v3 + 13;
      v150 = v3[2] & 0xF;
      v165 = v149;
      if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v149 )
        v165 = (unsigned __int8)v3[7] + 8;
      v160 = (unsigned __int64)&v3[v165];
      if ( (unsigned __int64)v164 <= v160 )
        v151 = v3[12];
      if ( (unsigned __int64)(v3 + 14) > v160 )
        v152 = 0;
      else
        v152 = *v164;
    }
    v163 = 1;
LABEL_412:
    if ( v163 )
      v147 = 1;
    goto LABEL_414;
  }
LABEL_43:
  v28 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_25fa594137633db1985de5dda85c818b_Traceguids, a1, a2, v26);
  }
  if ( (v27 & 0x100000) != 0 )
  {
    if ( (v28 = *(PDEVICE_OBJECT *)(a1 + 24), (Reserved = v28[14].Reserved) != 0LL) && (Reserved[5] & 1) == 0
      || (BYTE3(v28->Queue.Wcb.DeviceRoutine) & 4) != 0
      || HIDWORD(v28[1].DriverObject) != 1 )
    {
      *(_BYTE *)(v7 + 3) = 36;
      *(_QWORD *)(a2 + 56) = 0LL;
      v74 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v75 = *(_DWORD *)(v74 + *(_QWORD *)(a1 + 40));
      while ( (v75 & 1) == 0 )
      {
        v166 = v75;
        v75 = _InterlockedCompareExchange((volatile signed __int32 *)(v74 + *(_QWORD *)(a1 + 40)), v75 - 2, v75);
        if ( v166 == v75 )
          goto LABEL_423;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_423:
      v13 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741823;
      if ( v13 )
        goto LABEL_486;
      v314 = 0LL;
      IoGetActivityIdIrp(a2, &v314);
      v168 = *(char **)(a2 + 184);
      v169 = *v168;
      if ( *v168 != 15 )
      {
        if ( v169 == 14 )
        {
          if ( (byte_140173442 & 8) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v167, &EventNonReadWriteRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( v169 == 27 )
        {
          if ( v168[1] != 7 || *((_DWORD *)v168 + 2) )
          {
            if ( (byte_140173442 & 0x20) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v167, &EventPnpRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( (byte_140173442 & 0x40) != 0 )
          {
            v170 = *(_DWORD **)(a2 + 56);
            if ( v170 )
              LODWORD(v3) = *v170;
            McTemplateK0pqd_EtwWriteTransfer(
              v167,
              (_DWORD)v168,
              (unsigned int)&v314,
              a2,
              (char)v3,
              *(_DWORD *)(a2 + 48));
          }
        }
        goto LABEL_486;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_486;
      v171 = *((_QWORD *)v168 + 1);
      v172 = 0;
      v173 = 0;
      v174 = 0;
      v175 = 0;
      v176 = 0;
      v177 = 0;
      if ( *(_BYTE *)(v171 + 2) == 40 )
      {
        v178 = 0LL;
        if ( *(_DWORD *)(v171 + 20) )
          goto LABEL_486;
        v179 = 0;
        v309 = *(_DWORD *)(v171 + 56);
        if ( !v309 )
          goto LABEL_486;
        while ( 1 )
        {
          v180 = *(unsigned int *)(v171 + 4LL * v179 + 120);
          if ( (unsigned int)v180 >= 0x80 )
          {
            v181 = *(unsigned int *)(v171 + 16);
            if ( (unsigned int)v180 < (unsigned int)v181 )
            {
              v182 = (unsigned int)v180;
              v183 = *(_DWORD *)(v171 + v180);
              if ( v183 == 64 )
              {
                if ( v182 + 40 <= v181 )
                {
                  if ( !*(_BYTE *)(v171 + v182 + 10) )
                    goto LABEL_453;
LABEL_452:
                  v178 = (char *)(v182 + v171 + 24);
LABEL_453:
                  v3 = *(_BYTE **)(v171 + v182 + 16);
                  goto LABEL_454;
                }
              }
              else
              {
                v184 = v183 - 65;
                if ( v184 )
                {
                  if ( v184 == 1 && v182 + 40 <= v181 )
                  {
                    if ( *(_DWORD *)(v171 + v182 + 12) )
                      v178 = (char *)(v182 + v171 + 32);
                    v3 = *(_BYTE **)(v171 + v182 + 24);
LABEL_454:
                    v173 = *(_BYTE *)(v171 + v182 + 8);
                    v174 = *(_BYTE *)(v171 + v182 + 9);
LABEL_455:
                    if ( v178 )
                    {
                      v185 = *v178;
                      v172 = 0;
                      goto LABEL_463;
                    }
                    goto LABEL_486;
                  }
                }
                else if ( v182 + 56 <= v181 )
                {
                  if ( *(_BYTE *)(v171 + v182 + 10) )
                    goto LABEL_452;
                  goto LABEL_453;
                }
              }
            }
          }
          if ( ++v179 >= v309 )
            goto LABEL_455;
        }
      }
      v185 = *(_BYTE *)(v171 + 72);
      v3 = *(_BYTE **)(v171 + 32);
      v174 = *(_BYTE *)(v171 + 11);
      v173 = *(_BYTE *)(v171 + 4);
      if ( *(_BYTE *)(v171 + 2) )
        goto LABEL_486;
LABEL_463:
      if ( ((v185 - 8) & 0x5D) != 0 )
      {
LABEL_486:
        IofCompleteRequest((PIRP)a2, 0);
        return 3221225473LL;
      }
      if ( *(_BYTE *)(v171 + 3) == 1 || !v3 || !v174 )
      {
LABEL_482:
        if ( byte_140173441 < 0 )
        {
          if ( !v172 )
          {
            v177 = 0;
            v176 = 0;
            v175 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            *(_DWORD *)(a2 + 48),
            v171,
            (unsigned int)&v314,
            a2,
            *(_DWORD *)(a2 + 48),
            *(_BYTE *)(v171 + 3),
            v173,
            v175,
            v176,
            v177,
            a2);
        }
        goto LABEL_486;
      }
      v186 = *v3 & 0x7F;
      if ( v186 == 114 || v186 == 115 )
      {
        v187 = 0;
        if ( v3 + 8 > &v3[v174] )
          goto LABEL_480;
        v176 = v3[2];
        v175 = v3[1] & 0xF;
        v177 = v3[3];
      }
      else
      {
        v187 = 0;
        if ( v3 + 8 > &v3[v174] )
          goto LABEL_480;
        v188 = v3 + 13;
        v175 = v3[2] & 0xF;
        v189 = v174;
        if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v174 )
          v189 = (unsigned __int8)v3[7] + 8;
        v190 = (unsigned __int64)&v3[v189];
        if ( (unsigned __int64)v188 <= v190 )
          v176 = v3[12];
        if ( (unsigned __int64)(v3 + 14) > v190 )
          v177 = 0;
        else
          v177 = *v188;
      }
      v187 = 1;
LABEL_480:
      if ( v187 )
        v172 = 1;
      goto LABEL_482;
    }
  }
  switch ( v26 )
  {
    case 0:
      if ( *(_BYTE *)(v7 + 2) != 40 )
      {
        v29 = (unsigned __int8 *)(v7 + 72);
        goto LABEL_59;
      }
      v29 = 0LL;
      if ( *(_BYTE *)(v6 + 2) == 40 && !*(_DWORD *)(v6 + 20) )
      {
        v30 = *(_DWORD *)(v6 + 56);
        v31 = 0;
        if ( v30 )
        {
          while ( 1 )
          {
            v32 = *(unsigned int *)(v6 + 4LL * v31 + 120);
            if ( (unsigned int)v32 < 0x80 )
              goto LABEL_56;
            v33 = *(unsigned int *)(v6 + 16);
            if ( (unsigned int)v32 >= (unsigned int)v33 )
              goto LABEL_56;
            v34 = *(_DWORD *)(v32 + v6);
            v35 = v32 + v6;
            if ( v34 == 64 )
              break;
            v48 = v34 - 65;
            if ( !v48 )
            {
              v36 = v32 + 56;
LABEL_55:
              if ( v36 <= v33 )
              {
                if ( *(_BYTE *)(v35 + 10) )
                  v29 = (unsigned __int8 *)(v35 + 24);
                goto LABEL_59;
              }
              goto LABEL_56;
            }
            if ( v48 == 1 && v32 + 40 <= v33 )
            {
              if ( *(_DWORD *)(v35 + 12) )
                v29 = (unsigned __int8 *)(v35 + 32);
              goto LABEL_59;
            }
LABEL_56:
            if ( ++v31 >= v30 )
              goto LABEL_59;
          }
          v36 = v32 + 40;
          goto LABEL_55;
        }
      }
LABEL_59:
      if ( !v29 )
      {
LABEL_63:
        if ( DisableIEEE1667 && v29 )
        {
          if ( *v29 == 0xA2 )
          {
            if ( v29[1] != 0xEE )
              goto LABEL_64;
LABEL_613:
            *(_BYTE *)(v7 + 3) = 4;
            *(_QWORD *)(a2 + 56) = 0LL;
            v228 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
            v229 = *(_DWORD *)(v228 + *(_QWORD *)(a1 + 40));
            while ( (v229 & 1) == 0 )
            {
              v230 = v229;
              v229 = _InterlockedCompareExchange(
                       (volatile signed __int32 *)(v228 + *(_QWORD *)(a1 + 40)),
                       v229 - 2,
                       v229);
              if ( v230 == v229 )
                goto LABEL_619;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_619:
            v13 = StorEtwLoggingEnabled == 0;
            *(_BYTE *)(a2 + 141) = -84;
            *(_DWORD *)(a2 + 48) = -1073741637;
            if ( v13 )
              goto LABEL_128;
            v314 = 0LL;
            IoGetActivityIdIrp(a2, &v314);
            v70 = *(char **)(a2 + 184);
            v231 = *v70;
            if ( *v70 != 15 )
            {
              if ( v231 != 14 )
              {
                if ( v231 != 27 )
                  goto LABEL_128;
                if ( v70[1] == 7 && !*((_DWORD *)v70 + 2) )
                {
                  if ( (byte_140173442 & 0x40) == 0 )
                    goto LABEL_128;
                  v81 = *(_DWORD **)(a2 + 56);
                  if ( !v81 )
                    goto LABEL_628;
LABEL_627:
                  LODWORD(v3) = *v81;
LABEL_628:
                  McTemplateK0pqd_EtwWriteTransfer(
                    v72,
                    (_DWORD)v70,
                    (unsigned int)&v314,
                    a2,
                    (char)v3,
                    *(_DWORD *)(a2 + 48));
                  goto LABEL_128;
                }
                goto LABEL_178;
              }
              goto LABEL_170;
            }
            if ( byte_140173441 >= 0 )
              goto LABEL_128;
            v232 = *((_QWORD *)v70 + 1);
            v233 = 0;
            v234 = 0;
            v235 = 0;
            v236 = 0;
            v237 = 0;
            v238 = 0;
            if ( *(_BYTE *)(v232 + 2) == 40 )
            {
              v239 = 0LL;
              if ( *(_DWORD *)(v232 + 20) )
                goto LABEL_128;
              v240 = 0;
              v311 = *(_DWORD *)(v232 + 56);
              if ( !v311 )
                goto LABEL_128;
              while ( 1 )
              {
                v241 = *(unsigned int *)(v232 + 4LL * v240 + 120);
                if ( (unsigned int)v241 >= 0x80 )
                {
                  v242 = *(unsigned int *)(v232 + 16);
                  if ( (unsigned int)v241 < (unsigned int)v242 )
                  {
                    v243 = (unsigned int)v241;
                    v244 = *(_DWORD *)(v241 + v232);
                    if ( v244 == 64 )
                    {
                      if ( v243 + 40 <= v242 )
                      {
                        if ( !*(_BYTE *)(v243 + v232 + 10) )
                          goto LABEL_645;
LABEL_644:
                        v239 = (char *)(v243 + v232 + 24);
LABEL_645:
                        v3 = *(_BYTE **)(v243 + v232 + 16);
                        goto LABEL_646;
                      }
                    }
                    else
                    {
                      v245 = v244 - 65;
                      if ( v245 )
                      {
                        if ( v245 == 1 && v243 + 40 <= v242 )
                        {
                          if ( *(_DWORD *)(v243 + v232 + 12) )
                            v239 = (char *)(v243 + v232 + 32);
                          v3 = *(_BYTE **)(v243 + v232 + 24);
LABEL_646:
                          v234 = *(_BYTE *)(v243 + v232 + 8);
                          v235 = *(_BYTE *)(v243 + v232 + 9);
LABEL_647:
                          if ( v239 )
                          {
                            v246 = *v239;
                            v233 = 0;
                            goto LABEL_655;
                          }
                          goto LABEL_128;
                        }
                      }
                      else if ( v243 + 56 <= v242 )
                      {
                        if ( *(_BYTE *)(v243 + v232 + 10) )
                          goto LABEL_644;
                        goto LABEL_645;
                      }
                    }
                  }
                }
                if ( ++v240 >= v311 )
                  goto LABEL_647;
              }
            }
            v246 = *(_BYTE *)(v232 + 72);
            v3 = *(_BYTE **)(v232 + 32);
            v235 = *(_BYTE *)(v232 + 11);
            v234 = *(_BYTE *)(v232 + 4);
            if ( *(_BYTE *)(v232 + 2) )
              goto LABEL_128;
LABEL_655:
            if ( ((v246 - 8) & 0x5D) != 0 )
            {
LABEL_128:
              IofCompleteRequest((PIRP)a2, 0);
              return 3221225659LL;
            }
            if ( *(_BYTE *)(v232 + 3) == 1 || !v3 || !v235 )
            {
LABEL_674:
              if ( byte_140173441 < 0 )
              {
                if ( !v233 )
                {
                  v238 = 0;
                  v237 = 0;
                  v236 = 0;
                }
                McTemplateK0pduuuuup_EtwWriteTransfer(
                  *(_DWORD *)(a2 + 48),
                  v232,
                  (unsigned int)&v314,
                  a2,
                  *(_DWORD *)(a2 + 48),
                  *(_BYTE *)(v232 + 3),
                  v234,
                  v236,
                  v237,
                  v238,
                  a2);
              }
              goto LABEL_128;
            }
            v247 = *v3 & 0x7F;
            if ( v247 == 114 || v247 == 115 )
            {
              v248 = 0;
              if ( v3 + 8 > &v3[v235] )
                goto LABEL_672;
              v237 = v3[2];
              v236 = v3[1] & 0xF;
              v238 = v3[3];
            }
            else
            {
              v248 = 0;
              if ( v3 + 8 > &v3[v235] )
                goto LABEL_672;
              v249 = v3 + 13;
              v236 = v3[2] & 0xF;
              v250 = v235;
              if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v235 )
                v250 = (unsigned __int8)v3[7] + 8;
              v251 = (unsigned __int64)&v3[v250];
              if ( (unsigned __int64)v249 <= v251 )
                v237 = v3[12];
              if ( (unsigned __int64)(v3 + 14) > v251 )
                v238 = 0;
              else
                v238 = *v249;
            }
            v248 = 1;
LABEL_672:
            if ( v248 )
              v233 = 1;
            goto LABEL_674;
          }
          if ( *v29 == 0xB5 && v29[1] == 0xEE )
            goto LABEL_613;
        }
LABEL_64:
        if ( StorEtwLoggingEnabled && (byte_140173441 & 0x1E) != 0 )
        {
          if ( (v38 = *v29, (_BYTE)v38 == 8)
            || (unsigned __int8)v38 <= 0x2Au && (v76 = 0x50000000400LL, _bittest64(&v76, v38))
            || (LOBYTE(v38) = v38 + 120, (unsigned __int8)v38 <= 0x22u) && (v77 = 0x500000005LL, _bittest64(&v77, v38)) )
          {
            IoGetActivityIdIrp(a2, &v315);
            StorEtwIORequestDispatch(a2);
          }
        }
        v39 = *(_QWORD *)(a2 + 184);
        v40 = *(_QWORD *)(v39 + 8);
        *(_BYTE *)(v39 + 3) |= 1u;
        *(_BYTE *)(v40 + 3) = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
        if ( (qword_140172448 & 0x20) != 0 )
          DbgLogRequest(
            *(_QWORD *)(a1 + 24),
            3,
            a2,
            (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
            0LL,
            0LL,
            0LL);
        RaidStartIoPacket(a1, a2);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqD(
            WPP_GLOBAL_Control->AttachedDevice,
            19LL,
            &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
            a1,
            a2,
            259);
        }
        return 259LL;
      }
      if ( *v29 == 27 && (v29[4] & 1) == 0 )
      {
        v49 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)v49 == 1094997074 )
        {
          v50 = v49 + 604;
        }
        else
        {
          v50 = v49 + 396;
          if ( *(_DWORD *)v49 != 1314275652 )
            v50 = 228LL;
        }
        if ( (*(_DWORD *)v50 & 2) != 0 )
        {
          if ( (*(_BYTE *)(a1 + 505) & 4) != 0 || (*(_BYTE *)(v49 + 107) & 0x10) != 0 )
            goto LABEL_61;
          v51 = *(_DWORD *)(a1 + 544);
          if ( v51 != 5 )
          {
            if ( v51 == 6 && *(_DWORD *)(a1 + 552) == 5 )
              goto LABEL_114;
            goto LABEL_61;
          }
          v52 = *(_DWORD *)(a1 + 1044) != 0;
        }
        else
        {
          v52 = *(_DWORD *)(a1 + 544) >= 5;
        }
        if ( v52 )
        {
LABEL_114:
          v13 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_QWORD *)(a2 + 56) = 0LL;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v13 )
            goto LABEL_117;
          v314 = 0LL;
          IoGetActivityIdIrp(a2, &v314);
          v61 = *(char **)(a2 + 184);
          v62 = *v61;
          if ( *v61 != 15 )
          {
            if ( v62 == 14 )
            {
              if ( (byte_140173442 & 8) != 0 )
                McTemplateK0pd_EtwWriteTransfer(v61, &EventNonReadWriteRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
            }
            else if ( v62 == 27 )
            {
              if ( v61[1] != 7 || *((_DWORD *)v61 + 2) )
              {
                if ( (byte_140173442 & 0x20) != 0 )
                  McTemplateK0pd_EtwWriteTransfer(v61, &EventPnpRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
              }
              else if ( (byte_140173442 & 0x40) != 0 )
              {
                v78 = *(_DWORD **)(a2 + 56);
                if ( v78 )
                  LODWORD(v3) = *v78;
                McTemplateK0pqd_EtwWriteTransfer(
                  (_DWORD)v61,
                  v60,
                  (unsigned int)&v314,
                  a2,
                  (char)v3,
                  *(_DWORD *)(a2 + 48));
              }
            }
            goto LABEL_117;
          }
          if ( byte_140173441 >= 0 )
          {
LABEL_117:
            IofCompleteRequest((PIRP)a2, 0);
            v63 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
            v64 = *(_DWORD *)(v63 + *(_QWORD *)(a1 + 40));
            while ( (v64 & 1) == 0 )
            {
              v65 = v64;
              v64 = _InterlockedCompareExchange((volatile signed __int32 *)(v63 + *(_QWORD *)(a1 + 40)), v64 - 2, v64);
              if ( v65 == v64 )
                goto LABEL_120;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_120:
            v66 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              return 0LL;
            }
            v113 = 16LL;
            goto LABEL_610;
          }
          v105 = *((_QWORD *)v61 + 1);
          v106 = 0;
          v107 = 0;
          v108 = 0;
          v109 = 0;
          v110 = 0;
          if ( *(_BYTE *)(v105 + 2) == 40 )
          {
            v111 = 0LL;
            if ( *(_DWORD *)(v105 + 20) )
              goto LABEL_117;
            v112 = 0;
            v306 = *(_DWORD *)(v105 + 56);
            if ( !v306 )
              goto LABEL_117;
            while ( 1 )
            {
              v191 = *(unsigned int *)(v105 + 4LL * v112 + 120);
              if ( (unsigned int)v191 >= 0x80 )
              {
                v192 = *(unsigned int *)(v105 + 16);
                if ( (unsigned int)v191 < (unsigned int)v192 )
                {
                  v193 = (unsigned int)v191;
                  v194 = *(_DWORD *)(v105 + v191);
                  if ( v194 == 64 )
                  {
                    if ( v193 + 40 <= v192 )
                    {
LABEL_498:
                      if ( *(_BYTE *)(v105 + v193 + 10) )
                        v111 = (unsigned __int8 *)(v193 + v105 + 24);
                      v196 = *(_BYTE *)(v105 + v193 + 8);
                      v3 = *(_BYTE **)(v105 + v193 + 16);
                      v107 = *(_BYTE *)(v105 + v193 + 9);
LABEL_501:
                      if ( v111 )
                      {
                        LODWORD(v197) = *v111;
                        v106 = 0;
                        goto LABEL_507;
                      }
                      goto LABEL_117;
                    }
                  }
                  else
                  {
                    v195 = v194 - 65;
                    if ( v195 )
                    {
                      if ( v195 == 1 && v193 + 40 <= v192 )
                      {
                        if ( *(_DWORD *)(v105 + v193 + 12) )
                          v111 = (unsigned __int8 *)(v193 + v105 + 32);
                        v196 = *(_BYTE *)(v105 + v193 + 8);
                        v3 = *(_BYTE **)(v105 + v193 + 24);
                        v107 = *(_BYTE *)(v105 + v193 + 9);
                        goto LABEL_501;
                      }
                    }
                    else if ( v193 + 56 <= v192 )
                    {
                      goto LABEL_498;
                    }
                  }
                }
              }
              if ( ++v112 >= v306 )
              {
                v196 = 0;
                goto LABEL_501;
              }
            }
          }
          LODWORD(v197) = *(unsigned __int8 *)(v105 + 72);
          v3 = *(_BYTE **)(v105 + 32);
          v107 = *(_BYTE *)(v105 + 11);
          v196 = *(_BYTE *)(v105 + 4);
          if ( *(_BYTE *)(v105 + 2) )
            goto LABEL_117;
LABEL_507:
          LOBYTE(v197) = (_BYTE)v197 - 8;
          if ( ((unsigned __int8)v197 & 0x5D) != 0 )
            goto LABEL_117;
          if ( *(_BYTE *)(v105 + 3) == 1 || !v3 || !v107 )
          {
LABEL_525:
            if ( byte_140173441 < 0 )
            {
              if ( !v106 )
              {
                v110 = 0;
                v109 = 0;
                v108 = 0;
              }
              McTemplateK0pduuuuup_EtwWriteTransfer(
                (_DWORD)v197,
                v105,
                (unsigned int)&v314,
                a2,
                *(_DWORD *)(a2 + 48),
                *(_BYTE *)(v105 + 3),
                v196,
                v108,
                v109,
                v110,
                a2);
            }
            goto LABEL_117;
          }
          v198 = *v3 & 0x7F;
          if ( v198 == 114 || v198 == 115 )
          {
            v197 = &v3[v107];
            v199 = 0;
            if ( v3 + 8 > v197 )
              goto LABEL_523;
            v109 = v3[2];
            v108 = v3[1] & 0xF;
            v110 = v3[3];
          }
          else
          {
            v197 = &v3[v107];
            v199 = 0;
            if ( v3 + 8 > v197 )
              goto LABEL_523;
            v200 = v107;
            v108 = v3[2] & 0xF;
            if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v107 )
              v200 = (unsigned __int8)v3[7] + 8;
            v197 = v3 + 13;
            v201 = (unsigned __int64)&v3[v200];
            if ( (unsigned __int64)(v3 + 13) <= v201 )
              v109 = v3[12];
            if ( (unsigned __int64)(v3 + 14) <= v201 )
              v110 = *v197;
          }
          v199 = 1;
LABEL_523:
          if ( v199 )
            v106 = 1;
          goto LABEL_525;
        }
      }
LABEL_61:
      v37 = *(_QWORD *)(a1 + 24);
      if ( (*(_DWORD *)(v37 + 128) & 4) == 0 && !*(_DWORD *)(v37 + 328) )
        goto LABEL_63;
      v114 = 0;
      if ( (v27 & 0x800) != 0 && (*(_DWORD *)(a1 + 512) & 0x40) != 0 )
      {
        if ( *v29 == 53 )
        {
LABEL_529:
          v114 = 1;
          goto LABEL_530;
        }
        if ( *v29 == 27 )
        {
          if ( (v29[4] & 1) != 0 )
            goto LABEL_532;
          goto LABEL_529;
        }
      }
LABEL_530:
      if ( *v29 != 27 || (v29[4] & 1) == 0 )
      {
LABEL_533:
        if ( !v114 )
          goto LABEL_63;
LABEL_534:
        v13 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(v7 + 3) = 1;
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = 0;
        if ( v13 )
          goto LABEL_594;
        v314 = 0LL;
        IoGetActivityIdIrp(a2, &v314);
        v203 = *(unsigned __int8 **)(a2 + 184);
        v204 = *v203;
        if ( (_BYTE)v204 != 15 )
        {
          if ( (_BYTE)v204 == 14 )
          {
            if ( (byte_140173442 & 8) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v204, &EventNonReadWriteRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( (_BYTE)v204 == 27 )
          {
            if ( v203[1] != 7 || *((_DWORD *)v203 + 2) )
            {
              if ( (byte_140173442 & 0x20) != 0 )
                McTemplateK0pd_EtwWriteTransfer(v204, &EventPnpRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
            }
            else if ( (byte_140173442 & 0x40) != 0 )
            {
              v205 = *(_DWORD **)(a2 + 56);
              if ( v205 )
                LODWORD(v3) = *v205;
              McTemplateK0pqd_EtwWriteTransfer(v204, v202, (unsigned int)&v314, a2, (char)v3, *(_DWORD *)(a2 + 48));
            }
          }
          goto LABEL_594;
        }
        if ( byte_140173441 >= 0 )
        {
LABEL_594:
          IofCompleteRequest((PIRP)a2, 0);
          v225 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v226 = *(_DWORD *)(v225 + *(_QWORD *)(a1 + 40));
          while ( (v226 & 1) == 0 )
          {
            v227 = v226;
            v226 = _InterlockedCompareExchange((volatile signed __int32 *)(v225 + *(_QWORD *)(a1 + 40)), v226 - 2, v226);
            if ( v227 == v226 )
              goto LABEL_600;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_600:
          if ( *v29 == 53 )
          {
            v66 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              return 0LL;
            }
            v113 = 17LL;
          }
          else
          {
            if ( *v29 != 27 )
              return 0LL;
            v66 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              return 0LL;
            }
            v113 = 18LL;
          }
LABEL_610:
          WPP_SF_qq(v66->AttachedDevice, v113, &WPP_25fa594137633db1985de5dda85c818b_Traceguids, a1, a2);
          return 0LL;
        }
        v206 = *((_QWORD *)v203 + 1);
        v207 = 0;
        v208 = 0;
        v209 = 0;
        v210 = 0;
        v211 = 0;
        if ( *(_BYTE *)(v206 + 2) == 40 )
        {
          v212 = 0LL;
          if ( *(_DWORD *)(v206 + 20) )
            goto LABEL_594;
          v213 = 0;
          v310 = *(_DWORD *)(v206 + 56);
          if ( !v310 )
            goto LABEL_594;
          while ( 1 )
          {
            v214 = *(unsigned int *)(v206 + 4LL * v213 + 120);
            if ( (unsigned int)v214 >= 0x80 )
            {
              v215 = *(unsigned int *)(v206 + 16);
              if ( (unsigned int)v214 < (unsigned int)v215 )
              {
                v216 = (unsigned int)v214;
                v217 = *(_DWORD *)(v206 + v214);
                if ( v217 == 64 )
                {
                  if ( v216 + 40 <= v215 )
                  {
LABEL_562:
                    if ( *(_BYTE *)(v206 + v216 + 10) )
                      v212 = (unsigned __int8 *)(v216 + v206 + 24);
                    v219 = *(_BYTE *)(v206 + v216 + 8);
                    v3 = *(_BYTE **)(v206 + v216 + 16);
                    v208 = *(_BYTE *)(v206 + v216 + 9);
LABEL_565:
                    if ( v212 )
                    {
                      LODWORD(v220) = *v212;
                      v210 = 0;
                      v207 = 0;
                      goto LABEL_571;
                    }
                    goto LABEL_594;
                  }
                }
                else
                {
                  v218 = v217 - 65;
                  if ( v218 )
                  {
                    if ( v218 == 1 && v216 + 40 <= v215 )
                    {
                      if ( *(_DWORD *)(v206 + v216 + 12) )
                        v212 = (unsigned __int8 *)(v216 + v206 + 32);
                      v219 = *(_BYTE *)(v206 + v216 + 8);
                      v3 = *(_BYTE **)(v206 + v216 + 24);
                      v208 = *(_BYTE *)(v206 + v216 + 9);
                      goto LABEL_565;
                    }
                  }
                  else if ( v216 + 56 <= v215 )
                  {
                    goto LABEL_562;
                  }
                }
              }
            }
            if ( ++v213 >= v310 )
            {
              v219 = 0;
              goto LABEL_565;
            }
          }
        }
        LODWORD(v220) = *(unsigned __int8 *)(v206 + 72);
        v3 = *(_BYTE **)(v206 + 32);
        v208 = *(_BYTE *)(v206 + 11);
        v219 = *(_BYTE *)(v206 + 4);
        if ( *(_BYTE *)(v206 + 2) )
          goto LABEL_594;
LABEL_571:
        LOBYTE(v220) = (_BYTE)v220 - 8;
        if ( ((unsigned __int8)v220 & 0x5D) != 0 )
          goto LABEL_594;
        if ( *(_BYTE *)(v206 + 3) == 1 || !v3 || !v208 )
        {
LABEL_590:
          if ( byte_140173441 < 0 )
          {
            if ( !v207 )
            {
              v211 = 0;
              v210 = 0;
              v209 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              (_DWORD)v220,
              v206,
              (unsigned int)&v314,
              a2,
              *(_DWORD *)(a2 + 48),
              *(_BYTE *)(v206 + 3),
              v219,
              v209,
              v210,
              v211,
              a2);
          }
          goto LABEL_594;
        }
        v221 = *v3 & 0x7F;
        if ( v221 == 114 || v221 == 115 )
        {
          v220 = &v3[v208];
          v222 = 0;
          if ( v3 + 8 > v220 )
            goto LABEL_588;
          v210 = v3[2];
          v209 = v3[1] & 0xF;
          v211 = v3[3];
        }
        else
        {
          v220 = &v3[v208];
          v222 = 0;
          if ( v3 + 8 > v220 )
            goto LABEL_588;
          v223 = v208;
          v209 = v3[2] & 0xF;
          if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v208 )
            v223 = (unsigned __int8)v3[7] + 8;
          v220 = v3 + 13;
          v224 = (unsigned __int64)&v3[v223];
          if ( (unsigned __int64)(v3 + 13) > v224 )
            v210 = 0;
          else
            v210 = v3[12];
          if ( (unsigned __int64)(v3 + 14) <= v224 )
            v211 = *v220;
        }
        v222 = 1;
LABEL_588:
        if ( v222 )
          v207 = 1;
        goto LABEL_590;
      }
LABEL_532:
      if ( (*(_DWORD *)(a1 + 512) & 0x20) != 0 )
        goto LABEL_534;
      goto LABEL_533;
    case 10:
      return StorUnitExecuteNvmeSrb(a1, a2);
    case 7:
      v41 = *(_QWORD *)(a2 + 184);
      v42 = *(_QWORD *)(v41 + 8);
      *(_BYTE *)(v41 + 3) |= 1u;
      *(_BYTE *)(v42 + 3) = 0;
      *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
      if ( (qword_140172448 & 0x20) != 0 )
        DbgLogRequest(
          *(_QWORD *)(a1 + 24),
          3,
          a2,
          (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
          0LL,
          0LL,
          0LL);
      RaidStartIoPacket(a1, a2);
      v43 = 259;
LABEL_80:
      v44 = 0;
      goto LABEL_81;
  }
  if ( v26 != 8 )
  {
    switch ( v26 )
    {
      case 1:
        v43 = RaUnitClaimDeviceSrb(a1, a2);
        v44 = 1;
        goto LABEL_81;
      case 2:
      case 9:
        v43 = RaidUnitSubmitRequest(a1, a2);
        goto LABEL_80;
      case 4:
        v43 = RaUnitReleaseQueueSrb(a1, a2);
        v44 = 1;
        goto LABEL_81;
      case 6:
        v43 = RaUnitReleaseDeviceSrb(a1, a2);
        v44 = 1;
        goto LABEL_81;
      case 16:
      case 19:
      case 32:
        v43 = RaidUnitSubmitResetRequest(a1, a2);
        v44 = 1;
        goto LABEL_81;
      case 18:
        v43 = RaUnitResetBusSrb(a1, a2);
        v44 = 1;
        goto LABEL_81;
      case 21:
        v43 = RaUnitFlushQueueSrb(a1, a2);
        v44 = 1;
        goto LABEL_81;
      case 23:
        v13 = StorEtwLoggingEnabled == 0;
        v43 = -1073741808;
        *(_DWORD *)(a2 + 48) = -1073741808;
        *(_BYTE *)(a2 + 141) = -84;
        if ( v13 )
          goto LABEL_738;
        v314 = 0LL;
        IoGetActivityIdIrp(a2, &v314);
        v253 = *(unsigned __int8 **)(a2 + 184);
        v254 = *v253;
        if ( (_BYTE)v254 != 15 )
        {
          if ( (_BYTE)v254 == 14 )
          {
            if ( (byte_140173442 & 8) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v254, &EventNonReadWriteRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( (_BYTE)v254 == 27 )
          {
            if ( v253[1] != 7 || *((_DWORD *)v253 + 2) )
            {
              if ( (byte_140173442 & 0x20) != 0 )
                McTemplateK0pd_EtwWriteTransfer(v254, &EventPnpRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
            }
            else if ( (byte_140173442 & 0x40) != 0 )
            {
              v255 = *(_DWORD **)(a2 + 56);
              if ( v255 )
                LODWORD(v3) = *v255;
              McTemplateK0pqd_EtwWriteTransfer(
                v254,
                (_DWORD)v252,
                (unsigned int)&v314,
                a2,
                (char)v3,
                *(_DWORD *)(a2 + 48));
            }
          }
          goto LABEL_738;
        }
        if ( byte_140173441 >= 0 )
          goto LABEL_738;
        v256 = *((_QWORD *)v253 + 1);
        v257 = 0;
        v258 = 0;
        v259 = 0;
        v260 = 0;
        v261 = 0;
        if ( *(_BYTE *)(v256 + 2) == 40 )
        {
          v252 = 0LL;
          if ( *(_DWORD *)(v256 + 20) )
            goto LABEL_738;
          v262 = 0;
          v312 = *(_DWORD *)(v256 + 56);
          if ( !v312 )
            goto LABEL_738;
          while ( 1 )
          {
            v263 = *(unsigned int *)(v256 + 4LL * v262 + 120);
            if ( (unsigned int)v263 >= 0x80 )
            {
              v264 = *(unsigned int *)(v256 + 16);
              if ( (unsigned int)v263 < (unsigned int)v264 )
              {
                v265 = (unsigned int)v263;
                v266 = *(_DWORD *)(v263 + v256);
                if ( v266 == 64 )
                {
                  if ( v265 + 40 <= v264 )
                  {
LABEL_706:
                    if ( *(_BYTE *)(v265 + v256 + 10) )
                      v252 = (unsigned __int8 *)(v265 + v256 + 24);
                    v268 = *(_BYTE *)(v265 + v256 + 8);
                    v3 = *(_BYTE **)(v265 + v256 + 16);
                    v258 = *(_BYTE *)(v265 + v256 + 9);
                    goto LABEL_709;
                  }
                }
                else
                {
                  v267 = v266 - 65;
                  if ( v267 )
                  {
                    if ( v267 == 1 && v265 + 40 <= v264 )
                    {
                      if ( *(_DWORD *)(v265 + v256 + 12) )
                        v252 = (unsigned __int8 *)(v265 + v256 + 32);
                      v268 = *(_BYTE *)(v265 + v256 + 8);
                      v3 = *(_BYTE **)(v265 + v256 + 24);
                      v258 = *(_BYTE *)(v265 + v256 + 9);
                      goto LABEL_709;
                    }
                  }
                  else if ( v265 + 56 <= v264 )
                  {
                    goto LABEL_706;
                  }
                }
              }
            }
            if ( ++v262 >= v312 )
            {
              v268 = 0;
LABEL_709:
              if ( !v252 )
                goto LABEL_738;
              LODWORD(v269) = *v252;
              v260 = 0;
              v257 = 0;
              goto LABEL_715;
            }
          }
        }
        LODWORD(v269) = *(unsigned __int8 *)(v256 + 72);
        v3 = *(_BYTE **)(v256 + 32);
        v258 = *(_BYTE *)(v256 + 11);
        v268 = *(_BYTE *)(v256 + 4);
        if ( *(_BYTE *)(v256 + 2) )
          goto LABEL_738;
LABEL_715:
        LOBYTE(v269) = (_BYTE)v269 - 8;
        if ( ((unsigned __int8)v269 & 0x5D) != 0 )
          goto LABEL_738;
        if ( *(_BYTE *)(v256 + 3) == 1 || !v3 || !v258 )
          goto LABEL_734;
        v270 = *v3 & 0x7F;
        if ( v270 == 114 || v270 == 115 )
        {
          v269 = &v3[v258];
          LOBYTE(v252) = 0;
          if ( v3 + 8 > v269 )
            goto LABEL_732;
          v260 = v3[2];
          v259 = v3[1] & 0xF;
          v261 = v3[3];
        }
        else
        {
          v269 = &v3[v258];
          LOBYTE(v252) = 0;
          if ( v3 + 8 > v269 )
            goto LABEL_732;
          v259 = v3[2] & 0xF;
          v271 = v258;
          if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v258 )
            v271 = (unsigned __int8)v3[7] + 8;
          v269 = v3 + 13;
          v252 = &v3[v271];
          if ( v3 + 13 > v252 )
            v260 = 0;
          else
            v260 = v3[12];
          if ( v3 + 14 <= v252 )
            v261 = *v269;
        }
        LOBYTE(v252) = 1;
LABEL_732:
        if ( (_BYTE)v252 )
          v257 = 1;
LABEL_734:
        if ( byte_140173441 < 0 )
        {
          if ( !v257 )
          {
            v261 = 0;
            v260 = 0;
            v259 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            (_DWORD)v269,
            (_DWORD)v252,
            (unsigned int)&v314,
            a2,
            *(_DWORD *)(a2 + 48),
            *(_BYTE *)(v256 + 3),
            v268,
            v259,
            v260,
            v261,
            a2);
        }
LABEL_738:
        IofCompleteRequest((PIRP)a2, 0);
        v44 = 1;
        break;
      case 24:
        v43 = RaUnitLockQueueSrb(a1, a2);
        v44 = 1;
        goto LABEL_81;
      case 25:
        v43 = RaUnitUnlockQueueSrb(a1, a2);
        v44 = 1;
        goto LABEL_81;
      case 26:
        v43 = RaUnitQuiesceDeviceSrb(a1, a2);
        v44 = v43 != 259;
        goto LABEL_81;
      default:
        v43 = RaUnitUnknownSrb(v28, a2);
        v44 = 1;
        goto LABEL_81;
    }
    goto LABEL_81;
  }
  v53 = *(_DWORD **)(a1 + 24);
  if ( *v53 == 1094997074 )
  {
    v54 = (__int64)v53 + 467;
  }
  else if ( *v53 == 1314275652 )
  {
    v54 = (__int64)v53 + 259;
  }
  else
  {
    v54 = 91LL;
  }
  v55 = *(_QWORD *)(a2 + 184);
  v56 = *(_QWORD *)(v55 + 8);
  if ( *(_BYTE *)v54 )
  {
    *(_BYTE *)(v55 + 3) |= 1u;
    *(_BYTE *)(v56 + 3) = 0;
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
    if ( (qword_140172448 & 0x20) != 0 )
      DbgLogRequest(
        *(_QWORD *)(a1 + 24),
        3,
        a2,
        (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
        0LL,
        0LL,
        0LL);
    RaidStartIoPacket(a1, a2);
    v43 = 259;
  }
  else
  {
    v13 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v56 + 3) = 1;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v13 )
      goto LABEL_107;
    v314 = 0LL;
    IoGetActivityIdIrp(a2, &v314);
    v58 = *(char **)(a2 + 184);
    v59 = *v58;
    if ( *v58 != 15 )
    {
      if ( v59 == 14 )
      {
        if ( (byte_140173442 & 8) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v58, &EventNonReadWriteRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( v59 == 27 )
      {
        if ( v58[1] != 7 || *((_DWORD *)v58 + 2) )
        {
          if ( (byte_140173442 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v58, &EventPnpRequestComplete, &v314, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (byte_140173442 & 0x40) != 0 )
        {
          v79 = *(int **)(a2 + 56);
          if ( v79 )
            v80 = *v79;
          else
            v80 = 0;
          McTemplateK0pqd_EtwWriteTransfer(v80, v57, (unsigned int)&v314, a2, v80, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_107;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_107;
    v115 = *((_QWORD *)v58 + 1);
    v116 = 0;
    v117 = 0;
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v121 = 0LL;
    if ( *(_BYTE *)(v115 + 2) == 40 )
    {
      v122 = 0LL;
      if ( *(_DWORD *)(v115 + 20) )
        goto LABEL_107;
      v123 = 0;
      v307 = *(_DWORD *)(v115 + 56);
      if ( !v307 )
        goto LABEL_107;
      while ( 1 )
      {
        v272 = *(unsigned int *)(v115 + 4LL * v123 + 120);
        if ( (unsigned int)v272 >= 0x80 )
        {
          v273 = *(unsigned int *)(v115 + 16);
          if ( (unsigned int)v272 < (unsigned int)v273 )
          {
            v274 = (unsigned int)v272;
            v275 = *(_DWORD *)(v115 + v272);
            if ( v275 == 64 )
            {
              if ( v274 + 40 <= v273 )
              {
LABEL_752:
                if ( *(_BYTE *)(v115 + v274 + 10) )
                  v122 = (unsigned __int8 *)(v274 + v115 + 24);
                v277 = *(_BYTE *)(v115 + v274 + 8);
                v121 = *(_BYTE **)(v115 + v274 + 16);
                v117 = *(_BYTE *)(v115 + v274 + 9);
LABEL_755:
                if ( v122 )
                {
                  LODWORD(v278) = *v122;
                  v119 = 0;
                  v116 = 0;
                  goto LABEL_761;
                }
                goto LABEL_107;
              }
            }
            else
            {
              v276 = v275 - 65;
              if ( v276 )
              {
                if ( v276 == 1 && v274 + 40 <= v273 )
                {
                  if ( *(_DWORD *)(v115 + v274 + 12) )
                    v122 = (unsigned __int8 *)(v274 + v115 + 32);
                  v277 = *(_BYTE *)(v115 + v274 + 8);
                  v121 = *(_BYTE **)(v115 + v274 + 24);
                  v117 = *(_BYTE *)(v115 + v274 + 9);
                  goto LABEL_755;
                }
              }
              else if ( v274 + 56 <= v273 )
              {
                goto LABEL_752;
              }
            }
          }
        }
        if ( ++v123 >= v307 )
        {
          v277 = 0;
          goto LABEL_755;
        }
      }
    }
    LODWORD(v278) = *(unsigned __int8 *)(v115 + 72);
    v121 = *(_BYTE **)(v115 + 32);
    v117 = *(_BYTE *)(v115 + 11);
    v277 = *(_BYTE *)(v115 + 4);
    if ( *(_BYTE *)(v115 + 2) )
      goto LABEL_107;
LABEL_761:
    LOBYTE(v278) = (_BYTE)v278 - 8;
    if ( ((unsigned __int8)v278 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v115 + 3) == 1 || !v121 || !v117 )
      {
LABEL_780:
        if ( byte_140173441 < 0 )
        {
          if ( !v116 )
          {
            v120 = 0;
            v119 = 0;
            v118 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            (_DWORD)v278,
            (_DWORD)v121,
            (unsigned int)&v314,
            a2,
            *(_DWORD *)(a2 + 48),
            *(_BYTE *)(v115 + 3),
            v277,
            v118,
            v119,
            v120,
            a2);
        }
        goto LABEL_107;
      }
      v279 = *v121 & 0x7F;
      if ( v279 == 114 || v279 == 115 )
      {
        v278 = &v121[v117];
        v280 = 0;
        if ( v121 + 8 > v278 )
          goto LABEL_778;
        v119 = v121[2];
        v118 = v121[1] & 0xF;
        v120 = v121[3];
      }
      else
      {
        v278 = &v121[v117];
        v280 = 0;
        if ( v121 + 8 > v278 )
          goto LABEL_778;
        v118 = v121[2] & 0xF;
        v281 = v117;
        if ( (unsigned int)(unsigned __int8)v121[7] + 8 <= v117 )
          v281 = (unsigned __int8)v121[7] + 8;
        v278 = v121 + 13;
        v282 = (unsigned __int64)&v121[v281];
        if ( (unsigned __int64)(v121 + 13) > v282 )
          v119 = 0;
        else
          v119 = v121[12];
        if ( (unsigned __int64)(v121 + 14) <= v282 )
          v120 = *v278;
      }
      v280 = 1;
LABEL_778:
      if ( v280 )
        v116 = 1;
      goto LABEL_780;
    }
LABEL_107:
    IofCompleteRequest((PIRP)a2, 0);
    v43 = 0;
  }
  v44 = v43 != 259;
LABEL_81:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_25fa594137633db1985de5dda85c818b_Traceguids, a1, a2, v43);
  }
  if ( v44 )
  {
    v45 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v46 = *(_DWORD *)(v45 + *(_QWORD *)(a1 + 40));
    while ( (v46 & 1) == 0 )
    {
      v47 = v46;
      v46 = _InterlockedCompareExchange((volatile signed __int32 *)(v45 + *(_QWORD *)(a1 + 40)), v46 - 2, v46);
      if ( v47 == v46 )
        return v43;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
  }
  return v43;
}
