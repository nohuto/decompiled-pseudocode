/*
 * XREFs of ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800DB414
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??1?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800BE2B0 (--1-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansi.c)
 *     ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1800BFCE0 (-resize@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_ex.c)
 *     ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x1800D9B54 (-Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z.c)
 *     ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1800DA40C (--$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@-$map@URoundedRectangleCache.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800DD030 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct Mesh::VertexAAOffsetsResource *__fastcall CMeshCacheManager::TryGetMeshAAOffsets(
        CMeshCacheManager *this,
        const struct Mesh::MeshDesc *a2,
        const struct CShape *a3,
        const struct D2D1::Matrix3x2F *a4,
        bool a5)
{
  __int64 v9; // rbx
  int v10; // xmm3_4
  __int32 v11; // xmm1_4
  unsigned int v13; // xmm1_4
  __int64 v14; // rcx
  unsigned int v15; // xmm0_4
  int v16; // xmm1_4
  unsigned int i; // eax
  float v18; // xmm2_4
  float v19; // xmm1_4
  unsigned int j; // ecx
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  struct Mesh::VertexAAOffsetsResource **v26; // rdx
  int v27; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v28; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-C8h]
  __int128 v30; // [rsp+50h] [rbp-B8h]
  __int64 v31; // [rsp+60h] [rbp-A8h]
  _DWORD v32[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h]
  _QWORD v34[4]; // [rsp+78h] [rbp-90h]
  int v35; // [rsp+98h] [rbp-70h]
  int v36; // [rsp+9Ch] [rbp-6Ch]
  int v37; // [rsp+A0h] [rbp-68h]
  __int64 v38; // [rsp+A4h] [rbp-64h]
  __int64 v39; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+C0h] [rbp-48h] BYREF
  float v41; // [rsp+C8h] [rbp-40h]
  int v42; // [rsp+CCh] [rbp-3Ch]
  __int64 v43[3]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v44[160]; // [rsp+F0h] [rbp-18h] BYREF
  char v45; // [rsp+190h] [rbp+88h] BYREF

  v9 = 0LL;
  if ( (*(unsigned int (__fastcall **)(const struct CShape *))(*(_QWORD *)a3 + 8LL))(a3) )
    return 0LL;
  v10 = *((_DWORD *)a4 + 1);
  COERCE_FLOAT(v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(v10 & v11) < 0.000081380211 && COERCE_FLOAT(*((_DWORD *)a4 + 2) & v11) < 0.000081380211
    || COERCE_FLOAT(*(_DWORD *)a4 & v11) < 0.000081380211 && COERCE_FLOAT(*((_DWORD *)a4 + 3) & v11) < 0.000081380211 )
  {
    v13 = *((_DWORD *)a4 + 3);
    v14 = *((_QWORD *)a3 + 2);
    v32[0] = *(_DWORD *)a4;
    v15 = *((_DWORD *)a4 + 2);
    v38 = 1065353216LL;
    v34[0] = __PAIR64__(v13, v15);
    v16 = *((_DWORD *)a4 + 4);
    *(_OWORD *)&v34[1] = 0LL;
    LODWORD(v31) = 0;
    v36 = *((_DWORD *)a4 + 5);
    v32[1] = v10;
    v35 = v16;
    v33 = 0LL;
    v34[3] = 1065353216LL;
    v37 = 0;
    WORD2(v38) = 10248;
    CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
      (const struct CRoundedRectangleGeometryData *)(v14 + 16),
      (const struct CMILMatrix *)v32,
      (struct CRoundedRectangleGeometryData *)&v28);
    if ( BYTE4(v31) )
    {
      v18 = *((float *)&v28 + 2) + *(float *)&v28;
      v19 = *((float *)&v28 + 3) + *((float *)&v28 + 1);
    }
    else
    {
      for ( i = 1; i < 4; ++i )
      {
        if ( *(float *)v29 != *(float *)&v29[i] || *((float *)v29 + 1) != *((float *)&v29[i] + 1) )
          return (struct Mesh::VertexAAOffsetsResource *)v9;
      }
      v18 = *((float *)&v28 + 2);
      v19 = *((float *)&v28 + 3);
    }
    if ( (float)((float)(v18 - *(float *)&v28) - (float)(*(float *)v29 * 2.0)) > 0.0000011920929
      && (float)((float)(v19 - *((float *)&v28 + 1)) - (float)(*((float *)v29 + 1) * 2.0)) > 0.0000011920929 )
    {
      if ( !a5 )
      {
        for ( j = 0; (unsigned __int64)j < *((_QWORD *)a2 + 1); ++j )
        {
          if ( *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL * j) != 3 )
            return (struct Mesh::VertexAAOffsetsResource *)v9;
        }
      }
      v40 = *((_QWORD *)a2 + 1);
      v42 = 0;
      v41 = *(float *)v29 / *((float *)v29 + 1);
      std::map<CMeshCacheManager::RoundedRectangleCacheKey,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>::_Try_emplace<CMeshCacheManager::RoundedRectangleCacheKey const &,>(
        (__int64 *)this,
        (__int64)&v39,
        &v40);
      v21 = v39;
      if ( !*(_QWORD *)(v39 + 48) )
      {
        if ( a5 )
        {
          v22 = *((_QWORD *)a2 + 1);
          v43[0] = (__int64)v44;
          v27 = 3;
          v43[1] = (__int64)v44;
          v43[2] = (__int64)&v45;
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
            v43,
            v22,
            &v27);
          v23 = *(_QWORD *)(v21 + 48);
          v24 = *((_OWORD *)a2 + 1);
          v28 = *(_OWORD *)a2;
          v25 = *((_OWORD *)a2 + 2);
          v29[0] = v24;
          v29[1] = v43[0];
          v31 = *((_QWORD *)a2 + 6);
          *(_QWORD *)(v21 + 48) = 0LL;
          v30 = v25;
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
          Mesh::VertexAAOffsetsResource::Create(
            (const struct Mesh::MeshDesc *)&v28,
            (struct Mesh::VertexAAOffsetsResource **)(v21 + 48));
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(v43);
        }
        else
        {
          v26 = (struct Mesh::VertexAAOffsetsResource **)(v39 + 48);
          *(_QWORD *)(v39 + 48) = 0LL;
          Mesh::VertexAAOffsetsResource::Create(a2, v26);
        }
      }
      return *(struct Mesh::VertexAAOffsetsResource **)(v21 + 48);
    }
  }
  return (struct Mesh::VertexAAOffsetsResource *)v9;
}
