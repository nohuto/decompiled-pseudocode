/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800D8B38
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x1800316A0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800CF0B0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRen.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x1800D9028 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180199580 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 */

__int64 **__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 **v3; // r11
  __int64 *v4; // r10
  __int64 *v5; // r9
  _QWORD *v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 *v10; // rax
  char v11; // dl
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 **v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( *((_BYTE *)*v3 + 25) )
    goto LABEL_2;
  if ( *((_BYTE *)v4 + 25) )
  {
    v4 = *v3;
    goto LABEL_2;
  }
  v10 = v18;
  v4 = (__int64 *)v18[2];
  if ( v18 == (__int64 *)v3 )
  {
LABEL_2:
    v5 = v3[1];
    if ( !*((_BYTE *)v4 + 25) )
      v4[1] = (__int64)v5;
    if ( *(__int64 ***)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( (__int64 **)*v5 == v3 )
    {
      *v5 = (__int64)v4;
    }
    else
    {
      v5[2] = (__int64)v4;
    }
    v6 = (_QWORD *)*a1;
    if ( *(__int64 ***)*a1 == v3 )
    {
      if ( *((_BYTE *)v4 + 25) )
        v7 = v5;
      else
        v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min(v4);
      *v6 = v7;
    }
    if ( *(__int64 ***)(*a1 + 16LL) == v3 )
    {
      if ( *((_BYTE *)v4 + 25) )
      {
        v14 = v5;
      }
      else
      {
        v17 = (__int64 *)v4[2];
        v14 = v4;
        while ( !*((_BYTE *)v17 + 25) )
        {
          v14 = v17;
          v17 = (__int64 *)v17[2];
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v14;
    }
    goto LABEL_12;
  }
  (*v3)[1] = (__int64)v18;
  *v10 = (__int64)*v3;
  if ( v10 == v3[2] )
  {
    v5 = v10;
  }
  else
  {
    v5 = (__int64 *)v10[1];
    if ( !*((_BYTE *)v4 + 25) )
      v4[1] = (__int64)v5;
    *v5 = (__int64)v4;
    v10[2] = (__int64)v3[2];
    v3[2][1] = (__int64)v10;
  }
  if ( *(__int64 ***)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
  }
  else
  {
    v15 = (__int64 **)v3[1];
    if ( *v15 == (__int64 *)v3 )
      *v15 = v10;
    else
      v15[2] = v10;
  }
  v10[1] = (__int64)v3[1];
  v11 = *((_BYTE *)v10 + 24);
  *((_BYTE *)v10 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v11;
LABEL_12:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_13;
  while ( 1 )
  {
    v12 = v5;
    if ( v4 == *(__int64 **)(*a1 + 8LL) || *((_BYTE *)v4 + 24) != 1 )
      break;
    v13 = *v5;
    if ( v4 == (__int64 *)*v5 )
    {
      v13 = v5[2];
      if ( !*(_BYTE *)(v13 + 24) )
      {
        *(_BYTE *)(v13 + 24) = 1;
        *((_BYTE *)v5 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
          a1,
          v5);
        v13 = v5[2];
      }
      if ( !*(_BYTE *)(v13 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
            *(_BYTE *)(v13 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
            v13 = v5[2];
          }
          *(_BYTE *)(v13 + 24) = *((_BYTE *)v5 + 24);
          *((_BYTE *)v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
            a1,
            v5);
          break;
        }
        goto LABEL_61;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v13 + 24) )
      {
        *(_BYTE *)(v13 + 24) = 1;
        *((_BYTE *)v5 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
        v13 = *v5;
      }
      if ( !*(_BYTE *)(v13 + 25) )
      {
        v16 = *(_QWORD *)(v13 + 16);
        if ( *(_BYTE *)(v16 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) == 1 )
          {
            *(_BYTE *)(v16 + 24) = 1;
            *(_BYTE *)(v13 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
              a1,
              v13);
            v13 = *v5;
          }
          *(_BYTE *)(v13 + 24) = *((_BYTE *)v5 + 24);
          *((_BYTE *)v5 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
          break;
        }
LABEL_61:
        *(_BYTE *)(v13 + 24) = 0;
      }
    }
    v5 = (__int64 *)v5[1];
    v4 = v12;
  }
  *((_BYTE *)v4 + 24) = 1;
LABEL_13:
  v8 = a1[1];
  if ( v8 )
    a1[1] = v8 - 1;
  return v3;
}
