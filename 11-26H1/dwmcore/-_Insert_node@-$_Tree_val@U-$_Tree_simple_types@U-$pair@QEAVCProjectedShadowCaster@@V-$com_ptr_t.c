/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18018A650
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@?$map@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCProjectedShadowCaster@@@Z @ 0x1801BCD54 (--$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@-$map@PEAVCProjectedShadowCaster@@V-$com_ptr_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>::_Insert_node(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rax
  __int64 result; // rax
  _QWORD *v7; // r11
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
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
    v7 = (_QWORD *)a3;
    while ( !*(_BYTE *)(v7[1] + 24LL) )
    {
      v8 = v7[1];
      v9 = *(__int64 **)(v8 + 8);
      v10 = *v9;
      if ( v8 == *v9 )
      {
        v11 = v9[2];
        if ( !*(_BYTE *)(v11 + 24) )
        {
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
          v7 = *(_QWORD **)(v7[1] + 8LL);
          continue;
        }
        v12 = *(_QWORD **)(v8 + 16);
        if ( v7 == v12 )
        {
          v7 = (_QWORD *)v7[1];
          *(_QWORD *)(v8 + 16) = *v12;
          if ( !*(_BYTE *)(*v12 + 25LL) )
            *(_QWORD *)(*v12 + 8LL) = v8;
          v12[1] = *(_QWORD *)(v8 + 8);
          if ( v8 == *(_QWORD *)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v12;
          }
          else
          {
            v13 = *(_QWORD **)(v8 + 8);
            if ( v8 == *v13 )
              *v13 = v12;
            else
              v13[2] = v12;
          }
          *v12 = v8;
          *(_QWORD *)(v8 + 8) = v12;
        }
        *(_BYTE *)(v7[1] + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
        v14 = *(_QWORD **)(v7[1] + 8LL);
        v15 = (_QWORD *)*v14;
        *v14 = *(_QWORD *)(*v14 + 16LL);
        v16 = v15[2];
        if ( !*(_BYTE *)(v16 + 25) )
          *(_QWORD *)(v16 + 8) = v14;
        v15[1] = v14[1];
        if ( v14 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v15;
        }
        else
        {
          v17 = (_QWORD *)v14[1];
          if ( v14 == (_QWORD *)v17[2] )
            v17[2] = v15;
          else
            *v17 = v15;
        }
        v15[2] = v14;
      }
      else
      {
        if ( !*(_BYTE *)(v10 + 24) )
        {
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
          v7 = *(_QWORD **)(v7[1] + 8LL);
          continue;
        }
        v18 = *(_QWORD **)v8;
        if ( v7 == *(_QWORD **)v8 )
        {
          v7 = (_QWORD *)v7[1];
          *(_QWORD *)v8 = v18[2];
          v19 = v18[2];
          if ( !*(_BYTE *)(v19 + 25) )
            *(_QWORD *)(v19 + 8) = v8;
          v18[1] = *(_QWORD *)(v8 + 8);
          if ( v8 == *(_QWORD *)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v18;
          }
          else
          {
            v20 = *(_QWORD **)(v8 + 8);
            if ( v8 == v20[2] )
              v20[2] = v18;
            else
              *v20 = v18;
          }
          v18[2] = v8;
          *(_QWORD *)(v8 + 8) = v18;
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
          *v15 = v14;
        }
        else
        {
          v21 = (_QWORD *)v14[1];
          if ( v14 == (_QWORD *)*v21 )
            *v21 = v15;
          else
            v21[2] = v15;
          *v15 = v14;
        }
      }
      v14[1] = v15;
    }
    *(_BYTE *)(v4[1] + 24LL) = 1;
    return a3;
  }
  return result;
}
