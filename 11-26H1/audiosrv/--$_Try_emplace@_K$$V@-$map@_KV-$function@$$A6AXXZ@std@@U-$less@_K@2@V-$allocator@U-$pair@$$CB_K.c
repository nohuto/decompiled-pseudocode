/*
 * XREFs of ??$_Try_emplace@_K$$V@?$map@_KV?$function@$$A6AXXZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1800DFC60
 * Callers:
 *     ?RegisterBidirectionalModeChangedCallback@CBtAudioResourceManagerBase@@UEAAJV?$function@$$A6AXXZ@std@@PEAI@Z @ 0x1800E5B70 (-RegisterBidirectionalModeChangedCallback@CBtAudioResourceManagerBase@@UEAAJV-$function@$$A6AXXZ.c)
 * Callees:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEA_K@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEA_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800DF82C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEA_K@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allo.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E0308 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800E800C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AXXZ@std@@@std@@@s.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800E8360 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<unsigned __int64,std::function<void (void)>>::_Try_emplace<unsigned __int64,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r10
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  char v9; // cl
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 *v16; // [rsp+70h] [rbp+10h] BYREF

  v3 = *a1;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  v15 = (unsigned __int64)v7;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v15 = v7;
      if ( *(_QWORD *)(v7 + 32) >= v8 )
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
      v10 = (__int64 *)(v7 + 16);
      if ( !v9 )
        v10 = (__int64 *)v7;
      v7 = *v10;
    }
    while ( !*(_BYTE *)(*v10 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a3 < *(_QWORD *)(v6 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      std::_Throw_tree_length_error();
    v16 = a3;
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (void)>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (void)>>,void *>>>(
            v14,
            (__int64)a1,
            v3,
            v7,
            &v16);
    v12 = v11[1];
    v11[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>(v14);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Insert_node(
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
