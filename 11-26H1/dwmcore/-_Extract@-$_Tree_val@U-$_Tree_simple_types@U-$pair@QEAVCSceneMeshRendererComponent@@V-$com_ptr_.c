/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801992A8
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x180280904 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x1800316A0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800CF0B0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRen.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x1800D9028 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180199580 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Extract(
        __int64 ***a1,
        __int64 *a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 *v5; // rax
  __int64 *v6; // r9
  __int64 **v7; // rcx
  __int64 **v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rcx
  char v12; // dl
  __int64 **v13; // rcx
  __int64 *v15; // rdi
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( !*(_BYTE *)(*v3 + 25) )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v4 = *v3;
    }
    else
    {
      v5 = v18;
      v4 = v18[2];
      if ( v18 != v3 )
      {
        *(_QWORD *)(*v3 + 8) = v18;
        *v5 = *v3;
        if ( v5 == (__int64 *)v3[2] )
        {
          v6 = v5;
        }
        else
        {
          v6 = (__int64 *)v5[1];
          if ( !*(_BYTE *)(v4 + 25) )
            *(_QWORD *)(v4 + 8) = v6;
          *v6 = v4;
          v5[2] = v3[2];
          *(_QWORD *)(v3[2] + 8) = v5;
        }
        if ( (*a1)[1] == v3 )
        {
          (*a1)[1] = v5;
        }
        else
        {
          v7 = (__int64 **)v3[1];
          if ( *v7 == v3 )
            *v7 = v5;
          else
            v7[2] = v5;
        }
        v5[1] = v3[1];
        v12 = *((_BYTE *)v5 + 24);
        *((_BYTE *)v5 + 24) = *((_BYTE *)v3 + 24);
        *((_BYTE *)v3 + 24) = v12;
        goto LABEL_23;
      }
    }
  }
  v6 = (__int64 *)v3[1];
  if ( !*(_BYTE *)(v4 + 25) )
    *(_QWORD *)(v4 + 8) = v6;
  if ( (*a1)[1] == v3 )
  {
    (*a1)[1] = (__int64 *)v4;
  }
  else if ( (__int64 *)*v6 == v3 )
  {
    *v6 = v4;
  }
  else
  {
    v6[2] = v4;
  }
  v8 = *a1;
  if ( **a1 == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
      v9 = v6;
    else
      v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min((_QWORD *)v4);
    *v8 = v9;
  }
  if ( (*a1)[2] == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v11 = v6;
    }
    else
    {
      v10 = *(_QWORD *)(v4 + 16);
      v11 = (__int64 *)v4;
      while ( !*(_BYTE *)(v10 + 25) )
      {
        v11 = (__int64 *)v10;
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    (*a1)[2] = v11;
  }
LABEL_23:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_24;
  while ( 1 )
  {
    v15 = v6;
    if ( (__int64 *)v4 == (*a1)[1] || *(_BYTE *)(v4 + 24) != 1 )
      break;
    v16 = (_BYTE *)*v6;
    if ( v4 == *v6 )
    {
      v16 = (_BYTE *)v6[2];
      if ( !v16[24] )
      {
        v16[24] = 1;
        *((_BYTE *)v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
          a1,
          v6);
        v16 = (_BYTE *)v6[2];
      }
      if ( !v16[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            v16[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(
              (__int64)a1,
              v16);
            v16 = (_BYTE *)v6[2];
          }
          v16[24] = *((_BYTE *)v6 + 24);
          *((_BYTE *)v6 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
            a1,
            v6);
          break;
        }
        goto LABEL_59;
      }
    }
    else
    {
      if ( !v16[24] )
      {
        v16[24] = 1;
        *((_BYTE *)v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(
          (__int64)a1,
          v6);
        v16 = (_BYTE *)*v6;
      }
      if ( !v16[25] )
      {
        v17 = *((_QWORD *)v16 + 2);
        if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
          {
            *(_BYTE *)(v17 + 24) = 1;
            v16[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
              a1,
              v16);
            v16 = (_BYTE *)*v6;
          }
          v16[24] = *((_BYTE *)v6 + 24);
          *((_BYTE *)v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(
            (__int64)a1,
            v6);
          break;
        }
LABEL_59:
        v16[24] = 0;
      }
    }
    v6 = (__int64 *)v6[1];
    v4 = (__int64)v15;
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_24:
  v13 = a1[1];
  if ( v13 )
    a1[1] = (__int64 **)((char *)v13 - 1);
  return v3;
}
