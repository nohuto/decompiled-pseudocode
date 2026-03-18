/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180190824
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x18026406C (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x1800316A0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Extract(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r11
  _QWORD *v3; // r9
  _QWORD **v4; // r10
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  _QWORD *v8; // rsi
  char v9; // r8
  _QWORD *i; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // r10
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _BYTE *v16; // r10
  __int64 v17; // rcx
  _QWORD *v19; // r11
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rdx
  __int64 **v26; // rax
  _QWORD *v27; // rcx
  char v28; // dl
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax

  v2 = a2 + 2;
  v3 = (_QWORD *)a2[2];
  v4 = (_QWORD **)(a2 + 1);
  v6 = a2;
  v7 = a2;
  v8 = a2;
  v9 = *((_BYTE *)v3 + 25);
  if ( v9 )
  {
    for ( i = *v4; !*((_BYTE *)i + 25) && a2 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min((_QWORD *)a2[2]);
  }
  if ( !*(_BYTE *)(*v6 + 25LL) )
  {
    if ( v9 )
    {
      v3 = (_QWORD *)*v6;
    }
    else
    {
      v3 = (_QWORD *)i[2];
      if ( i != v7 )
      {
        *(_QWORD *)(*v6 + 8LL) = i;
        *i = *v6;
        if ( i == (_QWORD *)*v2 )
        {
          v11 = i;
        }
        else
        {
          v11 = (_QWORD *)i[1];
          if ( !*((_BYTE *)v3 + 25) )
            v3[1] = v11;
          *v11 = v3;
          i[2] = *v2;
          *(_QWORD *)(*v2 + 8LL) = i;
        }
        if ( *(_QWORD **)(*a1 + 8LL) == v7 )
        {
          *(_QWORD *)(*a1 + 8LL) = i;
        }
        else
        {
          v12 = *v4;
          if ( (_QWORD *)**v4 == v7 )
            *v12 = i;
          else
            v12[2] = i;
        }
        v27 = *v4;
        v16 = v7 + 3;
        i[1] = v27;
        v28 = *((_BYTE *)i + 24);
        *((_BYTE *)i + 24) = *((_BYTE *)v7 + 24);
        *((_BYTE *)v7 + 24) = v28;
        goto LABEL_25;
      }
    }
  }
  v11 = *v4;
  if ( !*((_BYTE *)v3 + 25) )
    v3[1] = v11;
  if ( *(_QWORD **)(*a1 + 8LL) == v7 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else if ( (_QWORD *)*v11 == v7 )
  {
    *v11 = v3;
  }
  else
  {
    v11[2] = v3;
  }
  v13 = (_QWORD *)*a1;
  if ( *(_QWORD **)*a1 == v7 )
  {
    if ( *((_BYTE *)v3 + 25) )
      v14 = v11;
    else
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min(v3);
    *v13 = v14;
  }
  if ( *(_QWORD **)(*a1 + 16LL) == v7 )
  {
    if ( *((_BYTE *)v3 + 25) )
    {
      v15 = v11;
    }
    else
    {
      v29 = v3[2];
      v15 = v3;
      while ( !*(_BYTE *)(v29 + 25) )
      {
        v15 = (_QWORD *)v29;
        v29 = *(_QWORD *)(v29 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v15;
  }
  v16 = v8 + 3;
LABEL_25:
  if ( *v16 != 1 )
    goto LABEL_26;
  while ( 1 )
  {
    v19 = v11;
    if ( v3 == *(_QWORD **)(*a1 + 8LL) || *((_BYTE *)v3 + 24) != 1 )
      break;
    v20 = (__int64 *)*v11;
    if ( v3 == (_QWORD *)*v11 )
    {
      v20 = (__int64 *)v11[2];
      if ( !*((_BYTE *)v20 + 24) )
      {
        *((_BYTE *)v20 + 24) = 1;
        v30 = (_QWORD *)v11[2];
        *((_BYTE *)v11 + 24) = 0;
        v11[2] = *v30;
        if ( !*(_BYTE *)(*v30 + 25LL) )
          *(_QWORD *)(*v30 + 8LL) = v11;
        v30[1] = v11[1];
        if ( v11 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v30;
        }
        else
        {
          v31 = (_QWORD *)v11[1];
          if ( v11 == (_QWORD *)*v31 )
            *v31 = v30;
          else
            v31[2] = v30;
        }
        *v30 = v11;
        v11[1] = v30;
        v20 = (__int64 *)v11[2];
      }
      if ( !*((_BYTE *)v20 + 25) )
      {
        if ( *(_BYTE *)(*v20 + 24) != 1 || *(_BYTE *)(v20[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v20[2] + 24) == 1 )
          {
            *(_BYTE *)(*v20 + 24) = 1;
            v32 = *v20;
            *((_BYTE *)v20 + 24) = 0;
            *v20 = *(_QWORD *)(v32 + 16);
            v33 = *(_QWORD *)(v32 + 16);
            if ( !*(_BYTE *)(v33 + 25) )
              *(_QWORD *)(v33 + 8) = v20;
            *(_QWORD *)(v32 + 8) = v20[1];
            if ( v20 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v32;
            }
            else
            {
              v34 = (_QWORD *)v20[1];
              if ( v20 == (__int64 *)v34[2] )
                v34[2] = v32;
              else
                *v34 = v32;
            }
            *(_QWORD *)(v32 + 16) = v20;
            v20[1] = v32;
            v20 = (__int64 *)v11[2];
          }
          *((_BYTE *)v20 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(v20[2] + 24) = 1;
          v35 = (_QWORD *)v11[2];
          v11[2] = *v35;
          if ( !*(_BYTE *)(*v35 + 25LL) )
            *(_QWORD *)(*v35 + 8LL) = v11;
          v35[1] = v11[1];
          if ( v11 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v35;
          }
          else
          {
            v36 = (_QWORD *)v11[1];
            if ( v11 == (_QWORD *)*v36 )
              *v36 = v35;
            else
              v36[2] = v35;
          }
          *v35 = v11;
          goto LABEL_87;
        }
        goto LABEL_111;
      }
    }
    else
    {
      if ( !*((_BYTE *)v20 + 24) )
      {
        *((_BYTE *)v20 + 24) = 1;
        v21 = (__int64 *)*v11;
        *((_BYTE *)v11 + 24) = 0;
        *v11 = v21[2];
        v22 = v21[2];
        if ( !*(_BYTE *)(v22 + 25) )
          *(_QWORD *)(v22 + 8) = v11;
        v21[1] = v11[1];
        if ( v11 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v21;
        }
        else
        {
          v23 = (_QWORD *)v11[1];
          if ( v11 == (_QWORD *)v23[2] )
            v23[2] = v21;
          else
            *v23 = v21;
        }
        v21[2] = (__int64)v11;
        v11[1] = v21;
        v20 = (__int64 *)*v11;
      }
      if ( !*((_BYTE *)v20 + 25) )
      {
        v24 = v20[2];
        if ( *(_BYTE *)(v24 + 24) != 1 || *(_BYTE *)(*v20 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v20 + 24) == 1 )
          {
            *(_BYTE *)(v24 + 24) = 1;
            v25 = (__int64 *)v20[2];
            *((_BYTE *)v20 + 24) = 0;
            v20[2] = *v25;
            if ( !*(_BYTE *)(*v25 + 25) )
              *(_QWORD *)(*v25 + 8) = v20;
            v25[1] = v20[1];
            if ( v20 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v25;
            }
            else
            {
              v26 = (__int64 **)v20[1];
              if ( v20 == *v26 )
                *v26 = v25;
              else
                v26[2] = v25;
            }
            *v25 = (__int64)v20;
            v20[1] = (__int64)v25;
            v20 = (__int64 *)*v11;
          }
          *((_BYTE *)v20 + 24) = *((_BYTE *)v11 + 24);
          *((_BYTE *)v11 + 24) = 1;
          *(_BYTE *)(*v20 + 24) = 1;
          v35 = (_QWORD *)*v11;
          *v11 = *(_QWORD *)(*v11 + 16LL);
          v37 = v35[2];
          if ( !*(_BYTE *)(v37 + 25) )
            *(_QWORD *)(v37 + 8) = v11;
          v35[1] = v11[1];
          if ( v11 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v35;
          }
          else
          {
            v38 = (_QWORD *)v11[1];
            if ( v11 == (_QWORD *)v38[2] )
              v38[2] = v35;
            else
              *v38 = v35;
          }
          v35[2] = v11;
LABEL_87:
          v11[1] = v35;
          break;
        }
LABEL_111:
        *((_BYTE *)v20 + 24) = 0;
      }
    }
    v11 = (_QWORD *)v11[1];
    v3 = v19;
  }
  *((_BYTE *)v3 + 24) = 1;
LABEL_26:
  v17 = a1[1];
  if ( v17 )
    a1[1] = v17 - 1;
  return v7;
}
