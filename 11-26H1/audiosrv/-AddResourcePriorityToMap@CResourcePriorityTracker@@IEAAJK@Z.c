/*
 * XREFs of ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18003F240
 * Callers:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18003EF00 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18003F0A0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@2@@Z @ 0x18003EB30 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AXXZ@std@@@std@@@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18003EB84 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU-$_Tree_nod.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18003F4BC (--$_Try_emplace@AEBK$$V@-$map@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@AEAA-AU.c)
 *     ?allocate@?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@_K@Z @ 0x18003F6D4 (-allocate@-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@QEAAPEAU-$_Tree_node@U-$.c)
 *     ??$?0AEBK$$Z$$V@?$pair@$$CBKK@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBK@1@V?$tuple@$$V@1@@Z @ 0x18003F714 (--$-0AEBK$$Z$$V@-$pair@$$CBKK@std@@QEAA@Upiecewise_construct_t@1@V-$tuple@AEBK@1@V-$tuple@$$V@1@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800E8360 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CResourcePriorityTracker::AddResourcePriorityToMap(CResourcePriorityTracker *this, unsigned int a2)
{
  _QWORD *v2; // rsi
  __int64 *v3; // r15
  __int64 *v4; // rbx
  __int64 *v5; // r8
  __int64 *v6; // rcx
  char v7; // r9
  __int64 *v8; // rax
  int v9; // r14d
  __int64 *v10; // r9
  __int64 *v11; // rcx
  char v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 **v16; // r11
  __int64 *v17; // r10
  __int64 i; // rax
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int *v27; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+78h] [rbp+10h] BYREF

  v28 = a2;
  try
  {
    v2 = (_QWORD *)((char *)this + 40);
    v3 = (__int64 *)*((_QWORD *)this + 5);
    v4 = (__int64 *)v3[1];
    HIDWORD(v25) = 0;
    v5 = v3;
    v6 = v4;
    if ( !*((_BYTE *)v4 + 25) )
    {
      do
      {
        if ( *((_DWORD *)v6 + 7) < a2 )
        {
          v7 = 1;
        }
        else
        {
          v7 = 0;
          v5 = v6;
        }
        v8 = v6 + 2;
        if ( !v7 )
          v8 = v6;
        v6 = (__int64 *)*v8;
      }
      while ( !*(_BYTE *)(*v8 + 25) );
    }
    if ( *((_BYTE *)v5 + 25) || a2 < *((_DWORD *)v5 + 7) )
    {
      v9 = 0;
      HIDWORD(v25) = 0;
      v10 = v3;
      v11 = v4;
      if ( !*((_BYTE *)v4 + 25) )
      {
        do
        {
          v4 = v11;
          if ( *((_DWORD *)v11 + 7) < a2 )
          {
            v12 = 1;
            v9 = 0;
          }
          else
          {
            v12 = 0;
            v9 = 1;
            v10 = v11;
          }
          v13 = v11 + 2;
          if ( !v12 )
            v13 = v11;
          v11 = (__int64 *)*v13;
        }
        while ( !*(_BYTE *)(*v13 + 25) );
      }
      if ( *((_BYTE *)v10 + 25) || a2 < *((_DWORD *)v10 + 7) )
      {
        if ( v2[1] == 0x666666666666666LL )
          std::_Throw_tree_length_error();
        v24 = v2;
        v25 = 0LL;
        v14 = std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>::allocate(v11);
        v27 = (int *)&v28;
        ____0AEBK__Z__V___pair___CBKK_std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBK_1_V__tuple___V_1__Z(
          v14 + 28,
          v15,
          &v27);
        *v10 = (__int64)v3;
        v10[1] = (__int64)v3;
        v10[2] = (__int64)v3;
        *((_WORD *)v10 + 12) = 0;
        ++v2[1];
        v16 = (__int64 **)*v2;
        v10[1] = (__int64)v4;
        if ( v4 != (__int64 *)v16 )
        {
          if ( v9 )
          {
            *v4 = (__int64)v10;
            if ( v4 == *v16 )
              *v16 = v10;
          }
          else
          {
            v4[2] = (__int64)v10;
            if ( v4 == v16[2] )
              v16[2] = v10;
          }
          v17 = v10;
          for ( i = v10[1]; ; i = v17[1] )
          {
            if ( *(_BYTE *)(i + 24) )
            {
              *((_BYTE *)v16[1] + 24) = 1;
              goto LABEL_26;
            }
            v21 = v17[1];
            v22 = *(__int64 **)(v21 + 8);
            v23 = *v22;
            if ( v21 == *v22 )
            {
              v23 = v22[2];
              if ( !*(_BYTE *)(v23 + 24) )
                goto LABEL_45;
              if ( v17 == *(__int64 **)(v21 + 16) )
                std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
                  (__int64)v2,
                  v21);
              *(_BYTE *)(v17[1] + 24) = 1;
              *(_BYTE *)(*(_QWORD *)(v17[1] + 8) + 24LL) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
                (__int64)v2,
                *(_QWORD **)(v17[1] + 8));
            }
            else
            {
              if ( !*(_BYTE *)(v23 + 24) )
              {
LABEL_45:
                *(_BYTE *)(v21 + 24) = 1;
                *(_BYTE *)(v23 + 24) = 1;
                *(_BYTE *)(*(_QWORD *)(v17[1] + 8) + 24LL) = 0;
                v17 = *(__int64 **)(v17[1] + 8);
                continue;
              }
              if ( v17 == *(__int64 **)v21 )
                std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
                  (__int64)v2,
                  (_QWORD *)v21);
              *(_BYTE *)(v17[1] + 24) = 1;
              *(_BYTE *)(*(_QWORD *)(v17[1] + 8) + 24LL) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
                (__int64)v2,
                *(_QWORD *)(v17[1] + 8));
            }
          }
        }
        *v16 = v10;
        v16[1] = v10;
        v16[2] = v10;
        *((_BYTE *)v10 + 24) = 1;
      }
LABEL_26:
      *((_DWORD *)v10 + 8) = 1;
    }
    else
    {
      v20 = std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(v2, &v24, &v28);
      ++*(_DWORD *)(*(_QWORD *)v20 + 32LL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x92,
                     (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                     (const char *)v10);
    return (unsigned int)v27;
  }
  return result;
}
