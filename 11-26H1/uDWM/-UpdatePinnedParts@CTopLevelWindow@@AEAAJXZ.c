/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800106AC
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180011D38 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetShadowMargins@CWindowBorder@@QEAA?AU_MARGINS@@XZ @ 0x1800101A0 (-GetShadowMargins@CWindowBorder@@QEAA-AU_MARGINS@@XZ.c)
 *     ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x1800201E0 (-ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z.c)
 *     ?SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z @ 0x180072CDC (-SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z @ 0x18008D658 (-SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v2; // r13d
  __m128i v4; // xmm6
  int v5; // esi
  unsigned int v6; // edx
  LONG v7; // eax
  int v8; // ecx
  int v9; // r14d
  int v10; // r13d
  struct CTopLevelWindow::WindowFrame *v11; // rax
  int v12; // r9d
  int v13; // edi
  double v14; // xmm1_8
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r14d
  int v19; // eax
  int v20; // r15d
  int v21; // eax
  int v22; // eax
  int v23; // r12d
  int v24; // edx
  int v25; // ecx
  int v26; // r13d
  int v27; // ecx
  LONG v28; // eax
  int v29; // r10d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r13
  int v34; // r13d
  CWindowBorder *v35; // rcx
  struct _MARGINS *ShadowMargins; // rax
  int v37; // edx
  int v38; // r8d
  int v39; // ecx
  int v40; // ecx
  CPrimitive **v41; // rbx
  struct _MARGINS *v42; // rsi
  LONG *v43; // rdi
  __int64 v44; // r14
  CPrimitive *v46; // rcx
  CPrimitive *v47; // rcx
  int v48; // [rsp+28h] [rbp-E0h]
  int cxRightWidth; // [rsp+28h] [rbp-E0h]
  int v50; // [rsp+2Ch] [rbp-DCh]
  int cyTopHeight; // [rsp+2Ch] [rbp-DCh]
  int v52; // [rsp+30h] [rbp-D8h]
  int v53; // [rsp+34h] [rbp-D4h]
  int cxLeftWidth; // [rsp+38h] [rbp-D0h]
  struct tagSIZE v55; // [rsp+40h] [rbp-C8h] BYREF
  struct tagSIZE v56; // [rsp+48h] [rbp-C0h] BYREF
  struct tagSIZE v57[2]; // [rsp+50h] [rbp-B8h]
  struct _MARGINS v58; // [rsp+60h] [rbp-A8h] BYREF
  struct _MARGINS v59; // [rsp+78h] [rbp-90h] BYREF
  int v60; // [rsp+88h] [rbp-80h]
  _DWORD v61[16]; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v62; // [rsp+CCh] [rbp-3Ch]
  int v63; // [rsp+D0h] [rbp-38h]
  int v64; // [rsp+D4h] [rbp-34h]
  int v65; // [rsp+D8h] [rbp-30h]
  int v66; // [rsp+DCh] [rbp-2Ch]
  int v67; // [rsp+E0h] [rbp-28h]
  int v68; // [rsp+E4h] [rbp-24h]
  int v69; // [rsp+E8h] [rbp-20h]
  int v70; // [rsp+ECh] [rbp-1Ch]
  int v71; // [rsp+F0h] [rbp-18h]
  int v72; // [rsp+F4h] [rbp-14h]
  int v73; // [rsp+F8h] [rbp-10h]
  int v74; // [rsp+FCh] [rbp-Ch]
  int v75; // [rsp+100h] [rbp-8h]
  LONG cx; // [rsp+104h] [rbp-4h]
  int v77; // [rsp+108h] [rbp+0h]
  int v78; // [rsp+10Ch] [rbp+4h]
  int v79; // [rsp+110h] [rbp+8h]
  int v80; // [rsp+114h] [rbp+Ch]
  int v81; // [rsp+118h] [rbp+10h]
  LONG v82; // [rsp+11Ch] [rbp+14h]
  int v83; // [rsp+120h] [rbp+18h]
  int v84; // [rsp+124h] [rbp+1Ch]
  int v85; // [rsp+128h] [rbp+20h]
  int v86; // [rsp+12Ch] [rbp+24h]
  int v87; // [rsp+130h] [rbp+28h]
  LONG v88; // [rsp+134h] [rbp+2Ch]
  int v89; // [rsp+138h] [rbp+30h]
  int v90; // [rsp+13Ch] [rbp+34h]
  int v91; // [rsp+140h] [rbp+38h]
  int v92; // [rsp+144h] [rbp+3Ch]
  int v93; // [rsp+148h] [rbp+40h]
  LONG v94; // [rsp+14Ch] [rbp+44h]
  int v95; // [rsp+150h] [rbp+48h]
  int v96; // [rsp+154h] [rbp+4Ch]
  int v97; // [rsp+158h] [rbp+50h]
  int v98; // [rsp+15Ch] [rbp+54h]
  int v99; // [rsp+160h] [rbp+58h]
  int v100; // [rsp+164h] [rbp+5Ch]
  int v101; // [rsp+168h] [rbp+60h]
  int v102; // [rsp+16Ch] [rbp+64h]
  int v103; // [rsp+170h] [rbp+68h]
  int v104; // [rsp+174h] [rbp+6Ch]
  int v105; // [rsp+178h] [rbp+70h]
  int v106; // [rsp+17Ch] [rbp+74h]
  int v107; // [rsp+180h] [rbp+78h]
  int v108; // [rsp+184h] [rbp+7Ch]
  int v109; // [rsp+188h] [rbp+80h]
  int v110; // [rsp+18Ch] [rbp+84h]
  int v111; // [rsp+190h] [rbp+88h]
  int v112; // [rsp+194h] [rbp+8Ch]
  int v113; // [rsp+198h] [rbp+90h]
  int v114; // [rsp+19Ch] [rbp+94h]
  int v115; // [rsp+1A0h] [rbp+98h]
  LONG v116; // [rsp+1A4h] [rbp+9Ch]
  int v117; // [rsp+1A8h] [rbp+A0h]
  int v118; // [rsp+1ACh] [rbp+A4h]
  int v119; // [rsp+1B0h] [rbp+A8h]
  int v120; // [rsp+1B4h] [rbp+ACh]
  int v121; // [rsp+1B8h] [rbp+B0h]
  LONG v122; // [rsp+1BCh] [rbp+B4h]
  int v123; // [rsp+1C0h] [rbp+B8h]
  int v124; // [rsp+1C4h] [rbp+BCh]
  int v125; // [rsp+1C8h] [rbp+C0h]
  int v126; // [rsp+1CCh] [rbp+C4h]
  int v127; // [rsp+1D0h] [rbp+C8h]
  int v128; // [rsp+1D4h] [rbp+CCh]
  int v129; // [rsp+1D8h] [rbp+D0h]
  int v130; // [rsp+1DCh] [rbp+D4h]
  int v131; // [rsp+1E0h] [rbp+D8h]
  int v132; // [rsp+1E4h] [rbp+DCh]
  int v133; // [rsp+1E8h] [rbp+E0h]
  int v134; // [rsp+1ECh] [rbp+E4h]
  int v135; // [rsp+1F0h] [rbp+E8h]
  int v136; // [rsp+1F4h] [rbp+ECh]
  int v137; // [rsp+1F8h] [rbp+F0h]
  int v138; // [rsp+1FCh] [rbp+F4h]
  int v139; // [rsp+200h] [rbp+F8h]
  int v140; // [rsp+204h] [rbp+FCh]
  int v141; // [rsp+208h] [rbp+100h]
  int v142; // [rsp+20Ch] [rbp+104h]
  int v143; // [rsp+210h] [rbp+108h]
  int v144; // [rsp+214h] [rbp+10Ch]
  int v145; // [rsp+218h] [rbp+110h]
  LONG v146; // [rsp+21Ch] [rbp+114h]
  int v147; // [rsp+220h] [rbp+118h]
  int v148; // [rsp+224h] [rbp+11Ch]
  int v149; // [rsp+228h] [rbp+120h]
  int v150; // [rsp+22Ch] [rbp+124h]
  int v151; // [rsp+230h] [rbp+128h]
  int v152; // [rsp+234h] [rbp+12Ch]
  int v153; // [rsp+238h] [rbp+130h]
  int v154; // [rsp+23Ch] [rbp+134h]
  int v155; // [rsp+240h] [rbp+138h]
  int v156; // [rsp+244h] [rbp+13Ch]
  int v157; // [rsp+248h] [rbp+140h]
  int v158; // [rsp+24Ch] [rbp+144h]
  int v159; // [rsp+250h] [rbp+148h]
  int v160; // [rsp+254h] [rbp+14Ch]
  int v161; // [rsp+258h] [rbp+150h]
  int v162; // [rsp+25Ch] [rbp+154h]
  int v163; // [rsp+260h] [rbp+158h]
  int v164; // [rsp+264h] [rbp+15Ch]
  int v165; // [rsp+268h] [rbp+160h]
  int v166; // [rsp+26Ch] [rbp+164h]
  int v167; // [rsp+270h] [rbp+168h]
  int v168; // [rsp+274h] [rbp+16Ch]
  int v169; // [rsp+278h] [rbp+170h]
  int v170; // [rsp+27Ch] [rbp+174h]
  int v171; // [rsp+280h] [rbp+178h]
  int v172; // [rsp+284h] [rbp+17Ch]
  __int64 v173; // [rsp+288h] [rbp+180h]

  v1 = *(__m128i *)((char *)this + 604);
  v2 = *((_DWORD *)this + 147);
  v4 = 0LL;
  v5 = *((_DWORD *)this + 153);
  v6 = *((_DWORD *)this + 142);
  v7 = *((_DWORD *)this + 149) - v5;
  v50 = *((_DWORD *)this + 148) - v1.m128i_i32[1];
  v8 = *((_DWORD *)this + 150);
  v55.cx = v7;
  v9 = _mm_cvtsi128_si32(v1);
  v48 = v8 - HIDWORD(*(_QWORD *)((char *)this + 612));
  *(__m128i *)&v57[0].cx = v1;
  v10 = v2 - v9;
  v58 = 0LL;
  v11 = CTopLevelWindow::ChooseWindowFrame(this, v6, 1);
  v12 = 0;
  v13 = 0;
  if ( v11 )
  {
    v14 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52);
    v12 = (int)((double)(*(_DWORD *)(*((_QWORD *)v11 + 184) + 128LL) - 1) * v14);
    v13 = (int)((double)(*(_DWORD *)(*((_QWORD *)v11 + 202) + 128LL) - 1) * v14);
  }
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *((_DWORD *)this + 143) - v12 >= 0 )
    v15 = *((_DWORD *)this + 143) - v12;
  v18 = v15 + v9;
  v19 = *((_DWORD *)this + 144) - v12;
  v57[0].cx = v18;
  if ( v19 >= 0 )
    v16 = v19;
  v20 = v16 + v57[0].cy;
  v21 = *((_DWORD *)this + 146) - v12;
  v57[0].cy += v16;
  if ( v21 >= 0 )
    v17 = v21;
  v22 = v50 - v16;
  v23 = v17 + v57[1].cy;
  v24 = v48 - v17;
  v57[1].cy += v17;
  v25 = 0;
  v26 = v10 - v15;
  if ( v26 >= 0 )
    v25 = v26;
  v52 = v25;
  v27 = 0;
  if ( v22 >= 0 )
    v27 = v22;
  v28 = 0;
  v53 = v27;
  if ( v24 >= 0 )
    v28 = v24;
  v29 = v13 + v57[0].cy;
  v56.cx = v28;
  v30 = *((_QWORD *)this + 54);
  v173 = (unsigned int)(v13 + v57[0].cy);
  v57[0] = (struct tagSIZE)(unsigned int)(v13 + v57[1].cy);
  if ( v30 )
  {
    v58.cxLeftWidth = *(_DWORD *)(v30 + 32);
    v4 = _mm_loadu_si128((const __m128i *)&v58);
    cxLeftWidth = v58.cxLeftWidth;
  }
  else
  {
    cxLeftWidth = _mm_cvtsi128_si32((__m128i)0LL);
  }
  v31 = *((_QWORD *)this + 55);
  if ( v31 )
  {
    v58.cxRightWidth = *(_DWORD *)(v31 + 32);
    v4 = _mm_loadu_si128((const __m128i *)&v58);
    cxRightWidth = v58.cxRightWidth;
  }
  else
  {
    cxRightWidth = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
  }
  v32 = *((_QWORD *)this + 56);
  if ( v32 )
  {
    v58.cyTopHeight = *(_DWORD *)(v32 + 36);
    v4 = _mm_loadu_si128((const __m128i *)&v58);
    cyTopHeight = v58.cyTopHeight;
  }
  else
  {
    cyTopHeight = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
  }
  v33 = *((_QWORD *)this + 57);
  if ( v33 )
  {
    v34 = *(_DWORD *)(v33 + 36);
    v58.cyBottomHeight = v34;
    v4 = _mm_loadu_si128((const __m128i *)&v58);
  }
  else
  {
    v34 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
  }
  v35 = (CWindowBorder *)*((_QWORD *)this + 26);
  if ( *((_QWORD *)v35 + 26) )
  {
    ShadowMargins = CWindowBorder::GetShadowMargins(v35, &v58);
    v29 = v173;
    *(struct _MARGINS *)((char *)this + 636) = *ShadowMargins;
  }
  else
  {
    *(__m128i *)((char *)this + 636) = v4;
  }
  v37 = *((_DWORD *)this + 148);
  v38 = *((_DWORD *)this + 147);
  v60 = v52;
  v61[11] = v53;
  v62 = *((_DWORD *)this + 150);
  v68 = v62;
  v75 = v52;
  v59.cxRightWidth = 0x7FFFFFFF;
  v59.cyBottomHeight = 0x7FFFFFFF;
  v61[4] = 0x7FFFFFFF;
  v61[5] = 0x7FFFFFFF;
  v61[7] = 0x7FFFFFFF;
  v61[10] = 0x7FFFFFFF;
  v61[14] = 0x7FFFFFFF;
  v39 = *((_DWORD *)this + 149);
  v63 = v52;
  cx = v56.cx;
  v82 = v56.cx;
  v88 = v56.cx;
  v61[2] = v37;
  v78 = v37;
  v90 = v37;
  v61[15] = v39;
  v67 = v39;
  v101 = v18 + v13;
  v59.cxLeftWidth = v18;
  v59.cyTopHeight = v5;
  v61[0] = v55.cx;
  v61[1] = v38;
  v61[3] = v5;
  v61[6] = v55.cx;
  v61[8] = v20;
  v61[9] = v5;
  v61[12] = v55.cx;
  v61[13] = v18;
  v64 = 0x7FFFFFFF;
  v65 = 0x7FFFFFFF;
  v66 = v20;
  v69 = v53;
  v70 = 0x7FFFFFFF;
  v71 = v18;
  v72 = 0x7FFFFFFF;
  v73 = 0x7FFFFFFF;
  v74 = v23;
  v77 = v38;
  v79 = 0x7FFFFFFF;
  v80 = v23;
  v81 = 0x7FFFFFFF;
  v83 = 0x7FFFFFFF;
  v84 = v20;
  v85 = 0x7FFFFFFF;
  v86 = v23;
  v87 = v53;
  v89 = v38;
  v91 = v5;
  v92 = 0x7FFFFFFF;
  v93 = 0x7FFFFFFF;
  v94 = v55.cx;
  v95 = v18;
  v96 = 0x7FFFFFFF;
  v97 = v5;
  v98 = 0x7FFFFFFF;
  v99 = v13;
  v100 = v13;
  v102 = v29;
  v103 = v5;
  v104 = 0x7FFFFFFF;
  v105 = 0x7FFFFFFF;
  v106 = v13;
  v40 = v13 + v5;
  v131 = v18 + v13;
  v143 = v18 + v13;
  v113 = v18;
  v125 = v18;
  v153 = cxLeftWidth;
  v108 = v20;
  v120 = v20;
  v138 = v20;
  v109 = v5;
  v151 = v5;
  v157 = v5;
  v159 = cxRightWidth;
  v128 = v23;
  v134 = v23;
  v140 = v23;
  v152 = v23;
  v158 = v23;
  v163 = v5 - cyTopHeight;
  v41 = (CPrimitive **)((char *)this + 288);
  v111 = v13;
  v42 = &v59;
  v112 = v13;
  v117 = v13;
  v123 = v13;
  v129 = v13;
  v130 = v13;
  v136 = v13;
  v141 = v13;
  v142 = v13;
  v43 = v61;
  v149 = v18 - cxLeftWidth;
  v156 = v20 - cxRightWidth;
  v161 = v18 - cxLeftWidth;
  v162 = v20 - cxRightWidth;
  v167 = v18 - cxLeftWidth;
  v44 = 22LL;
  v168 = v20 - cxRightWidth;
  v107 = 0x7FFFFFFF;
  v110 = 0x7FFFFFFF;
  v114 = 0x7FFFFFFF;
  v115 = v40;
  v116 = v57[0].cx;
  v118 = 0x7FFFFFFF;
  v119 = 0x7FFFFFFF;
  v121 = v40;
  v122 = v57[0].cx;
  v124 = 0x7FFFFFFF;
  v126 = 0x7FFFFFFF;
  v127 = 0x7FFFFFFF;
  v132 = v29;
  v133 = 0x7FFFFFFF;
  v135 = 0x7FFFFFFF;
  v137 = 0x7FFFFFFF;
  v139 = 0x7FFFFFFF;
  v144 = v29;
  v145 = v40;
  v146 = v57[0].cx;
  v147 = 0x7FFFFFFF;
  v148 = 0x7FFFFFFF;
  v150 = 0x7FFFFFFF;
  v154 = 0x7FFFFFFF;
  v155 = 0x7FFFFFFF;
  v160 = 0x7FFFFFFF;
  v164 = 0x7FFFFFFF;
  v165 = 0x7FFFFFFF;
  v166 = cyTopHeight;
  v169 = 0x7FFFFFFF;
  v170 = v23 - v34;
  v171 = 0x7FFFFFFF;
  v172 = v34;
  do
  {
    if ( *v41 )
    {
      CPrimitive::SetInsetFromParent(*v41, v42);
      if ( *(v43 - 1) != 0x7FFFFFFF )
      {
        v46 = *v41;
        v56.cx = *(v43 - 1);
        v56.cy = *((_DWORD *)v46 + 9);
        CPrimitive::SetSize(v46, &v56);
      }
      if ( *v43 != 0x7FFFFFFF )
      {
        v47 = *v41;
        v55.cy = *v43;
        v55.cx = *((_DWORD *)v47 + 8);
        CPrimitive::SetSize(v47, &v55);
      }
    }
    v42 = (struct _MARGINS *)((char *)v42 + 24);
    ++v41;
    v43 += 6;
    --v44;
  }
  while ( v44 );
  return 0LL;
}
