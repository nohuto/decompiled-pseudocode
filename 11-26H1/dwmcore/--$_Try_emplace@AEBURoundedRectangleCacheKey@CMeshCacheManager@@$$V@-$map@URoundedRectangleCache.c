/*
 * XREFs of ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1800DA40C
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800DB414 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D8AAC (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800D8E4C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCache.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180210300 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<CMeshCacheManager::RoundedRectangleCacheKey,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>::_Try_emplace<CMeshCacheManager::RoundedRectangleCacheKey const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  char v10; // cl
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF

  v3 = *a1;
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 8);
  v17 = (unsigned __int64)v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v17 = v8;
      if ( *(_QWORD *)(v8 + 32) >= v9 )
      {
        if ( *(_QWORD *)(v8 + 32) > v9 )
        {
          v10 = 0;
          goto LABEL_20;
        }
        if ( (float)(*((float *)a3 + 2) - *(float *)(v8 + 40)) <= 0.0000011920929 )
        {
          v10 = 0;
LABEL_20:
          DWORD2(v17) = 1;
          v7 = v8;
          goto LABEL_7;
        }
      }
      v10 = 1;
      DWORD2(v17) = 0;
LABEL_7:
      v11 = (__int64 *)(v8 + 16);
      if ( !v10 )
        v11 = (__int64 *)v8;
      v8 = *v11;
    }
    while ( !*(_BYTE *)(*v11 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25)
    || *a3 < *(_QWORD *)(v7 + 32)
    || *a3 <= *(_QWORD *)(v7 + 32) && (float)(*(float *)(v7 + 40) - *((float *)a3 + 2)) > 0.0000011920929 )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v12 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>(
            &v15,
            (__int64)a1,
            v3);
    v13 = v12[1];
    v12[1] = 0LL;
    if ( v16 )
    {
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v16 + 6);
      if ( v16 )
        std::_Deallocate<16>(v16, 0x38uLL);
    }
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      (__int64)&v17,
                      v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
