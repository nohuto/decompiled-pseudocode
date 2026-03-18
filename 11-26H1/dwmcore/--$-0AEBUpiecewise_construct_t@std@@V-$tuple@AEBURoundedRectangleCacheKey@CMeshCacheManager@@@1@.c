/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D8AAC
 * Callers:
 *     ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1800DA40C (--$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@-$map@URoundedRectangleCache.c)
 * Callees:
 *     ??$?0AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$Z$$V@?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@V?$tuple@$$V@1@@Z @ 0x1800D8A90 (--$-0AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$Z$$V@-$pair@$$CBURoundedRectangleCacheKey.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  __int64 *v11; // [rsp+50h] [rbp+28h]
  va_list va1; // [rsp+58h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, __int64 *);
  *a1 = a2;
  a1[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL);
  v6 = v11;
  a1[1] = v5;
  v9 = *v6;
  ____0AEBURoundedRectangleCacheKey_CMeshCacheManager____Z__V___pair___CBURoundedRectangleCacheKey_CMeshCacheManager__V__com_ptr_t_VVertexAAOffsetsResource_Mesh__Uerr_returncode_policy_wil___wil___std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBURoundedRectangleCacheKey_CMeshCacheManager___1_V__tuple___V_1__Z(
    v5 + 32,
    (__int64)v6,
    (__int64)va);
  *(_QWORD *)a1[1] = a3;
  v7 = 0LL;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v7++ + 24) = 0;
  while ( v7 < 2 );
  return a1;
}
