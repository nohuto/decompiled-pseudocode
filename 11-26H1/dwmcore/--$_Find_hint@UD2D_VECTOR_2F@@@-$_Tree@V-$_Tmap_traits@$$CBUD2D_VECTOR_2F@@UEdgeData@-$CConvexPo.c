/*
 * XREFs of ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1801435C4
 * Callers:
 *     ??$_Emplace_hint@UD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@QEAU21@$$QEAUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@Z @ 0x180144238 (--$_Emplace_hint@UD2D_VECTOR_2F@@AEAUEdgeData@-$CConvexPolygonEdgeMap@I@@@-$_Tree@V-$_Tmap_trait.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800CF0B0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRen.c)
 *     ??RCompareEdgeDirection@?$CConvexPolygonEdgeMap@I@@QEBA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1801440BC (--RCompareEdgeDirection@-$CConvexPolygonEdgeMap@I@@QEBA_NAEBUD2D_VECTOR_2F@@0@Z.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D3F14 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Find_hint<D2D_VECTOR_2F>(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  char v10; // al
  __int64 v11; // r14
  __int64 v12; // rcx
  bool v13; // zf
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // rdi
  char v18; // dl
  unsigned __int64 *v19; // rax
  char v20; // al
  __int128 v22; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 25LL)
      || (unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(
                            a1,
                            *(_QWORD *)(v4 + 16) + 28LL,
                            a4) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v4 + 16);
      *(_BYTE *)(a2 + 16) = 0;
LABEL_36:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_37;
    }
    goto LABEL_18;
  }
  v9 = a3 + 28;
  v10 = CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(a1, a4, a3 + 28);
  if ( a3 != *(_QWORD *)v4 )
  {
    if ( v10 )
    {
      v23 = a3;
      v11 = *(_QWORD *)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>,std::_Iterator_base0>::operator--(&v23);
      if ( (unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(v12, v11 + 28, a4) )
      {
        v13 = *(_BYTE *)(*(_QWORD *)(v11 + 16) + 25LL) == 0;
        *(_BYTE *)(a2 + 16) = 0;
        if ( !v13 )
        {
          *(_QWORD *)a2 = v11;
          goto LABEL_36;
        }
        *(_QWORD *)a2 = a3;
        goto LABEL_14;
      }
LABEL_18:
      v17 = *(_QWORD *)(v4 + 8);
      v22 = v17;
      while ( !*(_BYTE *)(v17 + 25) )
      {
        *(_QWORD *)&v22 = v17;
        v18 = CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(v8, v17 + 28, a4);
        if ( v18 )
        {
          DWORD2(v22) = 0;
        }
        else
        {
          DWORD2(v22) = 1;
          v4 = v17;
        }
        v19 = (unsigned __int64 *)(v17 + 16);
        if ( !v18 )
          v19 = (unsigned __int64 *)v17;
        v17 = *v19;
      }
      if ( *(_BYTE *)(v4 + 25)
        || (v13 = (unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(
                                     v8,
                                     a4,
                                     v4 + 28) == 0,
            v20 = 1,
            !v13) )
      {
        v20 = 0;
      }
      if ( v20 )
      {
        *(_QWORD *)a2 = v4;
        *(_QWORD *)(a2 + 8) = 2LL;
        *(_BYTE *)(a2 + 16) = 1;
        goto LABEL_37;
      }
      *(_OWORD *)a2 = v22;
      goto LABEL_8;
    }
    if ( (unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(v8, v9, a4) )
    {
      v23 = a3;
      v14 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v23);
      v16 = *v14;
      if ( !*(_BYTE *)(*v14 + 25LL)
        && !(unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(v15, a4, v16 + 28) )
      {
        goto LABEL_18;
      }
      v13 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( v13 )
      {
        *(_QWORD *)a2 = v16;
LABEL_14:
        *(_QWORD *)(a2 + 8) = 1LL;
        goto LABEL_37;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 16) = 1;
    }
    *(_QWORD *)a2 = a3;
    goto LABEL_36;
  }
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = 1LL;
LABEL_8:
  *(_BYTE *)(a2 + 16) = 0;
LABEL_37:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
