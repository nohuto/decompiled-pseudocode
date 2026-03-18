/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18019121C
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@?$map@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCSceneMeshRendererComponent@@@Z @ 0x18028047C (--$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@-$map@PEAVCSceneMeshRendererComponent@@V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Insert_node(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax

  ++a1[1];
  v4 = (_QWORD *)*a1;
  v5 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v5 == v4 )
  {
    *v4 = a3;
    v4[1] = a3;
    v4[2] = a3;
    *(_BYTE *)(a3 + 24) = 1;
    return a3;
  }
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
  v6 = *(_QWORD *)(a3 + 8);
  v7 = (_QWORD *)a3;
  while ( !*(_BYTE *)(v6 + 24) )
  {
    v8 = v7[1];
    v9 = *(__int64 **)(v8 + 8);
    v10 = *v9;
    if ( v8 == *v9 )
    {
      v10 = v9[2];
      if ( *(_BYTE *)(v10 + 24) )
      {
        v18 = *(_QWORD **)(v8 + 16);
        if ( v7 == v18 )
        {
          v7 = (_QWORD *)v7[1];
          *(_QWORD *)(v8 + 16) = *v18;
          if ( !*(_BYTE *)(*v18 + 25LL) )
            *(_QWORD *)(*v18 + 8LL) = v8;
          v18[1] = *(_QWORD *)(v8 + 8);
          if ( v8 == *(_QWORD *)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v18;
          }
          else
          {
            v19 = *(_QWORD **)(v8 + 8);
            if ( v8 == *v19 )
              *v19 = v18;
            else
              v19[2] = v18;
          }
          *v18 = v8;
          *(_QWORD *)(v8 + 8) = v18;
        }
        *(_BYTE *)(v7[1] + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
        v14 = *(_QWORD **)(v7[1] + 8LL);
        v15 = (_QWORD *)*v14;
        *v14 = *(_QWORD *)(*v14 + 16LL);
        v20 = v15[2];
        if ( !*(_BYTE *)(v20 + 25) )
          *(_QWORD *)(v20 + 8) = v14;
        v15[1] = v14[1];
        if ( v14 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v15;
        }
        else
        {
          v21 = (_QWORD *)v14[1];
          if ( v14 == (_QWORD *)v21[2] )
            v21[2] = v15;
          else
            *v21 = v15;
        }
        v15[2] = v14;
        goto LABEL_42;
      }
    }
    else if ( *(_BYTE *)(v10 + 24) )
    {
      v11 = *(_QWORD **)v8;
      if ( v7 == *(_QWORD **)v8 )
      {
        v7 = (_QWORD *)v7[1];
        *(_QWORD *)v8 = v11[2];
        v12 = v11[2];
        if ( !*(_BYTE *)(v12 + 25) )
          *(_QWORD *)(v12 + 8) = v8;
        v11[1] = *(_QWORD *)(v8 + 8);
        if ( v8 == *(_QWORD *)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v11;
        }
        else
        {
          v13 = *(_QWORD **)(v8 + 8);
          if ( v8 == v13[2] )
            v13[2] = v11;
          else
            *v13 = v11;
        }
        v11[2] = v8;
        *(_QWORD *)(v8 + 8) = v11;
      }
      *(_BYTE *)(v7[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
      v14 = *(_QWORD **)(v7[1] + 8LL);
      v15 = (_QWORD *)v14[2];
      v14[2] = *v15;
      if ( !*(_BYTE *)(*v15 + 25LL) )
        *(_QWORD *)(*v15 + 8LL) = v14;
      v15[1] = v14[1];
      if ( v14 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v15;
      }
      else
      {
        v16 = (_QWORD *)v14[1];
        if ( v14 == (_QWORD *)*v16 )
          *v16 = v15;
        else
          v16[2] = v15;
      }
      *v15 = v14;
LABEL_42:
      v14[1] = v15;
      goto LABEL_43;
    }
    *(_BYTE *)(v8 + 24) = 1;
    *(_BYTE *)(v10 + 24) = 1;
    *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
    v7 = *(_QWORD **)(v7[1] + 8LL);
LABEL_43:
    v6 = v7[1];
  }
  *(_BYTE *)(v4[1] + 24LL) = 1;
  return a3;
}
