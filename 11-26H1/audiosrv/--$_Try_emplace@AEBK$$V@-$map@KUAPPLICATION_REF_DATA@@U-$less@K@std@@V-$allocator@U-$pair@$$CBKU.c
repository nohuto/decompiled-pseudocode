/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180076DB8
 * Callers:
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x180076CEC (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 * Callees:
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E02C4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@P.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800E8360 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801006B0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010E794 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 */

__int64 __fastcall std::map<unsigned long,APPLICATION_REF_DATA>::_Try_emplace<unsigned long const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v3; // r10
  __int64 *v6; // rdx
  __int64 *v7; // r9
  unsigned int v8; // r11d
  char v9; // cl
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _BYTE v14[16]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v16; // [rsp+70h] [rbp+10h] BYREF

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v15 = (unsigned __int64)v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v15 = v7;
      if ( *((_DWORD *)v7 + 7) >= v8 )
      {
        v9 = 0;
        DWORD2(v15) = 1;
        v6 = v7;
      }
      else
      {
        v9 = 1;
        DWORD2(v15) = 0;
      }
      v10 = v7 + 2;
      if ( !v9 )
        v10 = v7;
      v7 = (__int64 *)*v10;
    }
    while ( !*(_BYTE *)(*v10 + 25) );
  }
  if ( *((_BYTE *)v6 + 25) || *a3 < *((_DWORD *)v6 + 7) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v16 = a3;
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>(
            (unsigned int)v14,
            (_DWORD)a1,
            (_DWORD)v3,
            (_DWORD)v7,
            (__int64)&v16);
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>(v14);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Insert_node(
                      a1,
                      &v15,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
