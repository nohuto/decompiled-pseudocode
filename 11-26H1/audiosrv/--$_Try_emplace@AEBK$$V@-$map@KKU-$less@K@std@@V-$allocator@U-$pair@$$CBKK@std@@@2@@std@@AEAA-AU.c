/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18003F4BC
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18003F240 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@2@@Z @ 0x18003EB30 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AXXZ@std@@@std@@@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18003EB84 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU-$_Tree_nod.c)
 *     ?allocate@?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@_K@Z @ 0x18003F6D4 (-allocate@-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@QEAAPEAU-$_Tree_node@U-$.c)
 *     ??$?0AEBK$$Z$$V@?$pair@$$CBKK@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBK@1@V?$tuple@$$V@1@@Z @ 0x18003F714 (--$-0AEBK$$Z$$V@-$pair@$$CBKK@std@@QEAA@Upiecewise_construct_t@1@V-$tuple@AEBK@1@V-$tuple@$$V@1@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800E8360 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(
        __int64 ***a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 **v6; // r15
  __int64 *v7; // rdi
  int v8; // ebp
  __int64 **v9; // rcx
  __int64 *v10; // rdx
  unsigned int v11; // r9d
  char v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 **v17; // r11
  __int64 v18; // r9
  __int64 i; // rax
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rax
  unsigned int *v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = *a1;
  v7 = (*a1)[1];
  v8 = 0;
  v9 = *a1;
  v10 = v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v11 = *a3;
    do
    {
      v7 = v10;
      if ( *((_DWORD *)v10 + 7) < v11 )
      {
        v12 = 1;
        v8 = 0;
      }
      else
      {
        v12 = 0;
        v8 = 1;
        v9 = (__int64 **)v10;
      }
      v13 = v10 + 2;
      if ( !v12 )
        v13 = v10;
      v10 = (__int64 *)*v13;
    }
    while ( !*(_BYTE *)(*v13 + 25) );
  }
  if ( *((_BYTE *)v9 + 25) || *a3 < *((_DWORD *)v9 + 7) )
  {
    if ( a1[1] == (__int64 **)0x666666666666666LL )
      std::_Throw_tree_length_error();
    v14 = std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>::allocate(v9);
    v24 = a3;
    ____0AEBK__Z__V___pair___CBKK_std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBK_1_V__tuple___V_1__Z(
      v14 + 28,
      v15,
      &v24);
    *(_QWORD *)v16 = v6;
    *(_QWORD *)(v16 + 8) = v6;
    *(_QWORD *)(v16 + 16) = v6;
    *(_WORD *)(v16 + 24) = 0;
    a1[1] = (__int64 **)((char *)a1[1] + 1);
    v17 = *a1;
    *(_QWORD *)(v16 + 8) = v7;
    if ( v7 != (__int64 *)v17 )
    {
      if ( v8 )
      {
        *v7 = v16;
        if ( v7 == *v17 )
          *v17 = (__int64 *)v16;
      }
      else
      {
        v7[2] = v16;
        if ( v7 == v17[2] )
          v17[2] = (__int64 *)v16;
      }
      v18 = v16;
      for ( i = *(_QWORD *)(v16 + 8); ; i = *(_QWORD *)(v18 + 8) )
      {
        if ( *(_BYTE *)(i + 24) )
        {
          *((_BYTE *)v17[1] + 24) = 1;
          goto LABEL_18;
        }
        v21 = *(_QWORD *)(v18 + 8);
        v22 = *(__int64 **)(v21 + 8);
        v23 = *v22;
        if ( v21 == *v22 )
        {
          v23 = v22[2];
          if ( !*(_BYTE *)(v23 + 24) )
            goto LABEL_36;
          if ( v18 == *(_QWORD *)(v21 + 16) )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
              (__int64)a1,
              v21);
          *(_BYTE *)(*(_QWORD *)(v18 + 8) + 24LL) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL) + 24LL) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
            (__int64)a1,
            *(_QWORD **)(*(_QWORD *)(v18 + 8) + 8LL));
        }
        else
        {
          if ( !*(_BYTE *)(v23 + 24) )
          {
LABEL_36:
            *(_BYTE *)(v21 + 24) = 1;
            *(_BYTE *)(v23 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL) + 24LL) = 0;
            v18 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL);
            continue;
          }
          if ( v18 == *(_QWORD *)v21 )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v21);
          *(_BYTE *)(*(_QWORD *)(v18 + 8) + 24LL) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL) + 24LL) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
            (__int64)a1,
            *(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL));
        }
      }
    }
    *v17 = (__int64 *)v16;
    v17[1] = (__int64 *)v16;
    v17[2] = (__int64 *)v16;
    *(_BYTE *)(v16 + 24) = 1;
LABEL_18:
    *(_QWORD *)a2 = v16;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
