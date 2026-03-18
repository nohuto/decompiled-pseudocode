/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801BE174
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x18011613C (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x1800316A0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801BE120 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXUDEVICE_INFO@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@Z @ 0x1801CF4AC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXPEA.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@Z @ 0x1801DE68C (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXPEA.c)
 */

__int64 **__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 **v3; // r11
  __int64 *v4; // r10
  __int64 *v5; // rax
  __int64 *v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 **v11; // rcx
  char v12; // dl
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( *((_BYTE *)*v3 + 25) )
    goto LABEL_5;
  if ( *((_BYTE *)v4 + 25) )
  {
    v4 = *v3;
LABEL_5:
    v6 = v3[1];
    if ( !*((_BYTE *)v4 + 25) )
      v4[1] = (__int64)v6;
    if ( *(__int64 ***)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( (__int64 **)*v6 == v3 )
    {
      *v6 = (__int64)v4;
    }
    else
    {
      v6[2] = (__int64)v4;
    }
    v7 = (_QWORD *)*a1;
    if ( *(__int64 ***)*a1 == v3 )
    {
      if ( *((_BYTE *)v4 + 25) )
        v8 = v6;
      else
        v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min(v4);
      *v7 = v8;
    }
    if ( *(__int64 ***)(*a1 + 16LL) == v3 )
    {
      if ( *((_BYTE *)v4 + 25) )
      {
        v9 = v6;
      }
      else
      {
        v10 = (__int64 *)v4[2];
        v9 = v4;
        while ( !*((_BYTE *)v10 + 25) )
        {
          v9 = v10;
          v10 = (__int64 *)v10[2];
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v9;
    }
    goto LABEL_35;
  }
  v5 = v18;
  v4 = (__int64 *)v18[2];
  if ( v18 == (__int64 *)v3 )
    goto LABEL_5;
  (*v3)[1] = (__int64)v18;
  *v5 = (__int64)*v3;
  if ( v5 == v3[2] )
  {
    v6 = v5;
  }
  else
  {
    v6 = (__int64 *)v5[1];
    if ( !*((_BYTE *)v4 + 25) )
      v4[1] = (__int64)v6;
    *v6 = (__int64)v4;
    v5[2] = (__int64)v3[2];
    v3[2][1] = (__int64)v5;
  }
  if ( *(__int64 ***)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v5;
  }
  else
  {
    v11 = (__int64 **)v3[1];
    if ( *v11 == (__int64 *)v3 )
      *v11 = v5;
    else
      v11[2] = v5;
  }
  v5[1] = (__int64)v3[1];
  v12 = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v12;
LABEL_35:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_58;
  while ( 1 )
  {
    v13 = v6;
    if ( v4 == *(__int64 **)(*a1 + 8LL) || *((_BYTE *)v4 + 24) != 1 )
      break;
    v14 = *v6;
    if ( v4 == (__int64 *)*v6 )
    {
      v14 = v6[2];
      if ( !*(_BYTE *)(v14 + 24) )
      {
        *(_BYTE *)(v14 + 24) = 1;
        *((_BYTE *)v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Lrotate(a1);
        v14 = v6[2];
      }
      if ( !*(_BYTE *)(v14 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v14 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            *(_BYTE *)(v14 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Rrotate(a1, v14);
            v14 = v6[2];
          }
          *(_BYTE *)(v14 + 24) = *((_BYTE *)v6 + 24);
          *((_BYTE *)v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v14 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Lrotate(a1);
          break;
        }
LABEL_52:
        *(_BYTE *)(v14 + 24) = 0;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v14 + 24) )
      {
        *(_BYTE *)(v14 + 24) = 1;
        *((_BYTE *)v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Rrotate(a1, v6);
        v14 = *v6;
      }
      if ( !*(_BYTE *)(v14 + 25) )
      {
        v15 = *(_QWORD *)(v14 + 16);
        if ( *(_BYTE *)(v15 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) == 1 )
          {
            *(_BYTE *)(v15 + 24) = 1;
            *(_BYTE *)(v14 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Lrotate(a1);
            v14 = *v6;
          }
          *(_BYTE *)(v14 + 24) = *((_BYTE *)v6 + 24);
          *((_BYTE *)v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Rrotate(a1, v6);
          break;
        }
        goto LABEL_52;
      }
    }
    v6 = (__int64 *)v6[1];
    v4 = v13;
  }
  *((_BYTE *)v4 + 24) = 1;
LABEL_58:
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v3;
}
