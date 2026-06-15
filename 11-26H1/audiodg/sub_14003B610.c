/*
 * XREFs of sub_14003B610 @ 0x14003B610
 * Callers:
 *     sub_14003B5C0 @ 0x14003B5C0 (sub_14003B5C0.c)
 * Callees:
 *     sub_1400010D4 @ 0x1400010D4 (sub_1400010D4.c)
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140007258 @ 0x140007258 (sub_140007258.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_140039264 @ 0x140039264 (sub_140039264.c)
 *     sub_14003E770 @ 0x14003E770 (sub_14003E770.c)
 *     sub_14003FF9C @ 0x14003FF9C (sub_14003FF9C.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_140046D40 @ 0x140046D40 (sub_140046D40.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcmp @ 0x14004A694 (memcmp.c)
 *     sub_14005A55C @ 0x14005A55C (sub_14005A55C.c)
 *     sub_14005ABA8 @ 0x14005ABA8 (sub_14005ABA8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=63
__int64 __fastcall sub_14003B610(void *a1, void *a2)
{
  HRESULT v2; // eax
  int v3; // ebx
  bool v4; // zf
  void *v6; // rdi
  void *v7; // rsi
  void *v8; // r14
  void *v9; // r15
  void *v10; // r12
  void *v11; // r13
  void *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  _OWORD *v18; // rbx
  __int64 v19; // rbx
  void *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // edi
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rbx
  _DWORD *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // rax
  char v38; // [rsp+200h] [rbp-80h] BYREF
  char v39; // [rsp+201h] [rbp-7Fh] BYREF
  char v40; // [rsp+202h] [rbp-7Eh] BYREF
  char v41; // [rsp+203h] [rbp-7Dh] BYREF
  char v42; // [rsp+204h] [rbp-7Ch] BYREF
  char v43; // [rsp+205h] [rbp-7Bh] BYREF
  char v44; // [rsp+206h] [rbp-7Ah] BYREF
  char v45; // [rsp+207h] [rbp-79h] BYREF
  char v46; // [rsp+208h] [rbp-78h] BYREF
  char v47; // [rsp+209h] [rbp-77h] BYREF
  _BYTE v48[6]; // [rsp+20Ah] [rbp-76h] BYREF
  void *v49; // [rsp+210h] [rbp-70h] BYREF
  __int64 v50; // [rsp+218h] [rbp-68h] BYREF
  LPVOID v51; // [rsp+220h] [rbp-60h] BYREF
  _WORD v52[2]; // [rsp+228h] [rbp-58h] BYREF
  _WORD v53[2]; // [rsp+22Ch] [rbp-54h] BYREF
  __int16 v54; // [rsp+230h] [rbp-50h] BYREF
  __int64 v55; // [rsp+238h] [rbp-48h] BYREF
  __int64 v56; // [rsp+240h] [rbp-40h] BYREF
  LPVOID ppv; // [rsp+248h] [rbp-38h] BYREF
  void *v58; // [rsp+250h] [rbp-30h] BYREF
  __int64 v59; // [rsp+258h] [rbp-28h] BYREF
  void *v60; // [rsp+260h] [rbp-20h] BYREF
  void *v61; // [rsp+268h] [rbp-18h] BYREF
  void *v62; // [rsp+270h] [rbp-10h] BYREF
  void *v63; // [rsp+278h] [rbp-8h] BYREF
  void *v64; // [rsp+280h] [rbp+0h] BYREF
  void *v65; // [rsp+288h] [rbp+8h] BYREF
  void *v66; // [rsp+290h] [rbp+10h] BYREF
  void *v67; // [rsp+298h] [rbp+18h] BYREF
  void *v68; // [rsp+2A0h] [rbp+20h] BYREF
  void *v69; // [rsp+2A8h] [rbp+28h] BYREF
  void *v70; // [rsp+2B0h] [rbp+30h] BYREF
  void *v71; // [rsp+2B8h] [rbp+38h] BYREF
  void *v72; // [rsp+2C0h] [rbp+40h] BYREF
  void *v73; // [rsp+2C8h] [rbp+48h] BYREF
  void *v74; // [rsp+2D0h] [rbp+50h] BYREF
  void *v75; // [rsp+2D8h] [rbp+58h] BYREF
  void *v76; // [rsp+2E0h] [rbp+60h] BYREF
  void *v77; // [rsp+2E8h] [rbp+68h] BYREF
  void *v78; // [rsp+2F0h] [rbp+70h] BYREF
  void *v79; // [rsp+2F8h] [rbp+78h] BYREF
  void *v80; // [rsp+300h] [rbp+80h] BYREF
  void *v81; // [rsp+308h] [rbp+88h] BYREF
  void *v82; // [rsp+310h] [rbp+90h] BYREF
  void *v83; // [rsp+318h] [rbp+98h] BYREF
  void *v84; // [rsp+320h] [rbp+A0h] BYREF
  void *v85; // [rsp+328h] [rbp+A8h] BYREF
  void *v86; // [rsp+330h] [rbp+B0h] BYREF
  void *v87; // [rsp+338h] [rbp+B8h] BYREF
  void *Buf1; // [rsp+340h] [rbp+C0h] BYREF
  void *v89; // [rsp+348h] [rbp+C8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+350h] [rbp+D0h] BYREF
  __int64 v91; // [rsp+360h] [rbp+E0h]
  __int128 v92; // [rsp+370h] [rbp+F0h] BYREF
  __int128 v93; // [rsp+380h] [rbp+100h] BYREF
  __int64 v94; // [rsp+390h] [rbp+110h]
  PROPVARIANT v95[2]; // [rsp+398h] [rbp+118h] BYREF
  __int64 v96; // [rsp+3A8h] [rbp+128h]
  PROPVARIANT v97[2]; // [rsp+3B0h] [rbp+130h] BYREF
  __int64 v98; // [rsp+3C0h] [rbp+140h]
  __int128 v99; // [rsp+3C8h] [rbp+148h] BYREF
  __int64 v100; // [rsp+3D8h] [rbp+158h]
  __int128 v101; // [rsp+3E0h] [rbp+160h] BYREF
  __int64 v102; // [rsp+3F0h] [rbp+170h]
  LPCOLESTR v103[2]; // [rsp+3F8h] [rbp+178h] BYREF
  __int64 v104; // [rsp+408h] [rbp+188h]
  LPCOLESTR v105[2]; // [rsp+410h] [rbp+190h] BYREF
  __int64 v106; // [rsp+420h] [rbp+1A0h]
  LPCOLESTR v107[2]; // [rsp+428h] [rbp+1A8h] BYREF
  __int64 v108; // [rsp+438h] [rbp+1B8h]
  __int128 v109; // [rsp+440h] [rbp+1C0h] BYREF
  __int64 v110; // [rsp+450h] [rbp+1D0h]
  __int128 v111; // [rsp+458h] [rbp+1D8h] BYREF
  __int64 v112; // [rsp+468h] [rbp+1E8h]
  __int128 v113; // [rsp+470h] [rbp+1F0h] BYREF
  __int64 v114; // [rsp+480h] [rbp+200h]
  __int128 v115; // [rsp+488h] [rbp+208h] BYREF
  void *v116; // [rsp+498h] [rbp+218h] BYREF
  void *v117; // [rsp+4A0h] [rbp+220h] BYREF
  GUID *v118; // [rsp+4A8h] [rbp+228h] BYREF
  void *v119; // [rsp+4B0h] [rbp+230h] BYREF
  void *v120; // [rsp+4B8h] [rbp+238h] BYREF
  void *v121; // [rsp+4C0h] [rbp+240h] BYREF
  GUID *v122; // [rsp+4C8h] [rbp+248h] BYREF
  void *v123; // [rsp+4D0h] [rbp+250h] BYREF
  void *v124; // [rsp+4D8h] [rbp+258h] BYREF
  void *v125; // [rsp+4E0h] [rbp+260h] BYREF
  GUID *v126; // [rsp+4E8h] [rbp+268h] BYREF
  void *v127; // [rsp+4F0h] [rbp+270h] BYREF
  void *v128; // [rsp+4F8h] [rbp+278h] BYREF
  void *v129; // [rsp+500h] [rbp+280h] BYREF
  GUID *v130; // [rsp+508h] [rbp+288h] BYREF
  void *v131; // [rsp+510h] [rbp+290h] BYREF
  void *v132; // [rsp+518h] [rbp+298h] BYREF
  void *v133; // [rsp+520h] [rbp+2A0h] BYREF
  GUID *v134; // [rsp+528h] [rbp+2A8h] BYREF
  void *v135; // [rsp+530h] [rbp+2B0h] BYREF
  void *v136; // [rsp+538h] [rbp+2B8h] BYREF
  void *v137; // [rsp+540h] [rbp+2C0h] BYREF
  GUID *p_pclsid; // [rsp+548h] [rbp+2C8h] BYREF
  void *v139; // [rsp+550h] [rbp+2D0h] BYREF
  void *v140; // [rsp+558h] [rbp+2D8h] BYREF
  GUID *v141; // [rsp+560h] [rbp+2E0h] BYREF
  void *v142; // [rsp+568h] [rbp+2E8h] BYREF
  void *v143; // [rsp+570h] [rbp+2F0h] BYREF
  void *v144; // [rsp+578h] [rbp+2F8h] BYREF
  GUID *v145; // [rsp+580h] [rbp+300h] BYREF
  GUID *v146; // [rsp+588h] [rbp+308h] BYREF
  void *v147; // [rsp+590h] [rbp+310h] BYREF
  void *v148; // [rsp+598h] [rbp+318h] BYREF
  void *v149; // [rsp+5A0h] [rbp+320h] BYREF
  GUID *v150; // [rsp+5A8h] [rbp+328h] BYREF
  void *v151; // [rsp+5B0h] [rbp+330h] BYREF
  void *v152; // [rsp+5B8h] [rbp+338h] BYREF
  void *v153; // [rsp+5C0h] [rbp+340h] BYREF
  LPCOLESTR v154[2]; // [rsp+5C8h] [rbp+348h] BYREF
  __int64 v155; // [rsp+5D8h] [rbp+358h]
  LPCOLESTR v156[2]; // [rsp+5E0h] [rbp+360h] BYREF
  __int64 v157; // [rsp+5F0h] [rbp+370h]
  LPCOLESTR v158[2]; // [rsp+5F8h] [rbp+378h] BYREF
  __int64 v159; // [rsp+608h] [rbp+388h]
  LPCOLESTR v160[2]; // [rsp+610h] [rbp+390h] BYREF
  __int64 v161; // [rsp+620h] [rbp+3A0h]
  LPCOLESTR v162[2]; // [rsp+628h] [rbp+3A8h] BYREF
  __int64 v163; // [rsp+638h] [rbp+3B8h]
  LPCOLESTR v164[2]; // [rsp+640h] [rbp+3C0h] BYREF
  __int64 v165; // [rsp+650h] [rbp+3D0h]
  LPCOLESTR lpsz[2]; // [rsp+658h] [rbp+3D8h] BYREF
  __int64 v167; // [rsp+668h] [rbp+3E8h]
  GUID v168; // [rsp+670h] [rbp+3F0h] BYREF
  GUID v169; // [rsp+680h] [rbp+400h] BYREF
  GUID v170; // [rsp+690h] [rbp+410h] BYREF
  GUID v171; // [rsp+6A0h] [rbp+420h] BYREF
  GUID v172; // [rsp+6B0h] [rbp+430h] BYREF
  GUID v173; // [rsp+6C0h] [rbp+440h] BYREF
  GUID v174; // [rsp+6D0h] [rbp+450h] BYREF
  GUID v175; // [rsp+6E0h] [rbp+460h] BYREF
  GUID v176; // [rsp+6F0h] [rbp+470h] BYREF
  GUID pclsid; // [rsp+700h] [rbp+480h] BYREF
  _UNKNOWN *retaddr; // [rsp+758h] [rbp+4D8h]

  Buf1 = a2;
  v89 = a1;
  sub_14003E770(v48);
  ppv = 0LL;
  v2 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &ppv);
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_14000C2A8((int)retaddr, 376, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v2);
    sub_140003238((__int64 *)&ppv);
    v4 = v48[0] == 0;
LABEL_3:
    if ( !v4 )
      CoUninitialize();
    return (unsigned int)v3;
  }
  v56 = 0LL;
  v3 = sub_1400B6010(ppv);
  if ( v3 < 0 )
  {
    sub_14000C2A8((int)retaddr, 379, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v3);
    sub_140003238(&v56);
    sub_140003238((__int64 *)&ppv);
    v4 = v48[0] == 0;
    goto LABEL_3;
  }
  pclsid = 0LL;
  v6 = 0LL;
  v87 = 0LL;
  v7 = 0LL;
  v86 = 0LL;
  v8 = 0LL;
  v85 = 0LL;
  v47 = 0;
  v176 = 0LL;
  v9 = 0LL;
  v84 = 0LL;
  v10 = 0LL;
  v83 = 0LL;
  v11 = 0LL;
  v82 = 0LL;
  v46 = 0;
  v175 = 0LL;
  v12 = 0LL;
  v81 = 0LL;
  v80 = 0LL;
  v79 = 0LL;
  v45 = 0;
  v174 = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  v76 = 0LL;
  v44 = 0;
  v173 = 0LL;
  v75 = 0LL;
  v74 = 0LL;
  v73 = 0LL;
  v38 = 0;
  v172 = 0LL;
  v72 = 0LL;
  v71 = 0LL;
  v70 = 0LL;
  v43 = 0;
  v171 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  v42 = 0;
  v170 = 0LL;
  v66 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v41 = 0;
  v169 = 0LL;
  v63 = 0LL;
  v62 = 0LL;
  v61 = 0LL;
  v40 = 0;
  v168 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  v39 = 0;
  v93 = 0LL;
  v94 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  v54 = 0;
  v101 = 0LL;
  v102 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v53[0] = 0;
  v99 = 0LL;
  v100 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v52[0] = 0;
  v115 = 0LL;
  v55 = 0LL;
  if ( (int)sub_1400B6010(v56) >= 0 )
  {
    v92 = 0LL;
    v14 = v55;
    v51 = *(LPVOID *)(*(_QWORD *)v55 + 168LL);
    sub_140039264(&v92);
    if ( (int)sub_1400B6010(v14) >= 0 )
    {
      v15 = sub_140039264(&v115);
      v16 = (_QWORD)v92 ? *(_QWORD *)v92 : 0LL;
      v17 = MMDevAPI_26(v16, v15);
      if ( v17 < 0 )
        sub_140007934((int)retaddr, 459, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v17);
    }
    v49 = 0LL;
    v50 = 0LL;
    v18 = Buf1;
    if ( !memcmp(Buf1, &unk_1400CB2E8, 0x10uLL) )
    {
      v49 = 0LL;
      sub_1400B6010(v55);
      v19 = v50;
      v20 = v49;
      v50 = (__int64)v49;
      if ( v49 )
      {
        sub_1400B6010(v49);
        v20 = v49;
      }
      if ( v19 )
      {
        sub_1400B6010(v19);
        v20 = v49;
      }
    }
    else
    {
      v49 = 0LL;
      *(_OWORD *)pvar = *v18;
      sub_140046D40(pvar, &v49);
      v21 = v55;
      v51 = *(LPVOID *)(*(_QWORD *)v55 + 40LL);
      v22 = v50;
      v50 = 0LL;
      if ( v22 )
        sub_1400B6010(v22);
      sub_1400B6010(v21);
      v20 = v49;
    }
    if ( v20 && v50 )
    {
      *(_OWORD *)lpsz = 0LL;
      v167 = 0LL;
      if ( (int)sub_1400B6010(v20) >= 0 && LOWORD(lpsz[0]) == 31 )
        CLSIDFromString(lpsz[1], &pclsid);
      *(_OWORD *)v164 = 0LL;
      v165 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v164[0]) == 31 )
        CLSIDFromString(v164[1], &v176);
      *(_OWORD *)v162 = 0LL;
      v163 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v162[0]) == 31 )
        CLSIDFromString(v162[1], &v175);
      *(_OWORD *)v160 = 0LL;
      v161 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v160[0]) == 31 )
        CLSIDFromString(v160[1], &v174);
      *(_OWORD *)v158 = 0LL;
      v159 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v158[0]) == 31 )
        CLSIDFromString(v158[1], &v173);
      *(_OWORD *)v156 = 0LL;
      v157 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v156[0]) == 31 )
        CLSIDFromString(v156[1], &v172);
      *(_OWORD *)v154 = 0LL;
      v155 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v154[0]) == 31 )
        CLSIDFromString(v154[1], &v171);
      *(_OWORD *)v103 = 0LL;
      v104 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v103[0]) == 31 )
        CLSIDFromString(v103[1], &v170);
      *(_OWORD *)v105 = 0LL;
      v106 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v105[0]) == 31 )
        CLSIDFromString(v105[1], &v169);
      *(_OWORD *)v107 = 0LL;
      v108 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v107[0]) == 31 )
        CLSIDFromString(v107[1], &v168);
      *(_OWORD *)v95 = 0LL;
      v96 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v95[0]) == 4127 && LODWORD(v95[1]) )
        sub_14003FF9C(v95, &v93, &v54);
      *(_OWORD *)v97 = 0LL;
      v98 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(v97[0]) == 4127 && LODWORD(v97[1]) )
        sub_14003FF9C(v97, &v101, v53);
      *(_OWORD *)pvar = 0LL;
      v91 = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 && LOWORD(pvar[0]) == 4127 && LODWORD(pvar[1]) )
        sub_14003FF9C(pvar, &v99, v52);
      if ( memcmp(&pclsid, &xmmword_1400C5548, 0x10uLL)
        || memcmp(&v176, &xmmword_1400C5548, 0x10uLL)
        || memcmp(&v175, &xmmword_1400C5548, 0x10uLL)
        || memcmp(&v174, &xmmword_1400C5548, 0x10uLL)
        || memcmp(&v173, &xmmword_1400C5548, 0x10uLL)
        || memcmp(&v172, &xmmword_1400C5548, 0x10uLL)
        || memcmp(&v171, &xmmword_1400C5548, 0x10uLL)
        || memcmp(&v170, &xmmword_1400C5548, 0x10uLL)
        || memcmp(&v169, &xmmword_1400C5548, 0x10uLL)
        || memcmp(&v168, &xmmword_1400C5548, 0x10uLL)
        || (_QWORD)v93 != *((_QWORD *)&v93 + 1)
        || (_QWORD)v101 != *((_QWORD *)&v101 + 1)
        || (_QWORD)v99 != *((_QWORD *)&v99 + 1) )
      {
        v51 = 0LL;
        if ( CoCreateInstance(&stru_1400C8F50, 0LL, 1u, &stru_1400C8F60, &v51) >= 0 )
        {
          v23 = v50;
          sub_1400118C0(&v85, 0LL);
          sub_1400118C0(&v86, 0LL);
          sub_1400118C0(&v87, 0LL);
          v24 = (int)v89;
          sub_14005ABA8(
            (_DWORD)v89,
            1,
            (unsigned int)&pclsid,
            (_DWORD)v51,
            (__int64)&v87,
            (__int64)&v86,
            (__int64)&v85,
            (__int64)&v47,
            v23);
          v25 = v50;
          sub_1400118C0(&v82, 0LL);
          sub_1400118C0(&v83, 0LL);
          sub_1400118C0(&v84, 0LL);
          sub_14005ABA8(
            v24,
            2,
            (unsigned int)&v176,
            (_DWORD)v51,
            (__int64)&v84,
            (__int64)&v83,
            (__int64)&v82,
            (__int64)&v46,
            v25);
          v26 = v50;
          sub_1400118C0(&v79, 0LL);
          sub_1400118C0(&v80, 0LL);
          sub_1400118C0(&v81, 0LL);
          sub_14005ABA8(
            v24,
            3,
            (unsigned int)&v175,
            (_DWORD)v51,
            (__int64)&v81,
            (__int64)&v80,
            (__int64)&v79,
            (__int64)&v45,
            v26);
          v27 = v50;
          sub_1400118C0(&v76, 0LL);
          sub_1400118C0(&v77, 0LL);
          sub_1400118C0(&v78, 0LL);
          sub_14005ABA8(
            v24,
            1,
            (unsigned int)&v174,
            (_DWORD)v51,
            (__int64)&v78,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)&v44,
            v27);
          v28 = v50;
          sub_1400118C0(&v73, 0LL);
          sub_1400118C0(&v74, 0LL);
          sub_1400118C0(&v75, 0LL);
          sub_14005ABA8(
            v24,
            2,
            (unsigned int)&v173,
            (_DWORD)v51,
            (__int64)&v75,
            (__int64)&v74,
            (__int64)&v73,
            (__int64)&v38,
            v28);
          v29 = v50;
          sub_1400118C0(&v70, 0LL);
          sub_1400118C0(&v71, 0LL);
          sub_1400118C0(&v72, 0LL);
          sub_14005ABA8(
            v24,
            1,
            (unsigned int)&v172,
            (_DWORD)v51,
            (__int64)&v72,
            (__int64)&v71,
            (__int64)&v70,
            (__int64)&v43,
            v29);
          v30 = v50;
          sub_1400118C0(&v67, 0LL);
          sub_1400118C0(&v68, 0LL);
          sub_1400118C0(&v69, 0LL);
          sub_14005ABA8(
            v24,
            2,
            (unsigned int)&v171,
            (_DWORD)v51,
            (__int64)&v69,
            (__int64)&v68,
            (__int64)&v67,
            (__int64)&v42,
            v30);
          v31 = v50;
          sub_1400118C0(&v64, 0LL);
          sub_1400118C0(&v65, 0LL);
          sub_1400118C0(&v66, 0LL);
          sub_14005ABA8(
            v24,
            1,
            (unsigned int)&v170,
            (_DWORD)v51,
            (__int64)&v66,
            (__int64)&v65,
            (__int64)&v64,
            (__int64)&v41,
            v31);
          v32 = v50;
          sub_1400118C0(&v61, 0LL);
          sub_1400118C0(&v62, 0LL);
          sub_1400118C0(&v63, 0LL);
          sub_14005ABA8(
            v24,
            2,
            (unsigned int)&v169,
            (_DWORD)v51,
            (__int64)&v63,
            (__int64)&v62,
            (__int64)&v61,
            (__int64)&v40,
            v32);
          v33 = v50;
          sub_1400118C0(&v58, 0LL);
          sub_1400118C0((void **)&v59, 0LL);
          sub_1400118C0(&v60, 0LL);
          sub_14005ABA8(
            v24,
            3,
            (unsigned int)&v168,
            (_DWORD)v51,
            (__int64)&v60,
            (__int64)&v59,
            (__int64)&v58,
            (__int64)&v39,
            v33);
          sub_14005A55C(v24, 1, (unsigned int)&v93, (_DWORD)v51, (__int64)&v109, v50);
          sub_14005A55C(v24, 2, (unsigned int)&v101, (_DWORD)v51, (__int64)&v113, v50);
          sub_14005A55C(v24, 3, (unsigned int)&v99, (_DWORD)v51, (__int64)&v111, v50);
          v6 = v87;
          v7 = v86;
          v8 = v85;
          v9 = v84;
          v10 = v83;
          v11 = v82;
        }
        sub_140003238((__int64 *)&v51);
      }
      PropVariantClear(pvar);
      PropVariantClear(v97);
      PropVariantClear(v95);
      PropVariantClear((PROPVARIANT *)v107);
      PropVariantClear((PROPVARIANT *)v105);
      PropVariantClear((PROPVARIANT *)v103);
      PropVariantClear((PROPVARIANT *)v154);
      PropVariantClear((PROPVARIANT *)v156);
      PropVariantClear((PROPVARIANT *)v158);
      PropVariantClear((PROPVARIANT *)v160);
      PropVariantClear((PROPVARIANT *)v162);
      PropVariantClear((PROPVARIANT *)v164);
      PropVariantClear((PROPVARIANT *)lpsz);
    }
    sub_140003238(&v50);
    sub_140003238((__int64 *)&v49);
    sub_140007258((__int64)&v92);
    v12 = v81;
  }
  v34 = (_DWORD *)sub_140006470(v13);
  if ( *v34 > 4u && sub_14002813C((__int64)v34, 0x400000000000LL) )
  {
    v103[0] = (LPCOLESTR)v111;
    LODWORD(v103[1]) = (unsigned __int16)(WORD4(v111) - v111);
    v105[0] = v52;
    LODWORD(v105[1]) = 2;
    v107[0] = (LPCOLESTR)v113;
    LODWORD(v107[1]) = (unsigned __int16)(WORD4(v113) - v113);
    v95[0] = v53;
    LODWORD(v95[1]) = 2;
    v97[0] = (PROPVARIANT)v109;
    LODWORD(v97[1]) = (unsigned __int16)(WORD4(v109) - v109);
    pvar[0] = &v54;
    LODWORD(pvar[1]) = 2;
    v51 = v58;
    v50 = v59;
    v49 = v60;
    v141 = &v168;
    v142 = v61;
    v143 = v62;
    v144 = v63;
    v146 = &v169;
    v151 = v64;
    v147 = v65;
    v140 = v66;
    v145 = &v170;
    v153 = v67;
    v148 = v68;
    v149 = v69;
    v150 = &v171;
    v152 = v70;
    v116 = v71;
    v117 = v72;
    v118 = &v172;
    v119 = v73;
    v120 = v74;
    v121 = v75;
    v122 = &v173;
    v123 = v76;
    v124 = v77;
    v125 = v78;
    v126 = &v174;
    v127 = v79;
    v128 = v80;
    v129 = v12;
    v130 = &v175;
    v131 = v11;
    v132 = v10;
    v133 = v9;
    v134 = &v176;
    v135 = v8;
    v136 = v7;
    v137 = v6;
    p_pclsid = &pclsid;
    if ( (_QWORD)v115 )
      v37 = *(void **)v115;
    else
      v37 = 0LL;
    v139 = v37;
    *(_QWORD *)&v92 = 2048LL;
    sub_1400010D4(
      v36,
      (int)&unk_1400D1CAB,
      v35,
      v36,
      (__int64)&v92,
      &v139,
      &v89,
      (__int64 *)&Buf1,
      (__int64 *)&p_pclsid,
      &v137,
      &v136,
      &v135,
      (__int64)&v47,
      (__int64 *)&v134,
      &v133,
      &v132,
      &v131,
      (__int64)&v46,
      (__int64 *)&v130,
      &v129,
      &v128,
      &v127,
      (__int64)&v45,
      (__int64 *)&v126,
      &v125,
      &v124,
      &v123,
      (__int64)&v44,
      (__int64 *)&v122,
      &v121,
      &v120,
      &v119,
      (__int64)&v38,
      (__int64 *)&v118,
      &v117,
      &v116,
      &v152,
      (__int64)&v43,
      (__int64 *)&v150,
      &v149,
      &v148,
      &v153,
      (__int64)&v42,
      (__int64 *)&v145,
      &v140,
      &v147,
      &v151,
      (__int64)&v41,
      (__int64 *)&v146,
      &v144,
      &v143,
      &v142,
      (__int64)&v40,
      (__int64 *)&v141,
      &v49,
      (void **)&v50,
      &v51,
      (__int64)&v39,
      (__int64 *)pvar,
      (__int64 *)v97,
      (__int64 *)v95,
      (__int64 *)v107,
      (__int64 *)v105);
  }
  sub_140003238(&v55);
  sub_140007258((__int64)&v115);
  if ( (_QWORD)v111 )
  {
    sub_1400453E4(v111, v112 - v111);
    v111 = 0LL;
    v112 = 0LL;
  }
  if ( (_QWORD)v99 )
  {
    sub_1400453E4(v99, (v100 - v99) & 0xFFFFFFFFFFFFFFF0uLL);
    v99 = 0LL;
    v100 = 0LL;
  }
  if ( (_QWORD)v113 )
  {
    sub_1400453E4(v113, v114 - v113);
    v113 = 0LL;
    v114 = 0LL;
  }
  if ( (_QWORD)v101 )
  {
    sub_1400453E4(v101, (v102 - v101) & 0xFFFFFFFFFFFFFFF0uLL);
    v101 = 0LL;
    v102 = 0LL;
  }
  if ( (_QWORD)v109 )
  {
    sub_1400453E4(v109, v110 - v109);
    v109 = 0LL;
    v110 = 0LL;
  }
  if ( (_QWORD)v93 )
  {
    sub_1400453E4(v93, (v94 - v93) & 0xFFFFFFFFFFFFFFF0uLL);
    v93 = 0LL;
    v94 = 0LL;
  }
  sub_14001D96C(&v58);
  sub_14001D96C((void **)&v59);
  sub_14001D96C(&v60);
  sub_14001D96C(&v61);
  sub_14001D96C(&v62);
  sub_14001D96C(&v63);
  sub_14001D96C(&v64);
  sub_14001D96C(&v65);
  sub_14001D96C(&v66);
  sub_14001D96C(&v67);
  sub_14001D96C(&v68);
  sub_14001D96C(&v69);
  sub_14001D96C(&v70);
  sub_14001D96C(&v71);
  sub_14001D96C(&v72);
  sub_14001D96C(&v73);
  sub_14001D96C(&v74);
  sub_14001D96C(&v75);
  sub_14001D96C(&v76);
  sub_14001D96C(&v77);
  sub_14001D96C(&v78);
  sub_14001D96C(&v79);
  sub_14001D96C(&v80);
  sub_14001D96C(&v81);
  sub_14001D96C(&v82);
  sub_14001D96C(&v83);
  sub_14001D96C(&v84);
  sub_14001D96C(&v85);
  sub_14001D96C(&v86);
  sub_14001D96C(&v87);
  sub_140003238(&v56);
  sub_140003238((__int64 *)&ppv);
  if ( v48[0] )
    CoUninitialize();
  return 0LL;
}
