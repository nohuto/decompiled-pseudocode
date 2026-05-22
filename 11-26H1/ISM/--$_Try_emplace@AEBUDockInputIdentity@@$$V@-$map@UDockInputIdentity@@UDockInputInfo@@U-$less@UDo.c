/*
 * XREFs of ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x180182D14
 * Callers:
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180183E08 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800575A0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B15CC (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014D710 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@DragNDropProcesso.c)
 *     ??$?0AEBUDockInputIdentity@@$$Z$$V@?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBUDockInputIdentity@@@1@V?$tuple@$$V@1@@Z @ 0x180182644 (--$-0AEBUDockInputIdentity@@$$Z$$V@-$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@QEAA@Upi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<DockInputIdentity,DockInputInfo>::_Try_emplace<DockInputIdentity const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v6; // r15
  __int64 *v7; // r9
  __int64 *v8; // r10
  int *v9; // rdx
  unsigned int v10; // r8d
  bool v11; // cf
  unsigned __int64 v12; // rax
  bool v13; // cf
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  unsigned int *v19; // [rsp+70h] [rbp+20h] BYREF

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v18 = (unsigned __int64)v7;
  v8 = v6;
  v9 = (int *)(a3 + 2);
  if ( !*((_BYTE *)v7 + 25) )
  {
    v10 = *a3;
    do
    {
      *(_QWORD *)&v18 = v7;
      v11 = *((_DWORD *)v7 + 8) < v10;
      if ( *((_DWORD *)v7 + 8) == v10 )
      {
        v12 = v7[5];
        v11 = v12 < *(_QWORD *)v9;
        if ( v12 == *(_QWORD *)v9 )
          v11 = *((_WORD *)v7 + 24) < *((_WORD *)a3 + 8);
      }
      if ( v11 )
      {
        DWORD2(v18) = 0;
        v7 += 2;
      }
      else
      {
        DWORD2(v18) = 1;
        v8 = v7;
      }
      v7 = (__int64 *)*v7;
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_16;
  v13 = *a3 < *((_DWORD *)v8 + 8);
  if ( *a3 == *((_DWORD *)v8 + 8) )
  {
    v13 = *(_QWORD *)v9 < (unsigned __int64)v8[5];
    if ( *(_QWORD *)v9 == v8[5] )
      v13 = *((_WORD *)v9 + 4) < *((_WORD *)v8 + 24);
  }
  if ( v13 )
  {
LABEL_16:
    if ( a1[1] == 0x1C71C71C71C71C7LL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v17 = a1;
    v14 = std::_Allocate<16,std::_Default_allocate_traits>(0x90uLL);
    v19 = a3;
    ____0AEBUDockInputIdentity____Z__V___pair___CBUDockInputIdentity__UDockInputInfo___std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBUDockInputIdentity___1_V__tuple___V_1__Z(
      (__int64)(v14 + 4),
      v15,
      (__int64)&v19);
    *v14 = v6;
    v14[1] = v6;
    v14[2] = v6;
    *((_WORD *)v14 + 12) = 0;
    *((_QWORD *)&v17 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>((__int64)&v17);
    v17 = v18;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v17,
                      (__int64)v14);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
