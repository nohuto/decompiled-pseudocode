/*
 * XREFs of ??$_Try_emplace@_K$$V@?$map@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1800DFD70
 * Callers:
 *     ?RegisterCallback@CBtAudioResourceManagerBase@@UEAAJV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x1800E5C40 (-RegisterCallback@CBtAudioResourceManagerBase@@UEAAJV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@$$QEA_K@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@AEAA@AEAV?$tuple@$$QEA_K@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1800DF8AC (--$-0V-$tuple@$$QEA_K@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@st.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E0308 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800E813C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800E8360 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned __int64,std::function<void (bool)>>::_Try_emplace<unsigned __int64,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v6; // r15
  __int64 *v7; // r9
  __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  char v10; // cl
  __int64 *v11; // rax
  _QWORD *v12; // rbx
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]
  unsigned __int64 *v16; // [rsp+80h] [rbp+20h] BYREF

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v15 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v15 = v7;
      if ( v7[4] >= v9 )
      {
        v10 = 0;
        DWORD2(v15) = 1;
        v8 = v7;
      }
      else
      {
        v10 = 1;
        DWORD2(v15) = 0;
      }
      v11 = v7 + 2;
      if ( !v10 )
        v11 = v7;
      v7 = (__int64 *)*v11;
    }
    while ( !*(_BYTE *)(*v11 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < v8[4] )
  {
    if ( a1[1] == 0x276276276276276LL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v14 = a1;
    v12 = operator new(0x68uLL);
    v16 = a3;
    ____0V__tuple___QEA_K_std__V__tuple___V_1__0A___Z_S___pair___CB_KV__function___A6AX_N_Z_std___std__AEAA_AEAV__tuple___QEA_K_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v12 + 4,
      &v16);
    *v12 = v6;
    v12[1] = v6;
    v12[2] = v6;
    *((_WORD *)v12 + 12) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>(&v14);
    v14 = v15;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Insert_node(
                      a1,
                      &v14,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
