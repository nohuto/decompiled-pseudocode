/*
 * XREFs of ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18000A800
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18000B040 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void __fastcall Mesh::GenerateGeometryForRectangle(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v5; // xmm2_4
  int v6; // r8d
  char v7; // al
  int v8; // xmm1_4
  int v9; // xmm0_4
  __int64 v10; // r15
  int v11; // eax
  int v12; // edi
  int v13; // esi
  int v14; // ebx
  int v15; // eax
  int v16; // r14d
  int v17; // r8d
  float v18; // xmm8_4
  float v19; // xmm4_4
  float v20; // xmm9_4
  int v21; // ebx
  int v22; // ebx
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm11_4
  float v26; // xmm7_4
  float v27; // xmm12_4
  int v28; // r14d
  float v29; // xmm10_4
  float v30; // xmm13_4
  int v31; // edi
  int v32; // edi
  float v33; // xmm2_4
  float v34; // xmm2_4
  float v35; // xmm14_4
  float v36; // xmm3_4
  float v37; // xmm15_4
  int v38; // esi
  int v39; // esi
  int *v40; // rcx
  __int64 v41; // rax
  int *v42; // rcx
  __int64 v43; // rax
  int *v44; // rcx
  __int64 v45; // rax
  int *v46; // rcx
  __int64 v47; // rax
  int *v48; // rcx
  __int64 v49; // rax
  int *v50; // rcx
  __int64 v51; // rax
  int *v52; // rcx
  __int64 v53; // rax
  int *v54; // rax
  int v55; // [rsp+20h] [rbp-E0h] BYREF
  int v56; // [rsp+24h] [rbp-DCh] BYREF
  int v57; // [rsp+28h] [rbp-D8h]
  int v58; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v59[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v60; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+48h] [rbp-B8h]
  _DWORD *v62; // [rsp+50h] [rbp-B0h]
  __m128i *p_si128; // [rsp+58h] [rbp-A8h]
  char *v64; // [rsp+60h] [rbp-A0h]
  char *v65; // [rsp+68h] [rbp-98h]
  int v66; // [rsp+70h] [rbp-90h]
  char v67; // [rsp+74h] [rbp-8Ch]
  char v68; // [rsp+75h] [rbp-8Bh]
  char v69[8]; // [rsp+80h] [rbp-80h] BYREF
  float v70; // [rsp+88h] [rbp-78h]
  float v71; // [rsp+8Ch] [rbp-74h]
  int v72; // [rsp+90h] [rbp-70h]
  float v73; // [rsp+94h] [rbp-6Ch]
  float v74; // [rsp+98h] [rbp-68h]
  int v75; // [rsp+9Ch] [rbp-64h]
  float v76; // [rsp+A8h] [rbp-58h]
  float v77; // [rsp+ACh] [rbp-54h]
  int v78; // [rsp+B0h] [rbp-50h]
  float v79; // [rsp+B4h] [rbp-4Ch]
  float v80; // [rsp+B8h] [rbp-48h]
  int v81; // [rsp+BCh] [rbp-44h]
  float v82; // [rsp+C8h] [rbp-38h]
  float v83; // [rsp+CCh] [rbp-34h]
  int v84; // [rsp+D0h] [rbp-30h]
  float v85; // [rsp+D4h] [rbp-2Ch]
  float v86; // [rsp+D8h] [rbp-28h]
  int v87; // [rsp+DCh] [rbp-24h]
  float v88; // [rsp+E8h] [rbp-18h]
  float v89; // [rsp+ECh] [rbp-14h]
  int v90; // [rsp+F0h] [rbp-10h]
  float v91; // [rsp+F4h] [rbp-Ch]
  float v92; // [rsp+F8h] [rbp-8h]
  int v93; // [rsp+FCh] [rbp-4h]
  __m128i si128; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v95[8]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 4);
  v5 = *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 6);
  v62 = v95;
  v65 = (char *)a1 + 28;
  v66 = *((_DWORD *)a1 + 12);
  v7 = *((_BYTE *)a1 + 53);
  v95[1] = v2;
  v95[2] = v3;
  v95[3] = v2;
  v8 = *((_DWORD *)a1 + 5);
  v95[4] = v3;
  v9 = *(_DWORD *)a1;
  v68 = v7;
  v95[0] = v5;
  v95[5] = v8;
  v95[6] = v5;
  v95[7] = v8;
  v60 = v9;
  v67 = 0;
  v61 = 4LL;
  if ( v6 == 50529027 )
  {
    p_si128 = &si128;
    v64 = (char *)&unk_1802F3780;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v60, a2);
    return;
  }
  if ( !v6 )
  {
    p_si128 = &si128;
    v64 = (char *)&unk_1802F20E0;
    si128 = 0LL;
    Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v60, a2);
    return;
  }
  v11 = v6 & 0x3000000;
  v12 = 2;
  v10 = 0LL;
  if ( (v6 & 0x3000000) == 0x3000000 )
  {
    v13 = 3;
  }
  else if ( v11 == 0x2000000 )
  {
    v13 = 2;
  }
  else
  {
    v13 = v11 == 0x1000000;
  }
  si128.m128i_i32[3] = v13;
  switch ( v6 & 3 )
  {
    case 1:
      v14 = 1;
      break;
    case 2:
      v14 = 2;
      break;
    case 3:
      v14 = 3;
      break;
    default:
      v14 = 0;
      break;
  }
  si128.m128i_i32[0] = v14;
  v15 = v6 & 0x300;
  if ( v15 == 768 )
  {
    v16 = 3;
  }
  else if ( v15 == 512 )
  {
    v16 = 2;
  }
  else
  {
    v16 = v15 == 256;
  }
  v17 = v6 & 0x30000;
  si128.m128i_i32[1] = v16;
  if ( v17 == 196608 )
  {
    v12 = 3;
  }
  else if ( v17 == 0x10000 )
  {
    v12 = 1;
  }
  else if ( v17 != 0x20000 )
  {
    v12 = 0;
  }
  si128.m128i_i32[2] = v12;
  memset_0(v69, 0, 0x80uLL);
  v18 = v77;
  v19 = v74;
  v20 = v80;
  v21 = v14 - 1;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( !v22 )
    {
      v71 = FLOAT_N0_5;
      v18 = v77 + -0.5;
      v23 = FLOAT_N0_5;
      v19 = v74 + -0.5;
      v20 = v80 + -0.5;
      goto LABEL_23;
    }
    if ( v22 != 1 )
    {
      v23 = v71;
      goto LABEL_24;
    }
    v19 = v74 + -0.5;
    v20 = v80 + -0.5;
  }
  else
  {
    v19 = v74 + 0.5;
    v20 = v80 + 0.5;
  }
  v71 = FLOAT_0_5;
  v18 = v77 + 0.5;
  v23 = FLOAT_0_5;
LABEL_23:
  v77 = v18;
  v74 = v19;
  v80 = v20;
LABEL_24:
  v24 = v76;
  v25 = v82;
  v26 = v79;
  v27 = v85;
  if ( v16 == 3 )
  {
    v24 = v76 + -0.5;
    v25 = v82 + -0.5;
  }
  else
  {
    v28 = v16 - 1;
    if ( !v28 )
    {
      v24 = v76 + -0.5;
      v25 = v82 + -0.5;
      v26 = v79 + -0.5;
      v27 = v85 + -0.5;
      goto LABEL_30;
    }
    if ( v28 != 1 )
      goto LABEL_31;
    v24 = v76 + 0.5;
    v25 = v82 + 0.5;
  }
  v27 = v85 + 0.5;
  v26 = v79 + 0.5;
LABEL_30:
  v76 = v24;
  v82 = v25;
  v79 = v26;
  v85 = v27;
LABEL_31:
  v29 = v83;
  v30 = v86;
  v31 = v12 - 1;
  if ( v31 )
  {
    v32 = v31 - 1;
    if ( !v32 )
    {
      v29 = v83 + 0.5;
      v30 = v86 + 0.5;
      v89 = v89 + 0.5;
      v33 = v92 + 0.5;
      goto LABEL_36;
    }
    if ( v32 != 1 )
      goto LABEL_37;
    v30 = v86 + 0.5;
    v89 = v89 + -0.5;
    v33 = v92 + 0.5;
  }
  else
  {
    v30 = v86 + -0.5;
    v89 = v89 + -0.5;
    v33 = v92 + -0.5;
  }
  v29 = v83 + -0.5;
LABEL_36:
  v83 = v29;
  v92 = v33;
  v86 = v30;
LABEL_37:
  v34 = v70;
  v35 = v88;
  v36 = v73;
  v37 = v91;
  v38 = v13 - 1;
  if ( !v38 )
  {
    v36 = v73 + 0.5;
    v37 = v91 + 0.5;
    goto LABEL_41;
  }
  v39 = v38 - 1;
  if ( !v39 )
  {
    v34 = v70 + -0.5;
    v35 = v88 + -0.5;
    v36 = v73 + -0.5;
    v37 = v91 + -0.5;
    goto LABEL_42;
  }
  if ( v39 == 1 )
  {
    v36 = v73 + -0.5;
    v37 = v91 + -0.5;
LABEL_41:
    v35 = v88 + 0.5;
    v34 = v70 + 0.5;
LABEL_42:
    v70 = v34;
    v88 = v35;
    v73 = v36;
    v91 = v37;
  }
  v58 = 0;
  v59[0] = 1056964608;
  v59[1] = 1060439283;
  if ( v34 == 0.0 )
    v40 = &v58;
  else
    v40 = v59;
  v41 = 0LL;
  if ( v23 != 0.0 )
    v41 = 1LL;
  v72 = v40[v41];
  if ( v34 == v36 && v23 == v19 )
  {
    v75 = 0;
  }
  else
  {
    v55 = 0;
    v56 = 1056964608;
    v57 = 1060439283;
    if ( v36 == 0.0 )
      v42 = &v55;
    else
      v42 = &v56;
    v43 = 0LL;
    if ( v19 != 0.0 )
      v43 = 1LL;
    v75 = v42[v43];
  }
  if ( v24 == 0.0 )
    v44 = &v58;
  else
    v44 = v59;
  v45 = 0LL;
  if ( v18 != 0.0 )
    v45 = 1LL;
  v78 = v44[v45];
  if ( v24 == v26 && v18 == v20 )
  {
    v81 = 0;
  }
  else
  {
    v55 = 0;
    v56 = 1056964608;
    v57 = 1060439283;
    if ( v26 == 0.0 )
      v46 = &v55;
    else
      v46 = &v56;
    v47 = 0LL;
    if ( v20 != 0.0 )
      v47 = 1LL;
    v81 = v46[v47];
  }
  if ( v25 == 0.0 )
    v48 = &v58;
  else
    v48 = v59;
  v49 = 0LL;
  if ( v29 != 0.0 )
    v49 = 1LL;
  v84 = v48[v49];
  if ( v25 == v27 && v29 == v30 )
  {
    v87 = 0;
  }
  else
  {
    v55 = 0;
    v56 = 1056964608;
    v57 = 1060439283;
    if ( v27 == 0.0 )
      v50 = &v55;
    else
      v50 = &v56;
    v51 = 0LL;
    if ( v30 != 0.0 )
      v51 = 1LL;
    v87 = v50[v51];
  }
  if ( v35 == 0.0 )
    v52 = &v58;
  else
    v52 = v59;
  v53 = 0LL;
  if ( v89 != 0.0 )
    v53 = 1LL;
  v90 = v52[v53];
  if ( v35 == v37 && v89 == v92 )
  {
    v93 = 0;
  }
  else
  {
    v55 = 0;
    v56 = 1056964608;
    v57 = 1060439283;
    if ( v37 == 0.0 )
      v54 = &v55;
    else
      v54 = &v56;
    if ( v92 != 0.0 )
      v10 = 1LL;
    v93 = v54[v10];
  }
  p_si128 = &si128;
  v64 = v69;
  Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v60, a2);
}
