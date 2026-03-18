/*
 * XREFs of Etw_ReportControllerHealthWithPortInfo @ 0x14004F608
 * Callers:
 *     Controller_CheckHealth @ 0x14000D2D0 (Controller_CheckHealth.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 *     RootHub_DetectPortInInactiveState @ 0x14002D110 (RootHub_DetectPortInInactiveState.c)
 *     RootHub_DetectPortInComplianceMode @ 0x14002D224 (RootHub_DetectPortInComplianceMode.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140001008 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x140001040 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14000106C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

char __fastcall Etw_ReportControllerHealthWithPortInfo(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  _DWORD *v4; // rax
  int v6; // r12d
  int v7; // r13d
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 v14; // di
  unsigned __int8 v15; // si
  __int64 v16; // rcx
  int v17; // r10d
  int v18; // r11d
  __int64 v19; // r9
  __int64 v20; // r8
  char v22; // [rsp+38h] [rbp-D0h] BYREF
  char v23; // [rsp+39h] [rbp-CFh] BYREF
  char v24; // [rsp+3Ah] [rbp-CEh] BYREF
  char v25; // [rsp+3Bh] [rbp-CDh] BYREF
  char v26; // [rsp+3Ch] [rbp-CCh] BYREF
  char v27; // [rsp+3Dh] [rbp-CBh] BYREF
  char v28; // [rsp+3Eh] [rbp-CAh] BYREF
  unsigned __int8 v29; // [rsp+3Fh] [rbp-C9h]
  int v30; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+44h] [rbp-C4h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v34; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v35; // [rsp+54h] [rbp-B4h] BYREF
  int v36; // [rsp+58h] [rbp-B0h] BYREF
  int v37; // [rsp+5Ch] [rbp-ACh] BYREF
  int v38; // [rsp+60h] [rbp-A8h] BYREF
  int v39; // [rsp+64h] [rbp-A4h] BYREF
  int v40; // [rsp+68h] [rbp-A0h] BYREF
  int v41; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v42; // [rsp+70h] [rbp-98h] BYREF
  int v43; // [rsp+74h] [rbp-94h] BYREF
  int v44; // [rsp+78h] [rbp-90h] BYREF
  int v45; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v46; // [rsp+80h] [rbp-88h] BYREF
  int v47; // [rsp+84h] [rbp-84h] BYREF
  int v48; // [rsp+88h] [rbp-80h] BYREF
  int v49; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v50; // [rsp+90h] [rbp-78h] BYREF
  int v51; // [rsp+94h] [rbp-74h] BYREF
  int v52; // [rsp+98h] [rbp-70h] BYREF
  int v53; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v54; // [rsp+A0h] [rbp-68h] BYREF
  int v55; // [rsp+A4h] [rbp-64h] BYREF
  int v56; // [rsp+A8h] [rbp-60h] BYREF
  int v57; // [rsp+ACh] [rbp-5Ch] BYREF
  int v58; // [rsp+B0h] [rbp-58h] BYREF
  int v59; // [rsp+B4h] [rbp-54h] BYREF
  int v60; // [rsp+B8h] [rbp-50h] BYREF
  int v61; // [rsp+BCh] [rbp-4Ch] BYREF
  int v62; // [rsp+C0h] [rbp-48h] BYREF
  int v63; // [rsp+C4h] [rbp-44h] BYREF
  int v64; // [rsp+C8h] [rbp-40h] BYREF
  int v65; // [rsp+CCh] [rbp-3Ch] BYREF
  int v66; // [rsp+D0h] [rbp-38h] BYREF
  int v67; // [rsp+D4h] [rbp-34h] BYREF
  int v68; // [rsp+D8h] [rbp-30h] BYREF
  int v69; // [rsp+DCh] [rbp-2Ch] BYREF
  int v70; // [rsp+E0h] [rbp-28h] BYREF
  int v71; // [rsp+E4h] [rbp-24h] BYREF
  int v72; // [rsp+E8h] [rbp-20h] BYREF
  int v73; // [rsp+ECh] [rbp-1Ch] BYREF
  int v74; // [rsp+F0h] [rbp-18h] BYREF
  int v75; // [rsp+F4h] [rbp-14h] BYREF
  int v76; // [rsp+F8h] [rbp-10h] BYREF
  int v77; // [rsp+FCh] [rbp-Ch] BYREF
  int v78; // [rsp+100h] [rbp-8h] BYREF
  int v79; // [rsp+104h] [rbp-4h] BYREF
  __int64 v80; // [rsp+108h] [rbp+0h] BYREF
  __int64 v81; // [rsp+110h] [rbp+8h] BYREF
  __int64 v82; // [rsp+118h] [rbp+10h] BYREF
  __int64 v83; // [rsp+120h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v85; // [rsp+148h] [rbp+40h]
  __int64 v86; // [rsp+150h] [rbp+48h]
  int *v87; // [rsp+158h] [rbp+50h]
  __int64 v88; // [rsp+160h] [rbp+58h]
  char *v89; // [rsp+168h] [rbp+60h]
  __int64 v90; // [rsp+170h] [rbp+68h]
  char *v91; // [rsp+178h] [rbp+70h]
  __int64 v92; // [rsp+180h] [rbp+78h]
  int *v93; // [rsp+188h] [rbp+80h]
  __int64 v94; // [rsp+190h] [rbp+88h]
  __int16 *v95; // [rsp+198h] [rbp+90h]
  __int64 v96; // [rsp+1A0h] [rbp+98h]
  __int16 *v97; // [rsp+1A8h] [rbp+A0h]
  __int64 v98; // [rsp+1B0h] [rbp+A8h]
  int *v99; // [rsp+1B8h] [rbp+B0h]
  __int64 v100; // [rsp+1C0h] [rbp+B8h]
  int *v101; // [rsp+1C8h] [rbp+C0h]
  __int64 v102; // [rsp+1D0h] [rbp+C8h]
  char *v103; // [rsp+1D8h] [rbp+D0h]
  __int64 v104; // [rsp+1E0h] [rbp+D8h]
  char v105[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  char v106[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v107[16]; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v108; // [rsp+218h] [rbp+110h]
  __int64 v109; // [rsp+220h] [rbp+118h]
  int *v110; // [rsp+228h] [rbp+120h]
  __int64 v111; // [rsp+230h] [rbp+128h]
  int *v112; // [rsp+238h] [rbp+130h]
  __int64 v113; // [rsp+240h] [rbp+138h]
  int *v114; // [rsp+248h] [rbp+140h]
  __int64 v115; // [rsp+250h] [rbp+148h]
  char *v116; // [rsp+258h] [rbp+150h]
  __int64 v117; // [rsp+260h] [rbp+158h]
  char *v118; // [rsp+268h] [rbp+160h]
  __int64 v119; // [rsp+270h] [rbp+168h]
  int *v120; // [rsp+278h] [rbp+170h]
  __int64 v121; // [rsp+280h] [rbp+178h]
  int *v122; // [rsp+288h] [rbp+180h]
  __int64 v123; // [rsp+290h] [rbp+188h]
  int *v124; // [rsp+298h] [rbp+190h]
  __int64 v125; // [rsp+2A0h] [rbp+198h]
  char *v126; // [rsp+2A8h] [rbp+1A0h]
  __int64 v127; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v128; // [rsp+2B8h] [rbp+1B0h]
  __int64 v129; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v130; // [rsp+2C8h] [rbp+1C0h]
  __int64 v131; // [rsp+2D0h] [rbp+1C8h]
  int *v132; // [rsp+2D8h] [rbp+1D0h]
  __int64 v133; // [rsp+2E0h] [rbp+1D8h]
  int *v134; // [rsp+2E8h] [rbp+1E0h]
  __int64 v135; // [rsp+2F0h] [rbp+1E8h]
  int *v136; // [rsp+2F8h] [rbp+1F0h]
  __int64 v137; // [rsp+300h] [rbp+1F8h]
  int *v138; // [rsp+308h] [rbp+200h]
  __int64 v139; // [rsp+310h] [rbp+208h]
  int *v140; // [rsp+318h] [rbp+210h]
  __int64 v141; // [rsp+320h] [rbp+218h]
  int *v142; // [rsp+328h] [rbp+220h]
  __int64 v143; // [rsp+330h] [rbp+228h]
  int *v144; // [rsp+338h] [rbp+230h]
  __int64 v145; // [rsp+340h] [rbp+238h]
  int *v146; // [rsp+348h] [rbp+240h]
  __int64 v147; // [rsp+350h] [rbp+248h]
  int *v148; // [rsp+358h] [rbp+250h]
  __int64 v149; // [rsp+360h] [rbp+258h]
  char *v150; // [rsp+368h] [rbp+260h]
  __int64 v151; // [rsp+370h] [rbp+268h]
  int *v152; // [rsp+378h] [rbp+270h]
  __int64 v153; // [rsp+380h] [rbp+278h]
  int *v154; // [rsp+388h] [rbp+280h]
  __int64 v155; // [rsp+390h] [rbp+288h]
  int *v156; // [rsp+398h] [rbp+290h]
  __int64 v157; // [rsp+3A0h] [rbp+298h]
  int *v158; // [rsp+3A8h] [rbp+2A0h]
  __int64 v159; // [rsp+3B0h] [rbp+2A8h]
  int *v160; // [rsp+3B8h] [rbp+2B0h]
  __int64 v161; // [rsp+3C0h] [rbp+2B8h]
  int *v162; // [rsp+3C8h] [rbp+2C0h]
  __int64 v163; // [rsp+3D0h] [rbp+2C8h]
  int *v164; // [rsp+3D8h] [rbp+2D0h]
  __int64 v165; // [rsp+3E0h] [rbp+2D8h]
  int *v166; // [rsp+3E8h] [rbp+2E0h]
  __int64 v167; // [rsp+3F0h] [rbp+2E8h]
  int *v168; // [rsp+3F8h] [rbp+2F0h]
  __int64 v169; // [rsp+400h] [rbp+2F8h]
  int *v170; // [rsp+408h] [rbp+300h]
  __int64 v171; // [rsp+410h] [rbp+308h]
  int *v172; // [rsp+418h] [rbp+310h]
  __int64 v173; // [rsp+420h] [rbp+318h]
  int *v174; // [rsp+428h] [rbp+320h]
  __int64 v175; // [rsp+430h] [rbp+328h]
  int *v176; // [rsp+438h] [rbp+330h]
  __int64 v177; // [rsp+440h] [rbp+338h]
  int *v178; // [rsp+448h] [rbp+340h]
  __int64 v179; // [rsp+450h] [rbp+348h]
  int *v180; // [rsp+458h] [rbp+350h]
  __int64 v181; // [rsp+460h] [rbp+358h]
  int *v182; // [rsp+468h] [rbp+360h]
  __int64 v183; // [rsp+470h] [rbp+368h]
  int *v184; // [rsp+478h] [rbp+370h]
  __int64 v185; // [rsp+480h] [rbp+378h]
  int *v186; // [rsp+488h] [rbp+380h]
  __int64 v187; // [rsp+490h] [rbp+388h]
  int *v188; // [rsp+498h] [rbp+390h]
  __int64 v189; // [rsp+4A0h] [rbp+398h]
  int *v190; // [rsp+4A8h] [rbp+3A0h]
  __int64 v191; // [rsp+4B0h] [rbp+3A8h]
  int *v192; // [rsp+4B8h] [rbp+3B0h]
  __int64 v193; // [rsp+4C0h] [rbp+3B8h]
  int *v194; // [rsp+4C8h] [rbp+3C0h]
  __int64 v195; // [rsp+4D0h] [rbp+3C8h]
  int *v196; // [rsp+4D8h] [rbp+3D0h]
  __int64 v197; // [rsp+4E0h] [rbp+3D8h]
  int *v198; // [rsp+4E8h] [rbp+3E0h]
  __int64 v199; // [rsp+4F0h] [rbp+3E8h]
  int *v200; // [rsp+4F8h] [rbp+3F0h]
  __int64 v201; // [rsp+500h] [rbp+3F8h]
  int *v202; // [rsp+508h] [rbp+400h]
  __int64 v203; // [rsp+510h] [rbp+408h]
  int *v204; // [rsp+518h] [rbp+410h]
  __int64 v205; // [rsp+520h] [rbp+418h]
  int *v206; // [rsp+528h] [rbp+420h]
  __int64 v207; // [rsp+530h] [rbp+428h]
  int *v208; // [rsp+538h] [rbp+430h]
  __int64 v209; // [rsp+540h] [rbp+438h]

  v4 = *(_DWORD **)(a1 + 88);
  v29 = a4;
  if ( v4 )
  {
    v6 = v4[21];
    v7 = v4[22];
    v30 = v4[25];
    v31 = v4[26];
    v32 = v4[27];
    v33 = v4[29];
  }
  else
  {
    v6 = -1;
    v30 = -1;
    v7 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
  }
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 20);
  else
    v9 = -1;
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 16);
  else
    v11 = -1;
  if ( a4 )
  {
    v10 = *(_QWORD *)(a1 + 152);
    v12 = 120LL * (unsigned int)(a2 - 1);
    v13 = *(_QWORD *)(v10 + 48);
    v14 = *(_BYTE *)(v12 + v13 + 96);
    v15 = *(_BYTE *)(v12 + v13 + 104);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  if ( (unsigned int)dword_14006B470 > 5 )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)&dword_14006B470, 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v80 = 33556480LL;
      v85 = &v80;
      v38 = *(_DWORD *)(a1 + 644);
      v87 = &v38;
      v22 = *(_BYTE *)(a1 + 720);
      v89 = &v22;
      v23 = *(_BYTE *)(a1 + 721);
      v91 = &v23;
      v39 = *(_DWORD *)(a1 + 660);
      v93 = &v39;
      v34 = *(_WORD *)(a1 + 664);
      v95 = &v34;
      v35 = *(_WORD *)(a1 + 668);
      v97 = &v35;
      LOWORD(v36) = *(_WORD *)(a1 + 648);
      v99 = &v36;
      LOWORD(v37) = *(_WORD *)(a1 + 652);
      v101 = &v37;
      v24 = *(_BYTE *)(a1 + 656);
      v103 = &v24;
      v86 = 8LL;
      v88 = 4LL;
      v90 = 1LL;
      v92 = 1LL;
      v94 = 4LL;
      v96 = 2LL;
      v98 = 2LL;
      v100 = 2LL;
      v102 = 2LL;
      v104 = 1LL;
      tlgCreate1Sz_char((__int64)v105, (_BYTE *)(a1 + 704));
      tlgCreate1Sz_char((__int64)v106, (_BYTE *)(a1 + 709));
      tlgCreate1Sz_char((__int64)v107, (_BYTE *)(a1 + 714));
      v16 = *(_QWORD *)(a1 + 728);
      v108 = &v81;
      v40 = *(_DWORD *)(a1 + 864);
      v110 = &v40;
      v41 = *(_DWORD *)(a1 + 792);
      v112 = &v41;
      v42 = *(_DWORD *)(a1 + 176);
      v114 = &v42;
      v25 = *(_BYTE *)(a1 + 1000);
      v81 = v16;
      v109 = 8LL;
      v111 = 4LL;
      v113 = 4LL;
      v115 = 4LL;
      v116 = &v25;
      v26 = *(_BYTE *)(a1 + 1001);
      v118 = &v26;
      v43 = *(_DWORD *)(a1 + 1008);
      v120 = &v43;
      v44 = *(_DWORD *)(a1 + 1012);
      v122 = &v44;
      v45 = *(_DWORD *)(a1 + 1036);
      v124 = &v45;
      v27 = *(_BYTE *)(a1 + 1064);
      v126 = &v27;
      v82 = *(_QWORD *)(a1 + 736);
      v128 = &v82;
      v83 = *(_QWORD *)(a1 + 744);
      v130 = &v83;
      v132 = &v46;
      v134 = &v47;
      v136 = &v30;
      v138 = &v31;
      v140 = &v32;
      v142 = &v48;
      v144 = &v49;
      v146 = &v50;
      v148 = &v33;
      v28 = *(_BYTE *)(a1 + 872);
      v46 = v6;
      v117 = 1LL;
      v119 = 1LL;
      v121 = 4LL;
      v123 = 4LL;
      v125 = 4LL;
      v127 = 1LL;
      v129 = 8LL;
      v131 = 8LL;
      v133 = 4LL;
      v47 = v7;
      v135 = 4LL;
      v137 = 4LL;
      v139 = 4LL;
      v141 = 4LL;
      v48 = v9;
      v143 = 4LL;
      v49 = v17;
      v145 = 4LL;
      v50 = v11;
      v147 = 4LL;
      v149 = 4LL;
      v150 = &v28;
      v51 = *(_DWORD *)(a1 + 876);
      v152 = &v51;
      v52 = *(_DWORD *)(a1 + 880);
      v154 = &v52;
      v53 = *(_DWORD *)(a1 + 884);
      v156 = &v53;
      v54 = *(_DWORD *)(a1 + 888);
      v158 = &v54;
      v55 = *(_DWORD *)(a1 + 892);
      v160 = &v55;
      v56 = *(_DWORD *)(a1 + 896);
      v162 = &v56;
      v57 = *(_DWORD *)(a1 + 900);
      v164 = &v57;
      v58 = *(_DWORD *)(a1 + 904);
      v166 = &v58;
      v59 = *(_DWORD *)(a1 + 908);
      v168 = &v59;
      v60 = *(_DWORD *)(a1 + 912);
      v170 = &v60;
      v61 = *(_DWORD *)(a1 + 916);
      v172 = &v61;
      v62 = *(_DWORD *)(a1 + 920);
      v174 = &v62;
      v63 = *(_DWORD *)(a1 + 924);
      v176 = &v63;
      v64 = *(_DWORD *)(a1 + 928);
      v178 = &v64;
      v65 = *(_DWORD *)(a1 + 932);
      v180 = &v65;
      v66 = *(_DWORD *)(a1 + 936);
      v182 = &v66;
      v151 = 1LL;
      v153 = 4LL;
      v155 = 4LL;
      v157 = 4LL;
      v159 = 4LL;
      v161 = 4LL;
      v163 = 4LL;
      v165 = 4LL;
      v167 = 4LL;
      v169 = 4LL;
      v171 = 4LL;
      v173 = 4LL;
      v175 = 4LL;
      v177 = 4LL;
      v179 = 4LL;
      v181 = 4LL;
      v67 = *(_DWORD *)(a1 + 940);
      v183 = 4LL;
      v184 = &v67;
      v68 = *(_DWORD *)(a1 + 944);
      v186 = &v68;
      v69 = *(_DWORD *)(a1 + 948);
      v188 = &v69;
      v70 = *(_DWORD *)(a1 + 952);
      v190 = &v70;
      v71 = *(_DWORD *)(a1 + 956);
      v192 = &v71;
      v72 = *(_DWORD *)(a1 + 960);
      v194 = &v72;
      v73 = *(_DWORD *)(a1 + 964);
      v196 = &v73;
      v74 = *(_DWORD *)(a1 + 1080);
      v198 = &v74;
      v200 = &v75;
      v202 = &v76;
      v77 = v29;
      v204 = &v77;
      v78 = v14;
      v206 = &v78;
      v79 = v15;
      v208 = &v79;
      v185 = 4LL;
      v187 = 4LL;
      v189 = 4LL;
      v191 = 4LL;
      v193 = 4LL;
      v195 = 4LL;
      v197 = 4LL;
      v199 = 4LL;
      v75 = v18;
      v201 = 4LL;
      v76 = v19;
      v203 = 4LL;
      v205 = 4LL;
      v207 = 4LL;
      v209 = 4LL;
      LOBYTE(v10) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_14006B470,
                      (unsigned __int8 *)dword_140063DF5,
                      v20,
                      v19,
                      0x42u,
                      &v84);
    }
  }
  *(_QWORD *)(a1 + 876) = 0LL;
  *(_QWORD *)(a1 + 884) = 0LL;
  *(_QWORD *)(a1 + 892) = 0LL;
  *(_QWORD *)(a1 + 900) = 0LL;
  *(_QWORD *)(a1 + 908) = 0LL;
  *(_DWORD *)(a1 + 916) = 0;
  return v10;
}
