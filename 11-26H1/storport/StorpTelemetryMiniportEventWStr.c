/*
 * XREFs of StorpTelemetryMiniportEventWStr @ 0x14003E924
 * Callers:
 *     StorEtwRaidMiniportEvent @ 0x140042204 (StorEtwRaidMiniportEvent.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14003F1BC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorpTelemetryMiniportEventWStr(
        int a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  wchar_t v14; // r8
  unsigned int v15; // r12d
  _OWORD *v16; // r15
  _QWORD *v17; // r14
  _WORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // r11d
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  const int *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 *v29; // r10
  int v30; // r11d
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // r9
  int v35; // r11d
  __int64 v36; // r8
  char v37; // r14
  char v38; // r15
  char v39; // di
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r9
  int v43; // ecx
  __int64 v44; // r9
  __int64 *v45; // r10
  __int64 v46; // r9
  __int64 v47; // r9
  int v48; // r11d
  int v49; // r8d
  int v50; // r9d
  int v51; // [rsp+28h] [rbp-E0h]
  int v52; // [rsp+30h] [rbp-D8h]
  ULONG v53; // [rsp+38h] [rbp-D0h]
  char v54; // [rsp+48h] [rbp-C0h] BYREF
  char v55; // [rsp+49h] [rbp-BFh] BYREF
  char v56; // [rsp+4Ah] [rbp-BEh] BYREF
  char v57; // [rsp+4Bh] [rbp-BDh] BYREF
  int v58; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v59; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A8h]
  __int64 v62; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+70h] [rbp-98h] BYREF
  __int64 v64; // [rsp+78h] [rbp-90h] BYREF
  __int64 v65; // [rsp+80h] [rbp-88h] BYREF
  __int64 v66; // [rsp+88h] [rbp-80h] BYREF
  __int64 v67; // [rsp+90h] [rbp-78h] BYREF
  __int64 v68; // [rsp+98h] [rbp-70h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v71; // [rsp+B0h] [rbp-58h]
  __int64 v72[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v73; // [rsp+E8h] [rbp-20h]
  __int64 v74; // [rsp+F0h] [rbp-18h]
  char *v75; // [rsp+F8h] [rbp-10h]
  __int64 v76; // [rsp+100h] [rbp-8h]
  _BYTE v77[16]; // [rsp+108h] [rbp+0h] BYREF
  int *v78; // [rsp+118h] [rbp+10h]
  __int64 v79; // [rsp+120h] [rbp+18h]
  __int64 *v80; // [rsp+128h] [rbp+20h]
  __int64 v81; // [rsp+130h] [rbp+28h]
  __int64 v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+38h]
  int *v84; // [rsp+148h] [rbp+40h]
  __int64 v85; // [rsp+150h] [rbp+48h]
  __int64 *v86; // [rsp+158h] [rbp+50h] BYREF
  int v87; // [rsp+160h] [rbp+58h]
  int v88; // [rsp+164h] [rbp+5Ch]
  char *v89; // [rsp+168h] [rbp+60h] BYREF
  __int64 v90; // [rsp+170h] [rbp+68h]
  char *v91; // [rsp+178h] [rbp+70h]
  __int64 v92; // [rsp+180h] [rbp+78h]
  char *v93; // [rsp+188h] [rbp+80h] BYREF
  __int64 v94; // [rsp+190h] [rbp+88h]
  __int64 *v95; // [rsp+198h] [rbp+90h]
  __int64 v96; // [rsp+1A0h] [rbp+98h]
  _BYTE v97[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v98[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v99[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v100; // [rsp+1D8h] [rbp+D0h]
  __int64 v101; // [rsp+1E0h] [rbp+D8h]
  _BYTE v102[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 *v103; // [rsp+1F8h] [rbp+F0h]
  __int64 v104; // [rsp+200h] [rbp+F8h]
  _BYTE v105[16]; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v106; // [rsp+218h] [rbp+110h]
  __int64 v107; // [rsp+220h] [rbp+118h]
  _BYTE v108[16]; // [rsp+228h] [rbp+120h] BYREF
  __int64 *v109; // [rsp+238h] [rbp+130h]
  __int64 v110; // [rsp+240h] [rbp+138h]
  _BYTE v111[16]; // [rsp+248h] [rbp+140h] BYREF
  __int64 *v112; // [rsp+258h] [rbp+150h]
  __int64 v113; // [rsp+260h] [rbp+158h]
  _BYTE v114[16]; // [rsp+268h] [rbp+160h] BYREF
  __int64 *v115; // [rsp+278h] [rbp+170h]
  __int64 v116; // [rsp+280h] [rbp+178h]
  _BYTE v117[16]; // [rsp+288h] [rbp+180h] BYREF
  __int64 *v118; // [rsp+298h] [rbp+190h]
  __int64 v119; // [rsp+2A0h] [rbp+198h]
  _BYTE v120[16]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 *v121; // [rsp+2B8h] [rbp+1B0h]
  __int64 v122; // [rsp+2C0h] [rbp+1B8h]
  _BYTE v123[16]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 *v124; // [rsp+2D8h] [rbp+1D0h]
  __int64 v125; // [rsp+2E0h] [rbp+1D8h]
  _OWORD v126[8]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v127; // [rsp+370h] [rbp+268h]
  _BYTE v128[136]; // [rsp+378h] [rbp+270h] BYREF
  __int64 v129; // [rsp+400h] [rbp+2F8h]
  _BYTE v130[136]; // [rsp+408h] [rbp+300h] BYREF
  __int64 v131; // [rsp+490h] [rbp+388h]
  _BYTE v132[136]; // [rsp+498h] [rbp+390h] BYREF
  __int64 v133; // [rsp+520h] [rbp+418h]
  _BYTE v134[136]; // [rsp+528h] [rbp+420h] BYREF
  __int64 v135; // [rsp+5B0h] [rbp+4A8h]
  _BYTE v136[136]; // [rsp+5B8h] [rbp+4B0h] BYREF
  __int64 v137; // [rsp+640h] [rbp+538h]
  _BYTE v138[136]; // [rsp+648h] [rbp+540h] BYREF
  __int64 v139; // [rsp+6D0h] [rbp+5C8h]
  _BYTE v140[136]; // [rsp+6D8h] [rbp+5D0h] BYREF
  int v141[2]; // [rsp+760h] [rbp+658h]
  __int128 v142; // [rsp+768h] [rbp+660h] BYREF
  char v143; // [rsp+778h] [rbp+670h]
  __int64 v144; // [rsp+788h] [rbp+680h] BYREF
  wchar_t v145; // [rsp+790h] [rbp+688h]

  LODWORD(v61) = a1;
  v60 = a7;
  memset_0(v126, 0, 0x480uLL);
  memset_0(&v144, 0, 0x82uLL);
  result = 0LL;
  v58 = 0;
  v12 = -1LL;
  v143 = 0;
  v13 = -1LL;
  v142 = 0LL;
  v71 = 0LL;
  do
    ++v13;
  while ( a2[v13] );
  if ( (_DWORD)v13 )
  {
    v36 = 64LL;
    if ( (unsigned int)v13 < 0x40 )
      v36 = (unsigned int)v13;
    result = (__int64)memmove(&v144, a2, 2 * v36);
    v14 = aNull_0[4];
  }
  else
  {
    v14 = aNull_0[4];
    v145 = aNull_0[4];
    v144 = *(_QWORD *)L"NULL";
  }
  v15 = 0;
  if ( a6 )
  {
    v16 = v126;
    v17 = a8;
    result = v60 - (_QWORD)a8;
    v60 -= (__int64)a8;
    do
    {
      v18 = *(_WORD **)((char *)v17 + result);
      if ( !v18 )
        goto LABEL_11;
      v19 = -1LL;
      do
        ++v19;
      while ( v18[v19] );
      if ( (_DWORD)v19 )
      {
        v20 = 64LL;
        if ( (unsigned int)v19 < 0x40 )
          v20 = (unsigned int)v19;
        memmove(&v126[9 * v15], v18, 2 * v20);
        v14 = aNull_0[4];
        *((_QWORD *)v16 + 17) = *v17;
        result = v60;
      }
      else
      {
LABEL_11:
        *(_QWORD *)v16 = *(_QWORD *)L"NULL";
        *((_WORD *)v16 + 4) = v14;
      }
      ++v15;
      ++v17;
      v16 += 9;
    }
    while ( v15 < a6 );
  }
  if ( a4
    && *(_WORD *)a4 == 1
    && *(_DWORD *)(a4 + 4) >= 4u
    && (v37 = *(_BYTE *)(a4 + 8),
        v38 = *(_BYTE *)(a4 + 9),
        v39 = *(_BYTE *)(a4 + 10),
        BYTE2(v58) = v39,
        LOBYTE(v58) = v37,
        BYTE1(v58) = v38,
        (result = (__int64)RaidAdapterFindUnit(a3, v58)) != 0) )
  {
    result = *(_QWORD *)(result + 160);
    if ( result )
      v142 = *(_OWORD *)(result + 90);
    if ( a5 )
    {
      if ( (unsigned int)dword_140172178 > 5 && (qword_140172188 & 0x400000000000LL) != 0 )
      {
        result = qword_140172190 & 0x400000000000LL;
        if ( (qword_140172190 & 0x400000000000LL) == qword_140172190 )
        {
          v27 = *(_QWORD *)(a3 + 4784);
          v73 = &v70;
          v70 = 0x1000000LL;
          v75 = &v54;
          v74 = 8LL;
          v54 = 1;
          v76 = 1LL;
          tlgCreate1Sz_wchar_t(v77, v27);
          v31 = *(_DWORD *)(v28 + 3432);
          v78 = (int *)&v60;
          LODWORD(v59) = *(_DWORD *)(a3 + 56);
          v80 = &v59;
          v82 = a3 + 5128;
          v58 = v61;
          v84 = &v58;
          v32 = -1LL;
          LODWORD(v60) = v31;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 16LL;
          v85 = 4LL;
          do
            ++v32;
          while ( *((_WORD *)&v144 + v32) != (_WORD)v30 );
          v88 = v30;
          v87 = 2 * v32 + 2;
          v86 = &v144;
          v89 = &v57;
          v57 = v37;
          v91 = &v56;
          v90 = 1LL;
          v93 = &v55;
          v56 = v38;
          v92 = 1LL;
          v55 = v39;
          v94 = 1LL;
          v95 = v29;
          v96 = 16LL;
          tlgCreate1Sz_char(v97, v28 + 168);
          tlgCreate1Sz_char(v98, v33 + 177);
          tlgCreate1Sz_char(v99, v34 + 242);
          do
            ++v12;
          while ( *((_BYTE *)&v142 + v12) != (_BYTE)v35 );
          HIDWORD(v101) = v35;
          v100 = (__int64 *)&v142;
          LODWORD(v101) = v12 + 1;
          tlgCreate1Sz_wchar_t(v102, v126);
          v69 = v127;
          v103 = &v69;
          v104 = 8LL;
          tlgCreate1Sz_wchar_t(v105, v128);
          v68 = v129;
          v106 = &v68;
          v107 = 8LL;
          tlgCreate1Sz_wchar_t(v108, v130);
          v67 = v131;
          v109 = &v67;
          v110 = 8LL;
          tlgCreate1Sz_wchar_t(v111, v132);
          v66 = v133;
          v112 = &v66;
          v113 = 8LL;
          tlgCreate1Sz_wchar_t(v114, v134);
          v65 = v135;
          v115 = &v65;
          v116 = 8LL;
          tlgCreate1Sz_wchar_t(v117, v136);
          v64 = v137;
          v118 = &v64;
          v119 = 8LL;
          tlgCreate1Sz_wchar_t(v120, v138);
          v63 = v139;
          v121 = &v63;
          v122 = 8LL;
          tlgCreate1Sz_wchar_t(v123, v140);
          v125 = 8LL;
          v124 = &v62;
          v26 = &dword_140161370;
          v53 = 34;
          goto LABEL_30;
        }
      }
    }
    else if ( (unsigned int)dword_140172178 > 5 )
    {
      result = tlgKeywordOn(v40, 0x400000000000LL);
      if ( (_BYTE)result )
      {
        v41 = *(_QWORD *)(a3 + 4784);
        v73 = &v62;
        v62 = 0x1000000LL;
        v75 = &v55;
        v74 = 8LL;
        v55 = 1;
        v76 = 1LL;
        tlgCreate1Sz_wchar_t(v77, v41);
        v43 = *(_DWORD *)(v42 + 3432);
        v78 = &v58;
        LODWORD(v59) = *(_DWORD *)(a3 + 56);
        v80 = &v59;
        v82 = a3 + 5128;
        LODWORD(v60) = v61;
        v58 = v43;
        v84 = (int *)&v60;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 16LL;
        v85 = 4LL;
        tlgCreate1Sz_wchar_t(&v86, &v144);
        v56 = v37;
        v89 = &v56;
        v90 = 1LL;
        v91 = &v57;
        v57 = v38;
        v93 = &v54;
        v92 = 1LL;
        v54 = v39;
        v94 = 1LL;
        v95 = v45;
        v96 = 16LL;
        tlgCreate1Sz_char(v97, v44 + 168);
        tlgCreate1Sz_char(v98, v46 + 177);
        tlgCreate1Sz_char(v99, v47 + 242);
        do
          ++v12;
        while ( *((_BYTE *)&v142 + v12) != (_BYTE)v48 );
        HIDWORD(v101) = v48;
        v100 = (__int64 *)&v142;
        LODWORD(v101) = v12 + 1;
        tlgCreate1Sz_wchar_t(v102, v126);
        v63 = v127;
        v103 = &v63;
        v104 = 8LL;
        tlgCreate1Sz_wchar_t(v105, v128);
        v64 = v129;
        v106 = &v64;
        v107 = 8LL;
        tlgCreate1Sz_wchar_t(v108, v130);
        v65 = v131;
        v109 = &v65;
        v110 = 8LL;
        tlgCreate1Sz_wchar_t(v111, v132);
        v66 = v133;
        v112 = &v66;
        v113 = 8LL;
        tlgCreate1Sz_wchar_t(v114, v134);
        v67 = v135;
        v115 = &v67;
        v116 = 8LL;
        tlgCreate1Sz_wchar_t(v117, v136);
        v68 = v137;
        v118 = &v68;
        v119 = 8LL;
        tlgCreate1Sz_wchar_t(v120, v138);
        v69 = v139;
        v121 = &v69;
        v122 = 8LL;
        tlgCreate1Sz_wchar_t(v123, v140);
        v124 = &v70;
        v70 = *(_QWORD *)v141;
        v125 = 8LL;
        return tlgWriteEx_EtwWriteEx(v141[0], (int)&unk_140163F12, v49, v50, v51, v52, 0x22u, (__int64)v72);
      }
    }
  }
  else if ( (unsigned int)dword_140172178 > 5 && (qword_140172188 & 0x400000000000LL) != 0 )
  {
    result = qword_140172190 & 0x400000000000LL;
    if ( (qword_140172190 & 0x400000000000LL) == qword_140172190 )
    {
      v21 = *(_QWORD *)(a3 + 4784);
      v73 = &v70;
      v70 = 0x1000000LL;
      v75 = &v54;
      v74 = 8LL;
      v54 = 1;
      v76 = 1LL;
      tlgCreate1Sz_wchar_t(v77, v21);
      v23 = *(_DWORD *)(a3 + 4340);
      v78 = (int *)&v60;
      LODWORD(v59) = *(_DWORD *)(a3 + 56);
      v80 = &v59;
      v82 = a3 + 5128;
      v58 = v61;
      v84 = &v58;
      LODWORD(v60) = v23;
      v79 = 4LL;
      v81 = 4LL;
      v83 = 16LL;
      v85 = 4LL;
      do
        ++v12;
      while ( *((_WORD *)&v144 + v12) != (_WORD)v22 );
      v88 = v22;
      v86 = &v144;
      v87 = 2 * v12 + 2;
      tlgCreate1Sz_wchar_t(&v89, v126);
      v69 = v127;
      v91 = (char *)&v69;
      v92 = 8LL;
      tlgCreate1Sz_wchar_t(&v93, v128);
      v68 = v129;
      v95 = &v68;
      v96 = 8LL;
      tlgCreate1Sz_wchar_t(v97, v130);
      v67 = v131;
      v98[0] = &v67;
      v98[1] = 8LL;
      tlgCreate1Sz_wchar_t(v99, v132);
      v66 = v133;
      v100 = &v66;
      v101 = 8LL;
      tlgCreate1Sz_wchar_t(v102, v134);
      v65 = v135;
      v103 = &v65;
      v104 = 8LL;
      tlgCreate1Sz_wchar_t(v105, v136);
      v64 = v137;
      v106 = &v64;
      v107 = 8LL;
      tlgCreate1Sz_wchar_t(v108, v138);
      v63 = v139;
      v109 = &v63;
      v110 = 8LL;
      tlgCreate1Sz_wchar_t(v111, v140);
      v113 = 8LL;
      v112 = &v62;
      v26 = (const int *)&unk_14016498A;
      v53 = 26;
LABEL_30:
      v62 = *(_QWORD *)v141;
      return tlgWriteEx_EtwWriteEx(v141[0], (int)v26, v24, v25, v51, v52, v53, (__int64)v72);
    }
  }
  return result;
}
