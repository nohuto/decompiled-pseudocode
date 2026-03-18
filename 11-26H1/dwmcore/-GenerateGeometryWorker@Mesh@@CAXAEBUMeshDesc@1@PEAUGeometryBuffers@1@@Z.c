/*
 * XREFs of ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18000B040
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18000A800 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Mesh::GenerateGeometryWorker(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  char v7; // cl
  unsigned int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // r9
  char v11; // r15
  bool v12; // r13
  __int16 v13; // bp
  _QWORD *v14; // r12
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // ecx
  float v21; // xmm2_4
  float v22; // xmm1_4
  gsl::details *v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  int v26; // esi
  __int16 v27; // r13
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  float v33; // xmm1_4
  float v34; // xmm0_4
  unsigned __int64 v35; // rdx
  int v36; // r9d
  __int16 v37; // r8
  __int64 v38; // rdx
  __int16 v39; // ax
  int v40; // edx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // [rsp+20h] [rbp-48h]
  __int16 v44; // [rsp+70h] [rbp+8h]
  __int64 *v45; // [rsp+80h] [rbp+18h]
  _DWORD *v46; // [rsp+88h] [rbp+20h]

  v4 = 0LL;
  v5 = (unsigned int)(*((_DWORD *)a1 + 2) - 1);
  v6 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 3) + 4 * v5) != 3 )
    goto LABEL_2;
  v41 = *((_DWORD *)a1 + 12);
  if ( v41 == 3 )
  {
    v7 = *(_BYTE *)(v5 + *((_QWORD *)a1 + 5)) == 0;
  }
  else
  {
    v42 = v41 - 1;
    if ( v42 )
    {
      if ( v42 != 1 )
      {
LABEL_2:
        v7 = 0;
        goto LABEL_3;
      }
      v7 = *(_BYTE *)(v5 + *((_QWORD *)a1 + 5));
    }
    else
    {
      v7 = 1;
    }
  }
LABEL_3:
  v8 = 0;
  v44 = 0;
  if ( *((_QWORD *)a1 + 1) )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *((_QWORD *)a1 + 4) + 32 * v9;
      if ( *(_DWORD *)(*((_QWORD *)a1 + 3) + 4 * v9) != 3 )
        break;
      v25 = *((_DWORD *)a1 + 12);
      if ( v25 == 3 )
      {
        v11 = *(_BYTE *)(v9 + *((_QWORD *)a1 + 5)) == 0;
      }
      else
      {
        v40 = v25 - 1;
        if ( v40 )
        {
          if ( v40 != 1 )
            break;
          v11 = *(_BYTE *)(v9 + *((_QWORD *)a1 + 5));
        }
        else
        {
          v11 = 1;
        }
      }
LABEL_7:
      v12 = *(float *)(v10 + 28) > 0.0 && (v7 || v11);
      if ( *((_BYTE *)a1 + 53) || v12 )
      {
        v13 = v4;
        v43 = v4 + 1;
        v45 = (__int64 *)((char *)a2 + 16);
        v14 = (_QWORD *)((char *)a1 + 16);
        v15 = *((_QWORD *)a2 + 2);
        v16 = (unsigned __int16)v4;
        v17 = *((_DWORD *)a2 + 6) * (unsigned __int16)v4;
        *(_QWORD *)(v17 + v15) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v9);
        *(_DWORD *)(v17 + v15 + 8) = *(_DWORD *)(v10 + 16);
        *(_DWORD *)(v17 + v15 + 12) = 1065353216;
        v18 = *(_QWORD *)a2;
        v46 = (_DWORD *)((char *)a2 + 8);
        v19 = *((_QWORD *)a1 + 2);
        v20 = *((_DWORD *)a2 + 2) * v16;
        v21 = *(float *)(v19 + 8 * v9);
        v22 = *(float *)(v19 + 8 * v9 + 4);
        *(float *)(v20 + v18) = v21;
        *(float *)(v20 + v18 + 4) = v22;
        *(_DWORD *)(v20 + v18 + 8) = 1065353216;
        if ( *(float *)(v17 + v15 + 8) != 0.0 )
        {
          *(float *)(v20 + v18) = v21 + *(float *)(v10 + 8);
          *(float *)(v20 + v18 + 4) = v22 + *(float *)(v10 + 12);
        }
        v23 = (struct Mesh::GeometryBuffers *)((char *)a2 + 24);
        if ( *((_BYTE *)a1 + 53) && v8 >= 2 )
        {
          if ( v6 >= *((_QWORD *)a2 + 5) )
            goto LABEL_32;
          v24 = *((_QWORD *)a2 + 6);
          v14 = (_QWORD *)((char *)a1 + 16);
          *(_WORD *)(v24 + 2 * v6) = 0;
          *(_WORD *)(v24 + 2 * v6 + 2) = v44;
          v23 = (struct Mesh::GeometryBuffers *)((char *)a2 + 24);
          *(_WORD *)(v24 + 2 * v6 + 4) = v13;
          v45 = (__int64 *)((char *)a2 + 16);
          v6 += 3LL;
          v46 = (_DWORD *)((char *)a2 + 8);
        }
        if ( v12 )
        {
          v26 = (unsigned __int16)v43;
          v27 = v43 + 1;
          v28 = (unsigned __int16)v43++;
          v29 = *(_DWORD *)v23 * v28;
          v30 = *v45;
          *(_QWORD *)(v29 + v30) = *(_QWORD *)(*v14 + 8 * v9);
          *(_DWORD *)(v29 + v30 + 8) = *(_DWORD *)(v10 + 28);
          *(_DWORD *)(v29 + v30 + 12) = 0;
          v31 = *(_QWORD *)a2;
          v32 = *v46 * v26;
          v33 = *(float *)(*v14 + 8 * v9 + 4) + *(float *)(v10 + 24);
          v34 = *(float *)(v10 + 20) + *(float *)(*v14 + 8 * v9);
          *(_DWORD *)(v32 + v31 + 8) = 1065353216;
          *(float *)(v32 + v31 + 4) = v33;
          *(float *)(v32 + v31) = v34;
          if ( v11 )
          {
            v35 = (unsigned __int64)(v8 + 1) % *((_QWORD *)a1 + 1);
            v36 = v35;
            v23 = (gsl::details *)(32LL * (unsigned int)v35);
            if ( *(float *)((char *)v23 + *((_QWORD *)a1 + 4) + 28) > 0.0 )
            {
              v37 = v27;
              if ( !(_DWORD)v35 )
                v37 = 0;
              if ( v6 >= *((_QWORD *)a2 + 5) )
              {
LABEL_32:
                `gsl::details::get_terminate_handler'::`2'::handler(v23);
                __debugbreak();
              }
              v38 = *((_QWORD *)a2 + 6);
              v39 = 1;
              if ( v36 )
                v39 = v37 + 1;
              *(_WORD *)(v38 + 2 * v6) = v26;
              *(_WORD *)(v38 + 2 * v6 + 2) = v39;
              *(_WORD *)(v38 + 2 * v6 + 4) = v37;
              *(_WORD *)(v38 + 2 * v6 + 6) = v26;
              *(_WORD *)(v38 + 2 * v6 + 8) = v37;
              *(_WORD *)(v38 + 2 * v6 + 10) = v13;
              v6 += 6LL;
            }
          }
        }
        v4 = v43;
        v44 = v13;
      }
      ++v8;
      v7 = v11;
      v9 = v8;
      if ( (unsigned __int64)v8 >= *((_QWORD *)a1 + 1) )
        goto LABEL_21;
    }
    v11 = 0;
    goto LABEL_7;
  }
LABEL_21:
  *((_QWORD *)a2 + 4) = v4;
  *((_QWORD *)a2 + 7) = v6;
}
