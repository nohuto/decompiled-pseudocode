/*
 * XREFs of ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x180115EA8
 * Callers:
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180115D48 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801D36A8 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAA.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801D93D0 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAX@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allo.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180210300 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  char v8; // r8
  __int64 *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  char v13; // [rsp+30h] [rbp-30h] BYREF
  void *v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 *v16; // [rsp+70h] [rbp+10h] BYREF

  v16 = a1;
  v5 = CPointerDeviceCache::s_deviceCache;
  v6 = *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8);
  v15 = (unsigned __int64)v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *a3;
    do
    {
      *(_QWORD *)&v15 = v6;
      if ( *(_QWORD *)(v6 + 32) < v7 )
      {
        v8 = 1;
        DWORD2(v15) = 0;
      }
      else
      {
        v8 = 0;
        DWORD2(v15) = 1;
        v5 = v6;
      }
      v9 = (__int64 *)(v6 + 16);
      if ( !v8 )
        v9 = (__int64 *)v6;
      v6 = *v9;
    }
    while ( !*(_BYTE *)(*v9 + 25) );
  }
  if ( *(_BYTE *)(v5 + 25) || *a3 < *(_QWORD *)(v5 + 32) )
  {
    if ( qword_1803DE2F0 == 0x2AAAAAAAAAAAAAALL )
      std::_Throw_tree_length_error();
    v16 = a3;
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
            (unsigned int)&v13,
            (unsigned int)&CPointerDeviceCache::s_deviceCache,
            CPointerDeviceCache::s_deviceCache,
            (_DWORD)a3,
            (__int64)&v16);
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = 0LL;
    if ( v14 )
      std::_Deallocate<16>(v14, 0x60uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Insert_node(
                      &CPointerDeviceCache::s_deviceCache,
                      &v15,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v5;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
