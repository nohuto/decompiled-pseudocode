/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800D8E4C
 * Callers:
 *     ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1800DA40C (--$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@-$map@URoundedRectangleCache.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x1800D9028 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Insert_node(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rax
  _QWORD *i; // r10
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax

  ++a1[1];
  v3 = a3;
  v4 = (_QWORD *)*a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 != v4 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      *v6 = a3;
      if ( v6 == (_QWORD *)*v4 )
        *v4 = a3;
    }
    else
    {
      v6[2] = a3;
      if ( v6 == (_QWORD *)v4[2] )
        v4[2] = a3;
    }
    v7 = *(_QWORD *)(a3 + 8);
    for ( i = (_QWORD *)a3; ; v7 = i[1] )
    {
      if ( *(_BYTE *)(v7 + 24) )
      {
        *(_BYTE *)(v4[1] + 24LL) = 1;
        return v3;
      }
      v9 = i[1];
      v10 = *(__int64 **)(v9 + 8);
      v11 = *v10;
      if ( v9 == *v10 )
      {
        v11 = v10[2];
        if ( !*(_BYTE *)(v11 + 24) )
          goto LABEL_36;
        v12 = *(_QWORD **)(v9 + 16);
        if ( i == v12 )
        {
          i = (_QWORD *)i[1];
          *(_QWORD *)(v9 + 16) = *v12;
          if ( !*(_BYTE *)(*v12 + 25LL) )
            *(_QWORD *)(*v12 + 8LL) = v9;
          v12[1] = *(_QWORD *)(v9 + 8);
          if ( v9 == *(_QWORD *)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v12;
          }
          else
          {
            v13 = *(_QWORD **)(v9 + 8);
            if ( v9 == *v13 )
              *v13 = v12;
            else
              v13[2] = v12;
          }
          *v12 = v9;
          *(_QWORD *)(v9 + 8) = v12;
        }
        *(_BYTE *)(i[1] + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(i[1] + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
      }
      else
      {
        if ( !*(_BYTE *)(v11 + 24) )
        {
LABEL_36:
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(i[1] + 8LL) + 24LL) = 0;
          i = *(_QWORD **)(i[1] + 8LL);
          continue;
        }
        if ( i == *(_QWORD **)v9 )
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
        *(_BYTE *)(i[1] + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(i[1] + 8LL) + 24LL) = 0;
        v15 = *(_QWORD *)(i[1] + 8LL);
        v16 = *(_QWORD **)(v15 + 16);
        *(_QWORD *)(v15 + 16) = *v16;
        if ( !*(_BYTE *)(*v16 + 25LL) )
          *(_QWORD *)(*v16 + 8LL) = v15;
        v16[1] = *(_QWORD *)(v15 + 8);
        if ( v15 == *(_QWORD *)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v16;
        }
        else
        {
          v17 = *(_QWORD **)(v15 + 8);
          if ( v15 == *v17 )
            *v17 = v16;
          else
            v17[2] = v16;
        }
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
    }
  }
  *v4 = a3;
  v4[1] = a3;
  v4[2] = a3;
  *(_BYTE *)(a3 + 24) = 1;
  return v3;
}
