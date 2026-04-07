/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18002DAF8
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18002D6B0 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z @ 0x18002E21C (-Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z.c)
 *     ?Multiply@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@M@Z @ 0x18002E2A4 (-Multiply@CTouchDragVisualHelper@@SA-AUD2D_POINT_3F@@PEBU2@M@Z.c)
 *     ?Add@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@PEBUD2D_VECTOR_3F@@@Z @ 0x18002E2D4 (-Add@CTouchDragVisualHelper@@SA-AUD2D_POINT_3F@@PEBU2@PEBUD2D_VECTOR_3F@@@Z.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x18002E458 (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

void __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(__int64 *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int i; // ebx
  __int64 v6; // r9
  __int64 v7; // rax
  __int128 *v8; // r8
  __int128 v9; // xmm0
  __m128i v10; // xmm3
  __int64 v11; // r9
  __int128 *v12; // rdx
  __int64 v13; // xmm1_8
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rax
  __m128i v18; // xmm2
  __int64 v19; // xmm0_8
  int v20; // r15d
  float v21; // xmm9_4
  float v22; // xmm11_4
  __int64 v23; // rax
  __int64 v24; // xmm3_8
  __int64 v25; // rax
  __int64 v26; // xmm3_8
  __int64 v27; // rax
  __int64 v28; // xmm3_8
  __int64 v29; // rax
  __int64 v30; // xmm3_8
  __int64 v31; // rax
  __int64 v32; // xmm2_8
  __int64 v33; // rax
  __int64 v34; // xmm2_8
  __int64 v35; // rax
  __int64 v36; // xmm6_8
  __int64 v37; // rax
  __int64 v38; // xmm3_8
  __int64 v39; // rax
  __int64 v40; // xmm3_8
  __int64 v41; // rax
  __int64 v42; // xmm3_8
  __int64 v43; // rax
  __int64 v44; // xmm3_8
  __int64 v45; // rax
  __int64 v46; // xmm2_8
  __int64 v47; // rax
  __int64 v48; // xmm2_8
  __int64 v49; // rax
  __int64 v50; // xmm2_8
  __int64 v51; // rax
  unsigned int v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // r10d
  __int64 MidPoint; // rax
  __int128 v57; // xmm1
  __int64 v58; // xmm0_8
  __m128i *v59; // rax
  __int64 v60; // xmm0_8
  __int64 v61; // rax
  __int128 v62; // xmm0
  __int64 v63; // xmm1_8
  __m128i *v64; // rax
  __int64 v65; // xmm0_8
  __int32 v66; // eax
  __int64 v67; // rax
  __int128 v68; // xmm1
  __int64 v69; // xmm0_8
  __int64 v70; // xmm0_8
  __int64 v71; // xmm1_8
  int v72; // eax
  __int128 v73; // xmm0
  int v74; // eax
  __m128i v75; // xmm0
  __int64 v76; // xmm1_8
  __int64 v77; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v78; // [rsp+40h] [rbp-C8h]
  __int64 v79; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v80; // [rsp+50h] [rbp-B8h]
  __int64 v81; // [rsp+58h] [rbp-B0h] BYREF
  int v82; // [rsp+60h] [rbp-A8h]
  _BYTE v83[32]; // [rsp+68h] [rbp-A0h] BYREF
  char v84[16]; // [rsp+88h] [rbp-80h] BYREF
  char v85[16]; // [rsp+98h] [rbp-70h] BYREF
  char v86[16]; // [rsp+A8h] [rbp-60h] BYREF
  char v87[16]; // [rsp+B8h] [rbp-50h] BYREF
  char v88[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v89[16]; // [rsp+D8h] [rbp-30h] BYREF
  char v90[16]; // [rsp+E8h] [rbp-20h] BYREF
  char v91[16]; // [rsp+F8h] [rbp-10h] BYREF
  char v92[16]; // [rsp+108h] [rbp+0h] BYREF
  char v93[16]; // [rsp+118h] [rbp+10h] BYREF
  char v94[16]; // [rsp+128h] [rbp+20h] BYREF
  char v95[16]; // [rsp+138h] [rbp+30h] BYREF
  char v96[16]; // [rsp+148h] [rbp+40h] BYREF
  char v97[16]; // [rsp+158h] [rbp+50h] BYREF
  __m128i v98; // [rsp+168h] [rbp+60h] BYREF
  struct D2D_VECTOR_3F v99; // [rsp+178h] [rbp+70h] BYREF
  __int64 v100; // [rsp+188h] [rbp+80h] BYREF
  int v101; // [rsp+190h] [rbp+88h]
  __int64 v102; // [rsp+198h] [rbp+90h] BYREF
  int v103; // [rsp+1A0h] [rbp+98h]
  __int64 v104; // [rsp+1A8h] [rbp+A0h] BYREF
  int v105; // [rsp+1B0h] [rbp+A8h]
  __int128 v106; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v107; // [rsp+1C8h] [rbp+C0h]
  int v108; // [rsp+1D0h] [rbp+C8h]
  __int128 v109; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v110; // [rsp+1E8h] [rbp+E0h]
  int v111; // [rsp+1F0h] [rbp+E8h]
  __m128i v112; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v113; // [rsp+208h] [rbp+100h]
  int v114; // [rsp+210h] [rbp+108h]
  __m128i v115; // [rsp+218h] [rbp+110h] BYREF
  __int64 v116; // [rsp+228h] [rbp+120h]
  __int32 v117; // [rsp+230h] [rbp+128h]
  __int128 v118; // [rsp+238h] [rbp+130h] BYREF
  __int64 v119; // [rsp+248h] [rbp+140h]
  int v120; // [rsp+250h] [rbp+148h]

  v2 = *((_DWORD *)a1 + 6);
  *(_DWORD *)(a2 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a2, 0x1Cu);
  for ( i = 0; i < v2; i += 2 )
  {
    v6 = *a1;
    if ( i + 4 > v2 )
    {
      v55 = i + 1;
      if ( i )
      {
        MidPoint = CTouchDragVisualHelper::GetMidPoint(v83, v6 + 28LL * i, v6 + 28LL * v55);
        v57 = *(_OWORD *)MidPoint;
        v58 = *(_QWORD *)(MidPoint + 16);
        v120 = *(_DWORD *)(MidPoint + 24);
        v59 = (__m128i *)&v118;
        v118 = v57;
        v119 = v58;
      }
      else
      {
        v75 = *(__m128i *)v6;
        v99.z = *(FLOAT *)(v6 + 24);
        v59 = &v98;
        v76 = *(_QWORD *)(v6 + 16);
        v98 = v75;
        *(_QWORD *)&v99.x = v76;
      }
      v60 = v59[1].m128i_i64[0];
      v10 = *v59;
      v117 = v59[1].m128i_i32[2];
      v61 = 28LL * v55;
      v116 = v60;
      v115 = v10;
      v62 = *(_OWORD *)(v61 + v6);
      v63 = *(_QWORD *)(v61 + v6 + 16);
      v108 = *(_DWORD *)(v61 + v6 + 24);
      v107 = v63;
      v106 = v62;
      if ( i + 3 <= v2 )
        v64 = (__m128i *)(v6 + 28LL * (i + 2));
      else
        v64 = (__m128i *)&v106;
      v18 = *v64;
      v65 = v64[1].m128i_i64[0];
      v66 = v64[1].m128i_i32[2];
      v112 = v18;
      v114 = v66;
      v113 = v65;
      v67 = CTouchDragVisualHelper::GetMidPoint(v83, &v106, &v112);
      i = v2;
      v68 = *(_OWORD *)v67;
      v69 = *(_QWORD *)(v67 + 16);
      LODWORD(v67) = *(_DWORD *)(v67 + 24);
      v109 = v68;
      v111 = v67;
      v110 = v69;
    }
    else
    {
      if ( i )
      {
        v7 = CTouchDragVisualHelper::GetMidPoint(v83, v6 + 28LL * i, v6 + 28LL * (i + 1));
        v107 = *((_QWORD *)v8 + 2);
        v116 = *(_QWORD *)(v7 + 16);
        v9 = *v8;
        v10 = *(__m128i *)v7;
        v12 = (__int128 *)(v11 + 28LL * (i + 2));
        v117 = *(_DWORD *)(v7 + 24);
        LODWORD(v7) = *((_DWORD *)v8 + 6);
        v13 = *((_QWORD *)v12 + 2);
        v106 = v9;
        v14 = *v12;
        v108 = v7;
        v15 = *((_DWORD *)v12 + 6);
        v16 = v11 + 28LL * (i + 3);
      }
      else
      {
        v70 = *(_QWORD *)(v6 + 16);
        v16 = v6 + 84;
        v12 = &v109;
        v71 = *(_QWORD *)(v6 + 44);
        v10 = *(__m128i *)v6;
        v117 = *(_DWORD *)(v6 + 24);
        v72 = *(_DWORD *)(v6 + 52);
        v116 = v70;
        v73 = *(_OWORD *)(v6 + 28);
        v108 = v72;
        v15 = *(_DWORD *)(v6 + 80);
        v106 = v73;
        v14 = *(_OWORD *)(v6 + 56);
        v107 = v71;
        v13 = *(_QWORD *)(v6 + 72);
      }
      v110 = v13;
      v115 = v10;
      v111 = v15;
      v109 = v14;
      v17 = CTouchDragVisualHelper::GetMidPoint(v83, v12, v16);
      v18 = *(__m128i *)v17;
      v19 = *(_QWORD *)(v17 + 16);
      LODWORD(v17) = *(_DWORD *)(v17 + 24);
      v112 = v18;
      v114 = v17;
      v113 = v19;
    }
    v20 = _mm_cvtsi128_si32(v18);
    v21 = 0.0;
    v22 = (float)(_mm_cvtsi128_si32(v10) - v20);
    do
    {
      *(_QWORD *)&v99.x = 0LL;
      v99.z = 0.0;
      v98 = 0LL;
      v23 = CTouchDragVisualHelper::Multiply(v84, (char *)v115.m128i_i64 + 4);
      v24 = *(_QWORD *)v23;
      LODWORD(v23) = *(_DWORD *)(v23 + 8);
      v81 = v24;
      v82 = v23;
      v25 = CTouchDragVisualHelper::Multiply(v85, (char *)&v106 + 4);
      v26 = *(_QWORD *)v25;
      v101 = *(_DWORD *)(v25 + 8);
      v100 = v26;
      v27 = CTouchDragVisualHelper::Multiply(v86, (char *)&v109 + 4);
      v28 = *(_QWORD *)v27;
      LODWORD(v27) = *(_DWORD *)(v27 + 8);
      v102 = v28;
      v103 = v27;
      v29 = CTouchDragVisualHelper::Multiply(v87, (char *)v112.m128i_i64 + 4);
      v30 = *(_QWORD *)v29;
      LODWORD(v29) = *(_DWORD *)(v29 + 8);
      v104 = v30;
      v105 = v29;
      v31 = CTouchDragVisualHelper::Add(v88, &v81, &v100);
      v32 = *(_QWORD *)v31;
      LODWORD(v31) = *(_DWORD *)(v31 + 8);
      v79 = v32;
      LODWORD(v80) = v31;
      v33 = CTouchDragVisualHelper::Add(v89, &v79, &v102);
      v34 = *(_QWORD *)v33;
      LODWORD(v33) = *(_DWORD *)(v33 + 8);
      v79 = v34;
      LODWORD(v80) = v33;
      v35 = CTouchDragVisualHelper::Add(v90, &v79, &v104);
      v36 = *(_QWORD *)v35;
      LODWORD(v80) = *(_DWORD *)(v35 + 8);
      v37 = CTouchDragVisualHelper::Multiply(v91, (char *)v115.m128i_i64 + 4);
      v38 = *(_QWORD *)v37;
      v82 = *(_DWORD *)(v37 + 8);
      v81 = v38;
      v39 = CTouchDragVisualHelper::Multiply(v92, (char *)&v106 + 4);
      v40 = *(_QWORD *)v39;
      LODWORD(v39) = *(_DWORD *)(v39 + 8);
      v100 = v40;
      v101 = v39;
      v41 = CTouchDragVisualHelper::Multiply(v93, (char *)&v109 + 4);
      v42 = *(_QWORD *)v41;
      v103 = *(_DWORD *)(v41 + 8);
      v102 = v42;
      v43 = CTouchDragVisualHelper::Multiply(v94, (char *)v112.m128i_i64 + 4);
      v44 = *(_QWORD *)v43;
      LODWORD(v43) = *(_DWORD *)(v43 + 8);
      v104 = v44;
      v105 = v43;
      v45 = CTouchDragVisualHelper::Add(v95, &v81, &v100);
      v46 = *(_QWORD *)v45;
      LODWORD(v45) = *(_DWORD *)(v45 + 8);
      v77 = v46;
      LODWORD(v78) = v45;
      v47 = CTouchDragVisualHelper::Add(v96, &v77, &v102);
      v48 = *(_QWORD *)v47;
      LODWORD(v47) = *(_DWORD *)(v47 + 8);
      v77 = v48;
      LODWORD(v78) = v47;
      v49 = CTouchDragVisualHelper::Add(v97, &v77, &v104);
      v50 = *(_QWORD *)v49;
      LODWORD(v49) = *(_DWORD *)(v49 + 8);
      v99.z = 0.0;
      v77 = v50;
      LODWORD(v99.x) = HIDWORD(v50) ^ _xmm;
      LODWORD(v99.y) = v50;
      *(float *)&v98.m128i_i32[3] = FLOAT_0_5;
      LODWORD(v78) = v49;
      *(__int64 *)((char *)v98.m128i_i64 + 4) = v36;
      CTouchDragVisualHelper::Normalize(&v99);
      v98.m128i_i32[0] = v20 + (int)(float)(v22 * (float)(1.0 - v21));
      v51 = *(unsigned int *)(a2 + 24);
      v52 = v51 + 1;
      if ( (int)v51 + 1 < (unsigned int)v51 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
      }
      else if ( v52 > *(_DWORD *)(a2 + 20) )
      {
        v74 = DynArrayImpl<0>::AddMultipleAndSet(a2, 28, 1, &v98);
        if ( v74 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, 0xBEu, 0LL);
      }
      else
      {
        v53 = *(_QWORD *)a2;
        v54 = 28 * v51;
        *(__m128i *)(v54 + v53) = v98;
        *(struct D2D_VECTOR_3F *)(v54 + v53 + 16) = v99;
        *(_DWORD *)(a2 + 24) = v52;
      }
      v21 = v21 + 0.2;
    }
    while ( v21 < 1.0 );
  }
}
