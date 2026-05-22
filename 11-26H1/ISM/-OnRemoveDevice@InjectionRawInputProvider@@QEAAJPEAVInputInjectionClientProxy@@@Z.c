/*
 * XREFs of ?OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E28B8
 * Callers:
 *     ?OnDisconnected@InputInjectionClientProxy@@MEAAJXZ @ 0x1801A1A70 (-OnDisconnected@InputInjectionClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A334 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E1A8C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VInputInfoValidator@@U-$defau.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InjectionRawInputProvider::OnRemoveDevice(
        InjectionRawInputProvider *this,
        struct InputInjectionClientProxy *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 *v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF
  __int64 v20; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v19) = *((_DWORD *)a2 + 10);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 5,
    &v20,
    (const unsigned __int8 *)&v19);
  v3 = v20;
  if ( v20 != *((_QWORD *)this + 6) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
      (_QWORD *)this + 13,
      &v19,
      *(const unsigned __int8 **)(v20 + 24));
    v4 = *((_QWORD *)this + 14);
    if ( v19 != v4 )
    {
      v5 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)(v19 + 16));
      v7 = *((_QWORD *)this + 16);
      v8 = 2 * (*((_QWORD *)this + 19) & v5);
      if ( *(__int64 **)(v7 + 16 * (*((_QWORD *)this + 19) & v5) + 8) == v6 )
      {
        if ( *(__int64 **)(v7 + 16 * (*((_QWORD *)this + 19) & v5)) == v6 )
          *(_QWORD *)(v7 + 16 * (*((_QWORD *)this + 19) & v5)) = v4;
        else
          v4 = v6[1];
        *(_QWORD *)(v7 + 8 * v8 + 8) = v4;
      }
      else if ( *(__int64 **)(v7 + 16 * (*((_QWORD *)this + 19) & v5)) == v6 )
      {
        *(_QWORD *)(v7 + 16 * (*((_QWORD *)this + 19) & v5)) = *v6;
      }
      v9 = *v6;
      --*((_QWORD *)this + 15);
      *(_QWORD *)v6[1] = v9;
      *(_QWORD *)(v9 + 8) = v6[1];
      std::_List_node<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>,void *>>>(
        v9,
        (char *)v6);
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 64LL))(
            *((_QWORD *)this + 3),
            *(_QWORD *)(v3 + 24));
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    v13 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)(v3 + 16));
    v14 = *((_QWORD *)this + 8);
    v15 = 2 * (*((_QWORD *)this + 11) & v13);
    if ( *(_QWORD *)(v14 + 16 * (*((_QWORD *)this + 11) & v13) + 8) == v3 )
    {
      if ( *(_QWORD *)(v14 + 16 * (*((_QWORD *)this + 11) & v13)) == v3 )
      {
        v16 = *((_QWORD *)this + 6);
        *(_QWORD *)(v14 + 8 * v15) = v16;
      }
      else
      {
        v16 = *(_QWORD *)(v3 + 8);
      }
      *(_QWORD *)(v14 + 8 * v15 + 8) = v16;
    }
    else if ( *(_QWORD *)(v14 + 16 * (*((_QWORD *)this + 11) & v13)) == v3 )
    {
      *(_QWORD *)(v14 + 16 * (*((_QWORD *)this + 11) & v13)) = *(_QWORD *)v3;
    }
    v17 = *(_QWORD *)v3;
    --*((_QWORD *)this + 7);
    **(_QWORD **)(v3 + 8) = v17;
    *(_QWORD *)(v17 + 8) = *(_QWORD *)(v3 + 8);
    std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
      v17,
      v3);
  }
  return 0LL;
}
