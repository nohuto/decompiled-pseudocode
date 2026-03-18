/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180180050
 * Callers:
 *     ??$_Emplace_hint@UD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@QEAU21@$$QEAUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@Z @ 0x180144238 (--$_Emplace_hint@UD2D_VECTOR_2F@@AEAUEdgeData@-$CConvexPolygonEdgeMap@I@@@-$_Tree@V-$_Tmap_trait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>::_Insert_node(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // r10
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 result; // rax
  _QWORD *v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax

  ++a1[1];
  v4 = (_QWORD *)*a1;
  v5 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v5 == v4 )
  {
    *v4 = a3;
    result = a3;
    v4[1] = a3;
    v4[2] = a3;
    *(_BYTE *)(a3 + 24) = 1;
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      *v5 = a3;
      if ( v5 == (_QWORD *)*v4 )
        *v4 = a3;
    }
    else
    {
      v5[2] = a3;
      if ( v5 == (_QWORD *)v4[2] )
        v4[2] = a3;
    }
    v6 = (_QWORD *)a3;
    if ( !*(_BYTE *)(*(_QWORD *)(a3 + 8) + 24LL) )
    {
      while ( 1 )
      {
        v7 = v6[1];
        v8 = *(__int64 **)(v7 + 8);
        v9 = *v8;
        if ( v7 == *v8 )
          break;
        if ( *(_BYTE *)(v9 + 24) )
        {
          v18 = *(_QWORD **)v7;
          if ( v6 == *(_QWORD **)v7 )
          {
            v6 = (_QWORD *)v6[1];
            *(_QWORD *)v7 = v18[2];
            v19 = v18[2];
            if ( !*(_BYTE *)(v19 + 25) )
              *(_QWORD *)(v19 + 8) = v7;
            v18[1] = *(_QWORD *)(v7 + 8);
            if ( v7 == *(_QWORD *)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v18;
            }
            else
            {
              v20 = *(_QWORD **)(v7 + 8);
              if ( v7 == v20[2] )
                v20[2] = v18;
              else
                *v20 = v18;
            }
            v18[2] = v7;
            *(_QWORD *)(v7 + 8) = v18;
          }
          *(_BYTE *)(v6[1] + 24LL) = 1;
          *(_BYTE *)(*(_QWORD *)(v6[1] + 8LL) + 24LL) = 0;
          v13 = *(_QWORD **)(v6[1] + 8LL);
          v14 = (_QWORD *)v13[2];
          v13[2] = *v14;
          if ( !*(_BYTE *)(*v14 + 25LL) )
            *(_QWORD *)(*v14 + 8LL) = v13;
          v14[1] = v13[1];
          if ( v13 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v14;
          }
          else
          {
            v21 = (_QWORD *)v13[1];
            if ( v13 == (_QWORD *)*v21 )
              *v21 = v14;
            else
              v21[2] = v14;
          }
          *v14 = v13;
LABEL_25:
          v13[1] = v14;
          goto LABEL_26;
        }
        *(_BYTE *)(v7 + 24) = 1;
        *(_BYTE *)(v9 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v6[1] + 8LL) + 24LL) = 0;
        v6 = *(_QWORD **)(v6[1] + 8LL);
LABEL_26:
        if ( *(_BYTE *)(v6[1] + 24LL) )
          goto LABEL_27;
      }
      v10 = v8[2];
      if ( !*(_BYTE *)(v10 + 24) )
      {
        *(_BYTE *)(v7 + 24) = 1;
        *(_BYTE *)(v10 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v6[1] + 8LL) + 24LL) = 0;
        v6 = *(_QWORD **)(v6[1] + 8LL);
        goto LABEL_26;
      }
      v11 = *(_QWORD **)(v7 + 16);
      if ( v6 == v11 )
      {
        v6 = (_QWORD *)v6[1];
        *(_QWORD *)(v7 + 16) = *v11;
        if ( !*(_BYTE *)(*v11 + 25LL) )
          *(_QWORD *)(*v11 + 8LL) = v7;
        v11[1] = *(_QWORD *)(v7 + 8);
        if ( v7 == *(_QWORD *)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v11;
        }
        else
        {
          v12 = *(_QWORD **)(v7 + 8);
          if ( v7 == *v12 )
            *v12 = v11;
          else
            v12[2] = v11;
        }
        *v11 = v7;
        *(_QWORD *)(v7 + 8) = v11;
      }
      *(_BYTE *)(v6[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v6[1] + 8LL) + 24LL) = 0;
      v13 = *(_QWORD **)(v6[1] + 8LL);
      v14 = (_QWORD *)*v13;
      *v13 = *(_QWORD *)(*v13 + 16LL);
      v15 = v14[2];
      if ( !*(_BYTE *)(v15 + 25) )
        *(_QWORD *)(v15 + 8) = v13;
      v14[1] = v13[1];
      if ( v13 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v14;
        v14[2] = v13;
      }
      else
      {
        v16 = (_QWORD *)v13[1];
        if ( v13 == (_QWORD *)v16[2] )
          v16[2] = v14;
        else
          *v16 = v14;
        v14[2] = v13;
      }
      goto LABEL_25;
    }
LABEL_27:
    *(_BYTE *)(v4[1] + 24LL) = 1;
    return a3;
  }
  return result;
}
