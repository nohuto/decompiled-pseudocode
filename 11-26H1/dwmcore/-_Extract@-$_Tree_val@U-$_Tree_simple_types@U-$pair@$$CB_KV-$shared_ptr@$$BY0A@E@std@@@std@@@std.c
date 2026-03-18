/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A393C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@0@Z @ 0x180284E90 (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x1800316A0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800CF0B0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRen.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x1800D9028 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@Z @ 0x1801A3C14 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 *v4; // r11
  __int64 *v5; // r10
  __int64 *v6; // rax
  __int64 *v7; // r9
  __int64 **v8; // rcx
  _QWORD *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rcx
  char v12; // dl
  __int64 v13; // rcx
  __int64 *v15; // rdi
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v18);
  v5 = (__int64 *)v4[2];
  if ( !*(_BYTE *)(*v4 + 25) )
  {
    if ( *((_BYTE *)v5 + 25) )
    {
      v5 = (__int64 *)*v4;
    }
    else
    {
      v6 = v18;
      v5 = (__int64 *)v18[2];
      if ( v18 != v4 )
      {
        *(_QWORD *)(*v4 + 8) = v18;
        *v6 = *v4;
        if ( v6 == (__int64 *)v4[2] )
        {
          v7 = v6;
        }
        else
        {
          v7 = (__int64 *)v6[1];
          if ( !*((_BYTE *)v5 + 25) )
            v5[1] = (__int64)v7;
          *v7 = (__int64)v5;
          v6[2] = v4[2];
          *(_QWORD *)(v4[2] + 8) = v6;
        }
        if ( *(__int64 **)(*a1 + 8LL) == v4 )
        {
          *(_QWORD *)(*a1 + 8LL) = v6;
        }
        else
        {
          v8 = (__int64 **)v4[1];
          if ( *v8 == v4 )
            *v8 = v6;
          else
            v8[2] = v6;
        }
        v6[1] = v4[1];
        v12 = *((_BYTE *)v6 + 24);
        *((_BYTE *)v6 + 24) = *((_BYTE *)v4 + 24);
        *((_BYTE *)v4 + 24) = v12;
        goto LABEL_23;
      }
    }
  }
  v7 = (__int64 *)v4[1];
  if ( !*((_BYTE *)v5 + 25) )
    v5[1] = (__int64)v7;
  if ( *(__int64 **)(*a1 + 8LL) == v4 )
  {
    *(_QWORD *)(*a1 + 8LL) = v5;
  }
  else if ( (__int64 *)*v7 == v4 )
  {
    *v7 = (__int64)v5;
  }
  else
  {
    v7[2] = (__int64)v5;
  }
  v3 = *a1;
  if ( *(__int64 **)*a1 == v4 )
  {
    if ( *((_BYTE *)v5 + 25) )
      v9 = v7;
    else
      v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min(v5);
    *(_QWORD *)v3 = v9;
  }
  if ( *(__int64 **)(*a1 + 16LL) == v4 )
  {
    if ( *((_BYTE *)v5 + 25) )
    {
      v11 = v7;
    }
    else
    {
      v10 = (__int64 *)v5[2];
      v11 = v5;
      while ( !*((_BYTE *)v10 + 25) )
      {
        v11 = v10;
        v10 = (__int64 *)v10[2];
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v11;
  }
LABEL_23:
  if ( *((_BYTE *)v4 + 24) != 1 )
    goto LABEL_24;
  while ( 1 )
  {
    v15 = v7;
    if ( v5 == *(__int64 **)(*a1 + 8LL) || *((_BYTE *)v5 + 24) != 1 )
      break;
    v16 = (__int64 *)*v7;
    if ( v5 == (__int64 *)*v7 )
    {
      v16 = (__int64 *)v7[2];
      if ( !*((_BYTE *)v16 + 24) )
      {
        *((_BYTE *)v16 + 24) = 1;
        *((_BYTE *)v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Lrotate(
          a1,
          v7,
          v3,
          v7);
        v16 = (__int64 *)v7[2];
      }
      if ( !*((_BYTE *)v16 + 25) )
      {
        v3 = *v16;
        if ( *(_BYTE *)(*v16 + 24) != 1 || *(_BYTE *)(v16[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v16[2] + 24) == 1 )
          {
            *(_BYTE *)(v3 + 24) = 1;
            *((_BYTE *)v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(
              (__int64)a1,
              v16);
            v16 = (__int64 *)v7[2];
          }
          *((_BYTE *)v16 + 24) = *((_BYTE *)v7 + 24);
          *((_BYTE *)v7 + 24) = 1;
          *(_BYTE *)(v16[2] + 24) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Lrotate(
            a1,
            v7,
            v3,
            v7);
          break;
        }
        goto LABEL_59;
      }
    }
    else
    {
      if ( !*((_BYTE *)v16 + 24) )
      {
        *((_BYTE *)v16 + 24) = 1;
        *((_BYTE *)v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(
          (__int64)a1,
          v7);
        v16 = (__int64 *)*v7;
      }
      if ( !*((_BYTE *)v16 + 25) )
      {
        v17 = v16[2];
        if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*v16 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v16 + 24) == 1 )
          {
            *(_BYTE *)(v17 + 24) = 1;
            *((_BYTE *)v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Lrotate(
              a1,
              v16,
              v3,
              v7);
            v16 = (__int64 *)*v7;
          }
          *((_BYTE *)v16 + 24) = *((_BYTE *)v7 + 24);
          *((_BYTE *)v7 + 24) = 1;
          *(_BYTE *)(*v16 + 24) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(
            (__int64)a1,
            v7);
          break;
        }
LABEL_59:
        *((_BYTE *)v16 + 24) = 0;
      }
    }
    v7 = (__int64 *)v7[1];
    v5 = v15;
  }
  *((_BYTE *)v5 + 24) = 1;
LABEL_24:
  v13 = a1[1];
  if ( v13 )
    a1[1] = v13 - 1;
  return v4;
}
