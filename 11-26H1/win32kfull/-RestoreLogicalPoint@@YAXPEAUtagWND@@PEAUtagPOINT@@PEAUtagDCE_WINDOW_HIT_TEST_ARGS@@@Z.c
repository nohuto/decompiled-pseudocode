/*
 * XREFs of ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008F290
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008F290 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 * Callees:
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008F290 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x14008FA04 (-IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z.c)
 *     ?DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z @ 0x14008FA50 (-DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z.c)
 */

void __fastcall RestoreLogicalPoint(struct tagWND *a1, struct tagPOINT *a2, struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  __int64 v3; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r10
  __m128i v10; // xmm0
  const struct _SUBPIXELS *v11; // r11
  __m128i v12; // xmm3
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm11_4
  float v19; // xmm14_4
  float v20; // xmm9_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm12_4
  float v24; // xmm15_4
  float v25; // xmm13_4
  float v26; // xmm5_4
  unsigned int v27; // r9d
  char v28; // r8
  float v29; // xmm4_4
  float v30; // xmm5_4
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  float v35; // xmm7_4
  float v36; // xmm0_4
  float v37; // xmm5_4
  float v38; // xmm0_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  float v41; // xmm5_4
  float v42; // xmm6_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // [rsp+20h] [rbp-E0h]
  float v47; // [rsp+24h] [rbp-DCh]
  float v48; // [rsp+28h] [rbp-D8h]
  float v49; // [rsp+2Ch] [rbp-D4h]
  float v50; // [rsp+2Ch] [rbp-D4h]
  float v51; // [rsp+30h] [rbp-D0h]
  float v52; // [rsp+30h] [rbp-D0h]
  float v53; // [rsp+34h] [rbp-CCh]
  float v54; // [rsp+34h] [rbp-CCh]
  float v55; // [rsp+38h] [rbp-C8h]
  float v56; // [rsp+38h] [rbp-C8h]
  float v57; // [rsp+3Ch] [rbp-C4h]
  float v58; // [rsp+3Ch] [rbp-C4h]
  float v59; // [rsp+40h] [rbp-C0h]
  float v60; // [rsp+40h] [rbp-C0h]
  float v61; // [rsp+44h] [rbp-BCh]
  float v62; // [rsp+44h] [rbp-BCh]
  float v63; // [rsp+58h] [rbp-A8h]
  float v64; // [rsp+5Ch] [rbp-A4h]
  float v65; // [rsp+60h] [rbp-A0h]
  float v66; // [rsp+64h] [rbp-9Ch]
  float v67; // [rsp+70h] [rbp-90h] BYREF
  float v68[5]; // [rsp+74h] [rbp-8Ch]
  __int64 v69; // [rsp+88h] [rbp-78h]
  float v70; // [rsp+90h] [rbp-70h]
  float v71; // [rsp+94h] [rbp-6Ch]
  float v72; // [rsp+98h] [rbp-68h]
  float v73; // [rsp+9Ch] [rbp-64h]
  __int64 v74; // [rsp+A8h] [rbp-58h]
  float v75; // [rsp+B0h] [rbp-50h]
  float v76; // [rsp+B4h] [rbp-4Ch]
  float v77; // [rsp+B8h] [rbp-48h]
  float v78; // [rsp+BCh] [rbp-44h]
  int v79; // [rsp+C8h] [rbp-38h]
  int v80; // [rsp+CCh] [rbp-34h]
  float v81; // [rsp+D0h] [rbp-30h]
  float v82; // [rsp+D4h] [rbp-2Ch]
  float v83; // [rsp+D8h] [rbp-28h]
  float v84; // [rsp+DCh] [rbp-24h]
  int v85; // [rsp+E8h] [rbp-18h]
  int v86; // [rsp+ECh] [rbp-14h]
  float v87; // [rsp+F0h] [rbp-10h]
  float v88; // [rsp+F4h] [rbp-Ch]
  float v89; // [rsp+F8h] [rbp-8h]
  float v90; // [rsp+FCh] [rbp-4h]
  int v91; // [rsp+108h] [rbp+8h]
  int v92; // [rsp+10Ch] [rbp+Ch]
  float v93; // [rsp+110h] [rbp+10h]
  float v94; // [rsp+114h] [rbp+14h]
  float v95; // [rsp+118h] [rbp+18h]
  float v96; // [rsp+11Ch] [rbp+1Ch]
  __int64 v97; // [rsp+128h] [rbp+28h]

  if ( a1 )
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( !v3 || (v7 = *(_QWORD *)(v3 + 8)) == 0 || a1 != *(struct tagWND **)(v7 + 24) )
    {
      RestoreLogicalPoint(*((struct tagWND **)a1 + 13), a2, a3);
      if ( *((_QWORD *)a1 + 27) )
      {
        if ( (*((_DWORD *)a3 + 8) & 2) == 0 && !IsCompositionInputWindowForHitTest(a1) )
        {
          v8 = *((_QWORD *)a1 + 27);
          v9 = *((_QWORD *)a1 + 5);
          v10 = _mm_cvtsi32_si128(a2->x);
          v11 = (const struct _SUBPIXELS *)*((_QWORD *)a3 + 5);
          v12 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 100));
          v13 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 88));
          v14 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 92));
          v69 = 0LL;
          v74 = 1065353216LL;
          v79 = 0;
          v80 = 1065353216;
          v15 = *(float *)(v8 + 40);
          LODWORD(v63) = _mm_cvtepi32_ps(v10).m128_u32[0];
          *(float *)v10.m128i_i32 = (float)a2->y;
          v85 = 1065353216;
          v86 = 1065353216;
          v91 = 0;
          v92 = 1065353216;
          v16 = *(float *)(v8 + 56);
          v66 = *(float *)v10.m128i_i32;
          v17 = *(float *)v8;
          v51 = *(float *)(v8 + 16);
          v18 = *(float *)(v8 + 8);
          *(float *)v13.m128i_i32 = _mm_cvtepi32_ps(v13).m128_f32[0];
          v97 = 1065353216LL;
          *(float *)v14.m128i_i32 = _mm_cvtepi32_ps(v14).m128_f32[0];
          v49 = v17;
          v64 = _mm_cvtepi32_ps(v12).m128_f32[0];
          v47 = *(float *)(v8 + 32);
          v46 = *(float *)(v8 + 48);
          v55 = *(float *)(v8 + 20);
          v48 = *(float *)(v8 + 52);
          v19 = *(float *)(v8 + 36);
          v59 = *(float *)(v8 + 24);
          v10.m128i_i32[0] = *(_DWORD *)(v8 + 28);
          v53 = *(float *)(v8 + 4);
          v57 = v18;
          v61 = *(float *)(v8 + 12);
          v20 = v17 * *(float *)v13.m128i_i32;
          v21 = v53 * *(float *)v13.m128i_i32;
          v22 = v18 * *(float *)v13.m128i_i32;
          v23 = v61 * *(float *)v13.m128i_i32;
          v24 = *(float *)(v8 + 44);
          v65 = *(float *)(v8 + 60);
          v25 = (float)*(int *)(v9 + 96);
          *(float *)v12.m128i_i32 = v51 * *(float *)v14.m128i_i32;
          v26 = v59 * *(float *)v14.m128i_i32;
          v67 = (float)((float)(v20 + (float)(v51 * *(float *)v14.m128i_i32)) + v47) + v46;
          v68[0] = (float)((float)((float)(v53 * *(float *)v13.m128i_i32) + (float)(v55 * *(float *)v14.m128i_i32)) + v19)
                 + v48;
          v68[1] = (float)((float)(v22 + (float)(v59 * *(float *)v14.m128i_i32)) + v15) + v16;
          v68[2] = (float)((float)((float)(v61 * *(float *)v13.m128i_i32)
                                 + (float)(*(float *)v10.m128i_i32 * *(float *)v14.m128i_i32))
                         + v24)
                 + v65;
          v50 = v49 * v25;
          v54 = v53 * v25;
          v58 = v57 * v25;
          v62 = v61 * v25;
          v52 = v51 * v64;
          v60 = v59 * v64;
          v70 = (float)((float)(v50 + *(float *)v12.m128i_i32) + v47) + v46;
          v71 = (float)((float)(v54 + (float)(v55 * *(float *)v14.m128i_i32)) + v19) + v48;
          v72 = (float)((float)(v58 + v26) + v15) + v16;
          v56 = v55 * v64;
          v73 = (float)((float)(v62 + (float)(*(float *)v10.m128i_i32 * *(float *)v14.m128i_i32)) + v24) + v65;
          v75 = (float)((float)(v52 + v20) + v47) + v46;
          v77 = (float)((float)(v60 + v22) + v15) + v16;
          v78 = (float)((float)((float)(*(float *)v10.m128i_i32 * v64) + v23) + v24) + v65;
          v76 = (float)((float)(v56 + v21) + v19) + v48;
          v27 = 0;
          v88 = v76;
          v81 = (float)((float)(v52 + v50) + v47) + v46;
          v89 = v77;
          v93 = v70;
          v94 = v71;
          v83 = (float)((float)(v60 + v58) + v15) + v16;
          v84 = (float)((float)((float)(*(float *)v10.m128i_i32 * v64) + v62) + v24) + v65;
          v87 = v75;
          v90 = v78;
          v95 = v72;
          v96 = v73;
          v82 = (float)((float)(v56 + v54) + v19) + v48;
          while ( 1 )
          {
            if ( v27 >= 2 )
              return;
            v28 = 0;
            v29 = v68[24 * v27];
            v30 = *(&v71 + 24 * v27);
            if ( v29 == v30 && v29 == v66 && v63 >= v68[24 * v27 - 1] && *(&v70 + 24 * v27) >= v63 )
            {
LABEL_28:
              DCEInverseTransform(
                (const struct tagRECT *)(v9 + 88),
                (const struct _D3DVERTEX *)&v68[24 * v27 - 1],
                v11,
                a2);
              return;
            }
            v31 = -1;
            v32 = -1;
            if ( (float)(v29 - v66) >= 0.0 )
              v31 = 1;
            if ( (float)(v30 - v66) >= 0.0 )
              v32 = 1;
            if ( v31 != v32 )
              break;
LABEL_18:
            v33 = -1;
            if ( (float)(*(&v76 + 24 * v27) - v66) >= 0.0 )
              v33 = 1;
            if ( v31 != v33 )
            {
              v37 = *(&v70 + 24 * v27) - v63;
              v38 = *(&v75 + 24 * v27) - v63;
              if ( v37 > 0.0 )
              {
                if ( v38 > 0.0 )
                  goto LABEL_36;
                goto LABEL_46;
              }
              if ( v38 > 0.0 )
              {
LABEL_46:
                v42 = *(&v71 + 24 * v27);
                v43 = *(&v76 + 24 * v27) - v42;
                if ( COERCE_FLOAT(LODWORD(v43) & _xmm) > 0.00000011920929
                  && (float)(v37
                           - (float)((float)((float)(*(&v75 + 24 * v27) - *(&v70 + 24 * v27)) * (float)(v42 - v66)) / v43)) > 0.0 )
                {
LABEL_36:
                  ++v28;
                }
              }
              v31 = v33;
            }
            v34 = -1;
            if ( (float)(v68[24 * v27] - v66) >= 0.0 )
              v34 = 1;
            if ( v31 != v34 )
            {
              v39 = *(&v75 + 24 * v27) - v63;
              v40 = v68[24 * v27 - 1] - v63;
              if ( v39 <= 0.0 )
              {
                if ( v40 <= 0.0 )
                  goto LABEL_24;
              }
              else if ( v40 > 0.0 )
              {
                goto LABEL_40;
              }
              v44 = *(&v76 + 24 * v27);
              v45 = v68[24 * v27] - v44;
              if ( COERCE_FLOAT(LODWORD(v45) & _xmm) > 0.00000011920929
                && (float)(v39
                         - (float)((float)((float)(v44 - v66) * (float)(v68[24 * v27 - 1] - *(&v75 + 24 * v27))) / v45)) > 0.0 )
              {
LABEL_40:
                ++v28;
              }
            }
LABEL_24:
            if ( (v28 & 1) != 0 )
              goto LABEL_28;
            ++v27;
          }
          v35 = v68[24 * v27 - 1] - v63;
          v36 = *(&v70 + 24 * v27) - v63;
          if ( v35 <= 0.0 )
          {
            if ( v36 <= 0.0 )
              goto LABEL_33;
          }
          else if ( v36 > 0.0 )
          {
LABEL_32:
            v28 = 1;
LABEL_33:
            v31 = v32;
            goto LABEL_18;
          }
          v41 = v30 - v29;
          if ( COERCE_FLOAT(LODWORD(v41) & _xmm) <= 0.00000011920929
            || (float)(v35 - (float)((float)((float)(*(&v70 + 24 * v27) - v68[24 * v27 - 1]) * (float)(v29 - v66)) / v41)) <= 0.0 )
          {
            goto LABEL_33;
          }
          goto LABEL_32;
        }
      }
    }
  }
}
