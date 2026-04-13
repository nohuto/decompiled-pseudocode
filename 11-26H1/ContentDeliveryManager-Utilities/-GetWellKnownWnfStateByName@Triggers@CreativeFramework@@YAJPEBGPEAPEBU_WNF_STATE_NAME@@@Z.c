/*
 * XREFs of ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x18008D3CC
 * Callers:
 *     ?PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z @ 0x180035D20 (-PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z.c)
 *     ?GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x180072230 (-GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180082934 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ??$_Buynode@U?$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x18008CB94 (--$_Buynode@U-$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NAME@.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18008CDD0 (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 *     ??1?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x18008D23C (--1-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 *     ??Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z @ 0x18008D27C (--Rless@Triggers@CreativeFramework@@QEBA_NPEBG0@Z.c)
 *     ?CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA?AV?$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@XZ @ 0x18008D2B0 (-CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA-AV-$map@PEBGPEBU_WNF_STATE_NAME@@.c)
 *     ?lower_bound@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@2@AEBQEBG@Z @ 0x18008D960 (-lower_bound@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Triggers::GetWellKnownWnfStateByName(
        const WCHAR *this,
        unsigned __int16 *a2,
        const struct _WNF_STATE_NAME **a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  const WCHAR **v7; // rbx
  const WCHAR **v8; // rax
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  void *v14[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF
  const WCHAR *v16; // [rsp+70h] [rbp+20h] BYREF
  const WCHAR **v17; // [rsp+78h] [rbp+28h] BYREF

  v16 = this;
  v5 = 0;
  *(_QWORD *)a2 = 0LL;
  CreativeFramework::Triggers::CreateSupportedWnfNameStateMap((__int64 *)v14);
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::lower_bound(
    v14,
    &v17,
    &v16);
  v7 = v17;
  v8 = (const WCHAR **)v14[0];
  if ( v17 == v14[0]
    || (v9 = !CreativeFramework::Triggers::less::operator()(v6, this, v17[4]), v8 = (const WCHAR **)v14[0], !v9) )
  {
    v7 = v8;
  }
  if ( v7 == v8 )
  {
    v5 = -2147024809;
  }
  else
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::lower_bound(
      v14,
      &v17,
      &v16);
    v11 = (__int64)v17;
    if ( v17 == v14[0] || CreativeFramework::Triggers::less::operator()(v10, this, v17[4]) )
    {
      v15[0] = this;
      v15[1] = 0LL;
      v12 = (_QWORD *)std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const *,_WNF_STATE_NAME const *>>(
                        (__int64)v14,
                        v15);
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (__int64 *)v14,
        &v17,
        v11,
        v12 + 4,
        v12);
      v11 = (__int64)v17;
    }
    *(_QWORD *)a2 = *(_QWORD *)(v11 + 40);
  }
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::~_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v14);
  return v5;
}
