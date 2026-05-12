/*
 * XREFs of NvmeNamespaceScsiIrp @ 0x14010ECE8
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x140003A14 (RaidNtStatusToSrbStatus.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x140100F94 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     NvmeNamespaceClaimDeviceSrb @ 0x140101BE8 (NvmeNamespaceClaimDeviceSrb.c)
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceReleaseDeviceSrb @ 0x14010D0F8 (NvmeNamespaceReleaseDeviceSrb.c)
 *     NvmeNamespaceUnknownSrb @ 0x140115E7C (NvmeNamespaceUnknownSrb.c)
 *     NvmeNamespaceWmiSrb @ 0x140116460 (NvmeNamespaceWmiSrb.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceScsiIrp(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r14
  bool v8; // zf
  unsigned int v9; // esi
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int *v12; // rax
  const GUID *v13; // r8
  const GUID *v14; // r8
  __int64 v15; // rdx
  _BYTE *v16; // r8
  unsigned __int8 v17; // si
  char v18; // r10
  char v19; // r11
  char v20; // r14
  char v21; // r13
  char *v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // r13
  __int64 v25; // r9
  int v26; // ecx
  char v27; // cl
  char v28; // r9
  char v29; // al
  char *v30; // r14
  unsigned int v31; // eax
  const GUID *v32; // r8
  unsigned int v33; // esi
  char v34; // al
  int v35; // ecx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int *v38; // rax
  unsigned int *v39; // rax
  _BYTE *v40; // r8
  unsigned __int8 v41; // si
  char v42; // r13
  char *v43; // r15
  __int64 v44; // rax
  unsigned __int64 v45; // r13
  __int64 v46; // r9
  int v47; // ecx
  char v48; // cl
  char v49; // al
  char *v50; // r14
  unsigned int v51; // eax
  const EVENT_DESCRIPTOR *v52; // rdx
  const EVENT_DESCRIPTOR *v53; // rdx
  __int64 v54; // rdx
  char v55; // r12
  _BYTE *v56; // r8
  unsigned __int8 v57; // si
  char v58; // r10
  char v59; // r11
  char v60; // r14
  char v61; // r13
  char *v62; // r15
  __int64 v63; // rax
  unsigned __int64 v64; // r13
  __int64 v65; // r9
  int v66; // ecx
  char v67; // cl
  char v68; // r9
  char v69; // al
  char *v70; // r14
  unsigned int v71; // eax
  __int64 result; // rax
  __int64 v73; // rdx
  int v74; // r13d
  unsigned __int64 v75; // rcx
  __int64 v76; // rdx
  unsigned int *v77; // rax
  const EVENT_DESCRIPTOR *v78; // rdx
  __int64 v79; // rdx
  char v80; // r12
  _BYTE *v81; // r8
  unsigned __int8 v82; // si
  char v83; // r10
  char v84; // r11
  char v85; // r14
  char v86; // r13
  char *v87; // r15
  __int64 v88; // rax
  unsigned __int64 v89; // r13
  __int64 v90; // r9
  int v91; // ecx
  char v92; // cl
  char v93; // r9
  char v94; // al
  char *v95; // r14
  unsigned int v96; // eax
  unsigned __int64 v97; // rcx
  __int64 v98; // rdx
  unsigned int *v99; // rax
  __int64 v100; // rcx
  const GUID *v101; // r8
  const GUID *v102; // r8
  const EVENT_DESCRIPTOR *v103; // rdx
  __int64 v104; // rdx
  char v105; // r12
  _BYTE *v106; // r8
  unsigned __int8 v107; // si
  char v108; // r10
  char v109; // r11
  char v110; // r14
  char v111; // r13
  char *v112; // r15
  __int64 v113; // rax
  unsigned __int64 v114; // r13
  __int64 v115; // r9
  int v116; // ecx
  char v117; // cl
  char v118; // r9
  char v119; // al
  char *v120; // r14
  unsigned int v121; // eax
  const GUID *v122; // r8
  char v123; // al
  unsigned __int64 v124; // rcx
  __int64 v125; // rdx
  unsigned int *v126; // rax
  const GUID *v127; // r8
  const EVENT_DESCRIPTOR *v128; // rdx
  __int64 v129; // rdx
  char v130; // r12
  _BYTE *v131; // r8
  unsigned __int8 v132; // si
  char v133; // r10
  char v134; // r11
  char v135; // r14
  char v136; // r13
  char *v137; // r15
  __int64 v138; // rax
  unsigned __int64 v139; // r13
  __int64 v140; // r9
  int v141; // ecx
  char v142; // cl
  char v143; // r9
  char v144; // al
  char *v145; // r14
  unsigned int v146; // eax
  const GUID *v147; // r8
  const GUID *v148; // r8
  unsigned int *v149; // rax
  _BYTE *v150; // r8
  unsigned __int8 v151; // si
  char v152; // r13
  char *v153; // r15
  __int64 v154; // rax
  unsigned __int64 v155; // r13
  __int64 v156; // r9
  int v157; // ecx
  char v158; // cl
  char v159; // al
  char *v160; // r14
  unsigned int v161; // eax
  char v162; // cl
  char v163; // cl
  char v164; // al
  unsigned int *v165; // rax
  _BYTE *v166; // r8
  unsigned __int8 v167; // si
  char v168; // r13
  char *v169; // r15
  __int64 v170; // rax
  unsigned __int64 v171; // r13
  __int64 v172; // r9
  int v173; // ecx
  char v174; // cl
  char v175; // al
  char *v176; // r14
  unsigned int v177; // eax
  char v178; // al
  unsigned int *v179; // rax
  __int64 v180; // rdx
  char v181; // r12
  _BYTE *v182; // r8
  unsigned __int8 v183; // si
  char v184; // r10
  char v185; // r11
  char v186; // r14
  char v187; // r13
  char *v188; // r15
  __int64 v189; // rax
  unsigned __int64 v190; // r13
  __int64 v191; // r9
  int v192; // ecx
  char v193; // cl
  char v194; // r9
  char v195; // al
  char *v196; // r14
  unsigned int v197; // eax
  char v198; // cl
  char v199; // cl
  char v200; // al
  unsigned int *v201; // rax
  _BYTE *v202; // r8
  unsigned __int8 v203; // si
  char v204; // r13
  char *v205; // r15
  __int64 v206; // rax
  unsigned __int64 v207; // r13
  __int64 v208; // r9
  int v209; // ecx
  char v210; // cl
  char v211; // al
  char *v212; // r14
  unsigned int v213; // eax
  unsigned int v214; // esi
  unsigned __int64 v215; // rcx
  __int64 v216; // rdx
  unsigned int *v217; // rcx
  __int64 v218; // rcx
  const GUID *v219; // r8
  const EVENT_DESCRIPTOR *v220; // rdx
  const GUID *v221; // r8
  __int64 v222; // rdx
  char v223; // r12
  _BYTE *v224; // r8
  unsigned __int8 v225; // si
  char v226; // r10
  char v227; // r11
  char v228; // r14
  char v229; // r13
  char *v230; // r15
  __int64 v231; // rax
  unsigned __int64 v232; // r13
  __int64 v233; // r9
  int v234; // ecx
  char v235; // cl
  char v236; // r9
  char v237; // al
  char *v238; // r14
  unsigned int v239; // eax
  const GUID *v240; // r8
  unsigned int v241; // eax
  unsigned int v242; // esi
  unsigned int v243; // esi
  unsigned int *v244; // rax
  _BYTE *v245; // r8
  unsigned __int8 v246; // si
  char v247; // r13
  char *v248; // r15
  __int64 v249; // rax
  unsigned __int64 v250; // r13
  __int64 v251; // r9
  int v252; // ecx
  char v253; // cl
  char v254; // al
  char *v255; // r14
  unsigned int v256; // eax
  unsigned int *v257; // rcx
  _BYTE *v258; // r8
  unsigned __int8 v259; // si
  char v260; // r13
  char *v261; // r15
  __int64 v262; // rax
  unsigned __int64 v263; // r13
  __int64 v264; // r9
  int v265; // ecx
  char v266; // cl
  char v267; // al
  char *v268; // r14
  unsigned int v269; // eax
  unsigned __int64 v270; // rcx
  __int64 v271; // rdx
  unsigned int *v272; // rax
  __int64 v273; // rcx
  const EVENT_DESCRIPTOR *v274; // rdx
  __int64 v275; // rdx
  char v276; // r12
  _BYTE *v277; // r8
  unsigned __int8 v278; // si
  char v279; // r10
  char v280; // r11
  char v281; // r14
  char v282; // r13
  char *v283; // r15
  __int64 v284; // rax
  unsigned __int64 v285; // r13
  __int64 v286; // r9
  int v287; // ecx
  char v288; // cl
  char v289; // r9
  char v290; // al
  char *v291; // r14
  unsigned int v292; // eax
  unsigned int v293; // esi
  unsigned int v294; // esi
  unsigned int *v295; // rax
  _BYTE *v296; // r8
  unsigned __int8 v297; // si
  char v298; // r13
  char *v299; // r15
  __int64 v300; // rax
  unsigned __int64 v301; // r13
  __int64 v302; // r9
  int v303; // ecx
  char v304; // cl
  char v305; // al
  char *v306; // r14
  unsigned int v307; // eax
  unsigned int *v308; // rax
  _BYTE *v309; // r8
  unsigned __int8 v310; // si
  char v311; // r13
  char *v312; // r15
  __int64 v313; // rax
  unsigned __int64 v314; // r13
  __int64 v315; // r9
  int v316; // ecx
  char v317; // cl
  char v318; // al
  char *v319; // r14
  unsigned int v320; // eax
  unsigned int *v321; // rax
  _BYTE *v322; // r8
  unsigned __int8 v323; // si
  char v324; // r13
  char *v325; // r15
  __int64 v326; // rax
  unsigned __int64 v327; // r13
  __int64 v328; // r9
  int v329; // ecx
  char v330; // cl
  char v331; // al
  char *v332; // r14
  unsigned int v333; // eax
  unsigned int v334; // esi
  unsigned int v335; // esi
  unsigned int v336; // esi
  unsigned int *v337; // rax
  _BYTE *v338; // r8
  unsigned __int8 v339; // si
  char v340; // r13
  char *v341; // r15
  __int64 v342; // rax
  unsigned __int64 v343; // r13
  __int64 v344; // r9
  int v345; // ecx
  char v346; // cl
  char v347; // al
  char *v348; // r14
  unsigned int v349; // eax
  unsigned int *v350; // rax
  _BYTE *v351; // r8
  unsigned __int8 v352; // si
  char v353; // r13
  char *v354; // r15
  __int64 v355; // rax
  unsigned __int64 v356; // r13
  __int64 v357; // r9
  int v358; // ecx
  char v359; // cl
  char v360; // al
  char *v361; // r14
  unsigned int v362; // eax
  unsigned int *v363; // rax
  _BYTE *v364; // r8
  unsigned __int8 v365; // si
  char v366; // r13
  char *v367; // r15
  __int64 v368; // rax
  unsigned __int64 v369; // r13
  __int64 v370; // r9
  int v371; // ecx
  char v372; // cl
  char v373; // al
  char *v374; // r14
  unsigned int v375; // eax
  unsigned int *v376; // rax
  _BYTE *v377; // r8
  unsigned __int8 v378; // si
  char v379; // r13
  char *v380; // r15
  __int64 v381; // rax
  unsigned __int64 v382; // r13
  __int64 v383; // r9
  int v384; // ecx
  char v385; // cl
  char v386; // al
  char *v387; // r14
  unsigned int v388; // eax
  char v389; // [rsp+60h] [rbp-A0h]
  char v390; // [rsp+60h] [rbp-A0h]
  char v391; // [rsp+60h] [rbp-A0h]
  char v392; // [rsp+60h] [rbp-A0h]
  char v393; // [rsp+60h] [rbp-A0h]
  char v394; // [rsp+60h] [rbp-A0h]
  char v395; // [rsp+60h] [rbp-A0h]
  char v396; // [rsp+60h] [rbp-A0h]
  char v397; // [rsp+60h] [rbp-A0h]
  char v398; // [rsp+60h] [rbp-A0h]
  char v399; // [rsp+60h] [rbp-A0h]
  char v400; // [rsp+60h] [rbp-A0h]
  char v401; // [rsp+60h] [rbp-A0h]
  char v402; // [rsp+60h] [rbp-A0h]
  char v403; // [rsp+60h] [rbp-A0h]
  char v404; // [rsp+60h] [rbp-A0h]
  char v405; // [rsp+60h] [rbp-A0h]
  char v406; // [rsp+60h] [rbp-A0h]
  char v407; // [rsp+60h] [rbp-A0h]
  char v408; // [rsp+60h] [rbp-A0h]
  char v409; // [rsp+60h] [rbp-A0h]
  unsigned int v410; // [rsp+64h] [rbp-9Ch]
  unsigned int v411; // [rsp+64h] [rbp-9Ch]
  unsigned int v412; // [rsp+64h] [rbp-9Ch]
  unsigned int v413; // [rsp+64h] [rbp-9Ch]
  int v414; // [rsp+64h] [rbp-9Ch]
  int v415; // [rsp+64h] [rbp-9Ch]
  int v416; // [rsp+64h] [rbp-9Ch]
  int v417; // [rsp+64h] [rbp-9Ch]
  int v418; // [rsp+64h] [rbp-9Ch]
  int v419; // [rsp+64h] [rbp-9Ch]
  int v420; // [rsp+64h] [rbp-9Ch]
  int v421; // [rsp+64h] [rbp-9Ch]
  int v422; // [rsp+64h] [rbp-9Ch]
  int v423; // [rsp+64h] [rbp-9Ch]
  int v424; // [rsp+64h] [rbp-9Ch]
  int v425; // [rsp+64h] [rbp-9Ch]
  int v426; // [rsp+64h] [rbp-9Ch]
  int v427; // [rsp+64h] [rbp-9Ch]
  int v428; // [rsp+64h] [rbp-9Ch]
  int v429; // [rsp+64h] [rbp-9Ch]
  int v431; // [rsp+68h] [rbp-98h]
  int v432; // [rsp+68h] [rbp-98h]
  int v433; // [rsp+68h] [rbp-98h]
  int v434; // [rsp+68h] [rbp-98h]
  int v435; // [rsp+68h] [rbp-98h]
  unsigned int v436; // [rsp+68h] [rbp-98h]
  unsigned int v437; // [rsp+68h] [rbp-98h]
  unsigned int v438; // [rsp+70h] [rbp-90h]
  unsigned int v439; // [rsp+70h] [rbp-90h]
  unsigned int v440; // [rsp+70h] [rbp-90h]
  unsigned int v441; // [rsp+70h] [rbp-90h]
  unsigned int v442; // [rsp+70h] [rbp-90h]
  unsigned int v443; // [rsp+70h] [rbp-90h]
  unsigned int v444; // [rsp+70h] [rbp-90h]
  unsigned int v445; // [rsp+70h] [rbp-90h]
  unsigned int v446; // [rsp+70h] [rbp-90h]
  unsigned int v447; // [rsp+70h] [rbp-90h]
  unsigned int v448; // [rsp+70h] [rbp-90h]
  unsigned int v449; // [rsp+70h] [rbp-90h]
  unsigned int v450; // [rsp+70h] [rbp-90h]
  unsigned int v451; // [rsp+70h] [rbp-90h]
  unsigned int v452; // [rsp+70h] [rbp-90h]
  unsigned int v453; // [rsp+70h] [rbp-90h]
  unsigned int v454; // [rsp+70h] [rbp-90h]
  unsigned int v455; // [rsp+70h] [rbp-90h]
  unsigned int v456; // [rsp+70h] [rbp-90h]
  __int128 v457; // [rsp+188h] [rbp+88h] BYREF
  __int128 v458; // [rsp+198h] [rbp+98h] BYREF
  GUID v459; // [rsp+1A8h] [rbp+A8h] BYREF
  GUID v460; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v461; // [rsp+1C8h] [rbp+C8h] BYREF
  __int128 v462; // [rsp+1D8h] [rbp+D8h] BYREF
  __int128 v463; // [rsp+1E8h] [rbp+E8h] BYREF
  __int128 v464; // [rsp+1F8h] [rbp+F8h] BYREF
  GUID v465; // [rsp+208h] [rbp+108h] BYREF
  __int128 v466; // [rsp+218h] [rbp+118h] BYREF
  __int128 v467; // [rsp+228h] [rbp+128h] BYREF
  __int128 v468; // [rsp+238h] [rbp+138h] BYREF
  __int128 v469; // [rsp+248h] [rbp+148h] BYREF
  GUID v470; // [rsp+258h] [rbp+158h] BYREF
  __int128 v471; // [rsp+268h] [rbp+168h] BYREF
  __int128 v472; // [rsp+278h] [rbp+178h] BYREF
  __int128 v473; // [rsp+288h] [rbp+188h] BYREF
  __int128 v474; // [rsp+298h] [rbp+198h] BYREF
  __int128 v475; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int128 v476; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int128 v477; // [rsp+2C8h] [rbp+1C8h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = a1;
  v6 = 0LL;
  v7 = *(_QWORD *)(v2 + 8);
  if ( !v7 )
  {
    v8 = StorEtwLoggingEnabled == 0;
    v9 = -1073741811;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v8 )
      goto LABEL_708;
    v457 = 0LL;
    IoGetActivityIdIrp(a2, &v457);
    v11 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v11 != 14 )
    {
      if ( *(_BYTE *)v11 != 15 )
      {
        if ( *(_BYTE *)v11 != 27 )
          goto LABEL_708;
        if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v12 = *(unsigned int **)(a2 + 56);
            if ( v12 )
              v3 = *v12;
            v13 = (const GUID *)&v457;
LABEL_502:
            McTemplateK0pqd_EtwWriteTransfer(v10, v11, v13, a2, v3, *(_DWORD *)(a2 + 48));
            goto LABEL_708;
          }
          goto LABEL_708;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_708;
        v14 = (const GUID *)&v457;
        goto LABEL_505;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_708;
      v15 = *(_QWORD *)(v11 + 8);
      v16 = 0LL;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      if ( *(_BYTE *)(v15 + 2) == 40 )
      {
        v22 = 0LL;
        v389 = 0;
        if ( *(_DWORD *)(v15 + 20) )
          goto LABEL_559;
        v23 = 0LL;
        v431 = 0;
        v410 = *(_DWORD *)(v15 + 56);
        if ( !v410 )
          goto LABEL_559;
        while ( 1 )
        {
          v10 = *(unsigned int *)(v15 + 4 * v23 + 120);
          if ( (unsigned int)v10 >= 0x80 )
          {
            v24 = *(unsigned int *)(v15 + 16);
            if ( (unsigned int)v10 < (unsigned int)v24 )
            {
              v25 = (unsigned int)v10;
              v26 = *(_DWORD *)(v10 + v15) - 64;
              if ( v26 )
              {
                v10 = (unsigned int)(v26 - 1);
                if ( (_DWORD)v10 )
                {
                  if ( (_DWORD)v10 == 1 )
                  {
                    v10 = v25 + 40;
                    if ( v25 + 40 <= v24 )
                    {
                      if ( *(_DWORD *)(v25 + v15 + 12) )
                        v22 = (char *)(v25 + v15 + 32);
                      v16 = *(_BYTE **)(v25 + v15 + 24);
                      goto LABEL_38;
                    }
                  }
                }
                else
                {
                  v10 = v25 + 56;
                  if ( v25 + 56 <= v24 )
                  {
                    v389 = 1;
                    if ( *(_BYTE *)(v25 + v15 + 10) )
                      v22 = (char *)(v25 + v15 + 24);
                    LOBYTE(v6) = *(_BYTE *)(v25 + v15 + 8);
                    v16 = *(_BYTE **)(v25 + v15 + 16);
                    v17 = *(_BYTE *)(v25 + v15 + 9);
                  }
                }
              }
              else
              {
                v10 = v25 + 40;
                if ( v25 + 40 <= v24 )
                {
                  if ( *(_BYTE *)(v25 + v15 + 10) )
                    v22 = (char *)(v25 + v15 + 24);
                  v16 = *(_BYTE **)(v25 + v15 + 16);
LABEL_38:
                  v17 = *(_BYTE *)(v25 + v15 + 9);
                  LOBYTE(v6) = *(_BYTE *)(v25 + v15 + 8);
LABEL_39:
                  if ( v22 )
                  {
                    v27 = *v22;
                    v21 = 0;
                    goto LABEL_42;
                  }
                  goto LABEL_559;
                }
              }
              if ( v389 )
                goto LABEL_39;
            }
          }
          v23 = (unsigned int)(v431 + 1);
          v431 = v23;
          if ( (unsigned int)v23 >= v410 )
            goto LABEL_39;
        }
      }
      v27 = *(_BYTE *)(v15 + 72);
      v16 = *(_BYTE **)(v15 + 32);
      v17 = *(_BYTE *)(v15 + 11);
      LOBYTE(v6) = *(_BYTE *)(v15 + 4);
      if ( *(_BYTE *)(v15 + 2) )
        goto LABEL_559;
LABEL_42:
      LOBYTE(v10) = v27 - 8;
      if ( (v10 & 0x5D) != 0 )
      {
LABEL_559:
        v9 = -1073741811;
        goto LABEL_708;
      }
      v28 = *(_BYTE *)(v15 + 3);
      if ( v28 == 1 || !v16 || !v17 )
      {
LABEL_61:
        if ( byte_140173441 >= 0 )
          goto LABEL_559;
        if ( !v21 )
        {
          v20 = 0;
          v19 = 0;
          v18 = 0;
        }
        v32 = (const GUID *)&v457;
        goto LABEL_558;
      }
      v29 = *v16 & 0x7F;
      if ( v29 == 114 || v29 == 115 )
      {
        v10 = (unsigned __int64)&v16[v17];
        LOBYTE(v15) = 0;
        if ( (unsigned __int64)(v16 + 8) > v10 )
          goto LABEL_59;
        v19 = v16[2];
        v18 = v16[1] & 0xF;
        v20 = v16[3];
      }
      else
      {
        v10 = (unsigned __int64)&v16[v17];
        LOBYTE(v15) = 0;
        if ( (unsigned __int64)(v16 + 8) > v10 )
          goto LABEL_59;
        v30 = v16 + 13;
        v18 = v16[2] & 0xF;
        v31 = v17;
        if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
          v31 = (unsigned __int8)v16[7] + 8;
        v10 = (unsigned __int64)&v16[v31];
        if ( (unsigned __int64)v30 <= v10 )
          v19 = v16[12];
        if ( (unsigned __int64)(v16 + 14) > v10 )
          v20 = 0;
        else
          v20 = *v30;
      }
      LOBYTE(v15) = 1;
LABEL_59:
      if ( (_BYTE)v15 )
        v21 = 1;
      goto LABEL_61;
    }
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_708;
    v14 = (const GUID *)&v457;
LABEL_148:
    v52 = &EventNonReadWriteRequestComplete;
LABEL_506:
    McTemplateK0pd_EtwWriteTransfer(v10, v52, v14, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_708;
  }
  *(_BYTE *)(v7 + 3) = 0;
  *(_QWORD *)(v2 + 32) = 0LL;
  v33 = *(unsigned __int8 *)(v7 + 2);
  if ( v33 == 40 )
  {
    v6 = v7;
    if ( *(_DWORD *)(v7 + 8) != 1397899864 || *(_DWORD *)(v7 + 48) || *(_QWORD *)(v7 + 72) )
    {
      v8 = StorEtwLoggingEnabled == 0;
      v9 = -1073741811;
      *(_BYTE *)(v7 + 3) = 6;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( v8 )
        goto LABEL_708;
      v458 = 0LL;
      IoGetActivityIdIrp(a2, &v458);
      v11 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v11 == 14 )
      {
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_708;
        v14 = (const GUID *)&v458;
        goto LABEL_148;
      }
      if ( *(_BYTE *)v11 == 15 )
      {
        if ( byte_140173441 < 0 )
        {
          v15 = *(_QWORD *)(v11 + 8);
          LOBYTE(v6) = 0;
          v40 = 0LL;
          v41 = 0;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v42 = 0;
          if ( *(_BYTE *)(v15 + 2) != 40 )
          {
            v48 = *(_BYTE *)(v15 + 72);
            v40 = *(_BYTE **)(v15 + 32);
            v41 = *(_BYTE *)(v15 + 11);
            LOBYTE(v6) = *(_BYTE *)(v15 + 4);
            if ( *(_BYTE *)(v15 + 2) )
              goto LABEL_559;
            goto LABEL_123;
          }
          v43 = 0LL;
          v390 = 0;
          if ( *(_DWORD *)(v15 + 20) )
            goto LABEL_559;
          v44 = 0LL;
          v432 = 0;
          v411 = *(_DWORD *)(v15 + 56);
          if ( !v411 )
            goto LABEL_559;
          while ( 1 )
          {
            v10 = *(unsigned int *)(v15 + 4 * v44 + 120);
            if ( (unsigned int)v10 >= 0x80 )
            {
              v45 = *(unsigned int *)(v15 + 16);
              if ( (unsigned int)v10 < (unsigned int)v45 )
              {
                v46 = (unsigned int)v10;
                v47 = *(_DWORD *)(v15 + v10) - 64;
                if ( v47 )
                {
                  v10 = (unsigned int)(v47 - 1);
                  if ( (_DWORD)v10 )
                  {
                    if ( (_DWORD)v10 == 1 )
                    {
                      v10 = v46 + 40;
                      if ( v46 + 40 <= v45 )
                      {
                        if ( *(_DWORD *)(v15 + v46 + 12) )
                          v43 = (char *)(v46 + v15 + 32);
                        v40 = *(_BYTE **)(v15 + v46 + 24);
LABEL_119:
                        v41 = *(_BYTE *)(v15 + v46 + 9);
                        LOBYTE(v6) = *(_BYTE *)(v15 + v46 + 8);
LABEL_120:
                        if ( !v43 )
                          goto LABEL_559;
                        v48 = *v43;
                        v42 = 0;
LABEL_123:
                        LOBYTE(v10) = v48 - 8;
                        if ( (v10 & 0x5D) != 0 )
                          goto LABEL_559;
                        v28 = *(_BYTE *)(v15 + 3);
                        if ( v28 != 1 && v40 && v41 )
                        {
                          v49 = *v40 & 0x7F;
                          if ( v49 == 114 || v49 == 115 )
                          {
                            v10 = (unsigned __int64)&v40[v41];
                            LOBYTE(v15) = 0;
                            if ( (unsigned __int64)(v40 + 8) <= v10 )
                            {
                              v19 = v40[2];
                              v18 = v40[1] & 0xF;
                              v20 = v40[3];
                              goto LABEL_139;
                            }
                          }
                          else
                          {
                            v10 = (unsigned __int64)&v40[v41];
                            LOBYTE(v15) = 0;
                            if ( (unsigned __int64)(v40 + 8) <= v10 )
                            {
                              v50 = v40 + 13;
                              v18 = v40[2] & 0xF;
                              v51 = v41;
                              if ( (unsigned int)(unsigned __int8)v40[7] + 8 <= v41 )
                                v51 = (unsigned __int8)v40[7] + 8;
                              v10 = (unsigned __int64)&v40[v51];
                              if ( (unsigned __int64)v50 <= v10 )
                                v19 = v40[12];
                              if ( (unsigned __int64)(v40 + 14) > v10 )
                                v20 = 0;
                              else
                                v20 = *v50;
LABEL_139:
                              LOBYTE(v15) = 1;
                            }
                          }
                          if ( (_BYTE)v15 )
                            v42 = 1;
                        }
                        if ( byte_140173441 >= 0 )
                          goto LABEL_559;
                        if ( !v42 )
                        {
                          v20 = 0;
                          v19 = 0;
                          v18 = 0;
                        }
                        v32 = (const GUID *)&v458;
                        goto LABEL_558;
                      }
                    }
                  }
                  else
                  {
                    v10 = v46 + 56;
                    if ( v46 + 56 <= v45 )
                    {
                      v390 = 1;
                      if ( *(_BYTE *)(v15 + v46 + 10) )
                        v43 = (char *)(v46 + v15 + 24);
                      LOBYTE(v6) = *(_BYTE *)(v15 + v46 + 8);
                      v40 = *(_BYTE **)(v15 + v46 + 16);
                      v41 = *(_BYTE *)(v15 + v46 + 9);
                    }
                  }
                }
                else
                {
                  v10 = v46 + 40;
                  if ( v46 + 40 <= v45 )
                  {
                    if ( *(_BYTE *)(v15 + v46 + 10) )
                      v43 = (char *)(v46 + v15 + 24);
                    v40 = *(_BYTE **)(v15 + v46 + 16);
                    goto LABEL_119;
                  }
                }
                if ( v390 )
                  goto LABEL_120;
              }
            }
            v44 = (unsigned int)(v432 + 1);
            v432 = v44;
            if ( (unsigned int)v44 >= v411 )
              goto LABEL_120;
          }
        }
        goto LABEL_708;
      }
      if ( *(_BYTE *)v11 != 27 )
        goto LABEL_708;
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v39 = *(unsigned int **)(a2 + 56);
          if ( v39 )
            v3 = *v39;
          v13 = (const GUID *)&v458;
          goto LABEL_502;
        }
        goto LABEL_708;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_708;
      v14 = (const GUID *)&v458;
LABEL_505:
      v52 = &EventPnpRequestComplete;
      goto LABEL_506;
    }
    v33 = *(_DWORD *)(v7 + 20);
  }
  v438 = NvmeNamespaceAcquireRemoveLock(a1, a2);
  if ( (v438 & 0x80000000) != 0 )
  {
    v34 = RaidNtStatusToSrbStatus(v438);
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v7 + 3) = v34;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v35;
    if ( v8 )
      goto LABEL_205;
    v459 = 0LL;
    IoGetActivityIdIrp(a2, &v459);
    v37 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v37 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_205;
      v53 = &EventNonReadWriteRequestComplete;
      goto LABEL_204;
    }
    if ( *(_BYTE *)v37 != 15 )
    {
      if ( *(_BYTE *)v37 != 27 )
        goto LABEL_205;
      if ( *(_BYTE *)(v37 + 1) == 7 && !*(_DWORD *)(v37 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v38 = *(unsigned int **)(a2 + 56);
          if ( v38 )
            v3 = *v38;
          McTemplateK0pqd_EtwWriteTransfer(v36, v37, &v459, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_205;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_205;
      v53 = &EventPnpRequestComplete;
LABEL_204:
      McTemplateK0pd_EtwWriteTransfer(v36, v53, &v459, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_205;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_205;
    v54 = *(_QWORD *)(v37 + 8);
    v55 = 0;
    v56 = 0LL;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    if ( *(_BYTE *)(v54 + 2) == 40 )
    {
      v62 = 0LL;
      v391 = 0;
      if ( *(_DWORD *)(v54 + 20) )
        goto LABEL_205;
      v63 = 0LL;
      v433 = 0;
      v412 = *(_DWORD *)(v54 + 56);
      if ( !v412 )
        goto LABEL_205;
      while ( 1 )
      {
        v36 = *(unsigned int *)(v54 + 4 * v63 + 120);
        if ( (unsigned int)v36 >= 0x80 )
        {
          v64 = *(unsigned int *)(v54 + 16);
          if ( (unsigned int)v36 < (unsigned int)v64 )
          {
            v65 = (unsigned int)v36;
            v66 = *(_DWORD *)(v54 + v36) - 64;
            if ( v66 )
            {
              v36 = (unsigned int)(v66 - 1);
              if ( (_DWORD)v36 )
              {
                if ( (_DWORD)v36 == 1 )
                {
                  v36 = v65 + 40;
                  if ( v65 + 40 <= v64 )
                  {
                    if ( *(_DWORD *)(v54 + v65 + 12) )
                      v62 = (char *)(v65 + v54 + 32);
                    v56 = *(_BYTE **)(v54 + v65 + 24);
                    goto LABEL_175;
                  }
                }
              }
              else
              {
                v36 = v65 + 56;
                if ( v65 + 56 <= v64 )
                {
                  v391 = 1;
                  if ( *(_BYTE *)(v54 + v65 + 10) )
                    v62 = (char *)(v65 + v54 + 24);
                  v55 = *(_BYTE *)(v54 + v65 + 8);
                  v56 = *(_BYTE **)(v54 + v65 + 16);
                  v57 = *(_BYTE *)(v54 + v65 + 9);
                }
              }
            }
            else
            {
              v36 = v65 + 40;
              if ( v65 + 40 <= v64 )
              {
                if ( *(_BYTE *)(v54 + v65 + 10) )
                  v62 = (char *)(v65 + v54 + 24);
                v56 = *(_BYTE **)(v54 + v65 + 16);
LABEL_175:
                v57 = *(_BYTE *)(v54 + v65 + 9);
                v55 = *(_BYTE *)(v54 + v65 + 8);
LABEL_176:
                if ( v62 )
                {
                  v67 = *v62;
                  v61 = 0;
                  goto LABEL_179;
                }
                goto LABEL_205;
              }
            }
            if ( v391 )
              goto LABEL_176;
          }
        }
        v63 = (unsigned int)(v433 + 1);
        v433 = v63;
        if ( (unsigned int)v63 >= v412 )
          goto LABEL_176;
      }
    }
    v67 = *(_BYTE *)(v54 + 72);
    v56 = *(_BYTE **)(v54 + 32);
    v57 = *(_BYTE *)(v54 + 11);
    v55 = *(_BYTE *)(v54 + 4);
    if ( *(_BYTE *)(v54 + 2) )
      goto LABEL_205;
LABEL_179:
    LOBYTE(v36) = v67 - 8;
    if ( (v36 & 0x5D) != 0 )
    {
LABEL_205:
      IofCompleteRequest((PIRP)a2, 0);
      return v438;
    }
    v68 = *(_BYTE *)(v54 + 3);
    if ( v68 == 1 || !v56 || !v57 )
    {
LABEL_198:
      if ( byte_140173441 < 0 )
      {
        if ( !v61 )
        {
          v60 = 0;
          v59 = 0;
          v58 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v36, v54, &v459, a2, *(_DWORD *)(a2 + 48), v68, v55, v58, v59, v60, a2);
      }
      goto LABEL_205;
    }
    v69 = *v56 & 0x7F;
    if ( v69 == 114 || v69 == 115 )
    {
      v36 = (unsigned __int64)&v56[v57];
      LOBYTE(v54) = 0;
      if ( (unsigned __int64)(v56 + 8) > v36 )
        goto LABEL_196;
      v59 = v56[2];
      v58 = v56[1] & 0xF;
      v60 = v56[3];
    }
    else
    {
      v36 = (unsigned __int64)&v56[v57];
      LOBYTE(v54) = 0;
      if ( (unsigned __int64)(v56 + 8) > v36 )
        goto LABEL_196;
      v70 = v56 + 13;
      v58 = v56[2] & 0xF;
      v71 = v57;
      if ( (unsigned int)(unsigned __int8)v56[7] + 8 <= v57 )
        v71 = (unsigned __int8)v56[7] + 8;
      v36 = (unsigned __int64)&v56[v71];
      if ( (unsigned __int64)v70 <= v36 )
        v59 = v56[12];
      if ( (unsigned __int64)(v56 + 14) > v36 )
        v60 = 0;
      else
        v60 = *v70;
    }
    LOBYTE(v54) = 1;
LABEL_196:
    if ( (_BYTE)v54 )
      v61 = 1;
    goto LABEL_198;
  }
  if ( !v33 )
  {
    v73 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 128LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v73 + 400) + 184LL) & 0x40000000) == 0 && (*(_DWORD *)(v73 + 416) & 0x40) == 0 )
    {
      result = NvmeNamespaceExecuteScsiSrb(v5, v7, a2);
      v413 = result;
      v74 = result;
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v7 + 3) = RaidNtStatusToSrbStatus(result);
        *(_QWORD *)(a2 + 56) = 0LL;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
        v8 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = v74;
        if ( v8 )
          goto LABEL_276;
        v460 = 0LL;
        IoGetActivityIdIrp(a2, &v460);
        v76 = *(_QWORD *)(a2 + 184);
        if ( *(_BYTE *)v76 == 14 )
        {
          if ( (byte_140173442 & 8) == 0 )
            goto LABEL_276;
          v78 = &EventNonReadWriteRequestComplete;
          goto LABEL_275;
        }
        if ( *(_BYTE *)v76 != 15 )
        {
          if ( *(_BYTE *)v76 != 27 )
            goto LABEL_276;
          if ( *(_BYTE *)(v76 + 1) == 7 && !*(_DWORD *)(v76 + 8) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v77 = *(unsigned int **)(a2 + 56);
              if ( v77 )
                v3 = *v77;
              McTemplateK0pqd_EtwWriteTransfer(v75, v76, &v460, a2, v3, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_276;
          }
          if ( (byte_140173442 & 0x20) == 0 )
            goto LABEL_276;
          v78 = &EventPnpRequestComplete;
LABEL_275:
          McTemplateK0pd_EtwWriteTransfer(v75, v78, &v460, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_276;
        }
        if ( byte_140173441 >= 0 )
          goto LABEL_276;
        v79 = *(_QWORD *)(v76 + 8);
        v80 = 0;
        v81 = 0LL;
        v82 = 0;
        v83 = 0;
        v84 = 0;
        v85 = 0;
        v86 = 0;
        if ( *(_BYTE *)(v79 + 2) == 40 )
        {
          v87 = 0LL;
          v392 = 0;
          if ( *(_DWORD *)(v79 + 20) )
            goto LABEL_276;
          v88 = 0LL;
          v434 = 0;
          v439 = *(_DWORD *)(v79 + 56);
          if ( !v439 )
            goto LABEL_276;
          while ( 1 )
          {
            v75 = *(unsigned int *)(v79 + 4 * v88 + 120);
            if ( (unsigned int)v75 >= 0x80 )
            {
              v89 = *(unsigned int *)(v79 + 16);
              if ( (unsigned int)v75 < (unsigned int)v89 )
              {
                v90 = (unsigned int)v75;
                v91 = *(_DWORD *)(v75 + v79) - 64;
                if ( v91 )
                {
                  v75 = (unsigned int)(v91 - 1);
                  if ( (_DWORD)v75 )
                  {
                    if ( (_DWORD)v75 == 1 )
                    {
                      v75 = v90 + 40;
                      if ( v90 + 40 <= v89 )
                      {
                        if ( *(_DWORD *)(v90 + v79 + 12) )
                          v87 = (char *)(v90 + v79 + 32);
                        v81 = *(_BYTE **)(v90 + v79 + 24);
                        goto LABEL_246;
                      }
                    }
                  }
                  else
                  {
                    v75 = v90 + 56;
                    if ( v90 + 56 <= v89 )
                    {
                      v392 = 1;
                      if ( *(_BYTE *)(v90 + v79 + 10) )
                        v87 = (char *)(v90 + v79 + 24);
                      v80 = *(_BYTE *)(v90 + v79 + 8);
                      v81 = *(_BYTE **)(v90 + v79 + 16);
                      v82 = *(_BYTE *)(v90 + v79 + 9);
                    }
                  }
                }
                else
                {
                  v75 = v90 + 40;
                  if ( v90 + 40 <= v89 )
                  {
                    if ( *(_BYTE *)(v90 + v79 + 10) )
                      v87 = (char *)(v90 + v79 + 24);
                    v81 = *(_BYTE **)(v90 + v79 + 16);
LABEL_246:
                    v82 = *(_BYTE *)(v90 + v79 + 9);
                    v80 = *(_BYTE *)(v90 + v79 + 8);
LABEL_247:
                    if ( v87 )
                    {
                      v92 = *v87;
                      v86 = 0;
                      goto LABEL_250;
                    }
                    goto LABEL_276;
                  }
                }
                if ( v392 )
                  goto LABEL_247;
              }
            }
            v88 = (unsigned int)(v434 + 1);
            v434 = v88;
            if ( (unsigned int)v88 >= v439 )
              goto LABEL_247;
          }
        }
        v92 = *(_BYTE *)(v79 + 72);
        v81 = *(_BYTE **)(v79 + 32);
        v82 = *(_BYTE *)(v79 + 11);
        v80 = *(_BYTE *)(v79 + 4);
        if ( *(_BYTE *)(v79 + 2) )
          goto LABEL_276;
LABEL_250:
        LOBYTE(v75) = v92 - 8;
        if ( (v75 & 0x5D) != 0 )
        {
LABEL_276:
          IofCompleteRequest((PIRP)a2, 0);
          return v413;
        }
        v93 = *(_BYTE *)(v79 + 3);
        if ( v93 == 1 || !v81 || !v82 )
        {
LABEL_269:
          if ( byte_140173441 < 0 )
          {
            if ( !v86 )
            {
              v85 = 0;
              v84 = 0;
              v83 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v75,
              v79,
              &v460,
              a2,
              *(_DWORD *)(a2 + 48),
              v93,
              v80,
              v83,
              v84,
              v85,
              a2);
          }
          goto LABEL_276;
        }
        v94 = *v81 & 0x7F;
        if ( v94 == 114 || v94 == 115 )
        {
          v75 = (unsigned __int64)&v81[v82];
          LOBYTE(v79) = 0;
          if ( (unsigned __int64)(v81 + 8) > v75 )
            goto LABEL_267;
          v84 = v81[2];
          v83 = v81[1] & 0xF;
          v85 = v81[3];
        }
        else
        {
          v75 = (unsigned __int64)&v81[v82];
          LOBYTE(v79) = 0;
          if ( (unsigned __int64)(v81 + 8) > v75 )
            goto LABEL_267;
          v95 = v81 + 13;
          v83 = v81[2] & 0xF;
          v96 = v82;
          if ( (unsigned int)(unsigned __int8)v81[7] + 8 <= v82 )
            v96 = (unsigned __int8)v81[7] + 8;
          v75 = (unsigned __int64)&v81[v96];
          if ( (unsigned __int64)v95 <= v75 )
            v84 = v81[12];
          if ( (unsigned __int64)(v81 + 14) > v75 )
            v85 = 0;
          else
            v85 = *v95;
        }
        LOBYTE(v79) = 1;
LABEL_267:
        if ( (_BYTE)v79 )
          v86 = 1;
        goto LABEL_269;
      }
      if ( (_DWORD)result )
        return result;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
      v8 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v8 )
        goto LABEL_707;
      v461 = 0LL;
      IoGetActivityIdIrp(a2, &v461);
      v98 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v98 != 14 )
      {
        if ( *(_BYTE *)v98 != 15 )
        {
          if ( *(_BYTE *)v98 != 27 )
            goto LABEL_707;
          if ( *(_BYTE *)(v98 + 1) == 7 && !*(_DWORD *)(v98 + 8) )
          {
            if ( (byte_140173442 & 0x40) == 0 )
              goto LABEL_707;
            v99 = *(unsigned int **)(a2 + 56);
            if ( v99 )
              v100 = *v99;
            else
              v100 = 0LL;
            v101 = (const GUID *)&v461;
LABEL_648:
            McTemplateK0pqd_EtwWriteTransfer(v100, v98, v101, a2, v100, *(_DWORD *)(a2 + 48));
            goto LABEL_707;
          }
          if ( (byte_140173442 & 0x20) == 0 )
            goto LABEL_707;
          v102 = (const GUID *)&v461;
LABEL_291:
          v103 = &EventPnpRequestComplete;
LABEL_706:
          McTemplateK0pd_EtwWriteTransfer(v97, v103, v102, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_707;
        }
        if ( byte_140173441 >= 0 )
          goto LABEL_707;
        v104 = *(_QWORD *)(v98 + 8);
        v105 = 0;
        v106 = 0LL;
        v107 = 0;
        v108 = 0;
        v109 = 0;
        v110 = 0;
        v111 = 0;
        if ( *(_BYTE *)(v104 + 2) == 40 )
        {
          v112 = 0LL;
          v393 = 0;
          if ( *(_DWORD *)(v104 + 20) )
            goto LABEL_707;
          v113 = 0LL;
          v435 = 0;
          v440 = *(_DWORD *)(v104 + 56);
          if ( !v440 )
            goto LABEL_707;
          while ( 1 )
          {
            v97 = *(unsigned int *)(v104 + 4 * v113 + 120);
            if ( (unsigned int)v97 >= 0x80 )
            {
              v114 = *(unsigned int *)(v104 + 16);
              if ( (unsigned int)v97 < (unsigned int)v114 )
              {
                v115 = (unsigned int)v97;
                v116 = *(_DWORD *)(v104 + v97) - 64;
                if ( v116 )
                {
                  v97 = (unsigned int)(v116 - 1);
                  if ( (_DWORD)v97 )
                  {
                    if ( (_DWORD)v97 == 1 )
                    {
                      v97 = v115 + 40;
                      if ( v115 + 40 <= v114 )
                      {
                        if ( *(_DWORD *)(v104 + v115 + 12) )
                          v112 = (char *)(v115 + v104 + 32);
                        v106 = *(_BYTE **)(v104 + v115 + 24);
                        goto LABEL_316;
                      }
                    }
                  }
                  else
                  {
                    v97 = v115 + 56;
                    if ( v115 + 56 <= v114 )
                    {
                      v393 = 1;
                      if ( *(_BYTE *)(v104 + v115 + 10) )
                        v112 = (char *)(v115 + v104 + 24);
                      v105 = *(_BYTE *)(v104 + v115 + 8);
                      v106 = *(_BYTE **)(v104 + v115 + 16);
                      v107 = *(_BYTE *)(v104 + v115 + 9);
                    }
                  }
                }
                else
                {
                  v97 = v115 + 40;
                  if ( v115 + 40 <= v114 )
                  {
                    if ( *(_BYTE *)(v104 + v115 + 10) )
                      v112 = (char *)(v115 + v104 + 24);
                    v106 = *(_BYTE **)(v104 + v115 + 16);
LABEL_316:
                    v107 = *(_BYTE *)(v104 + v115 + 9);
                    v105 = *(_BYTE *)(v104 + v115 + 8);
LABEL_317:
                    if ( v112 )
                    {
                      v117 = *v112;
                      v111 = 0;
                      goto LABEL_320;
                    }
                    goto LABEL_707;
                  }
                }
                if ( v393 )
                  goto LABEL_317;
              }
            }
            v113 = (unsigned int)(v435 + 1);
            v435 = v113;
            if ( (unsigned int)v113 >= v440 )
              goto LABEL_317;
          }
        }
        v117 = *(_BYTE *)(v104 + 72);
        v106 = *(_BYTE **)(v104 + 32);
        v107 = *(_BYTE *)(v104 + 11);
        v105 = *(_BYTE *)(v104 + 4);
        if ( *(_BYTE *)(v104 + 2) )
          goto LABEL_707;
LABEL_320:
        LOBYTE(v97) = v117 - 8;
        if ( (v97 & 0x5D) != 0 )
        {
LABEL_707:
          v9 = 0;
          goto LABEL_708;
        }
        v118 = *(_BYTE *)(v104 + 3);
        if ( v118 == 1 || !v106 || !v107 )
        {
LABEL_339:
          if ( byte_140173441 >= 0 )
            goto LABEL_707;
          if ( !v111 )
          {
            v110 = 0;
            v109 = 0;
            v108 = 0;
          }
          v122 = (const GUID *)&v461;
          goto LABEL_702;
        }
        v119 = *v106 & 0x7F;
        if ( v119 == 114 || v119 == 115 )
        {
          v97 = (unsigned __int64)&v106[v107];
          LOBYTE(v104) = 0;
          if ( (unsigned __int64)(v106 + 8) > v97 )
            goto LABEL_337;
          v109 = v106[2];
          v108 = v106[1] & 0xF;
          v110 = v106[3];
        }
        else
        {
          v97 = (unsigned __int64)&v106[v107];
          LOBYTE(v104) = 0;
          if ( (unsigned __int64)(v106 + 8) > v97 )
            goto LABEL_337;
          v120 = v106 + 13;
          v108 = v106[2] & 0xF;
          v121 = v107;
          if ( (unsigned int)(unsigned __int8)v106[7] + 8 <= v107 )
            v121 = (unsigned __int8)v106[7] + 8;
          v97 = (unsigned __int64)&v106[v121];
          if ( (unsigned __int64)v120 <= v97 )
            v109 = v106[12];
          if ( (unsigned __int64)(v106 + 14) > v97 )
            v110 = 0;
          else
            v110 = *v120;
        }
        LOBYTE(v104) = 1;
LABEL_337:
        if ( (_BYTE)v104 )
          v111 = 1;
        goto LABEL_339;
      }
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_707;
      v102 = (const GUID *)&v461;
LABEL_705:
      v103 = &EventNonReadWriteRequestComplete;
      goto LABEL_706;
    }
    result = NvmeNamespaceExecuteScsiSrbEx(v5, v7, a2);
    v436 = result;
    if ( (int)result >= 0 )
    {
      if ( (_DWORD)result )
        return result;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
      v8 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v8 )
        goto LABEL_417;
      v463 = 0LL;
      IoGetActivityIdIrp(a2, &v463);
      v125 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v125 )
      {
        case 0xE:
          if ( (byte_140173442 & 8) == 0 )
            goto LABEL_417;
          v128 = &EventNonReadWriteRequestComplete;
          break;
        case 0xF:
          if ( byte_140173441 >= 0 )
            goto LABEL_417;
          v129 = *(_QWORD *)(v125 + 8);
          v130 = 0;
          v150 = 0LL;
          v151 = 0;
          v133 = 0;
          v134 = 0;
          v135 = 0;
          v152 = 0;
          if ( *(_BYTE *)(v129 + 2) != 40 )
          {
            v158 = *(_BYTE *)(v129 + 72);
            v150 = *(_BYTE **)(v129 + 32);
            v151 = *(_BYTE *)(v129 + 11);
            v130 = *(_BYTE *)(v129 + 4);
            if ( *(_BYTE *)(v129 + 2) )
              goto LABEL_417;
            goto LABEL_459;
          }
          v153 = 0LL;
          v395 = 0;
          if ( *(_DWORD *)(v129 + 20) )
            goto LABEL_417;
          v154 = 0LL;
          v415 = 0;
          v442 = *(_DWORD *)(v129 + 56);
          if ( !v442 )
            goto LABEL_417;
          while ( 1 )
          {
            v124 = *(unsigned int *)(v129 + 4 * v154 + 120);
            if ( (unsigned int)v124 >= 0x80 )
            {
              v155 = *(unsigned int *)(v129 + 16);
              if ( (unsigned int)v124 < (unsigned int)v155 )
              {
                v156 = (unsigned int)v124;
                v157 = *(_DWORD *)(v124 + v129) - 64;
                if ( v157 )
                {
                  v124 = (unsigned int)(v157 - 1);
                  if ( (_DWORD)v124 )
                  {
                    if ( (_DWORD)v124 == 1 )
                    {
                      v124 = v156 + 40;
                      if ( v156 + 40 <= v155 )
                      {
                        if ( *(_DWORD *)(v156 + v129 + 12) )
                          v153 = (char *)(v156 + v129 + 32);
                        v150 = *(_BYTE **)(v156 + v129 + 24);
LABEL_455:
                        v151 = *(_BYTE *)(v156 + v129 + 9);
                        v130 = *(_BYTE *)(v156 + v129 + 8);
LABEL_456:
                        if ( !v153 )
                          goto LABEL_417;
                        v158 = *v153;
                        v152 = 0;
LABEL_459:
                        LOBYTE(v124) = v158 - 8;
                        if ( (v124 & 0x5D) != 0 )
                          goto LABEL_417;
                        v143 = *(_BYTE *)(v129 + 3);
                        if ( v143 != 1 && v150 && v151 )
                        {
                          v159 = *v150 & 0x7F;
                          if ( v159 == 114 || v159 == 115 )
                          {
                            v124 = (unsigned __int64)&v150[v151];
                            LOBYTE(v129) = 0;
                            if ( (unsigned __int64)(v150 + 8) <= v124 )
                            {
                              v134 = v150[2];
                              v133 = v150[1] & 0xF;
                              v135 = v150[3];
                              goto LABEL_475;
                            }
                          }
                          else
                          {
                            v124 = (unsigned __int64)&v150[v151];
                            LOBYTE(v129) = 0;
                            if ( (unsigned __int64)(v150 + 8) <= v124 )
                            {
                              v160 = v150 + 13;
                              v133 = v150[2] & 0xF;
                              v161 = v151;
                              if ( (unsigned int)(unsigned __int8)v150[7] + 8 <= v151 )
                                v161 = (unsigned __int8)v150[7] + 8;
                              v124 = (unsigned __int64)&v150[v161];
                              if ( (unsigned __int64)v160 <= v124 )
                                v134 = v150[12];
                              if ( (unsigned __int64)(v150 + 14) > v124 )
                                v135 = 0;
                              else
                                v135 = *v160;
LABEL_475:
                              LOBYTE(v129) = 1;
                            }
                          }
                          if ( (_BYTE)v129 )
                            v152 = 1;
                        }
                        if ( byte_140173441 >= 0 )
                          goto LABEL_417;
                        if ( !v152 )
                        {
                          v135 = 0;
                          v134 = 0;
                          v133 = 0;
                        }
                        v147 = (const GUID *)&v463;
LABEL_412:
                        McTemplateK0pduuuuup_EtwWriteTransfer(
                          v124,
                          v129,
                          v147,
                          a2,
                          *(_DWORD *)(a2 + 48),
                          v143,
                          v130,
                          v133,
                          v134,
                          v135,
                          a2);
                        goto LABEL_417;
                      }
                    }
                  }
                  else
                  {
                    v124 = v156 + 56;
                    if ( v156 + 56 <= v155 )
                    {
                      v395 = 1;
                      if ( *(_BYTE *)(v156 + v129 + 10) )
                        v153 = (char *)(v156 + v129 + 24);
                      v130 = *(_BYTE *)(v156 + v129 + 8);
                      v150 = *(_BYTE **)(v156 + v129 + 16);
                      v151 = *(_BYTE *)(v156 + v129 + 9);
                    }
                  }
                }
                else
                {
                  v124 = v156 + 40;
                  if ( v156 + 40 <= v155 )
                  {
                    if ( *(_BYTE *)(v156 + v129 + 10) )
                      v153 = (char *)(v156 + v129 + 24);
                    v150 = *(_BYTE **)(v156 + v129 + 16);
                    goto LABEL_455;
                  }
                }
                if ( v395 )
                  goto LABEL_456;
              }
            }
            v154 = (unsigned int)(v415 + 1);
            v415 = v154;
            if ( (unsigned int)v154 >= v442 )
              goto LABEL_456;
          }
        case 0x1B:
          if ( *(_BYTE *)(v125 + 1) == 7 && !*(_DWORD *)(v125 + 8) )
          {
            if ( (byte_140173442 & 0x40) == 0 )
              goto LABEL_417;
            v149 = *(unsigned int **)(a2 + 56);
            if ( v149 )
              v3 = *v149;
            v127 = (const GUID *)&v463;
LABEL_358:
            McTemplateK0pqd_EtwWriteTransfer(v124, v125, v127, a2, v3, *(_DWORD *)(a2 + 48));
            goto LABEL_417;
          }
          if ( (byte_140173442 & 0x20) == 0 )
            goto LABEL_417;
          v128 = &EventPnpRequestComplete;
          break;
        default:
          goto LABEL_417;
      }
      v148 = (const GUID *)&v463;
LABEL_416:
      McTemplateK0pd_EtwWriteTransfer(v124, v128, v148, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_417;
    }
    v123 = RaidNtStatusToSrbStatus(result);
    if ( *(char *)(v7 + 3) < 0 )
      v123 |= 0x80u;
    *(_BYTE *)(v7 + 3) = v123;
    *(_QWORD *)(a2 + 56) = 0LL;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v436;
    if ( v8 )
      goto LABEL_417;
    v462 = 0LL;
    IoGetActivityIdIrp(a2, &v462);
    v125 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v125 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_417;
      v128 = &EventNonReadWriteRequestComplete;
LABEL_415:
      v148 = (const GUID *)&v462;
      goto LABEL_416;
    }
    if ( *(_BYTE *)v125 != 15 )
    {
      if ( *(_BYTE *)v125 != 27 )
        goto LABEL_417;
      if ( *(_BYTE *)(v125 + 1) == 7 && !*(_DWORD *)(v125 + 8) )
      {
        if ( (byte_140173442 & 0x40) == 0 )
          goto LABEL_417;
        v126 = *(unsigned int **)(a2 + 56);
        if ( v126 )
          v3 = *v126;
        v127 = (const GUID *)&v462;
        goto LABEL_358;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_417;
      v128 = &EventPnpRequestComplete;
      goto LABEL_415;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_417;
    v129 = *(_QWORD *)(v125 + 8);
    v130 = 0;
    v131 = 0LL;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    v135 = 0;
    v136 = 0;
    if ( *(_BYTE *)(v129 + 2) == 40 )
    {
      v137 = 0LL;
      v394 = 0;
      if ( *(_DWORD *)(v129 + 20) )
        goto LABEL_417;
      v138 = 0LL;
      v414 = 0;
      v441 = *(_DWORD *)(v129 + 56);
      if ( !v441 )
        goto LABEL_417;
      while ( 1 )
      {
        v124 = *(unsigned int *)(v129 + 4 * v138 + 120);
        if ( (unsigned int)v124 >= 0x80 )
        {
          v139 = *(unsigned int *)(v129 + 16);
          if ( (unsigned int)v124 < (unsigned int)v139 )
          {
            v140 = (unsigned int)v124;
            v141 = *(_DWORD *)(v129 + v124) - 64;
            if ( v141 )
            {
              v124 = (unsigned int)(v141 - 1);
              if ( (_DWORD)v124 )
              {
                if ( (_DWORD)v124 == 1 )
                {
                  v124 = v140 + 40;
                  if ( v140 + 40 <= v139 )
                  {
                    if ( *(_DWORD *)(v129 + v140 + 12) )
                      v137 = (char *)(v140 + v129 + 32);
                    v131 = *(_BYTE **)(v129 + v140 + 24);
                    goto LABEL_385;
                  }
                }
              }
              else
              {
                v124 = v140 + 56;
                if ( v140 + 56 <= v139 )
                {
                  v394 = 1;
                  if ( *(_BYTE *)(v129 + v140 + 10) )
                    v137 = (char *)(v140 + v129 + 24);
                  v130 = *(_BYTE *)(v129 + v140 + 8);
                  v131 = *(_BYTE **)(v129 + v140 + 16);
                  v132 = *(_BYTE *)(v129 + v140 + 9);
                }
              }
            }
            else
            {
              v124 = v140 + 40;
              if ( v140 + 40 <= v139 )
              {
                if ( *(_BYTE *)(v129 + v140 + 10) )
                  v137 = (char *)(v140 + v129 + 24);
                v131 = *(_BYTE **)(v129 + v140 + 16);
LABEL_385:
                v132 = *(_BYTE *)(v129 + v140 + 9);
                v130 = *(_BYTE *)(v129 + v140 + 8);
LABEL_386:
                if ( v137 )
                {
                  v142 = *v137;
                  v136 = 0;
                  goto LABEL_389;
                }
                goto LABEL_417;
              }
            }
            if ( v394 )
              goto LABEL_386;
          }
        }
        v138 = (unsigned int)(v414 + 1);
        v414 = v138;
        if ( (unsigned int)v138 >= v441 )
          goto LABEL_386;
      }
    }
    v142 = *(_BYTE *)(v129 + 72);
    v131 = *(_BYTE **)(v129 + 32);
    v132 = *(_BYTE *)(v129 + 11);
    v130 = *(_BYTE *)(v129 + 4);
    if ( *(_BYTE *)(v129 + 2) )
      goto LABEL_417;
LABEL_389:
    LOBYTE(v124) = v142 - 8;
    if ( (v124 & 0x5D) != 0 )
    {
LABEL_417:
      IofCompleteRequest((PIRP)a2, 0);
      return v436;
    }
    v143 = *(_BYTE *)(v129 + 3);
    if ( v143 == 1 || !v131 || !v132 )
    {
LABEL_408:
      if ( byte_140173441 >= 0 )
        goto LABEL_417;
      if ( !v136 )
      {
        v135 = 0;
        v134 = 0;
        v133 = 0;
      }
      v147 = (const GUID *)&v462;
      goto LABEL_412;
    }
    v144 = *v131 & 0x7F;
    if ( v144 == 114 || v144 == 115 )
    {
      v124 = (unsigned __int64)&v131[v132];
      LOBYTE(v129) = 0;
      if ( (unsigned __int64)(v131 + 8) > v124 )
        goto LABEL_406;
      v134 = v131[2];
      v133 = v131[1] & 0xF;
      v135 = v131[3];
    }
    else
    {
      v124 = (unsigned __int64)&v131[v132];
      LOBYTE(v129) = 0;
      if ( (unsigned __int64)(v131 + 8) > v124 )
        goto LABEL_406;
      v145 = v131 + 13;
      v133 = v131[2] & 0xF;
      v146 = v132;
      if ( (unsigned int)(unsigned __int8)v131[7] + 8 <= v132 )
        v146 = (unsigned __int8)v131[7] + 8;
      v124 = (unsigned __int64)&v131[v146];
      if ( (unsigned __int64)v145 <= v124 )
        v134 = v131[12];
      if ( (unsigned __int64)(v131 + 14) > v124 )
        v135 = 0;
      else
        v135 = *v145;
    }
    LOBYTE(v129) = 1;
LABEL_406:
    if ( (_BYTE)v129 )
      v136 = 1;
    goto LABEL_408;
  }
  if ( v33 == 10 )
  {
    if ( !v6 )
    {
      v162 = *(_BYTE *)(v7 + 3);
      if ( *(_BYTE *)(v7 + 2) == 40 )
      {
        v163 = ((v162 >> 7) & 0x80) + 6;
      }
      else
      {
        v164 = 6;
        if ( v162 < 0 )
          v164 = -122;
        v163 = v164;
      }
      *(_BYTE *)(v7 + 3) = v163;
      *(_QWORD *)(a2 + 56) = 0LL;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
      v8 = StorEtwLoggingEnabled == 0;
      v9 = -1073741811;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( v8 )
        goto LABEL_708;
      v464 = 0LL;
      IoGetActivityIdIrp(a2, &v464);
      v11 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v11 != 14 )
      {
        if ( *(_BYTE *)v11 == 15 )
        {
          if ( byte_140173441 < 0 )
          {
            v15 = *(_QWORD *)(v11 + 8);
            LOBYTE(v6) = 0;
            v166 = 0LL;
            v167 = 0;
            v18 = 0;
            v19 = 0;
            v20 = 0;
            v168 = 0;
            if ( *(_BYTE *)(v15 + 2) != 40 )
            {
              v174 = *(_BYTE *)(v15 + 72);
              v166 = *(_BYTE **)(v15 + 32);
              v167 = *(_BYTE *)(v15 + 11);
              LOBYTE(v6) = *(_BYTE *)(v15 + 4);
              if ( *(_BYTE *)(v15 + 2) )
                goto LABEL_559;
              goto LABEL_535;
            }
            v169 = 0LL;
            v396 = 0;
            if ( *(_DWORD *)(v15 + 20) )
              goto LABEL_559;
            v170 = 0LL;
            v416 = 0;
            v443 = *(_DWORD *)(v15 + 56);
            if ( !v443 )
              goto LABEL_559;
            while ( 1 )
            {
              v10 = *(unsigned int *)(v15 + 4 * v170 + 120);
              if ( (unsigned int)v10 >= 0x80 )
              {
                v171 = *(unsigned int *)(v15 + 16);
                if ( (unsigned int)v10 < (unsigned int)v171 )
                {
                  v172 = (unsigned int)v10;
                  v173 = *(_DWORD *)(v10 + v15) - 64;
                  if ( v173 )
                  {
                    v10 = (unsigned int)(v173 - 1);
                    if ( (_DWORD)v10 )
                    {
                      if ( (_DWORD)v10 == 1 )
                      {
                        v10 = v172 + 40;
                        if ( v172 + 40 <= v171 )
                        {
                          if ( *(_DWORD *)(v172 + v15 + 12) )
                            v169 = (char *)(v172 + v15 + 32);
                          v166 = *(_BYTE **)(v172 + v15 + 24);
LABEL_531:
                          v167 = *(_BYTE *)(v172 + v15 + 9);
                          LOBYTE(v6) = *(_BYTE *)(v172 + v15 + 8);
LABEL_532:
                          if ( !v169 )
                            goto LABEL_559;
                          v174 = *v169;
                          v168 = 0;
LABEL_535:
                          LOBYTE(v10) = v174 - 8;
                          if ( (v10 & 0x5D) != 0 )
                            goto LABEL_559;
                          v28 = *(_BYTE *)(v15 + 3);
                          if ( v28 != 1 && v166 && v167 )
                          {
                            v175 = *v166 & 0x7F;
                            if ( v175 == 114 || v175 == 115 )
                            {
                              v10 = (unsigned __int64)&v166[v167];
                              LOBYTE(v15) = 0;
                              if ( (unsigned __int64)(v166 + 8) <= v10 )
                              {
                                v19 = v166[2];
                                v18 = v166[1] & 0xF;
                                v20 = v166[3];
                                goto LABEL_551;
                              }
                            }
                            else
                            {
                              v10 = (unsigned __int64)&v166[v167];
                              LOBYTE(v15) = 0;
                              if ( (unsigned __int64)(v166 + 8) <= v10 )
                              {
                                v176 = v166 + 13;
                                v18 = v166[2] & 0xF;
                                v177 = v167;
                                if ( (unsigned int)(unsigned __int8)v166[7] + 8 <= v167 )
                                  v177 = (unsigned __int8)v166[7] + 8;
                                v10 = (unsigned __int64)&v166[v177];
                                if ( (unsigned __int64)v176 <= v10 )
                                  v19 = v166[12];
                                if ( (unsigned __int64)(v166 + 14) > v10 )
                                  v20 = 0;
                                else
                                  v20 = *v176;
LABEL_551:
                                LOBYTE(v15) = 1;
                              }
                            }
                            if ( (_BYTE)v15 )
                              v168 = 1;
                          }
                          if ( byte_140173441 >= 0 )
                            goto LABEL_559;
                          if ( !v168 )
                          {
                            v20 = 0;
                            v19 = 0;
                            v18 = 0;
                          }
                          v32 = (const GUID *)&v464;
LABEL_558:
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            v10,
                            v15,
                            v32,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v28,
                            v6,
                            v18,
                            v19,
                            v20,
                            a2);
                          goto LABEL_559;
                        }
                      }
                    }
                    else
                    {
                      v10 = v172 + 56;
                      if ( v172 + 56 <= v171 )
                      {
                        v396 = 1;
                        if ( *(_BYTE *)(v172 + v15 + 10) )
                          v169 = (char *)(v172 + v15 + 24);
                        LOBYTE(v6) = *(_BYTE *)(v172 + v15 + 8);
                        v166 = *(_BYTE **)(v172 + v15 + 16);
                        v167 = *(_BYTE *)(v172 + v15 + 9);
                      }
                    }
                  }
                  else
                  {
                    v10 = v172 + 40;
                    if ( v172 + 40 <= v171 )
                    {
                      if ( *(_BYTE *)(v172 + v15 + 10) )
                        v169 = (char *)(v172 + v15 + 24);
                      v166 = *(_BYTE **)(v172 + v15 + 16);
                      goto LABEL_531;
                    }
                  }
                  if ( v396 )
                    goto LABEL_532;
                }
              }
              v170 = (unsigned int)(v416 + 1);
              v416 = v170;
              if ( (unsigned int)v170 >= v443 )
                goto LABEL_532;
            }
          }
          goto LABEL_708;
        }
        if ( *(_BYTE *)v11 != 27 )
          goto LABEL_708;
        if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v165 = *(unsigned int **)(a2 + 56);
            if ( v165 )
              v3 = *v165;
            v13 = (const GUID *)&v464;
            goto LABEL_502;
          }
LABEL_708:
          IofCompleteRequest((PIRP)a2, 0);
          return v9;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_708;
        v14 = (const GUID *)&v464;
        goto LABEL_505;
      }
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_708;
      v14 = (const GUID *)&v464;
      goto LABEL_148;
    }
    result = NvmeNamepspaceExecuteNvmeSrb(v5, a2);
    v437 = result;
    v9 = result;
    if ( (int)result >= 0 )
    {
      if ( (_DWORD)result )
        return result;
      v198 = *(_BYTE *)(v7 + 3);
      if ( *(_BYTE *)(v7 + 2) == 40 )
      {
        v199 = ((v198 >> 7) & 0x80) + 1;
      }
      else
      {
        v200 = 1;
        if ( v198 < 0 )
          v200 = -127;
        v199 = v200;
      }
      *(_BYTE *)(v7 + 3) = v199;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
      v8 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v8 )
        goto LABEL_707;
      v466 = 0LL;
      IoGetActivityIdIrp(a2, &v466);
      v98 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v98 != 14 )
      {
        if ( *(_BYTE *)v98 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_707;
          v104 = *(_QWORD *)(v98 + 8);
          v105 = 0;
          v202 = 0LL;
          v203 = 0;
          v108 = 0;
          v109 = 0;
          v110 = 0;
          v204 = 0;
          if ( *(_BYTE *)(v104 + 2) != 40 )
          {
            v210 = *(_BYTE *)(v104 + 72);
            v202 = *(_BYTE **)(v104 + 32);
            v203 = *(_BYTE *)(v104 + 11);
            v105 = *(_BYTE *)(v104 + 4);
            if ( *(_BYTE *)(v104 + 2) )
              goto LABEL_707;
            goto LABEL_679;
          }
          v205 = 0LL;
          v398 = 0;
          if ( *(_DWORD *)(v104 + 20) )
            goto LABEL_707;
          v206 = 0LL;
          v418 = 0;
          v445 = *(_DWORD *)(v104 + 56);
          if ( !v445 )
            goto LABEL_707;
          while ( 1 )
          {
            v97 = *(unsigned int *)(v104 + 4 * v206 + 120);
            if ( (unsigned int)v97 >= 0x80 )
            {
              v207 = *(unsigned int *)(v104 + 16);
              if ( (unsigned int)v97 < (unsigned int)v207 )
              {
                v208 = (unsigned int)v97;
                v209 = *(_DWORD *)(v97 + v104) - 64;
                if ( v209 )
                {
                  v97 = (unsigned int)(v209 - 1);
                  if ( (_DWORD)v97 )
                  {
                    if ( (_DWORD)v97 == 1 )
                    {
                      v97 = v208 + 40;
                      if ( v208 + 40 <= v207 )
                      {
                        if ( *(_DWORD *)(v208 + v104 + 12) )
                          v205 = (char *)(v208 + v104 + 32);
                        v202 = *(_BYTE **)(v208 + v104 + 24);
LABEL_675:
                        v203 = *(_BYTE *)(v208 + v104 + 9);
                        v105 = *(_BYTE *)(v208 + v104 + 8);
LABEL_676:
                        if ( !v205 )
                          goto LABEL_707;
                        v210 = *v205;
                        v204 = 0;
LABEL_679:
                        LOBYTE(v97) = v210 - 8;
                        if ( (v97 & 0x5D) != 0 )
                          goto LABEL_707;
                        v118 = *(_BYTE *)(v104 + 3);
                        if ( v118 != 1 && v202 && v203 )
                        {
                          v211 = *v202 & 0x7F;
                          if ( v211 == 114 || v211 == 115 )
                          {
                            v97 = (unsigned __int64)&v202[v203];
                            LOBYTE(v104) = 0;
                            if ( (unsigned __int64)(v202 + 8) <= v97 )
                            {
                              v109 = v202[2];
                              v108 = v202[1] & 0xF;
                              v110 = v202[3];
                              goto LABEL_695;
                            }
                          }
                          else
                          {
                            v97 = (unsigned __int64)&v202[v203];
                            LOBYTE(v104) = 0;
                            if ( (unsigned __int64)(v202 + 8) <= v97 )
                            {
                              v212 = v202 + 13;
                              v108 = v202[2] & 0xF;
                              v213 = v203;
                              if ( (unsigned int)(unsigned __int8)v202[7] + 8 <= v203 )
                                v213 = (unsigned __int8)v202[7] + 8;
                              v97 = (unsigned __int64)&v202[v213];
                              if ( (unsigned __int64)v212 <= v97 )
                                v109 = v202[12];
                              if ( (unsigned __int64)(v202 + 14) > v97 )
                                v110 = 0;
                              else
                                v110 = *v212;
LABEL_695:
                              LOBYTE(v104) = 1;
                            }
                          }
                          if ( (_BYTE)v104 )
                            v204 = 1;
                        }
                        if ( byte_140173441 >= 0 )
                          goto LABEL_707;
                        if ( !v204 )
                        {
                          v110 = 0;
                          v109 = 0;
                          v108 = 0;
                        }
                        v122 = (const GUID *)&v466;
LABEL_702:
                        McTemplateK0pduuuuup_EtwWriteTransfer(
                          v97,
                          v104,
                          v122,
                          a2,
                          *(_DWORD *)(a2 + 48),
                          v118,
                          v105,
                          v108,
                          v109,
                          v110,
                          a2);
                        goto LABEL_707;
                      }
                    }
                  }
                  else
                  {
                    v97 = v208 + 56;
                    if ( v208 + 56 <= v207 )
                    {
                      v398 = 1;
                      if ( *(_BYTE *)(v208 + v104 + 10) )
                        v205 = (char *)(v208 + v104 + 24);
                      v105 = *(_BYTE *)(v208 + v104 + 8);
                      v202 = *(_BYTE **)(v208 + v104 + 16);
                      v203 = *(_BYTE *)(v208 + v104 + 9);
                    }
                  }
                }
                else
                {
                  v97 = v208 + 40;
                  if ( v208 + 40 <= v207 )
                  {
                    if ( *(_BYTE *)(v208 + v104 + 10) )
                      v205 = (char *)(v208 + v104 + 24);
                    v202 = *(_BYTE **)(v208 + v104 + 16);
                    goto LABEL_675;
                  }
                }
                if ( v398 )
                  goto LABEL_676;
              }
            }
            v206 = (unsigned int)(v418 + 1);
            v418 = v206;
            if ( (unsigned int)v206 >= v445 )
              goto LABEL_676;
          }
        }
        if ( *(_BYTE *)v98 != 27 )
          goto LABEL_707;
        if ( *(_BYTE *)(v98 + 1) == 7 && !*(_DWORD *)(v98 + 8) )
        {
          if ( (byte_140173442 & 0x40) == 0 )
            goto LABEL_707;
          v201 = *(unsigned int **)(a2 + 56);
          if ( v201 )
            v100 = *v201;
          else
            v100 = 0LL;
          v101 = (const GUID *)&v466;
          goto LABEL_648;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_707;
        v102 = (const GUID *)&v466;
        goto LABEL_291;
      }
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_707;
      v102 = (const GUID *)&v466;
      goto LABEL_705;
    }
    v178 = RaidNtStatusToSrbStatus(result);
    if ( *(char *)(v7 + 3) < 0 )
      v178 |= 0x80u;
    *(_BYTE *)(v7 + 3) = v178;
    *(_QWORD *)(a2 + 56) = 0LL;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v9;
    if ( v8 )
      goto LABEL_708;
    v465 = 0LL;
    IoGetActivityIdIrp(a2, &v465);
    v11 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v11 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_708;
      v14 = &v465;
      goto LABEL_148;
    }
    if ( *(_BYTE *)v11 != 15 )
    {
      if ( *(_BYTE *)v11 != 27 )
        goto LABEL_708;
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140173442 & 0x40) == 0 )
          goto LABEL_708;
        v179 = *(unsigned int **)(a2 + 56);
        if ( v179 )
          v3 = *v179;
        v13 = &v465;
        goto LABEL_502;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_708;
      v14 = &v465;
      goto LABEL_505;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_708;
    v180 = *(_QWORD *)(v11 + 8);
    v181 = 0;
    v182 = 0LL;
    v183 = 0;
    v184 = 0;
    v185 = 0;
    v186 = 0;
    v187 = 0;
    if ( *(_BYTE *)(v180 + 2) == 40 )
    {
      v188 = 0LL;
      v397 = 0;
      if ( *(_DWORD *)(v180 + 20) )
        goto LABEL_628;
      v189 = 0LL;
      v417 = 0;
      v444 = *(_DWORD *)(v180 + 56);
      if ( !v444 )
        goto LABEL_628;
      while ( 1 )
      {
        v10 = *(unsigned int *)(v180 + 4 * v189 + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v190 = *(unsigned int *)(v180 + 16);
          if ( (unsigned int)v10 < (unsigned int)v190 )
          {
            v191 = (unsigned int)v10;
            v192 = *(_DWORD *)(v180 + v10) - 64;
            if ( v192 )
            {
              v10 = (unsigned int)(v192 - 1);
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 1 )
                {
                  v10 = v191 + 40;
                  if ( v191 + 40 <= v190 )
                  {
                    if ( *(_DWORD *)(v180 + v191 + 12) )
                      v188 = (char *)(v191 + v180 + 32);
                    v182 = *(_BYTE **)(v180 + v191 + 24);
                    goto LABEL_601;
                  }
                }
              }
              else
              {
                v10 = v191 + 56;
                if ( v191 + 56 <= v190 )
                {
                  v397 = 1;
                  if ( *(_BYTE *)(v180 + v191 + 10) )
                    v188 = (char *)(v191 + v180 + 24);
                  v181 = *(_BYTE *)(v180 + v191 + 8);
                  v182 = *(_BYTE **)(v180 + v191 + 16);
                  v183 = *(_BYTE *)(v180 + v191 + 9);
                }
              }
            }
            else
            {
              v10 = v191 + 40;
              if ( v191 + 40 <= v190 )
              {
                if ( *(_BYTE *)(v180 + v191 + 10) )
                  v188 = (char *)(v191 + v180 + 24);
                v182 = *(_BYTE **)(v180 + v191 + 16);
LABEL_601:
                v183 = *(_BYTE *)(v180 + v191 + 9);
                v181 = *(_BYTE *)(v180 + v191 + 8);
LABEL_602:
                if ( v188 )
                {
                  v193 = *v188;
                  v187 = 0;
                  goto LABEL_605;
                }
                goto LABEL_628;
              }
            }
            if ( v397 )
              goto LABEL_602;
          }
        }
        v189 = (unsigned int)(v417 + 1);
        v417 = v189;
        if ( (unsigned int)v189 >= v444 )
          goto LABEL_602;
      }
    }
    v193 = *(_BYTE *)(v180 + 72);
    v182 = *(_BYTE **)(v180 + 32);
    v183 = *(_BYTE *)(v180 + 11);
    v181 = *(_BYTE *)(v180 + 4);
    if ( *(_BYTE *)(v180 + 2) )
      goto LABEL_628;
LABEL_605:
    LOBYTE(v10) = v193 - 8;
    if ( (v10 & 0x5D) != 0 )
    {
LABEL_628:
      v9 = v437;
      goto LABEL_708;
    }
    v194 = *(_BYTE *)(v180 + 3);
    if ( v194 == 1 || !v182 || !v183 )
    {
LABEL_624:
      if ( byte_140173441 < 0 )
      {
        if ( !v187 )
        {
          v186 = 0;
          v185 = 0;
          v184 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v10,
          v180,
          &v465,
          a2,
          *(_DWORD *)(a2 + 48),
          v194,
          v181,
          v184,
          v185,
          v186,
          a2);
      }
      goto LABEL_628;
    }
    v195 = *v182 & 0x7F;
    if ( v195 == 114 || v195 == 115 )
    {
      v10 = (unsigned __int64)&v182[v183];
      LOBYTE(v180) = 0;
      if ( (unsigned __int64)(v182 + 8) > v10 )
        goto LABEL_622;
      v185 = v182[2];
      v184 = v182[1] & 0xF;
      v186 = v182[3];
    }
    else
    {
      v10 = (unsigned __int64)&v182[v183];
      LOBYTE(v180) = 0;
      if ( (unsigned __int64)(v182 + 8) > v10 )
        goto LABEL_622;
      v196 = v182 + 13;
      v184 = v182[2] & 0xF;
      v197 = v183;
      if ( (unsigned int)(unsigned __int8)v182[7] + 8 <= v183 )
        v197 = (unsigned __int8)v182[7] + 8;
      v10 = (unsigned __int64)&v182[v197];
      if ( (unsigned __int64)v196 <= v10 )
        v185 = v182[12];
      if ( (unsigned __int64)(v182 + 14) > v10 )
        v186 = 0;
      else
        v186 = *v196;
    }
    LOBYTE(v180) = 1;
LABEL_622:
    if ( (_BYTE)v180 )
      v187 = 1;
    goto LABEL_624;
  }
  if ( v33 > 0x11 )
  {
    if ( v33 > 0x17 )
    {
      v334 = v33 - 24;
      if ( v334 )
      {
        v335 = v334 - 1;
        if ( v335 )
        {
          v336 = v335 - 1;
          if ( v336 )
          {
            if ( v336 != 6 )
              goto LABEL_860;
            v8 = StorEtwLoggingEnabled == 0;
            *(_BYTE *)(v7 + 3) = 1;
            *(_BYTE *)(a2 + 141) = -84;
            *(_DWORD *)(a2 + 48) = 0;
            if ( v8 )
              goto LABEL_782;
            v474 = 0LL;
            IoGetActivityIdIrp(a2, &v474);
            v216 = *(_QWORD *)(a2 + 184);
            switch ( *(_BYTE *)v216 )
            {
              case 0xE:
                if ( (byte_140173442 & 8) == 0 )
                  goto LABEL_782;
                v220 = &EventNonReadWriteRequestComplete;
                break;
              case 0xF:
                if ( byte_140173441 < 0 )
                {
                  v222 = *(_QWORD *)(v216 + 8);
                  v223 = 0;
                  v338 = 0LL;
                  v339 = 0;
                  v226 = 0;
                  v227 = 0;
                  v228 = 0;
                  v340 = 0;
                  if ( *(_BYTE *)(v222 + 2) != 40 )
                  {
                    v346 = *(_BYTE *)(v222 + 72);
                    v338 = *(_BYTE **)(v222 + 32);
                    v339 = *(_BYTE *)(v222 + 11);
                    v223 = *(_BYTE *)(v222 + 4);
                    if ( *(_BYTE *)(v222 + 2) )
                      goto LABEL_781;
                    goto LABEL_1249;
                  }
                  v341 = 0LL;
                  v406 = 0;
                  if ( *(_DWORD *)(v222 + 20) )
                    goto LABEL_781;
                  v342 = 0LL;
                  v426 = 0;
                  v453 = *(_DWORD *)(v222 + 56);
                  if ( !v453 )
                    goto LABEL_781;
                  while ( 1 )
                  {
                    v215 = *(unsigned int *)(v222 + 4 * v342 + 120);
                    if ( (unsigned int)v215 >= 0x80 )
                    {
                      v343 = *(unsigned int *)(v222 + 16);
                      if ( (unsigned int)v215 < (unsigned int)v343 )
                      {
                        v344 = (unsigned int)v215;
                        v345 = *(_DWORD *)(v222 + v215) - 64;
                        if ( v345 )
                        {
                          v215 = (unsigned int)(v345 - 1);
                          if ( (_DWORD)v215 )
                          {
                            if ( (_DWORD)v215 == 1 )
                            {
                              v215 = v344 + 40;
                              if ( v344 + 40 <= v343 )
                              {
                                if ( *(_DWORD *)(v222 + v344 + 12) )
                                  v341 = (char *)(v344 + v222 + 32);
                                v338 = *(_BYTE **)(v222 + v344 + 24);
LABEL_1245:
                                v339 = *(_BYTE *)(v222 + v344 + 9);
                                v223 = *(_BYTE *)(v222 + v344 + 8);
LABEL_1246:
                                if ( !v341 )
                                  goto LABEL_781;
                                v346 = *v341;
                                v340 = 0;
LABEL_1249:
                                LOBYTE(v215) = v346 - 8;
                                if ( (v215 & 0x5D) != 0 )
                                  goto LABEL_781;
                                v236 = *(_BYTE *)(v222 + 3);
                                if ( v236 != 1 && v338 && v339 )
                                {
                                  v347 = *v338 & 0x7F;
                                  if ( v347 == 114 || v347 == 115 )
                                  {
                                    v215 = (unsigned __int64)&v338[v339];
                                    LOBYTE(v222) = 0;
                                    if ( (unsigned __int64)(v338 + 8) <= v215 )
                                    {
                                      v227 = v338[2];
                                      v226 = v338[1] & 0xF;
                                      v228 = v338[3];
                                      goto LABEL_1265;
                                    }
                                  }
                                  else
                                  {
                                    v215 = (unsigned __int64)&v338[v339];
                                    LOBYTE(v222) = 0;
                                    if ( (unsigned __int64)(v338 + 8) <= v215 )
                                    {
                                      v348 = v338 + 13;
                                      v226 = v338[2] & 0xF;
                                      v349 = v339;
                                      if ( (unsigned int)(unsigned __int8)v338[7] + 8 <= v339 )
                                        v349 = (unsigned __int8)v338[7] + 8;
                                      v215 = (unsigned __int64)&v338[v349];
                                      if ( (unsigned __int64)v348 <= v215 )
                                        v227 = v338[12];
                                      if ( (unsigned __int64)(v338 + 14) > v215 )
                                        v228 = 0;
                                      else
                                        v228 = *v348;
LABEL_1265:
                                      LOBYTE(v222) = 1;
                                    }
                                  }
                                  if ( (_BYTE)v222 )
                                    v340 = 1;
                                }
                                if ( byte_140173441 >= 0 )
                                  goto LABEL_781;
                                if ( !v340 )
                                {
                                  v228 = 0;
                                  v227 = 0;
                                  v226 = 0;
                                }
                                v240 = (const GUID *)&v474;
                                goto LABEL_780;
                              }
                            }
                          }
                          else
                          {
                            v215 = v344 + 56;
                            if ( v344 + 56 <= v343 )
                            {
                              v406 = 1;
                              if ( *(_BYTE *)(v222 + v344 + 10) )
                                v341 = (char *)(v344 + v222 + 24);
                              v223 = *(_BYTE *)(v222 + v344 + 8);
                              v338 = *(_BYTE **)(v222 + v344 + 16);
                              v339 = *(_BYTE *)(v222 + v344 + 9);
                            }
                          }
                        }
                        else
                        {
                          v215 = v344 + 40;
                          if ( v344 + 40 <= v343 )
                          {
                            if ( *(_BYTE *)(v222 + v344 + 10) )
                              v341 = (char *)(v344 + v222 + 24);
                            v338 = *(_BYTE **)(v222 + v344 + 16);
                            goto LABEL_1245;
                          }
                        }
                        if ( v406 )
                          goto LABEL_1246;
                      }
                    }
                    v342 = (unsigned int)(v426 + 1);
                    v426 = v342;
                    if ( (unsigned int)v342 >= v453 )
                      goto LABEL_1246;
                  }
                }
                goto LABEL_782;
              case 0x1B:
                if ( *(_BYTE *)(v216 + 1) == 7 && !*(_DWORD *)(v216 + 8) )
                {
                  if ( (byte_140173442 & 0x40) != 0 )
                  {
                    v337 = *(unsigned int **)(a2 + 56);
                    if ( v337 )
                      v218 = *v337;
                    else
                      v218 = 0LL;
                    v219 = (const GUID *)&v474;
                    goto LABEL_1419;
                  }
                  goto LABEL_782;
                }
                if ( (byte_140173442 & 0x20) == 0 )
                  goto LABEL_782;
                v220 = &EventPnpRequestComplete;
                break;
              default:
                goto LABEL_782;
            }
            v221 = (const GUID *)&v474;
          }
          else
          {
            v8 = StorEtwLoggingEnabled == 0;
            *(_BYTE *)(v7 + 3) = 1;
            *(_BYTE *)(a2 + 141) = -84;
            *(_DWORD *)(a2 + 48) = 0;
            if ( v8 )
              goto LABEL_782;
            v475 = 0LL;
            IoGetActivityIdIrp(a2, &v475);
            v216 = *(_QWORD *)(a2 + 184);
            switch ( *(_BYTE *)v216 )
            {
              case 0xE:
                if ( (byte_140173442 & 8) == 0 )
                  goto LABEL_782;
                v220 = &EventNonReadWriteRequestComplete;
                break;
              case 0xF:
                if ( byte_140173441 < 0 )
                {
                  v222 = *(_QWORD *)(v216 + 8);
                  v223 = 0;
                  v351 = 0LL;
                  v352 = 0;
                  v226 = 0;
                  v227 = 0;
                  v228 = 0;
                  v353 = 0;
                  if ( *(_BYTE *)(v222 + 2) != 40 )
                  {
                    v359 = *(_BYTE *)(v222 + 72);
                    v351 = *(_BYTE **)(v222 + 32);
                    v352 = *(_BYTE *)(v222 + 11);
                    v223 = *(_BYTE *)(v222 + 4);
                    if ( *(_BYTE *)(v222 + 2) )
                      goto LABEL_781;
                    goto LABEL_1316;
                  }
                  v354 = 0LL;
                  v407 = 0;
                  if ( *(_DWORD *)(v222 + 20) )
                    goto LABEL_781;
                  v355 = 0LL;
                  v427 = 0;
                  v454 = *(_DWORD *)(v222 + 56);
                  if ( !v454 )
                    goto LABEL_781;
                  while ( 1 )
                  {
                    v215 = *(unsigned int *)(v222 + 4 * v355 + 120);
                    if ( (unsigned int)v215 >= 0x80 )
                    {
                      v356 = *(unsigned int *)(v222 + 16);
                      if ( (unsigned int)v215 < (unsigned int)v356 )
                      {
                        v357 = (unsigned int)v215;
                        v358 = *(_DWORD *)(v215 + v222) - 64;
                        if ( v358 )
                        {
                          v215 = (unsigned int)(v358 - 1);
                          if ( (_DWORD)v215 )
                          {
                            if ( (_DWORD)v215 == 1 )
                            {
                              v215 = v357 + 40;
                              if ( v357 + 40 <= v356 )
                              {
                                if ( *(_DWORD *)(v357 + v222 + 12) )
                                  v354 = (char *)(v357 + v222 + 32);
                                v351 = *(_BYTE **)(v357 + v222 + 24);
LABEL_1312:
                                v352 = *(_BYTE *)(v357 + v222 + 9);
                                v223 = *(_BYTE *)(v357 + v222 + 8);
LABEL_1313:
                                if ( !v354 )
                                  goto LABEL_781;
                                v359 = *v354;
                                v353 = 0;
LABEL_1316:
                                LOBYTE(v215) = v359 - 8;
                                if ( (v215 & 0x5D) != 0 )
                                  goto LABEL_781;
                                v236 = *(_BYTE *)(v222 + 3);
                                if ( v236 != 1 && v351 && v352 )
                                {
                                  v360 = *v351 & 0x7F;
                                  if ( v360 == 114 || v360 == 115 )
                                  {
                                    v215 = (unsigned __int64)&v351[v352];
                                    LOBYTE(v222) = 0;
                                    if ( (unsigned __int64)(v351 + 8) <= v215 )
                                    {
                                      v227 = v351[2];
                                      v226 = v351[1] & 0xF;
                                      v228 = v351[3];
                                      goto LABEL_1332;
                                    }
                                  }
                                  else
                                  {
                                    v215 = (unsigned __int64)&v351[v352];
                                    LOBYTE(v222) = 0;
                                    if ( (unsigned __int64)(v351 + 8) <= v215 )
                                    {
                                      v361 = v351 + 13;
                                      v226 = v351[2] & 0xF;
                                      v362 = v352;
                                      if ( (unsigned int)(unsigned __int8)v351[7] + 8 <= v352 )
                                        v362 = (unsigned __int8)v351[7] + 8;
                                      v215 = (unsigned __int64)&v351[v362];
                                      if ( (unsigned __int64)v361 <= v215 )
                                        v227 = v351[12];
                                      if ( (unsigned __int64)(v351 + 14) > v215 )
                                        v228 = 0;
                                      else
                                        v228 = *v361;
LABEL_1332:
                                      LOBYTE(v222) = 1;
                                    }
                                  }
                                  if ( (_BYTE)v222 )
                                    v353 = 1;
                                }
                                if ( byte_140173441 >= 0 )
                                  goto LABEL_781;
                                if ( !v353 )
                                {
                                  v228 = 0;
                                  v227 = 0;
                                  v226 = 0;
                                }
                                v240 = (const GUID *)&v475;
                                goto LABEL_780;
                              }
                            }
                          }
                          else
                          {
                            v215 = v357 + 56;
                            if ( v357 + 56 <= v356 )
                            {
                              v407 = 1;
                              if ( *(_BYTE *)(v357 + v222 + 10) )
                                v354 = (char *)(v357 + v222 + 24);
                              v223 = *(_BYTE *)(v357 + v222 + 8);
                              v351 = *(_BYTE **)(v357 + v222 + 16);
                              v352 = *(_BYTE *)(v357 + v222 + 9);
                            }
                          }
                        }
                        else
                        {
                          v215 = v357 + 40;
                          if ( v357 + 40 <= v356 )
                          {
                            if ( *(_BYTE *)(v357 + v222 + 10) )
                              v354 = (char *)(v357 + v222 + 24);
                            v351 = *(_BYTE **)(v357 + v222 + 16);
                            goto LABEL_1312;
                          }
                        }
                        if ( v407 )
                          goto LABEL_1313;
                      }
                    }
                    v355 = (unsigned int)(v427 + 1);
                    v427 = v355;
                    if ( (unsigned int)v355 >= v454 )
                      goto LABEL_1313;
                  }
                }
                goto LABEL_782;
              case 0x1B:
                if ( *(_BYTE *)(v216 + 1) == 7 && !*(_DWORD *)(v216 + 8) )
                {
                  if ( (byte_140173442 & 0x40) != 0 )
                  {
                    v350 = *(unsigned int **)(a2 + 56);
                    if ( v350 )
                      v218 = *v350;
                    else
                      v218 = 0LL;
                    v219 = (const GUID *)&v475;
                    goto LABEL_1419;
                  }
                  goto LABEL_782;
                }
                if ( (byte_140173442 & 0x20) == 0 )
                  goto LABEL_782;
                v220 = &EventPnpRequestComplete;
                break;
              default:
                goto LABEL_782;
            }
            v221 = (const GUID *)&v475;
          }
        }
        else
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_782;
          v476 = 0LL;
          IoGetActivityIdIrp(a2, &v476);
          v216 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v216 )
          {
            case 0xE:
              if ( (byte_140173442 & 8) == 0 )
                goto LABEL_782;
              v220 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140173441 < 0 )
              {
                v222 = *(_QWORD *)(v216 + 8);
                v223 = 0;
                v364 = 0LL;
                v365 = 0;
                v226 = 0;
                v227 = 0;
                v228 = 0;
                v366 = 0;
                if ( *(_BYTE *)(v222 + 2) != 40 )
                {
                  v372 = *(_BYTE *)(v222 + 72);
                  v364 = *(_BYTE **)(v222 + 32);
                  v365 = *(_BYTE *)(v222 + 11);
                  v223 = *(_BYTE *)(v222 + 4);
                  if ( *(_BYTE *)(v222 + 2) )
                    goto LABEL_781;
                  goto LABEL_1383;
                }
                v367 = 0LL;
                v408 = 0;
                if ( *(_DWORD *)(v222 + 20) )
                  goto LABEL_781;
                v368 = 0LL;
                v428 = 0;
                v455 = *(_DWORD *)(v222 + 56);
                if ( !v455 )
                  goto LABEL_781;
                while ( 1 )
                {
                  v215 = *(unsigned int *)(v222 + 4 * v368 + 120);
                  if ( (unsigned int)v215 >= 0x80 )
                  {
                    v369 = *(unsigned int *)(v222 + 16);
                    if ( (unsigned int)v215 < (unsigned int)v369 )
                    {
                      v370 = (unsigned int)v215;
                      v371 = *(_DWORD *)(v215 + v222) - 64;
                      if ( v371 )
                      {
                        v215 = (unsigned int)(v371 - 1);
                        if ( (_DWORD)v215 )
                        {
                          if ( (_DWORD)v215 == 1 )
                          {
                            v215 = v370 + 40;
                            if ( v370 + 40 <= v369 )
                            {
                              if ( *(_DWORD *)(v370 + v222 + 12) )
                                v367 = (char *)(v370 + v222 + 32);
                              v364 = *(_BYTE **)(v370 + v222 + 24);
LABEL_1379:
                              v365 = *(_BYTE *)(v370 + v222 + 9);
                              v223 = *(_BYTE *)(v370 + v222 + 8);
LABEL_1380:
                              if ( !v367 )
                                goto LABEL_781;
                              v372 = *v367;
                              v366 = 0;
LABEL_1383:
                              LOBYTE(v215) = v372 - 8;
                              if ( (v215 & 0x5D) != 0 )
                                goto LABEL_781;
                              v236 = *(_BYTE *)(v222 + 3);
                              if ( v236 != 1 && v364 && v365 )
                              {
                                v373 = *v364 & 0x7F;
                                if ( v373 == 114 || v373 == 115 )
                                {
                                  v215 = (unsigned __int64)&v364[v365];
                                  LOBYTE(v222) = 0;
                                  if ( (unsigned __int64)(v364 + 8) <= v215 )
                                  {
                                    v227 = v364[2];
                                    v226 = v364[1] & 0xF;
                                    v228 = v364[3];
                                    goto LABEL_1399;
                                  }
                                }
                                else
                                {
                                  v215 = (unsigned __int64)&v364[v365];
                                  LOBYTE(v222) = 0;
                                  if ( (unsigned __int64)(v364 + 8) <= v215 )
                                  {
                                    v374 = v364 + 13;
                                    v226 = v364[2] & 0xF;
                                    v375 = v365;
                                    if ( (unsigned int)(unsigned __int8)v364[7] + 8 <= v365 )
                                      v375 = (unsigned __int8)v364[7] + 8;
                                    v215 = (unsigned __int64)&v364[v375];
                                    if ( (unsigned __int64)v374 <= v215 )
                                      v227 = v364[12];
                                    if ( (unsigned __int64)(v364 + 14) > v215 )
                                      v228 = 0;
                                    else
                                      v228 = *v374;
LABEL_1399:
                                    LOBYTE(v222) = 1;
                                  }
                                }
                                if ( (_BYTE)v222 )
                                  v366 = 1;
                              }
                              if ( byte_140173441 >= 0 )
                                goto LABEL_781;
                              if ( !v366 )
                              {
                                v228 = 0;
                                v227 = 0;
                                v226 = 0;
                              }
                              v240 = (const GUID *)&v476;
                              goto LABEL_780;
                            }
                          }
                        }
                        else
                        {
                          v215 = v370 + 56;
                          if ( v370 + 56 <= v369 )
                          {
                            v408 = 1;
                            if ( *(_BYTE *)(v370 + v222 + 10) )
                              v367 = (char *)(v370 + v222 + 24);
                            v223 = *(_BYTE *)(v370 + v222 + 8);
                            v364 = *(_BYTE **)(v370 + v222 + 16);
                            v365 = *(_BYTE *)(v370 + v222 + 9);
                          }
                        }
                      }
                      else
                      {
                        v215 = v370 + 40;
                        if ( v370 + 40 <= v369 )
                        {
                          if ( *(_BYTE *)(v370 + v222 + 10) )
                            v367 = (char *)(v370 + v222 + 24);
                          v364 = *(_BYTE **)(v370 + v222 + 16);
                          goto LABEL_1379;
                        }
                      }
                      if ( v408 )
                        goto LABEL_1380;
                    }
                  }
                  v368 = (unsigned int)(v428 + 1);
                  v428 = v368;
                  if ( (unsigned int)v368 >= v455 )
                    goto LABEL_1380;
                }
              }
              goto LABEL_782;
            case 0x1B:
              if ( *(_BYTE *)(v216 + 1) == 7 && !*(_DWORD *)(v216 + 8) )
              {
                if ( (byte_140173442 & 0x40) != 0 )
                {
                  v363 = *(unsigned int **)(a2 + 56);
                  if ( v363 )
                    v218 = *v363;
                  else
                    v218 = 0LL;
                  v219 = (const GUID *)&v476;
                  goto LABEL_1419;
                }
                goto LABEL_782;
              }
              if ( (byte_140173442 & 0x20) == 0 )
                goto LABEL_782;
              v220 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_782;
          }
          v221 = (const GUID *)&v476;
        }
      }
      else
      {
        v8 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(v7 + 3) = 1;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = 0;
        if ( v8 )
          goto LABEL_782;
        v477 = 0LL;
        IoGetActivityIdIrp(a2, &v477);
        v216 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v216 )
        {
          case 0xE:
            if ( (byte_140173442 & 8) == 0 )
              goto LABEL_782;
            v220 = &EventNonReadWriteRequestComplete;
            break;
          case 0xF:
            if ( byte_140173441 < 0 )
            {
              v222 = *(_QWORD *)(v216 + 8);
              v223 = 0;
              v377 = 0LL;
              v378 = 0;
              v226 = 0;
              v227 = 0;
              v228 = 0;
              v379 = 0;
              if ( *(_BYTE *)(v222 + 2) != 40 )
              {
                v385 = *(_BYTE *)(v222 + 72);
                v377 = *(_BYTE **)(v222 + 32);
                v378 = *(_BYTE *)(v222 + 11);
                v223 = *(_BYTE *)(v222 + 4);
                if ( *(_BYTE *)(v222 + 2) )
                  goto LABEL_781;
                goto LABEL_1452;
              }
              v380 = 0LL;
              v409 = 0;
              if ( *(_DWORD *)(v222 + 20) )
                goto LABEL_781;
              v381 = 0LL;
              v429 = 0;
              v456 = *(_DWORD *)(v222 + 56);
              if ( !v456 )
                goto LABEL_781;
              while ( 1 )
              {
                v215 = *(unsigned int *)(v222 + 4 * v381 + 120);
                if ( (unsigned int)v215 >= 0x80 )
                {
                  v382 = *(unsigned int *)(v222 + 16);
                  if ( (unsigned int)v215 < (unsigned int)v382 )
                  {
                    v383 = (unsigned int)v215;
                    v384 = *(_DWORD *)(v222 + v215) - 64;
                    if ( v384 )
                    {
                      v215 = (unsigned int)(v384 - 1);
                      if ( (_DWORD)v215 )
                      {
                        if ( (_DWORD)v215 == 1 )
                        {
                          v215 = v383 + 40;
                          if ( v383 + 40 <= v382 )
                          {
                            if ( *(_DWORD *)(v222 + v383 + 12) )
                              v380 = (char *)(v383 + v222 + 32);
                            v377 = *(_BYTE **)(v222 + v383 + 24);
LABEL_1448:
                            v378 = *(_BYTE *)(v222 + v383 + 9);
                            v223 = *(_BYTE *)(v222 + v383 + 8);
LABEL_1449:
                            if ( !v380 )
                              goto LABEL_781;
                            v385 = *v380;
                            v379 = 0;
LABEL_1452:
                            LOBYTE(v215) = v385 - 8;
                            if ( (v215 & 0x5D) != 0 )
                              goto LABEL_781;
                            v236 = *(_BYTE *)(v222 + 3);
                            if ( v236 != 1 && v377 && v378 )
                            {
                              v386 = *v377 & 0x7F;
                              if ( v386 == 114 || v386 == 115 )
                              {
                                v215 = (unsigned __int64)&v377[v378];
                                LOBYTE(v222) = 0;
                                if ( (unsigned __int64)(v377 + 8) <= v215 )
                                {
                                  v227 = v377[2];
                                  v226 = v377[1] & 0xF;
                                  v228 = v377[3];
                                  goto LABEL_1468;
                                }
                              }
                              else
                              {
                                v215 = (unsigned __int64)&v377[v378];
                                LOBYTE(v222) = 0;
                                if ( (unsigned __int64)(v377 + 8) <= v215 )
                                {
                                  v387 = v377 + 13;
                                  v226 = v377[2] & 0xF;
                                  v388 = v378;
                                  if ( (unsigned int)(unsigned __int8)v377[7] + 8 <= v378 )
                                    v388 = (unsigned __int8)v377[7] + 8;
                                  v215 = (unsigned __int64)&v377[v388];
                                  if ( (unsigned __int64)v387 <= v215 )
                                    v227 = v377[12];
                                  if ( (unsigned __int64)(v377 + 14) > v215 )
                                    v228 = 0;
                                  else
                                    v228 = *v387;
LABEL_1468:
                                  LOBYTE(v222) = 1;
                                }
                              }
                              if ( (_BYTE)v222 )
                                v379 = 1;
                            }
                            if ( byte_140173441 >= 0 )
                              goto LABEL_781;
                            if ( !v379 )
                            {
                              v228 = 0;
                              v227 = 0;
                              v226 = 0;
                            }
                            v240 = (const GUID *)&v477;
                            goto LABEL_780;
                          }
                        }
                      }
                      else
                      {
                        v215 = v383 + 56;
                        if ( v383 + 56 <= v382 )
                        {
                          v409 = 1;
                          if ( *(_BYTE *)(v222 + v383 + 10) )
                            v380 = (char *)(v383 + v222 + 24);
                          v223 = *(_BYTE *)(v222 + v383 + 8);
                          v377 = *(_BYTE **)(v222 + v383 + 16);
                          v378 = *(_BYTE *)(v222 + v383 + 9);
                        }
                      }
                    }
                    else
                    {
                      v215 = v383 + 40;
                      if ( v383 + 40 <= v382 )
                      {
                        if ( *(_BYTE *)(v222 + v383 + 10) )
                          v380 = (char *)(v383 + v222 + 24);
                        v377 = *(_BYTE **)(v222 + v383 + 16);
                        goto LABEL_1448;
                      }
                    }
                    if ( v409 )
                      goto LABEL_1449;
                  }
                }
                v381 = (unsigned int)(v429 + 1);
                v429 = v381;
                if ( (unsigned int)v381 >= v456 )
                  goto LABEL_1449;
              }
            }
            goto LABEL_782;
          case 0x1B:
            if ( *(_BYTE *)(v216 + 1) == 7 && !*(_DWORD *)(v216 + 8) )
            {
              if ( (byte_140173442 & 0x40) != 0 )
              {
                v376 = *(unsigned int **)(a2 + 56);
                if ( v376 )
                  v218 = *v376;
                else
                  v218 = 0LL;
                v219 = (const GUID *)&v477;
                goto LABEL_1419;
              }
              goto LABEL_782;
            }
            if ( (byte_140173442 & 0x20) == 0 )
              goto LABEL_782;
            v220 = &EventPnpRequestComplete;
            break;
          default:
            goto LABEL_782;
        }
        v221 = (const GUID *)&v477;
      }
    }
    else
    {
      if ( v33 == 23 )
      {
        v241 = NvmeNamespaceWmiSrb(v438, v7, a2);
        goto LABEL_788;
      }
      v293 = v33 - 18;
      if ( v293 )
      {
        v294 = v293 - 1;
        if ( v294 )
        {
          if ( v294 != 2 )
            goto LABEL_860;
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_782;
          v471 = 0LL;
          IoGetActivityIdIrp(a2, &v471);
          v216 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v216 )
          {
            case 0xE:
              if ( (byte_140173442 & 8) == 0 )
                goto LABEL_782;
              v220 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140173441 < 0 )
              {
                v222 = *(_QWORD *)(v216 + 8);
                v223 = 0;
                v296 = 0LL;
                v297 = 0;
                v226 = 0;
                v227 = 0;
                v228 = 0;
                v298 = 0;
                if ( *(_BYTE *)(v222 + 2) != 40 )
                {
                  v304 = *(_BYTE *)(v222 + 72);
                  v296 = *(_BYTE **)(v222 + 32);
                  v297 = *(_BYTE *)(v222 + 11);
                  v223 = *(_BYTE *)(v222 + 4);
                  if ( *(_BYTE *)(v222 + 2) )
                    goto LABEL_781;
                  goto LABEL_1043;
                }
                v299 = 0LL;
                v403 = 0;
                if ( *(_DWORD *)(v222 + 20) )
                  goto LABEL_781;
                v300 = 0LL;
                v423 = 0;
                v450 = *(_DWORD *)(v222 + 56);
                if ( !v450 )
                  goto LABEL_781;
                while ( 1 )
                {
                  v215 = *(unsigned int *)(v222 + 4 * v300 + 120);
                  if ( (unsigned int)v215 >= 0x80 )
                  {
                    v301 = *(unsigned int *)(v222 + 16);
                    if ( (unsigned int)v215 < (unsigned int)v301 )
                    {
                      v302 = (unsigned int)v215;
                      v303 = *(_DWORD *)(v215 + v222) - 64;
                      if ( v303 )
                      {
                        v215 = (unsigned int)(v303 - 1);
                        if ( (_DWORD)v215 )
                        {
                          if ( (_DWORD)v215 == 1 )
                          {
                            v215 = v302 + 40;
                            if ( v302 + 40 <= v301 )
                            {
                              if ( *(_DWORD *)(v302 + v222 + 12) )
                                v299 = (char *)(v302 + v222 + 32);
                              v296 = *(_BYTE **)(v302 + v222 + 24);
LABEL_1039:
                              v297 = *(_BYTE *)(v302 + v222 + 9);
                              v223 = *(_BYTE *)(v302 + v222 + 8);
LABEL_1040:
                              if ( !v299 )
                                goto LABEL_781;
                              v304 = *v299;
                              v298 = 0;
LABEL_1043:
                              LOBYTE(v215) = v304 - 8;
                              if ( (v215 & 0x5D) != 0 )
                                goto LABEL_781;
                              v236 = *(_BYTE *)(v222 + 3);
                              if ( v236 != 1 && v296 && v297 )
                              {
                                v305 = *v296 & 0x7F;
                                if ( v305 == 114 || v305 == 115 )
                                {
                                  v215 = (unsigned __int64)&v296[v297];
                                  LOBYTE(v222) = 0;
                                  if ( (unsigned __int64)(v296 + 8) <= v215 )
                                  {
                                    v227 = v296[2];
                                    v226 = v296[1] & 0xF;
                                    v228 = v296[3];
                                    goto LABEL_1059;
                                  }
                                }
                                else
                                {
                                  v215 = (unsigned __int64)&v296[v297];
                                  LOBYTE(v222) = 0;
                                  if ( (unsigned __int64)(v296 + 8) <= v215 )
                                  {
                                    v306 = v296 + 13;
                                    v226 = v296[2] & 0xF;
                                    v307 = v297;
                                    if ( (unsigned int)(unsigned __int8)v296[7] + 8 <= v297 )
                                      v307 = (unsigned __int8)v296[7] + 8;
                                    v215 = (unsigned __int64)&v296[v307];
                                    if ( (unsigned __int64)v306 <= v215 )
                                      v227 = v296[12];
                                    if ( (unsigned __int64)(v296 + 14) > v215 )
                                      v228 = 0;
                                    else
                                      v228 = *v306;
LABEL_1059:
                                    LOBYTE(v222) = 1;
                                  }
                                }
                                if ( (_BYTE)v222 )
                                  v298 = 1;
                              }
                              if ( byte_140173441 >= 0 )
                                goto LABEL_781;
                              if ( !v298 )
                              {
                                v228 = 0;
                                v227 = 0;
                                v226 = 0;
                              }
                              v240 = (const GUID *)&v471;
                              goto LABEL_780;
                            }
                          }
                        }
                        else
                        {
                          v215 = v302 + 56;
                          if ( v302 + 56 <= v301 )
                          {
                            v403 = 1;
                            if ( *(_BYTE *)(v302 + v222 + 10) )
                              v299 = (char *)(v302 + v222 + 24);
                            v223 = *(_BYTE *)(v302 + v222 + 8);
                            v296 = *(_BYTE **)(v302 + v222 + 16);
                            v297 = *(_BYTE *)(v302 + v222 + 9);
                          }
                        }
                      }
                      else
                      {
                        v215 = v302 + 40;
                        if ( v302 + 40 <= v301 )
                        {
                          if ( *(_BYTE *)(v302 + v222 + 10) )
                            v299 = (char *)(v302 + v222 + 24);
                          v296 = *(_BYTE **)(v302 + v222 + 16);
                          goto LABEL_1039;
                        }
                      }
                      if ( v403 )
                        goto LABEL_1040;
                    }
                  }
                  v300 = (unsigned int)(v423 + 1);
                  v423 = v300;
                  if ( (unsigned int)v300 >= v450 )
                    goto LABEL_1040;
                }
              }
              goto LABEL_782;
            case 0x1B:
              if ( *(_BYTE *)(v216 + 1) == 7 && !*(_DWORD *)(v216 + 8) )
              {
                if ( (byte_140173442 & 0x40) != 0 )
                {
                  v295 = *(unsigned int **)(a2 + 56);
                  if ( v295 )
                    v218 = *v295;
                  else
                    v218 = 0LL;
                  v219 = (const GUID *)&v471;
                  goto LABEL_1419;
                }
                goto LABEL_782;
              }
              if ( (byte_140173442 & 0x20) == 0 )
                goto LABEL_782;
              v220 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_782;
          }
          v221 = (const GUID *)&v471;
        }
        else
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_782;
          v472 = 0LL;
          IoGetActivityIdIrp(a2, &v472);
          v216 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v216 )
          {
            case 0xE:
              if ( (byte_140173442 & 8) == 0 )
                goto LABEL_782;
              v220 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140173441 < 0 )
              {
                v222 = *(_QWORD *)(v216 + 8);
                v223 = 0;
                v309 = 0LL;
                v310 = 0;
                v226 = 0;
                v227 = 0;
                v228 = 0;
                v311 = 0;
                if ( *(_BYTE *)(v222 + 2) != 40 )
                {
                  v317 = *(_BYTE *)(v222 + 72);
                  v309 = *(_BYTE **)(v222 + 32);
                  v310 = *(_BYTE *)(v222 + 11);
                  v223 = *(_BYTE *)(v222 + 4);
                  if ( *(_BYTE *)(v222 + 2) )
                    goto LABEL_781;
                  goto LABEL_1110;
                }
                v312 = 0LL;
                v404 = 0;
                if ( *(_DWORD *)(v222 + 20) )
                  goto LABEL_781;
                v313 = 0LL;
                v424 = 0;
                v451 = *(_DWORD *)(v222 + 56);
                if ( !v451 )
                  goto LABEL_781;
                while ( 1 )
                {
                  v215 = *(unsigned int *)(v222 + 4 * v313 + 120);
                  if ( (unsigned int)v215 >= 0x80 )
                  {
                    v314 = *(unsigned int *)(v222 + 16);
                    if ( (unsigned int)v215 < (unsigned int)v314 )
                    {
                      v315 = (unsigned int)v215;
                      v316 = *(_DWORD *)(v222 + v215) - 64;
                      if ( v316 )
                      {
                        v215 = (unsigned int)(v316 - 1);
                        if ( (_DWORD)v215 )
                        {
                          if ( (_DWORD)v215 == 1 )
                          {
                            v215 = v315 + 40;
                            if ( v315 + 40 <= v314 )
                            {
                              if ( *(_DWORD *)(v222 + v315 + 12) )
                                v312 = (char *)(v315 + v222 + 32);
                              v309 = *(_BYTE **)(v222 + v315 + 24);
LABEL_1106:
                              v310 = *(_BYTE *)(v222 + v315 + 9);
                              v223 = *(_BYTE *)(v222 + v315 + 8);
LABEL_1107:
                              if ( !v312 )
                                goto LABEL_781;
                              v317 = *v312;
                              v311 = 0;
LABEL_1110:
                              LOBYTE(v215) = v317 - 8;
                              if ( (v215 & 0x5D) != 0 )
                                goto LABEL_781;
                              v236 = *(_BYTE *)(v222 + 3);
                              if ( v236 != 1 && v309 && v310 )
                              {
                                v318 = *v309 & 0x7F;
                                if ( v318 == 114 || v318 == 115 )
                                {
                                  v215 = (unsigned __int64)&v309[v310];
                                  LOBYTE(v222) = 0;
                                  if ( (unsigned __int64)(v309 + 8) <= v215 )
                                  {
                                    v227 = v309[2];
                                    v226 = v309[1] & 0xF;
                                    v228 = v309[3];
                                    goto LABEL_1126;
                                  }
                                }
                                else
                                {
                                  v215 = (unsigned __int64)&v309[v310];
                                  LOBYTE(v222) = 0;
                                  if ( (unsigned __int64)(v309 + 8) <= v215 )
                                  {
                                    v319 = v309 + 13;
                                    v226 = v309[2] & 0xF;
                                    v320 = v310;
                                    if ( (unsigned int)(unsigned __int8)v309[7] + 8 <= v310 )
                                      v320 = (unsigned __int8)v309[7] + 8;
                                    v215 = (unsigned __int64)&v309[v320];
                                    if ( (unsigned __int64)v319 <= v215 )
                                      v227 = v309[12];
                                    if ( (unsigned __int64)(v309 + 14) > v215 )
                                      v228 = 0;
                                    else
                                      v228 = *v319;
LABEL_1126:
                                    LOBYTE(v222) = 1;
                                  }
                                }
                                if ( (_BYTE)v222 )
                                  v311 = 1;
                              }
                              if ( byte_140173441 >= 0 )
                                goto LABEL_781;
                              if ( !v311 )
                              {
                                v228 = 0;
                                v227 = 0;
                                v226 = 0;
                              }
                              v240 = (const GUID *)&v472;
                              goto LABEL_780;
                            }
                          }
                        }
                        else
                        {
                          v215 = v315 + 56;
                          if ( v315 + 56 <= v314 )
                          {
                            v404 = 1;
                            if ( *(_BYTE *)(v222 + v315 + 10) )
                              v312 = (char *)(v315 + v222 + 24);
                            v223 = *(_BYTE *)(v222 + v315 + 8);
                            v309 = *(_BYTE **)(v222 + v315 + 16);
                            v310 = *(_BYTE *)(v222 + v315 + 9);
                          }
                        }
                      }
                      else
                      {
                        v215 = v315 + 40;
                        if ( v315 + 40 <= v314 )
                        {
                          if ( *(_BYTE *)(v222 + v315 + 10) )
                            v312 = (char *)(v315 + v222 + 24);
                          v309 = *(_BYTE **)(v222 + v315 + 16);
                          goto LABEL_1106;
                        }
                      }
                      if ( v404 )
                        goto LABEL_1107;
                    }
                  }
                  v313 = (unsigned int)(v424 + 1);
                  v424 = v313;
                  if ( (unsigned int)v313 >= v451 )
                    goto LABEL_1107;
                }
              }
              goto LABEL_782;
            case 0x1B:
              if ( *(_BYTE *)(v216 + 1) == 7 && !*(_DWORD *)(v216 + 8) )
              {
                if ( (byte_140173442 & 0x40) != 0 )
                {
                  v308 = *(unsigned int **)(a2 + 56);
                  if ( v308 )
                    v218 = *v308;
                  else
                    v218 = 0LL;
                  v219 = (const GUID *)&v472;
                  goto LABEL_1419;
                }
                goto LABEL_782;
              }
              if ( (byte_140173442 & 0x20) == 0 )
                goto LABEL_782;
              v220 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_782;
          }
          v221 = (const GUID *)&v472;
        }
      }
      else
      {
        v8 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(v7 + 3) = 1;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = 0;
        if ( v8 )
          goto LABEL_782;
        v473 = 0LL;
        IoGetActivityIdIrp(a2, &v473);
        v216 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v216 )
        {
          case 0xE:
            if ( (byte_140173442 & 8) == 0 )
              goto LABEL_782;
            v220 = &EventNonReadWriteRequestComplete;
            break;
          case 0xF:
            if ( byte_140173441 < 0 )
            {
              v222 = *(_QWORD *)(v216 + 8);
              v223 = 0;
              v322 = 0LL;
              v323 = 0;
              v226 = 0;
              v227 = 0;
              v228 = 0;
              v324 = 0;
              if ( *(_BYTE *)(v222 + 2) != 40 )
              {
                v330 = *(_BYTE *)(v222 + 72);
                v322 = *(_BYTE **)(v222 + 32);
                v323 = *(_BYTE *)(v222 + 11);
                v223 = *(_BYTE *)(v222 + 4);
                if ( *(_BYTE *)(v222 + 2) )
                  goto LABEL_781;
                goto LABEL_1177;
              }
              v325 = 0LL;
              v405 = 0;
              if ( *(_DWORD *)(v222 + 20) )
                goto LABEL_781;
              v326 = 0LL;
              v425 = 0;
              v452 = *(_DWORD *)(v222 + 56);
              if ( !v452 )
                goto LABEL_781;
              while ( 1 )
              {
                v215 = *(unsigned int *)(v222 + 4 * v326 + 120);
                if ( (unsigned int)v215 >= 0x80 )
                {
                  v327 = *(unsigned int *)(v222 + 16);
                  if ( (unsigned int)v215 < (unsigned int)v327 )
                  {
                    v328 = (unsigned int)v215;
                    v329 = *(_DWORD *)(v222 + v215) - 64;
                    if ( v329 )
                    {
                      v215 = (unsigned int)(v329 - 1);
                      if ( (_DWORD)v215 )
                      {
                        if ( (_DWORD)v215 == 1 )
                        {
                          v215 = v328 + 40;
                          if ( v328 + 40 <= v327 )
                          {
                            if ( *(_DWORD *)(v222 + v328 + 12) )
                              v325 = (char *)(v328 + v222 + 32);
                            v322 = *(_BYTE **)(v222 + v328 + 24);
LABEL_1173:
                            v323 = *(_BYTE *)(v222 + v328 + 9);
                            v223 = *(_BYTE *)(v222 + v328 + 8);
LABEL_1174:
                            if ( !v325 )
                              goto LABEL_781;
                            v330 = *v325;
                            v324 = 0;
LABEL_1177:
                            LOBYTE(v215) = v330 - 8;
                            if ( (v215 & 0x5D) != 0 )
                              goto LABEL_781;
                            v236 = *(_BYTE *)(v222 + 3);
                            if ( v236 != 1 && v322 && v323 )
                            {
                              v331 = *v322 & 0x7F;
                              if ( v331 == 114 || v331 == 115 )
                              {
                                v215 = (unsigned __int64)&v322[v323];
                                LOBYTE(v222) = 0;
                                if ( (unsigned __int64)(v322 + 8) <= v215 )
                                {
                                  v227 = v322[2];
                                  v226 = v322[1] & 0xF;
                                  v228 = v322[3];
                                  goto LABEL_1193;
                                }
                              }
                              else
                              {
                                v215 = (unsigned __int64)&v322[v323];
                                LOBYTE(v222) = 0;
                                if ( (unsigned __int64)(v322 + 8) <= v215 )
                                {
                                  v332 = v322 + 13;
                                  v226 = v322[2] & 0xF;
                                  v333 = v323;
                                  if ( (unsigned int)(unsigned __int8)v322[7] + 8 <= v323 )
                                    v333 = (unsigned __int8)v322[7] + 8;
                                  v215 = (unsigned __int64)&v322[v333];
                                  if ( (unsigned __int64)v332 <= v215 )
                                    v227 = v322[12];
                                  if ( (unsigned __int64)(v322 + 14) > v215 )
                                    v228 = 0;
                                  else
                                    v228 = *v332;
LABEL_1193:
                                  LOBYTE(v222) = 1;
                                }
                              }
                              if ( (_BYTE)v222 )
                                v324 = 1;
                            }
                            if ( byte_140173441 >= 0 )
                              goto LABEL_781;
                            if ( !v324 )
                            {
                              v228 = 0;
                              v227 = 0;
                              v226 = 0;
                            }
                            v240 = (const GUID *)&v473;
                            goto LABEL_780;
                          }
                        }
                      }
                      else
                      {
                        v215 = v328 + 56;
                        if ( v328 + 56 <= v327 )
                        {
                          v405 = 1;
                          if ( *(_BYTE *)(v222 + v328 + 10) )
                            v325 = (char *)(v328 + v222 + 24);
                          v223 = *(_BYTE *)(v222 + v328 + 8);
                          v322 = *(_BYTE **)(v222 + v328 + 16);
                          v323 = *(_BYTE *)(v222 + v328 + 9);
                        }
                      }
                    }
                    else
                    {
                      v215 = v328 + 40;
                      if ( v328 + 40 <= v327 )
                      {
                        if ( *(_BYTE *)(v222 + v328 + 10) )
                          v325 = (char *)(v328 + v222 + 24);
                        v322 = *(_BYTE **)(v222 + v328 + 16);
                        goto LABEL_1173;
                      }
                    }
                    if ( v405 )
                      goto LABEL_1174;
                  }
                }
                v326 = (unsigned int)(v425 + 1);
                v425 = v326;
                if ( (unsigned int)v326 >= v452 )
                  goto LABEL_1174;
              }
            }
            goto LABEL_782;
          case 0x1B:
            if ( *(_BYTE *)(v216 + 1) == 7 && !*(_DWORD *)(v216 + 8) )
            {
              if ( (byte_140173442 & 0x40) != 0 )
              {
                v321 = *(unsigned int **)(a2 + 56);
                if ( v321 )
                  v218 = *v321;
                else
                  v218 = 0LL;
                v219 = (const GUID *)&v473;
                goto LABEL_1419;
              }
              goto LABEL_782;
            }
            if ( (byte_140173442 & 0x20) == 0 )
              goto LABEL_782;
            v220 = &EventPnpRequestComplete;
            break;
          default:
            goto LABEL_782;
        }
        v221 = (const GUID *)&v473;
      }
    }
LABEL_1423:
    McTemplateK0pd_EtwWriteTransfer(v215, v220, v221, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_782;
  }
  if ( v33 == 17 )
  {
LABEL_860:
    v241 = NvmeNamespaceUnknownSrb(v438, v7, a2);
    goto LABEL_788;
  }
  if ( v33 <= 6 )
  {
    if ( v33 == 6 )
    {
      v241 = NvmeNamespaceReleaseDeviceSrb(v5, v7, a2);
    }
    else
    {
      v214 = v33 - 1;
      if ( v214 )
      {
        if ( v214 == 3 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_QWORD *)(a2 + 56) = 0LL;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_782;
          v467 = 0LL;
          IoGetActivityIdIrp(a2, &v467);
          v216 = *(_QWORD *)(a2 + 184);
          if ( *(_BYTE *)v216 == 14 )
          {
            if ( (byte_140173442 & 8) == 0 )
              goto LABEL_782;
            v220 = &EventNonReadWriteRequestComplete;
LABEL_728:
            v221 = (const GUID *)&v467;
            goto LABEL_1423;
          }
          if ( *(_BYTE *)v216 != 15 )
          {
            if ( *(_BYTE *)v216 != 27 )
              goto LABEL_782;
            if ( *(_BYTE *)(v216 + 1) == 7 && !*(_DWORD *)(v216 + 8) )
            {
              if ( (byte_140173442 & 0x40) != 0 )
              {
                v217 = *(unsigned int **)(a2 + 56);
                if ( v217 )
                  v218 = *v217;
                else
                  v218 = 0LL;
                v219 = (const GUID *)&v467;
LABEL_1419:
                McTemplateK0pqd_EtwWriteTransfer(v218, v216, v219, a2, v218, *(_DWORD *)(a2 + 48));
                goto LABEL_782;
              }
              goto LABEL_782;
            }
            if ( (byte_140173442 & 0x20) == 0 )
              goto LABEL_782;
            v220 = &EventPnpRequestComplete;
            goto LABEL_728;
          }
          if ( byte_140173441 >= 0 )
            goto LABEL_782;
          v222 = *(_QWORD *)(v216 + 8);
          v223 = 0;
          v224 = 0LL;
          v225 = 0;
          v226 = 0;
          v227 = 0;
          v228 = 0;
          v229 = 0;
          if ( *(_BYTE *)(v222 + 2) == 40 )
          {
            v230 = 0LL;
            v399 = 0;
            if ( *(_DWORD *)(v222 + 20) )
              goto LABEL_781;
            v231 = 0LL;
            v419 = 0;
            v446 = *(_DWORD *)(v222 + 56);
            if ( !v446 )
              goto LABEL_781;
            while ( 1 )
            {
              v215 = *(unsigned int *)(v222 + 4 * v231 + 120);
              if ( (unsigned int)v215 >= 0x80 )
              {
                v232 = *(unsigned int *)(v222 + 16);
                if ( (unsigned int)v215 < (unsigned int)v232 )
                {
                  v233 = (unsigned int)v215;
                  v234 = *(_DWORD *)(v222 + v215) - 64;
                  if ( v234 )
                  {
                    v215 = (unsigned int)(v234 - 1);
                    if ( (_DWORD)v215 )
                    {
                      if ( (_DWORD)v215 == 1 )
                      {
                        v215 = v233 + 40;
                        if ( v233 + 40 <= v232 )
                        {
                          if ( *(_DWORD *)(v222 + v233 + 12) )
                            v230 = (char *)(v233 + v222 + 32);
                          v224 = *(_BYTE **)(v222 + v233 + 24);
                          goto LABEL_753;
                        }
                      }
                    }
                    else
                    {
                      v215 = v233 + 56;
                      if ( v233 + 56 <= v232 )
                      {
                        v399 = 1;
                        if ( *(_BYTE *)(v222 + v233 + 10) )
                          v230 = (char *)(v233 + v222 + 24);
                        v223 = *(_BYTE *)(v222 + v233 + 8);
                        v224 = *(_BYTE **)(v222 + v233 + 16);
                        v225 = *(_BYTE *)(v222 + v233 + 9);
                      }
                    }
                  }
                  else
                  {
                    v215 = v233 + 40;
                    if ( v233 + 40 <= v232 )
                    {
                      if ( *(_BYTE *)(v222 + v233 + 10) )
                        v230 = (char *)(v233 + v222 + 24);
                      v224 = *(_BYTE **)(v222 + v233 + 16);
LABEL_753:
                      v225 = *(_BYTE *)(v222 + v233 + 9);
                      v223 = *(_BYTE *)(v222 + v233 + 8);
LABEL_754:
                      if ( v230 )
                      {
                        v235 = *v230;
                        v229 = 0;
                        goto LABEL_757;
                      }
                      goto LABEL_781;
                    }
                  }
                  if ( v399 )
                    goto LABEL_754;
                }
              }
              v231 = (unsigned int)(v419 + 1);
              v419 = v231;
              if ( (unsigned int)v231 >= v446 )
                goto LABEL_754;
            }
          }
          v235 = *(_BYTE *)(v222 + 72);
          v224 = *(_BYTE **)(v222 + 32);
          v225 = *(_BYTE *)(v222 + 11);
          v223 = *(_BYTE *)(v222 + 4);
          if ( *(_BYTE *)(v222 + 2) )
            goto LABEL_781;
LABEL_757:
          LOBYTE(v215) = v235 - 8;
          if ( (v215 & 0x5D) != 0 )
          {
LABEL_781:
            v5 = a1;
            goto LABEL_782;
          }
          v236 = *(_BYTE *)(v222 + 3);
          if ( v236 == 1 || !v224 || !v225 )
          {
LABEL_776:
            if ( byte_140173441 >= 0 )
              goto LABEL_781;
            if ( !v229 )
            {
              v228 = 0;
              v227 = 0;
              v226 = 0;
            }
            v240 = (const GUID *)&v467;
            goto LABEL_780;
          }
          v237 = *v224 & 0x7F;
          if ( v237 == 114 || v237 == 115 )
          {
            v215 = (unsigned __int64)&v224[v225];
            LOBYTE(v222) = 0;
            if ( (unsigned __int64)(v224 + 8) > v215 )
              goto LABEL_774;
            v227 = v224[2];
            v226 = v224[1] & 0xF;
            v228 = v224[3];
          }
          else
          {
            v215 = (unsigned __int64)&v224[v225];
            LOBYTE(v222) = 0;
            if ( (unsigned __int64)(v224 + 8) > v215 )
              goto LABEL_774;
            v238 = v224 + 13;
            v226 = v224[2] & 0xF;
            v239 = v225;
            if ( (unsigned int)(unsigned __int8)v224[7] + 8 <= v225 )
              v239 = (unsigned __int8)v224[7] + 8;
            v215 = (unsigned __int64)&v224[v239];
            if ( (unsigned __int64)v238 <= v215 )
              v227 = v224[12];
            if ( (unsigned __int64)(v224 + 14) > v215 )
              v228 = 0;
            else
              v228 = *v238;
          }
          LOBYTE(v222) = 1;
LABEL_774:
          if ( (_BYTE)v222 )
            v229 = 1;
          goto LABEL_776;
        }
        goto LABEL_860;
      }
      v241 = NvmeNamespaceClaimDeviceSrb((_QWORD *)v5, v7, a2);
    }
LABEL_788:
    v3 = v241;
    goto LABEL_783;
  }
  v242 = v33 - 7;
  if ( !v242 )
  {
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v7 + 3) = 1;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v8 )
      goto LABEL_995;
    v470 = 0LL;
    IoGetActivityIdIrp(a2, &v470);
    v271 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v271 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_995;
      v274 = &EventNonReadWriteRequestComplete;
      goto LABEL_994;
    }
    if ( *(_BYTE *)v271 != 15 )
    {
      if ( *(_BYTE *)v271 != 27 )
        goto LABEL_995;
      if ( *(_BYTE *)(v271 + 1) == 7 && !*(_DWORD *)(v271 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v272 = *(unsigned int **)(a2 + 56);
          if ( v272 )
            v273 = *v272;
          else
            v273 = 0LL;
          McTemplateK0pqd_EtwWriteTransfer(v273, v271, &v470, a2, v273, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_995;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_995;
      v274 = &EventPnpRequestComplete;
LABEL_994:
      McTemplateK0pd_EtwWriteTransfer(v270, v274, &v470, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_995;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_995;
    v275 = *(_QWORD *)(v271 + 8);
    v276 = 0;
    v277 = 0LL;
    v278 = 0;
    v279 = 0;
    v280 = 0;
    v281 = 0;
    v282 = 0;
    if ( *(_BYTE *)(v275 + 2) == 40 )
    {
      v283 = 0LL;
      v402 = 0;
      if ( *(_DWORD *)(v275 + 20) )
        goto LABEL_995;
      v284 = 0LL;
      v422 = 0;
      v449 = *(_DWORD *)(v275 + 56);
      if ( !v449 )
        goto LABEL_995;
      while ( 1 )
      {
        v270 = *(unsigned int *)(v275 + 4 * v284 + 120);
        if ( (unsigned int)v270 >= 0x80 )
        {
          v285 = *(unsigned int *)(v275 + 16);
          if ( (unsigned int)v270 < (unsigned int)v285 )
          {
            v286 = (unsigned int)v270;
            v287 = *(_DWORD *)(v270 + v275) - 64;
            if ( v287 )
            {
              v270 = (unsigned int)(v287 - 1);
              if ( (_DWORD)v270 )
              {
                if ( (_DWORD)v270 == 1 )
                {
                  v270 = v286 + 40;
                  if ( v286 + 40 <= v285 )
                  {
                    if ( *(_DWORD *)(v286 + v275 + 12) )
                      v283 = (char *)(v286 + v275 + 32);
                    v277 = *(_BYTE **)(v286 + v275 + 24);
                    goto LABEL_965;
                  }
                }
              }
              else
              {
                v270 = v286 + 56;
                if ( v286 + 56 <= v285 )
                {
                  v402 = 1;
                  if ( *(_BYTE *)(v286 + v275 + 10) )
                    v283 = (char *)(v286 + v275 + 24);
                  v276 = *(_BYTE *)(v286 + v275 + 8);
                  v277 = *(_BYTE **)(v286 + v275 + 16);
                  v278 = *(_BYTE *)(v286 + v275 + 9);
                }
              }
            }
            else
            {
              v270 = v286 + 40;
              if ( v286 + 40 <= v285 )
              {
                if ( *(_BYTE *)(v286 + v275 + 10) )
                  v283 = (char *)(v286 + v275 + 24);
                v277 = *(_BYTE **)(v286 + v275 + 16);
LABEL_965:
                v278 = *(_BYTE *)(v286 + v275 + 9);
                v276 = *(_BYTE *)(v286 + v275 + 8);
LABEL_966:
                if ( v283 )
                {
                  v288 = *v283;
                  v282 = 0;
                  goto LABEL_969;
                }
                goto LABEL_995;
              }
            }
            if ( v402 )
              goto LABEL_966;
          }
        }
        v284 = (unsigned int)(v422 + 1);
        v422 = v284;
        if ( (unsigned int)v284 >= v449 )
          goto LABEL_966;
      }
    }
    v288 = *(_BYTE *)(v275 + 72);
    v277 = *(_BYTE **)(v275 + 32);
    v278 = *(_BYTE *)(v275 + 11);
    v276 = *(_BYTE *)(v275 + 4);
    if ( *(_BYTE *)(v275 + 2) )
      goto LABEL_995;
LABEL_969:
    LOBYTE(v270) = v288 - 8;
    if ( (v270 & 0x5D) != 0 )
    {
LABEL_995:
      IofCompleteRequest((PIRP)a2, 0);
      return v3;
    }
    v289 = *(_BYTE *)(v275 + 3);
    if ( v289 == 1 || !v277 || !v278 )
    {
LABEL_988:
      if ( byte_140173441 < 0 )
      {
        if ( !v282 )
        {
          v281 = 0;
          v280 = 0;
          v279 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v270,
          v275,
          &v470,
          a2,
          *(_DWORD *)(a2 + 48),
          v289,
          v276,
          v279,
          v280,
          v281,
          a2);
      }
      goto LABEL_995;
    }
    v290 = *v277 & 0x7F;
    if ( v290 == 114 || v290 == 115 )
    {
      v270 = (unsigned __int64)&v277[v278];
      LOBYTE(v275) = 0;
      if ( (unsigned __int64)(v277 + 8) > v270 )
        goto LABEL_986;
      v280 = v277[2];
      v279 = v277[1] & 0xF;
      v281 = v277[3];
    }
    else
    {
      v270 = (unsigned __int64)&v277[v278];
      LOBYTE(v275) = 0;
      if ( (unsigned __int64)(v277 + 8) > v270 )
        goto LABEL_986;
      v291 = v277 + 13;
      v279 = v277[2] & 0xF;
      v292 = v278;
      if ( (unsigned int)(unsigned __int8)v277[7] + 8 <= v278 )
        v292 = (unsigned __int8)v277[7] + 8;
      v270 = (unsigned __int64)&v277[v292];
      if ( (unsigned __int64)v291 <= v270 )
        v280 = v277[12];
      if ( (unsigned __int64)(v277 + 14) > v270 )
        v281 = 0;
      else
        v281 = *v291;
    }
    LOBYTE(v275) = 1;
LABEL_986:
    if ( (_BYTE)v275 )
      v282 = 1;
    goto LABEL_988;
  }
  v243 = v242 - 1;
  if ( !v243 )
  {
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v7 + 3) = 1;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v8 )
      goto LABEL_782;
    v469 = 0LL;
    IoGetActivityIdIrp(a2, &v469);
    v216 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v216 )
    {
      case 0xE:
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_782;
        v220 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140173441 < 0 )
        {
          v222 = *(_QWORD *)(v216 + 8);
          v223 = 0;
          v258 = 0LL;
          v259 = 0;
          v226 = 0;
          v227 = 0;
          v228 = 0;
          v260 = 0;
          if ( *(_BYTE *)(v222 + 2) != 40 )
          {
            v266 = *(_BYTE *)(v222 + 72);
            v258 = *(_BYTE **)(v222 + 32);
            v259 = *(_BYTE *)(v222 + 11);
            v223 = *(_BYTE *)(v222 + 4);
            if ( *(_BYTE *)(v222 + 2) )
              goto LABEL_781;
            goto LABEL_903;
          }
          v261 = 0LL;
          v401 = 0;
          if ( *(_DWORD *)(v222 + 20) )
            goto LABEL_781;
          v262 = 0LL;
          v421 = 0;
          v448 = *(_DWORD *)(v222 + 56);
          if ( !v448 )
            goto LABEL_781;
          while ( 1 )
          {
            v215 = *(unsigned int *)(v222 + 4 * v262 + 120);
            if ( (unsigned int)v215 >= 0x80 )
            {
              v263 = *(unsigned int *)(v222 + 16);
              if ( (unsigned int)v215 < (unsigned int)v263 )
              {
                v264 = (unsigned int)v215;
                v265 = *(_DWORD *)(v215 + v222) - 64;
                if ( v265 )
                {
                  v215 = (unsigned int)(v265 - 1);
                  if ( (_DWORD)v215 )
                  {
                    if ( (_DWORD)v215 == 1 )
                    {
                      v215 = v264 + 40;
                      if ( v264 + 40 <= v263 )
                      {
                        if ( *(_DWORD *)(v264 + v222 + 12) )
                          v261 = (char *)(v264 + v222 + 32);
                        v258 = *(_BYTE **)(v264 + v222 + 24);
LABEL_899:
                        v259 = *(_BYTE *)(v264 + v222 + 9);
                        v223 = *(_BYTE *)(v264 + v222 + 8);
LABEL_900:
                        if ( !v261 )
                          goto LABEL_781;
                        v266 = *v261;
                        v260 = 0;
LABEL_903:
                        LOBYTE(v215) = v266 - 8;
                        if ( (v215 & 0x5D) != 0 )
                          goto LABEL_781;
                        v236 = *(_BYTE *)(v222 + 3);
                        if ( v236 != 1 && v258 && v259 )
                        {
                          v267 = *v258 & 0x7F;
                          if ( v267 == 114 || v267 == 115 )
                          {
                            v215 = (unsigned __int64)&v258[v259];
                            LOBYTE(v222) = 0;
                            if ( (unsigned __int64)(v258 + 8) <= v215 )
                            {
                              v227 = v258[2];
                              v226 = v258[1] & 0xF;
                              v228 = v258[3];
                              goto LABEL_919;
                            }
                          }
                          else
                          {
                            v215 = (unsigned __int64)&v258[v259];
                            LOBYTE(v222) = 0;
                            if ( (unsigned __int64)(v258 + 8) <= v215 )
                            {
                              v268 = v258 + 13;
                              v226 = v258[2] & 0xF;
                              v269 = v259;
                              if ( (unsigned int)(unsigned __int8)v258[7] + 8 <= v259 )
                                v269 = (unsigned __int8)v258[7] + 8;
                              v215 = (unsigned __int64)&v258[v269];
                              if ( (unsigned __int64)v268 <= v215 )
                                v227 = v258[12];
                              if ( (unsigned __int64)(v258 + 14) > v215 )
                                v228 = 0;
                              else
                                v228 = *v268;
LABEL_919:
                              LOBYTE(v222) = 1;
                            }
                          }
                          if ( (_BYTE)v222 )
                            v260 = 1;
                        }
                        if ( byte_140173441 >= 0 )
                          goto LABEL_781;
                        if ( !v260 )
                        {
                          v228 = 0;
                          v227 = 0;
                          v226 = 0;
                        }
                        v240 = (const GUID *)&v469;
                        goto LABEL_780;
                      }
                    }
                  }
                  else
                  {
                    v215 = v264 + 56;
                    if ( v264 + 56 <= v263 )
                    {
                      v401 = 1;
                      if ( *(_BYTE *)(v264 + v222 + 10) )
                        v261 = (char *)(v264 + v222 + 24);
                      v223 = *(_BYTE *)(v264 + v222 + 8);
                      v258 = *(_BYTE **)(v264 + v222 + 16);
                      v259 = *(_BYTE *)(v264 + v222 + 9);
                    }
                  }
                }
                else
                {
                  v215 = v264 + 40;
                  if ( v264 + 40 <= v263 )
                  {
                    if ( *(_BYTE *)(v264 + v222 + 10) )
                      v261 = (char *)(v264 + v222 + 24);
                    v258 = *(_BYTE **)(v264 + v222 + 16);
                    goto LABEL_899;
                  }
                }
                if ( v401 )
                  goto LABEL_900;
              }
            }
            v262 = (unsigned int)(v421 + 1);
            v421 = v262;
            if ( (unsigned int)v262 >= v448 )
              goto LABEL_900;
          }
        }
        goto LABEL_782;
      case 0x1B:
        if ( *(_BYTE *)(v216 + 1) == 7 && !*(_DWORD *)(v216 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v257 = *(unsigned int **)(a2 + 56);
            if ( v257 )
              v218 = *v257;
            else
              v218 = 0LL;
            v219 = (const GUID *)&v469;
            goto LABEL_1419;
          }
          goto LABEL_782;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_782;
        v220 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_782;
    }
    v221 = (const GUID *)&v469;
    goto LABEL_1423;
  }
  if ( v243 != 8 )
    goto LABEL_860;
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v7 + 3) = 1;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v8 )
    goto LABEL_782;
  v468 = 0LL;
  IoGetActivityIdIrp(a2, &v468);
  v216 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v216 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_782;
    v220 = &EventNonReadWriteRequestComplete;
LABEL_806:
    v221 = (const GUID *)&v468;
    goto LABEL_1423;
  }
  if ( *(_BYTE *)v216 == 15 )
  {
    if ( byte_140173441 < 0 )
    {
      v222 = *(_QWORD *)(v216 + 8);
      v223 = 0;
      v245 = 0LL;
      v246 = 0;
      v226 = 0;
      v227 = 0;
      v228 = 0;
      v247 = 0;
      if ( *(_BYTE *)(v222 + 2) != 40 )
      {
        v253 = *(_BYTE *)(v222 + 72);
        v245 = *(_BYTE **)(v222 + 32);
        v246 = *(_BYTE *)(v222 + 11);
        v223 = *(_BYTE *)(v222 + 4);
        if ( *(_BYTE *)(v222 + 2) )
          goto LABEL_781;
        goto LABEL_835;
      }
      v248 = 0LL;
      v400 = 0;
      if ( *(_DWORD *)(v222 + 20) )
        goto LABEL_781;
      v249 = 0LL;
      v420 = 0;
      v447 = *(_DWORD *)(v222 + 56);
      if ( !v447 )
        goto LABEL_781;
      while ( 1 )
      {
        v215 = *(unsigned int *)(v222 + 4 * v249 + 120);
        if ( (unsigned int)v215 >= 0x80 )
        {
          v250 = *(unsigned int *)(v222 + 16);
          if ( (unsigned int)v215 < (unsigned int)v250 )
          {
            v251 = (unsigned int)v215;
            v252 = *(_DWORD *)(v215 + v222) - 64;
            if ( v252 )
            {
              v215 = (unsigned int)(v252 - 1);
              if ( (_DWORD)v215 )
              {
                if ( (_DWORD)v215 == 1 )
                {
                  v215 = v251 + 40;
                  if ( v251 + 40 <= v250 )
                  {
                    if ( *(_DWORD *)(v251 + v222 + 12) )
                      v248 = (char *)(v251 + v222 + 32);
                    v245 = *(_BYTE **)(v251 + v222 + 24);
LABEL_831:
                    v246 = *(_BYTE *)(v251 + v222 + 9);
                    v223 = *(_BYTE *)(v251 + v222 + 8);
LABEL_832:
                    if ( !v248 )
                      goto LABEL_781;
                    v253 = *v248;
                    v247 = 0;
LABEL_835:
                    LOBYTE(v215) = v253 - 8;
                    if ( (v215 & 0x5D) != 0 )
                      goto LABEL_781;
                    v236 = *(_BYTE *)(v222 + 3);
                    if ( v236 != 1 && v245 && v246 )
                    {
                      v254 = *v245 & 0x7F;
                      if ( v254 == 114 || v254 == 115 )
                      {
                        v215 = (unsigned __int64)&v245[v246];
                        LOBYTE(v222) = 0;
                        if ( (unsigned __int64)(v245 + 8) <= v215 )
                        {
                          v227 = v245[2];
                          v226 = v245[1] & 0xF;
                          v228 = v245[3];
                          goto LABEL_851;
                        }
                      }
                      else
                      {
                        v215 = (unsigned __int64)&v245[v246];
                        LOBYTE(v222) = 0;
                        if ( (unsigned __int64)(v245 + 8) <= v215 )
                        {
                          v255 = v245 + 13;
                          v226 = v245[2] & 0xF;
                          v256 = v246;
                          if ( (unsigned int)(unsigned __int8)v245[7] + 8 <= v246 )
                            v256 = (unsigned __int8)v245[7] + 8;
                          v215 = (unsigned __int64)&v245[v256];
                          if ( (unsigned __int64)v255 <= v215 )
                            v227 = v245[12];
                          if ( (unsigned __int64)(v245 + 14) > v215 )
                            v228 = 0;
                          else
                            v228 = *v255;
LABEL_851:
                          LOBYTE(v222) = 1;
                        }
                      }
                      if ( (_BYTE)v222 )
                        v247 = 1;
                    }
                    if ( byte_140173441 >= 0 )
                      goto LABEL_781;
                    if ( !v247 )
                    {
                      v228 = 0;
                      v227 = 0;
                      v226 = 0;
                    }
                    v240 = (const GUID *)&v468;
LABEL_780:
                    McTemplateK0pduuuuup_EtwWriteTransfer(
                      v215,
                      v222,
                      v240,
                      a2,
                      *(_DWORD *)(a2 + 48),
                      v236,
                      v223,
                      v226,
                      v227,
                      v228,
                      a2);
                    goto LABEL_781;
                  }
                }
              }
              else
              {
                v215 = v251 + 56;
                if ( v251 + 56 <= v250 )
                {
                  v400 = 1;
                  if ( *(_BYTE *)(v251 + v222 + 10) )
                    v248 = (char *)(v251 + v222 + 24);
                  v223 = *(_BYTE *)(v251 + v222 + 8);
                  v245 = *(_BYTE **)(v251 + v222 + 16);
                  v246 = *(_BYTE *)(v251 + v222 + 9);
                }
              }
            }
            else
            {
              v215 = v251 + 40;
              if ( v251 + 40 <= v250 )
              {
                if ( *(_BYTE *)(v251 + v222 + 10) )
                  v248 = (char *)(v251 + v222 + 24);
                v245 = *(_BYTE **)(v251 + v222 + 16);
                goto LABEL_831;
              }
            }
            if ( v400 )
              goto LABEL_832;
          }
        }
        v249 = (unsigned int)(v420 + 1);
        v420 = v249;
        if ( (unsigned int)v249 >= v447 )
          goto LABEL_832;
      }
    }
    goto LABEL_782;
  }
  if ( *(_BYTE *)v216 != 27 )
    goto LABEL_782;
  if ( *(_BYTE *)(v216 + 1) != 7 || *(_DWORD *)(v216 + 8) )
  {
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_782;
    v220 = &EventPnpRequestComplete;
    goto LABEL_806;
  }
  if ( (byte_140173442 & 0x40) != 0 )
  {
    v244 = *(unsigned int **)(a2 + 56);
    if ( v244 )
      v218 = *v244;
    else
      v218 = 0LL;
    v219 = (const GUID *)&v468;
    goto LABEL_1419;
  }
LABEL_782:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_783:
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
  return v3;
}
