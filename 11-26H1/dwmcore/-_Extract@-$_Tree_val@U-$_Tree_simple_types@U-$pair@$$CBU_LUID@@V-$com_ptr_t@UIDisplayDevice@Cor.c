/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18009C550
 * Callers:
 *     ??1CVisualSurface@@UEAA@XZ @ 0x18009B33C (--1CVisualSurface@@UEAA@XZ.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18028B108 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1802A1BAC (-_Erase@-$_Tree@V-$_Tmap_traits@U_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Window.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x1800316A0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  _QWORD *v3; // rsi
  _QWORD *v4; // r10
  __int64 ***v5; // r8
  __int64 **v6; // r11
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  char v9; // di
  __int64 *v10; // rax
  __int64 **v11; // rcx
  __int64 **v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rdx
  _BYTE *v15; // r11
  __int64 v16; // rcx
  __int64 *result; // rax
  __int64 *v18; // rdi
  __int64 *v19; // rdx
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // r8
  __int64 **v25; // rax
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // rax
  char v29; // r8
  __int64 *v30; // r11
  __int64 v31; // r8
  __int64 *v32; // rdx
  __int64 ***v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 ***v37; // rax

  v2 = (__int64 *)a2[2];
  v3 = a2 + 2;
  v4 = a1;
  v5 = (__int64 ***)(a2 + 1);
  v6 = (__int64 **)a2;
  v7 = a2;
  v8 = a2;
  v9 = *((_BYTE *)v2 + 25);
  if ( v9 )
  {
    v10 = (__int64 *)*v5;
    if ( !*((_BYTE *)*v5 + 25) )
    {
      do
      {
        if ( a2 != (__int64 *)v10[2] )
          break;
        a2 = v10;
        v10 = (__int64 *)v10[1];
      }
      while ( !*((_BYTE *)v10 + 25) );
    }
  }
  else
  {
    v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min((_QWORD *)a2[2]);
  }
  if ( !*((_BYTE *)*v6 + 25) )
  {
    if ( v9 )
    {
      v2 = *v6;
    }
    else
    {
      v2 = (__int64 *)v10[2];
      if ( v10 != v7 )
      {
        (*v6)[1] = (__int64)v10;
        *v10 = (__int64)*v6;
        if ( v10 == (__int64 *)*v3 )
        {
          v11 = (__int64 **)v10;
        }
        else
        {
          v11 = (__int64 **)v10[1];
          if ( !*((_BYTE *)v2 + 25) )
            v2[1] = (__int64)v11;
          *v11 = v2;
          v10[2] = *v3;
          *(_QWORD *)(*v3 + 8LL) = v10;
        }
        if ( *(__int64 **)(*v4 + 8LL) == v7 )
        {
          *(_QWORD *)(*v4 + 8LL) = v10;
        }
        else
        {
          v12 = *v5;
          if ( **v5 == v7 )
            *v12 = v10;
          else
            v12[2] = v10;
        }
        v15 = v7 + 3;
        v10[1] = (__int64)*v5;
        v29 = *((_BYTE *)v10 + 24);
        *((_BYTE *)v10 + 24) = *((_BYTE *)v7 + 24);
        *((_BYTE *)v7 + 24) = v29;
        goto LABEL_25;
      }
    }
  }
  v11 = *v5;
  if ( !*((_BYTE *)v2 + 25) )
    v2[1] = (__int64)v11;
  if ( *(__int64 **)(*v4 + 8LL) == v7 )
  {
    *(_QWORD *)(*v4 + 8LL) = v2;
  }
  else if ( *v11 == v7 )
  {
    *v11 = v2;
  }
  else
  {
    v11[2] = v2;
  }
  if ( *(__int64 **)*v4 == v7 )
  {
    if ( *((_BYTE *)v2 + 25) )
    {
      v13 = (__int64 *)v11;
    }
    else
    {
      v30 = (__int64 *)*v2;
      v13 = v2;
      if ( !*(_BYTE *)(*v2 + 25) )
      {
        do
        {
          v13 = v30;
          v30 = (__int64 *)*v30;
        }
        while ( !*((_BYTE *)v30 + 25) );
      }
    }
    *(_QWORD *)*v4 = v13;
  }
  if ( *(__int64 **)(*v4 + 16LL) == v7 )
  {
    if ( *((_BYTE *)v2 + 25) )
    {
      i = (__int64 *)v11;
    }
    else
    {
      v31 = v2[2];
      for ( i = v2; !*(_BYTE *)(v31 + 25); v31 = *(_QWORD *)(v31 + 16) )
        i = (__int64 *)v31;
    }
    *(_QWORD *)(*v4 + 16LL) = i;
  }
  v15 = v8 + 3;
LABEL_25:
  if ( *v15 != 1 )
    goto LABEL_26;
  while ( 1 )
  {
    v18 = (__int64 *)v11;
    if ( v2 == *(__int64 **)(*v4 + 8LL) || *((_BYTE *)v2 + 24) != 1 )
      goto LABEL_93;
    v19 = *v11;
    if ( v2 == *v11 )
      break;
    if ( !*((_BYTE *)v19 + 24) )
    {
      *((_BYTE *)v19 + 24) = 1;
      v20 = *v11;
      *((_BYTE *)v11 + 24) = 0;
      *v11 = (__int64 *)v20[2];
      v21 = v20[2];
      if ( !*(_BYTE *)(v21 + 25) )
        *(_QWORD *)(v21 + 8) = v11;
      v20[1] = (__int64)v11[1];
      if ( v11 == *(__int64 ***)(*v4 + 8LL) )
      {
        *(_QWORD *)(*v4 + 8LL) = v20;
      }
      else
      {
        v22 = v11[1];
        if ( v11 == (__int64 **)v22[2] )
          v22[2] = (__int64)v20;
        else
          *v22 = (__int64)v20;
      }
      v20[2] = (__int64)v11;
      v11[1] = v20;
      v19 = *v11;
    }
    if ( !*((_BYTE *)v19 + 25) )
    {
      v23 = v19[2];
      if ( *(_BYTE *)(v23 + 24) != 1 || *(_BYTE *)(*v19 + 24) != 1 )
      {
        if ( *(_BYTE *)(*v19 + 24) == 1 )
        {
          *(_BYTE *)(v23 + 24) = 1;
          v24 = (__int64 *)v19[2];
          *((_BYTE *)v19 + 24) = 0;
          v19[2] = *v24;
          if ( !*(_BYTE *)(*v24 + 25) )
            *(_QWORD *)(*v24 + 8) = v19;
          v24[1] = v19[1];
          if ( v19 == *(__int64 **)(*v4 + 8LL) )
          {
            *(_QWORD *)(*v4 + 8LL) = v24;
          }
          else
          {
            v25 = (__int64 **)v19[1];
            if ( v19 == *v25 )
              *v25 = v24;
            else
              v25[2] = v24;
          }
          *v24 = (__int64)v19;
          v19[1] = (__int64)v24;
          v19 = *v11;
        }
        *((_BYTE *)v19 + 24) = *((_BYTE *)v11 + 24);
        *((_BYTE *)v11 + 24) = 1;
        *(_BYTE *)(*v19 + 24) = 1;
        v26 = *v11;
        *v11 = (__int64 *)(*v11)[2];
        v27 = v26[2];
        if ( !*(_BYTE *)(v27 + 25) )
          *(_QWORD *)(v27 + 8) = v11;
        v26[1] = (__int64)v11[1];
        if ( v11 == *(__int64 ***)(*v4 + 8LL) )
        {
          *(_QWORD *)(*v4 + 8LL) = v26;
          v26[2] = (__int64)v11;
        }
        else
        {
          v28 = v11[1];
          if ( v11 == (__int64 **)v28[2] )
            v28[2] = (__int64)v26;
          else
            *v28 = (__int64)v26;
          v26[2] = (__int64)v11;
        }
        goto LABEL_92;
      }
      goto LABEL_111;
    }
LABEL_112:
    v11 = (__int64 **)v11[1];
    v2 = v18;
  }
  v19 = v11[2];
  if ( !*((_BYTE *)v19 + 24) )
  {
    *((_BYTE *)v19 + 24) = 1;
    v32 = v11[2];
    *((_BYTE *)v11 + 24) = 0;
    v11[2] = (__int64 *)*v32;
    if ( !*(_BYTE *)(*v32 + 25) )
      *(_QWORD *)(*v32 + 8) = v11;
    v32[1] = (__int64)v11[1];
    if ( v11 == *(__int64 ***)(*v4 + 8LL) )
    {
      *(_QWORD *)(*v4 + 8LL) = v32;
    }
    else
    {
      v33 = (__int64 ***)v11[1];
      if ( v11 == *v33 )
        *v33 = (__int64 **)v32;
      else
        v33[2] = (__int64 **)v32;
    }
    *v32 = (__int64)v11;
    v11[1] = v32;
    v19 = v11[2];
  }
  if ( *((_BYTE *)v19 + 25) )
    goto LABEL_112;
  if ( *(_BYTE *)(*v19 + 24) == 1 && *(_BYTE *)(v19[2] + 24) == 1 )
  {
LABEL_111:
    *((_BYTE *)v19 + 24) = 0;
    goto LABEL_112;
  }
  if ( *(_BYTE *)(v19[2] + 24) == 1 )
  {
    *(_BYTE *)(*v19 + 24) = 1;
    v34 = *v19;
    *((_BYTE *)v19 + 24) = 0;
    *v19 = *(_QWORD *)(v34 + 16);
    v35 = *(_QWORD *)(v34 + 16);
    if ( !*(_BYTE *)(v35 + 25) )
      *(_QWORD *)(v35 + 8) = v19;
    *(_QWORD *)(v34 + 8) = v19[1];
    if ( v19 == *(__int64 **)(*v4 + 8LL) )
    {
      *(_QWORD *)(*v4 + 8LL) = v34;
    }
    else
    {
      v36 = (_QWORD *)v19[1];
      if ( v19 == (__int64 *)v36[2] )
        v36[2] = v34;
      else
        *v36 = v34;
    }
    *(_QWORD *)(v34 + 16) = v19;
    v19[1] = v34;
    v19 = v11[2];
  }
  *((_BYTE *)v19 + 24) = *((_BYTE *)v11 + 24);
  *((_BYTE *)v11 + 24) = 1;
  *(_BYTE *)(v19[2] + 24) = 1;
  v26 = v11[2];
  v11[2] = (__int64 *)*v26;
  if ( !*(_BYTE *)(*v26 + 25) )
    *(_QWORD *)(*v26 + 8) = v11;
  v26[1] = (__int64)v11[1];
  if ( v11 != *(__int64 ***)(*v4 + 8LL) )
  {
    v37 = (__int64 ***)v11[1];
    if ( v11 == *v37 )
      *v37 = (__int64 **)v26;
    else
      v37[2] = (__int64 **)v26;
    *v26 = (__int64)v11;
LABEL_92:
    v11[1] = v26;
LABEL_93:
    *((_BYTE *)v2 + 24) = 1;
    goto LABEL_26;
  }
  *(_QWORD *)(*v4 + 8LL) = v26;
  *v26 = (__int64)v11;
  v11[1] = v26;
  *((_BYTE *)v2 + 24) = 1;
LABEL_26:
  v16 = v4[1];
  result = v7;
  if ( v16 )
    v4[1] = v16 - 1;
  return result;
}
