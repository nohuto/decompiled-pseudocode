/*
 * XREFs of ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800946E0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18009444C (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180059790 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?GetShadowMargins@CAccent@@KA?AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z @ 0x18006D438 (-GetShadowMargins@CAccent@@KA-AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z.c)
 *     ?SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z @ 0x180072CDC (-SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ @ 0x1800738A8 (-GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ.c)
 *     ?SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z @ 0x18008D658 (-SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowForAccent(CAccent *this)
{
  struct CTopLevelWindow::WindowFrame *InactiveFrame; // rax
  int v3; // ebx
  int v4; // r12d
  double v5; // xmm2_8
  int v6; // edi
  int v7; // edi
  int v8; // r14d
  int v9; // esi
  int v10; // r15d
  LONG v11; // edx
  LONG v12; // ecx
  __m128i v13; // xmm1
  int v14; // r9d
  int v15; // r10d
  int v16; // r8d
  int v17; // r11d
  __int32 v18; // edi
  LONG *v19; // rdi
  __int64 v20; // r14
  CPrimitive **v21; // rbx
  struct _MARGINS *v22; // rsi
  CPrimitive *v23; // rcx
  CPrimitive *v24; // rcx
  struct tagSIZE v26; // [rsp+28h] [rbp-E0h] BYREF
  struct tagSIZE v27; // [rsp+30h] [rbp-D8h] BYREF
  struct _MARGINS v28; // [rsp+38h] [rbp-D0h] BYREF
  int v29; // [rsp+48h] [rbp-C0h]
  _DWORD v30[15]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v31; // [rsp+88h] [rbp-80h]
  int v32; // [rsp+8Ch] [rbp-7Ch]
  int v33; // [rsp+90h] [rbp-78h]
  int v34; // [rsp+94h] [rbp-74h]
  int v35; // [rsp+98h] [rbp-70h]
  int v36; // [rsp+9Ch] [rbp-6Ch]
  int v37; // [rsp+A0h] [rbp-68h]
  int v38; // [rsp+A4h] [rbp-64h]
  int v39; // [rsp+A8h] [rbp-60h]
  int v40; // [rsp+ACh] [rbp-5Ch]
  int v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B4h] [rbp-54h]
  int v43; // [rsp+B8h] [rbp-50h]
  int v44; // [rsp+BCh] [rbp-4Ch]
  int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  int v47; // [rsp+C8h] [rbp-40h]
  int v48; // [rsp+CCh] [rbp-3Ch]
  int v49; // [rsp+D0h] [rbp-38h]
  int v50; // [rsp+D4h] [rbp-34h]
  int v51; // [rsp+D8h] [rbp-30h]
  int v52; // [rsp+DCh] [rbp-2Ch]
  int v53; // [rsp+E0h] [rbp-28h]
  int v54; // [rsp+E4h] [rbp-24h]
  int v55; // [rsp+E8h] [rbp-20h]
  int v56; // [rsp+ECh] [rbp-1Ch]
  int v57; // [rsp+F0h] [rbp-18h]
  int v58; // [rsp+F4h] [rbp-14h]
  int v59; // [rsp+F8h] [rbp-10h]
  int v60; // [rsp+FCh] [rbp-Ch]
  int v61; // [rsp+100h] [rbp-8h]
  int v62; // [rsp+104h] [rbp-4h]
  int v63; // [rsp+108h] [rbp+0h]
  int v64; // [rsp+10Ch] [rbp+4h]
  int v65; // [rsp+110h] [rbp+8h]
  int v66; // [rsp+114h] [rbp+Ch]
  int v67; // [rsp+118h] [rbp+10h]
  int v68; // [rsp+11Ch] [rbp+14h]
  int v69; // [rsp+120h] [rbp+18h]
  int v70; // [rsp+124h] [rbp+1Ch]
  int v71; // [rsp+128h] [rbp+20h]
  int v72; // [rsp+12Ch] [rbp+24h]
  int v73; // [rsp+130h] [rbp+28h]
  int v74; // [rsp+134h] [rbp+2Ch]
  int v75; // [rsp+138h] [rbp+30h]
  int v76; // [rsp+13Ch] [rbp+34h]
  int v77; // [rsp+140h] [rbp+38h]
  int v78; // [rsp+144h] [rbp+3Ch]
  int v79; // [rsp+148h] [rbp+40h]
  int v80; // [rsp+14Ch] [rbp+44h]
  int v81; // [rsp+150h] [rbp+48h]
  int v82; // [rsp+154h] [rbp+4Ch]
  int v83; // [rsp+158h] [rbp+50h]
  int v84; // [rsp+15Ch] [rbp+54h]
  int v85; // [rsp+160h] [rbp+58h]
  int v86; // [rsp+164h] [rbp+5Ch]
  int v87; // [rsp+168h] [rbp+60h]
  int v88; // [rsp+16Ch] [rbp+64h]
  int v89; // [rsp+170h] [rbp+68h]
  int v90; // [rsp+174h] [rbp+6Ch]
  int v91; // [rsp+178h] [rbp+70h]
  int v92; // [rsp+17Ch] [rbp+74h]
  int v93; // [rsp+180h] [rbp+78h]
  int v94; // [rsp+184h] [rbp+7Ch]
  int v95; // [rsp+188h] [rbp+80h]
  int v96; // [rsp+18Ch] [rbp+84h]
  int v97; // [rsp+190h] [rbp+88h]
  int v98; // [rsp+194h] [rbp+8Ch]
  int v99; // [rsp+198h] [rbp+90h]
  int v100; // [rsp+19Ch] [rbp+94h]
  int v101; // [rsp+1A0h] [rbp+98h]
  int v102; // [rsp+1A4h] [rbp+9Ch]
  int v103; // [rsp+1A8h] [rbp+A0h]
  int v104; // [rsp+1ACh] [rbp+A4h]
  int v105; // [rsp+1B0h] [rbp+A8h]
  int v106; // [rsp+1B4h] [rbp+ACh]
  int v107; // [rsp+1B8h] [rbp+B0h]
  int v108; // [rsp+1BCh] [rbp+B4h]
  int v109; // [rsp+1C0h] [rbp+B8h]
  int v110; // [rsp+1C4h] [rbp+BCh]
  int v111; // [rsp+1C8h] [rbp+C0h]
  int v112; // [rsp+1CCh] [rbp+C4h]
  int v113; // [rsp+1D0h] [rbp+C8h]
  int v114; // [rsp+1D4h] [rbp+CCh]
  int v115; // [rsp+1D8h] [rbp+D0h]
  int v116; // [rsp+1DCh] [rbp+D4h]
  int v117; // [rsp+1E0h] [rbp+D8h]
  int v118; // [rsp+1E4h] [rbp+DCh]
  __int32 v119; // [rsp+1E8h] [rbp+E0h]
  int v120; // [rsp+1ECh] [rbp+E4h]
  int v121; // [rsp+1F0h] [rbp+E8h]
  int v122; // [rsp+1F4h] [rbp+ECh]
  __int32 v123; // [rsp+1F8h] [rbp+F0h]
  int v124; // [rsp+1FCh] [rbp+F4h]
  int v125; // [rsp+200h] [rbp+F8h]
  int v126; // [rsp+204h] [rbp+FCh]
  int v127; // [rsp+208h] [rbp+100h]
  int v128; // [rsp+20Ch] [rbp+104h]
  __int32 v129; // [rsp+210h] [rbp+108h]
  int v130; // [rsp+214h] [rbp+10Ch]
  __int32 v131; // [rsp+218h] [rbp+110h]
  int v132; // [rsp+21Ch] [rbp+114h]
  __int32 v133; // [rsp+220h] [rbp+118h]
  int v134; // [rsp+224h] [rbp+11Ch]
  int v135; // [rsp+228h] [rbp+120h]
  __int32 v136; // [rsp+22Ch] [rbp+124h]
  __int32 v137; // [rsp+230h] [rbp+128h]
  int v138; // [rsp+234h] [rbp+12Ch]
  int v139; // [rsp+238h] [rbp+130h]
  int v140; // [rsp+23Ch] [rbp+134h]
  int v141; // [rsp+240h] [rbp+138h]
  __int32 v142; // [rsp+244h] [rbp+13Ch]
  struct _MARGINS v143; // [rsp+248h] [rbp+140h] BYREF

  InactiveFrame = CTopLevelWindow::GetInactiveFrame();
  v3 = 0;
  v4 = 0;
  if ( InactiveFrame )
  {
    v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52);
    v4 = (int)((double)*(int *)(*((_QWORD *)InactiveFrame + 184) + 132LL) * v5);
    v3 = (int)((double)(*(_DWORD *)(*((_QWORD *)InactiveFrame + 184) + 128LL) - 1) * v5);
  }
  v6 = 0;
  if ( v3 >= 0 )
    v6 = v3;
  v7 = -v6;
  if ( v3 >= 0 )
  {
    v8 = -v3;
    v10 = v3;
    v9 = -v3;
    v12 = -v3;
    v11 = -v3;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
  }
  v26.cx = v12;
  v27.cx = v11;
  v28.cxLeftWidth = v7;
  v28.cxRightWidth = 0x7FFFFFFF;
  v28.cyTopHeight = -v10;
  v13 = *(__m128i *)CAccent::GetShadowMargins(&v143, InactiveFrame);
  v28.cyBottomHeight = 0x7FFFFFFF;
  v29 = v3;
  v30[0] = v4;
  v30[1] = v14;
  v30[2] = v15;
  v30[3] = -v10;
  v30[4] = 0x7FFFFFFF;
  v30[5] = 0x7FFFFFFF;
  v30[6] = v4;
  v30[7] = 0x7FFFFFFF;
  v30[8] = v8;
  v30[9] = -v10;
  v30[10] = 0x7FFFFFFF;
  v30[11] = v3;
  v30[12] = v4;
  v30[13] = v7;
  v30[14] = 0x7FFFFFFF;
  v31 = v16;
  v32 = v17;
  v33 = v3;
  v34 = 0x7FFFFFFF;
  v35 = 0x7FFFFFFF;
  v36 = v8;
  v37 = v16;
  v38 = v17;
  v39 = v3;
  v40 = 0x7FFFFFFF;
  v41 = v7;
  v42 = 0x7FFFFFFF;
  v43 = 0x7FFFFFFF;
  v44 = v9;
  v45 = v3;
  v46 = v3;
  v47 = v14;
  v48 = v15;
  v49 = 0x7FFFFFFF;
  v50 = v9;
  v51 = 0x7FFFFFFF;
  v52 = v3;
  v53 = 0x7FFFFFFF;
  v54 = v8;
  v55 = 0x7FFFFFFF;
  v56 = v9;
  v57 = v3;
  v58 = v3;
  v59 = v14;
  v60 = v15;
  v61 = -v10;
  v62 = 0x7FFFFFFF;
  v63 = 0x7FFFFFFF;
  v64 = v4;
  v65 = v7;
  v66 = 0x7FFFFFFF;
  v67 = -v10;
  v68 = 0x7FFFFFFF;
  v69 = v3;
  v70 = v4;
  v71 = v7;
  v72 = v8;
  v73 = -v10;
  v74 = 0x7FFFFFFF;
  v75 = 0x7FFFFFFF;
  v76 = v4;
  v77 = 0x7FFFFFFF;
  v78 = v8;
  v79 = -v10;
  v123 = v13.m128i_i32[0];
  v80 = 0x7FFFFFFF;
  v84 = 0x7FFFFFFF;
  v88 = 0x7FFFFFFF;
  v89 = 0x7FFFFFFF;
  v94 = 0x7FFFFFFF;
  v96 = 0x7FFFFFFF;
  v97 = 0x7FFFFFFF;
  v103 = 0x7FFFFFFF;
  v105 = 0x7FFFFFFF;
  v107 = 0x7FFFFFFF;
  v109 = 0x7FFFFFFF;
  v117 = 0x7FFFFFFF;
  v118 = 0x7FFFFFFF;
  v120 = 0x7FFFFFFF;
  v124 = 0x7FFFFFFF;
  v125 = 0x7FFFFFFF;
  v130 = 0x7FFFFFFF;
  v134 = 0x7FFFFFFF;
  v135 = 0x7FFFFFFF;
  v139 = 0x7FFFFFFF;
  v141 = 0x7FFFFFFF;
  v83 = v7;
  v95 = v7;
  v18 = v7 - v13.m128i_i32[0];
  v129 = v13.m128i_i32[1];
  v126 = v26.cx - v13.m128i_i32[1];
  v132 = v26.cx - v13.m128i_i32[1];
  v138 = v26.cx - v13.m128i_i32[1];
  v13.m128i_i64[0] = _mm_srli_si128(v13, 8).m128i_u64[0];
  v121 = -v10;
  v136 = v13.m128i_i32[0];
  v127 = -v10;
  v81 = v3;
  v140 = v27.cx - v13.m128i_i32[1];
  v82 = v4;
  v85 = v16;
  v86 = v17;
  v87 = v3;
  v90 = v8;
  v91 = v16;
  v92 = v17;
  v93 = v3;
  v98 = v9;
  v99 = v3;
  v100 = v3;
  v101 = v14;
  v102 = v15;
  v104 = v9;
  v106 = v3;
  v108 = v8;
  v110 = v9;
  v111 = v3;
  v112 = v3;
  v113 = v14;
  v114 = v15;
  v115 = v16;
  v116 = v17;
  v119 = v18;
  v122 = v9;
  v128 = v9;
  v131 = v18;
  v133 = -v10 - v13.m128i_i32[0];
  v137 = v18;
  v142 = v13.m128i_i32[1];
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 20) )
  {
    v121 = 0;
    v127 = 0;
    v31 = 0;
    v37 = 0;
  }
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 21) )
  {
    v122 = 0;
    v128 = 0;
  }
  v19 = v30;
  v20 = 22LL;
  v21 = (CPrimitive **)((char *)this + 304);
  v22 = &v28;
  do
  {
    if ( *v21 )
    {
      CPrimitive::SetInsetFromParent(*v21, v22);
      if ( *(v19 - 1) != 0x7FFFFFFF )
      {
        v23 = *v21;
        v27.cx = *(v19 - 1);
        v27.cy = *((_DWORD *)v23 + 9);
        CPrimitive::SetSize((struct tagSIZE *)v23, &v27);
      }
      if ( *v19 != 0x7FFFFFFF )
      {
        v24 = *v21;
        v26.cy = *v19;
        v26.cx = *((_DWORD *)v24 + 8);
        CPrimitive::SetSize((struct tagSIZE *)v24, &v26);
      }
    }
    v22 = (struct _MARGINS *)((char *)v22 + 24);
    ++v21;
    v19 += 6;
    --v20;
  }
  while ( v20 );
  return 0LL;
}
