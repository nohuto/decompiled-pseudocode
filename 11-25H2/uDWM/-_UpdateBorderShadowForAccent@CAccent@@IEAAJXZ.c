/*
 * XREFs of ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180004AB8
 * Callers:
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A03C0 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A0700 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetShadowMargins@CAccent@@KA?AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z @ 0x180003C08 (-GetShadowMargins@CAccent@@KA-AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z.c)
 *     ?GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ @ 0x180003C68 (-GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ.c)
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180004520 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180004A88 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x180005B10 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowForAccent(CAccent *this)
{
  struct CTopLevelWindow::WindowFrame *InactiveFrame; // rax
  int v3; // ebx
  struct _MARGINS *ShadowMargins; // rax
  int v5; // r10d
  __m128i v6; // xmm1
  int v7; // r11d
  int v8; // r9d
  int v9; // r8d
  __int32 v10; // r8d
  LONG *v11; // rdi
  __int64 v12; // r15
  CAtlasedImage **v13; // rbx
  struct _MARGINS *v14; // r14
  CAtlasedImage *v15; // rcx
  CAtlasedImage *v16; // rcx
  struct tagSIZE v18; // [rsp+20h] [rbp-E0h] BYREF
  struct _MARGINS v19; // [rsp+28h] [rbp-D8h] BYREF
  struct _MARGINS v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[16]; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+94h] [rbp-6Ch]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  int v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A4h] [rbp-5Ch]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  int v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B4h] [rbp-4Ch]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C4h] [rbp-3Ch]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  int v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D4h] [rbp-2Ch]
  int v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DCh] [rbp-24h]
  int v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E4h] [rbp-1Ch]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  int v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F4h] [rbp-Ch]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  int v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+104h] [rbp+4h]
  int v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+10Ch] [rbp+Ch]
  int v54; // [rsp+110h] [rbp+10h]
  int v55; // [rsp+114h] [rbp+14h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]
  int v58; // [rsp+120h] [rbp+20h]
  int v59; // [rsp+124h] [rbp+24h]
  int v60; // [rsp+128h] [rbp+28h]
  int v61; // [rsp+12Ch] [rbp+2Ch]
  int v62; // [rsp+130h] [rbp+30h]
  int v63; // [rsp+134h] [rbp+34h]
  int v64; // [rsp+138h] [rbp+38h]
  int v65; // [rsp+13Ch] [rbp+3Ch]
  int v66; // [rsp+140h] [rbp+40h]
  int v67; // [rsp+144h] [rbp+44h]
  int v68; // [rsp+148h] [rbp+48h]
  int v69; // [rsp+14Ch] [rbp+4Ch]
  int v70; // [rsp+150h] [rbp+50h]
  int v71; // [rsp+154h] [rbp+54h]
  int v72; // [rsp+158h] [rbp+58h]
  int v73; // [rsp+15Ch] [rbp+5Ch]
  int v74; // [rsp+160h] [rbp+60h]
  int v75; // [rsp+164h] [rbp+64h]
  int v76; // [rsp+168h] [rbp+68h]
  int v77; // [rsp+16Ch] [rbp+6Ch]
  int v78; // [rsp+170h] [rbp+70h]
  int v79; // [rsp+174h] [rbp+74h]
  int v80; // [rsp+178h] [rbp+78h]
  int v81; // [rsp+17Ch] [rbp+7Ch]
  int v82; // [rsp+180h] [rbp+80h]
  int v83; // [rsp+184h] [rbp+84h]
  int v84; // [rsp+188h] [rbp+88h]
  int v85; // [rsp+18Ch] [rbp+8Ch]
  int v86; // [rsp+190h] [rbp+90h]
  int v87; // [rsp+194h] [rbp+94h]
  int v88; // [rsp+198h] [rbp+98h]
  int v89; // [rsp+19Ch] [rbp+9Ch]
  int v90; // [rsp+1A0h] [rbp+A0h]
  int v91; // [rsp+1A4h] [rbp+A4h]
  int v92; // [rsp+1A8h] [rbp+A8h]
  int v93; // [rsp+1ACh] [rbp+ACh]
  int v94; // [rsp+1B0h] [rbp+B0h]
  int v95; // [rsp+1B4h] [rbp+B4h]
  int v96; // [rsp+1B8h] [rbp+B8h]
  int v97; // [rsp+1BCh] [rbp+BCh]
  int v98; // [rsp+1C0h] [rbp+C0h]
  int v99; // [rsp+1C4h] [rbp+C4h]
  int v100; // [rsp+1C8h] [rbp+C8h]
  int v101; // [rsp+1CCh] [rbp+CCh]
  int v102; // [rsp+1D0h] [rbp+D0h]
  int v103; // [rsp+1D4h] [rbp+D4h]
  int v104; // [rsp+1D8h] [rbp+D8h]
  int v105; // [rsp+1DCh] [rbp+DCh]
  int v106; // [rsp+1E0h] [rbp+E0h]
  int v107; // [rsp+1E4h] [rbp+E4h]
  int v108; // [rsp+1E8h] [rbp+E8h]
  int v109; // [rsp+1ECh] [rbp+ECh]
  __int32 v110; // [rsp+1F0h] [rbp+F0h]
  int v111; // [rsp+1F4h] [rbp+F4h]
  int v112; // [rsp+1F8h] [rbp+F8h]
  int v113; // [rsp+1FCh] [rbp+FCh]
  __int32 v114; // [rsp+200h] [rbp+100h]
  int v115; // [rsp+204h] [rbp+104h]
  int v116; // [rsp+208h] [rbp+108h]
  int v117; // [rsp+20Ch] [rbp+10Ch]
  int v118; // [rsp+210h] [rbp+110h]
  int v119; // [rsp+214h] [rbp+114h]
  int v120; // [rsp+218h] [rbp+118h]
  int v121; // [rsp+21Ch] [rbp+11Ch]
  __int32 v122; // [rsp+220h] [rbp+120h]
  int v123; // [rsp+224h] [rbp+124h]
  __int32 v124; // [rsp+228h] [rbp+128h]
  int v125; // [rsp+22Ch] [rbp+12Ch]
  int v126; // [rsp+230h] [rbp+130h]
  __int32 v127; // [rsp+234h] [rbp+134h]
  __int32 v128; // [rsp+238h] [rbp+138h]
  int v129; // [rsp+23Ch] [rbp+13Ch]
  int v130; // [rsp+240h] [rbp+140h]
  __int32 v131; // [rsp+244h] [rbp+144h]
  int v132; // [rsp+248h] [rbp+148h]
  __int32 v133; // [rsp+24Ch] [rbp+14Ch]

  InactiveFrame = CTopLevelWindow::GetInactiveFrame();
  v3 = 0;
  if ( InactiveFrame )
    v3 = (int)((double)*(int *)(*((_QWORD *)InactiveFrame + 185) + 28LL)
             * *((double *)CDesktopManager::s_pDesktopManagerInstance + 52));
  ShadowMargins = CAccent::GetShadowMargins(&v19, InactiveFrame);
  v20.cxLeftWidth = v5;
  v20.cxRightWidth = 0x7FFFFFFF;
  v20.cyTopHeight = v5;
  v6 = *(__m128i *)ShadowMargins;
  v20.cyBottomHeight = 0x7FFFFFFF;
  v21[0] = v7;
  v21[1] = v3;
  v21[2] = v8;
  v21[3] = v8;
  v21[4] = v5;
  v21[5] = 0x7FFFFFFF;
  v21[6] = 0x7FFFFFFF;
  v21[7] = v3;
  v21[8] = 0x7FFFFFFF;
  v21[9] = v5;
  v21[10] = v5;
  v21[11] = 0x7FFFFFFF;
  v21[12] = v7;
  v21[13] = v3;
  v21[14] = v5;
  v21[15] = 0x7FFFFFFF;
  v22 = v9;
  v23 = v8;
  v24 = v7;
  v25 = 0x7FFFFFFF;
  v26 = 0x7FFFFFFF;
  v27 = v5;
  v28 = v9;
  v29 = v8;
  v30 = v7;
  v31 = 0x7FFFFFFF;
  v32 = v5;
  v33 = 0x7FFFFFFF;
  v34 = 0x7FFFFFFF;
  v35 = v5;
  v36 = v7;
  v37 = v7;
  v38 = v8;
  v39 = v8;
  v40 = 0x7FFFFFFF;
  v41 = v5;
  v42 = 0x7FFFFFFF;
  v43 = v7;
  v44 = 0x7FFFFFFF;
  v45 = v5;
  v46 = 0x7FFFFFFF;
  v47 = v5;
  v48 = v7;
  v49 = v7;
  v50 = v8;
  v51 = v8;
  v52 = v5;
  v53 = 0x7FFFFFFF;
  v54 = 0x7FFFFFFF;
  v55 = v3;
  v56 = v5;
  v57 = 0x7FFFFFFF;
  v58 = v5;
  v59 = 0x7FFFFFFF;
  v60 = v7;
  v61 = v3;
  v62 = v5;
  v63 = v5;
  v64 = v5;
  v65 = 0x7FFFFFFF;
  v66 = 0x7FFFFFFF;
  v67 = v3;
  v68 = 0x7FFFFFFF;
  v69 = v5;
  v70 = v5;
  v71 = 0x7FFFFFFF;
  HIDWORD(ShadowMargins) = v6.m128i_i32[1];
  v76 = v9;
  v114 = v6.m128i_i32[0];
  v82 = v9;
  v106 = v9;
  v10 = v5 - v6.m128i_i32[0];
  v6.m128i_i64[0] = _mm_srli_si128(v6, 8).m128i_u64[0];
  v120 = HIDWORD(ShadowMargins);
  v127 = v6.m128i_i32[0];
  v117 = v5 - HIDWORD(ShadowMargins);
  v133 = v6.m128i_i32[1];
  v123 = v5 - HIDWORD(ShadowMargins);
  v129 = v5 - HIDWORD(ShadowMargins);
  v74 = v5;
  v81 = v5;
  v86 = v5;
  v89 = v5;
  v95 = v5;
  v99 = v5;
  v101 = v5;
  v112 = v5;
  v113 = v5;
  v118 = v5;
  v119 = v5;
  v131 = v5 - v6.m128i_i32[1];
  v72 = v7;
  v73 = v3;
  v75 = 0x7FFFFFFF;
  v77 = v8;
  v78 = v7;
  v79 = 0x7FFFFFFF;
  v80 = 0x7FFFFFFF;
  v83 = v8;
  v84 = v7;
  v85 = 0x7FFFFFFF;
  v87 = 0x7FFFFFFF;
  v88 = 0x7FFFFFFF;
  v90 = v7;
  v91 = v7;
  v92 = v8;
  v93 = v8;
  v94 = 0x7FFFFFFF;
  v96 = 0x7FFFFFFF;
  v97 = v7;
  v98 = 0x7FFFFFFF;
  v100 = 0x7FFFFFFF;
  v102 = v7;
  v103 = v7;
  v104 = v8;
  v105 = v8;
  v107 = v8;
  v108 = 0x7FFFFFFF;
  v109 = 0x7FFFFFFF;
  v110 = v10;
  v111 = 0x7FFFFFFF;
  v115 = 0x7FFFFFFF;
  v116 = 0x7FFFFFFF;
  v121 = 0x7FFFFFFF;
  v122 = v10;
  v124 = v5 - v6.m128i_i32[0];
  v125 = 0x7FFFFFFF;
  v126 = 0x7FFFFFFF;
  v128 = v10;
  v130 = 0x7FFFFFFF;
  v132 = 0x7FFFFFFF;
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 20) )
  {
    v112 = 0;
    v118 = 0;
    v22 = 0;
    v28 = 0;
  }
  if ( !CAccent::_IsShadowPartApplicableFromFlags(this, 21) )
  {
    v113 = 0;
    v119 = 0;
  }
  v11 = v21;
  v12 = 22LL;
  v13 = (CAtlasedImage **)((char *)this + 360);
  v14 = &v20;
  do
  {
    if ( *v13 )
    {
      CAtlasedImage::SetInsetFromParent(*v13, v14);
      if ( *v11 != 0x7FFFFFFF )
      {
        v15 = *v13;
        v18.cx = *v11;
        v18.cy = *((_DWORD *)v15 + 7);
        CAtlasedImage::SetSize((struct tagSIZE *)v15, &v18);
      }
      if ( v11[1] != 0x7FFFFFFF )
      {
        v16 = *v13;
        v19.cxRightWidth = v11[1];
        v19.cxLeftWidth = *((_DWORD *)v16 + 6);
        CAtlasedImage::SetSize((struct tagSIZE *)v16, (const struct tagSIZE *)&v19);
      }
    }
    v14 = (struct _MARGINS *)((char *)v14 + 24);
    ++v13;
    v11 += 6;
    --v12;
  }
  while ( v12 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 43) + 24LL))(*((_QWORD *)this + 43), 4096LL);
  return 0LL;
}
