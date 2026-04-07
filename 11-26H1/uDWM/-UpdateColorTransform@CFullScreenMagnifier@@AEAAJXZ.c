/*
 * XREFs of ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x1800B523C
 * Callers:
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B50C0 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B51B0 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800DE3A4 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateColorTransform(CFullScreenMagnifier *this)
{
  float v1; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm12_4
  float v8; // xmm10_4
  float v9; // xmm13_4
  float v10; // xmm9_4
  float v11; // xmm15_4
  float v12; // xmm11_4
  float v13; // xmm14_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  int v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  float v23; // xmm6_4
  float v24; // xmm1_4
  float v25; // xmm7_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  int v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  int v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm3_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // xmm3_4
  float v42; // xmm1_4
  float v43; // xmm8_4
  float v44; // xmm0_4
  float v45; // xmm5_4
  int v46; // xmm0_4
  float v47; // xmm4_4
  float v48; // xmm6_4
  float v49; // xmm7_4
  float v50; // xmm8_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm3_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  float v56; // xmm3_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm0_4
  float v62; // xmm3_4
  int v63; // xmm2_4
  float v64; // xmm6_4
  float v65; // xmm5_4
  float v66; // xmm4_4
  float v67; // xmm7_4
  float v68; // xmm8_4
  float v69; // xmm3_4
  float v70; // xmm1_4
  float v71; // xmm0_4
  float v72; // xmm2_4
  float v73; // xmm0_4
  float v74; // xmm3_4
  float v75; // xmm3_4
  float v76; // xmm1_4
  float v77; // xmm2_4
  float v78; // xmm0_4
  float v79; // xmm2_4
  float v80; // xmm0_4
  float v81; // xmm3_4
  float v82; // xmm1_4
  float v83; // xmm6_4
  int v84; // xmm2_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm3_4
  float v88; // xmm4_4
  float v89; // xmm5_4
  float v90; // xmm7_4
  float v91; // xmm2_4
  int v92; // xmm7_4
  float v93; // xmm5_4
  float v94; // xmm7_4
  float v95; // xmm5_4
  int v96; // xmm7_4
  float v97; // xmm5_4
  int v98; // xmm7_4
  float v99; // xmm5_4
  float v100; // xmm7_4
  float v101; // xmm5_4
  CVisual *v102; // rcx
  int v103; // eax
  unsigned int v104; // ebx
  int v106[28]; // [rsp+28h] [rbp-E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v1 = *((float *)this + 38);
  v3 = *((float *)this + 39);
  v4 = *((float *)this + 40);
  v5 = *((float *)this + 41);
  v6 = *((float *)this + 42);
  v7 = *((float *)this + 15);
  v8 = *((float *)this + 16);
  v9 = *((float *)this + 26);
  v10 = *((float *)this + 17);
  v11 = *((float *)this + 22);
  v12 = *((float *)this + 27);
  v13 = *((float *)this + 32);
  v14 = *((float *)this + 14) * v1;
  v15 = *((float *)this + 24) * v4;
  *(float *)v106 = (float)((float)((float)((float)(*((float *)this + 18) * v3) + (float)(*((float *)this + 13) * v1))
                                 + (float)(*((float *)this + 23) * v4))
                         + (float)(*((float *)this + 28) * v5))
                 + (float)(*((float *)this + 33) * v6);
  *(float *)&v16 = (float)((float)((float)((float)(*((float *)this + 19) * v3) + v14) + v15)
                         + (float)(*((float *)this + 29) * v5))
                 + (float)(*((float *)this + 34) * v6);
  v17 = *((float *)this + 25) * v4;
  v106[1] = v16;
  *(float *)&v106[2] = (float)((float)((float)((float)(*((float *)this + 20) * v3) + (float)(v7 * v1)) + v17)
                             + (float)(*((float *)this + 30) * v5))
                     + (float)(*((float *)this + 35) * v6);
  *(float *)&v106[3] = (float)((float)((float)((float)(*((float *)this + 21) * v3) + (float)(v8 * v1)) + (float)(v9 * v4))
                             + (float)(*((float *)this + 31) * v5))
                     + (float)(*((float *)this + 36) * v6);
  v18 = (float)((float)(v11 * v3) + (float)(v10 * v1)) + (float)(v12 * v4);
  v19 = *((float *)this + 43);
  v20 = *((float *)this + 44);
  v21 = *((float *)this + 47);
  v22 = v13 * v5;
  v23 = *((float *)this + 45);
  v24 = *((float *)this + 37) * v6;
  v25 = *((float *)this + 46);
  v26 = v18 + v22;
  v27 = *((float *)this + 19) * v20;
  v28 = v19 * *((float *)this + 13);
  *(float *)&v29 = v26 + v24;
  v30 = v23 * *((float *)this + 23);
  v106[4] = v29;
  v31 = (float)(*((float *)this + 18) * v20) + v28;
  v32 = v27 + (float)(v19 * *((float *)this + 14));
  v33 = v25 * *((float *)this + 29);
  *(float *)&v34 = (float)((float)(v31 + v30) + (float)(v25 * *((float *)this + 28)))
                 + (float)(v21 * *((float *)this + 33));
  v35 = v23 * *((float *)this + 24);
  v106[5] = v34;
  v36 = (float)(v32 + v35) + v33;
  v37 = v25 * *((float *)this + 30);
  v38 = (float)((float)(*((float *)this + 20) * v20) + (float)(v19 * v7)) + (float)(v23 * *((float *)this + 25));
  *(float *)&v106[6] = v36 + (float)(v21 * *((float *)this + 34));
  v39 = v38 + v37;
  v40 = v25 * *((float *)this + 31);
  v41 = (float)((float)(*((float *)this + 21) * v20) + (float)(v19 * v8)) + (float)(v23 * v9);
  *(float *)&v106[7] = v39 + (float)(v21 * *((float *)this + 35));
  v42 = v21;
  v43 = v21 * *((float *)this + 37);
  *(float *)&v106[8] = (float)(v41 + v40) + (float)(v42 * *((float *)this + 36));
  v44 = (float)((float)((float)(v11 * v20) + (float)(v19 * v10)) + (float)(v23 * v12)) + (float)(v25 * v13);
  v45 = *((float *)this + 48);
  *(float *)&v46 = v44 + v43;
  v47 = *((float *)this + 49);
  v48 = *((float *)this + 50);
  v49 = *((float *)this + 51);
  v50 = *((float *)this + 52);
  v51 = *((float *)this + 18);
  v52 = *((float *)this + 23);
  v53 = *((float *)this + 19);
  v106[9] = v46;
  v54 = *((float *)this + 29) * v49;
  v55 = (float)((float)(v53 * v47) + (float)(*((float *)this + 14) * v45)) + (float)(*((float *)this + 24) * v48);
  *(float *)&v106[10] = (float)((float)((float)((float)(v51 * v47) + (float)(*((float *)this + 13) * v45))
                                      + (float)(v52 * v48))
                              + (float)(*((float *)this + 28) * v49))
                      + (float)(*((float *)this + 33) * v50);
  v56 = v55 + v54;
  v57 = *((float *)this + 25) * v48;
  v58 = (float)(*((float *)this + 20) * v47) + (float)(v7 * v45);
  v59 = *((float *)this + 30) * v49;
  *(float *)&v106[11] = v56 + (float)(*((float *)this + 34) * v50);
  v60 = (float)(v58 + v57) + v59;
  v61 = *((float *)this + 31) * v49;
  v62 = (float)((float)(*((float *)this + 21) * v47) + (float)(v8 * v45)) + (float)(v9 * v48);
  *(float *)&v106[12] = v60 + (float)(*((float *)this + 35) * v50);
  *(float *)&v106[13] = (float)(v62 + v61) + (float)(*((float *)this + 36) * v50);
  *(float *)&v63 = (float)((float)((float)((float)(v11 * v47) + (float)(v10 * v45)) + (float)(v12 * v48))
                         + (float)(v13 * v49))
                 + (float)(*((float *)this + 37) * v50);
  v64 = *((float *)this + 55);
  v65 = *((float *)this + 53);
  v66 = *((float *)this + 54);
  v67 = *((float *)this + 56);
  v68 = *((float *)this + 57);
  v69 = *((float *)this + 19);
  v70 = *((float *)this + 23) * v64;
  v71 = *((float *)this + 13) * v65;
  v106[14] = v63;
  v72 = (float)(*((float *)this + 18) * v66) + v71;
  v73 = *((float *)this + 29) * v67;
  v74 = (float)((float)(v69 * v66) + (float)(*((float *)this + 14) * v65)) + (float)(*((float *)this + 24) * v64);
  *(float *)&v106[15] = (float)((float)(v72 + v70) + (float)(*((float *)this + 28) * v67))
                      + (float)(*((float *)this + 33) * v68);
  v75 = v74 + v73;
  v76 = *((float *)this + 25) * v64;
  v77 = (float)(*((float *)this + 20) * v66) + (float)(v7 * v65);
  v78 = *((float *)this + 30) * v67;
  *(float *)&v106[16] = v75 + (float)(*((float *)this + 34) * v68);
  v79 = (float)(v77 + v76) + v78;
  v80 = *((float *)this + 31) * v67;
  v81 = (float)((float)(*((float *)this + 21) * v66) + (float)(v8 * v65)) + (float)(v9 * v64);
  *(float *)&v106[17] = v79 + (float)(*((float *)this + 35) * v68);
  v82 = v12 * v64;
  v83 = *((float *)this + 37);
  *(float *)&v106[18] = (float)(v81 + v80) + (float)(*((float *)this + 36) * v68);
  *(float *)&v84 = (float)((float)((float)((float)(v11 * v66) + (float)(v10 * v65)) + v82) + (float)(v13 * v67))
                 + (float)(v83 * v68);
  v85 = *((float *)this + 58);
  v86 = *((float *)this + 59);
  v87 = *((float *)this + 61);
  v88 = *((float *)this + 62);
  v89 = *((float *)this + 13) * v85;
  v90 = *((float *)this + 18) * v86;
  v106[19] = v84;
  v91 = *((float *)this + 60);
  *(float *)&v92 = (float)((float)((float)(v90 + v89) + (float)(*((float *)this + 23) * v91))
                         + (float)(*((float *)this + 28) * v87))
                 + (float)(*((float *)this + 33) * v88);
  v93 = *((float *)this + 14) * v85;
  v106[20] = v92;
  v94 = (float)((float)(*((float *)this + 19) * v86) + v93) + (float)(*((float *)this + 24) * v91);
  v95 = *((float *)this + 29) * v87;
  *(float *)&v106[24] = (float)((float)((float)((float)(v11 * v86) + (float)(v10 * v85)) + (float)(v12 * v91))
                              + (float)(v13 * v87))
                      + (float)(v83 * v88);
  *(float *)&v96 = (float)(v94 + v95) + (float)(*((float *)this + 34) * v88);
  v97 = *((float *)this + 25) * v91;
  v106[21] = v96;
  *(float *)&v98 = (float)((float)((float)((float)(*((float *)this + 20) * v86) + (float)(v7 * v85)) + v97)
                         + (float)(*((float *)this + 30) * v87))
                 + (float)(*((float *)this + 35) * v88);
  v99 = *((float *)this + 31) * v87;
  v106[22] = v98;
  v100 = (float)((float)((float)(*((float *)this + 21) * v86) + (float)(v8 * v85)) + (float)(v9 * v91)) + v99;
  v101 = *((float *)this + 36);
  v102 = (CVisual *)*((_QWORD *)this + 2);
  *(float *)&v106[23] = v100 + (float)(v101 * v88);
  v103 = CVisual::SetColorTransform(v102, (const struct MilColorTransform *)v106);
  v104 = v103;
  if ( v103 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (int)"clientcore\\windows\\dwm\\udwm\\fullscreenmagnifier.cpp",
      (const char *)(unsigned int)v103);
    return v104;
  }
}
