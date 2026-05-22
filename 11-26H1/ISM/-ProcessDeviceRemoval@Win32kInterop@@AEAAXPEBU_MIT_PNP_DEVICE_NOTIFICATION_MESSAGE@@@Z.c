/*
 * XREFs of ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180053950
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180072F00 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180053AD8 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18008A0BC (--$_Erase@K@-$_Hash@V-$_Umap_traits@KV-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@s.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A334 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x180099008 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800F0528 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKPEAVInputInfoValidato.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800F4430 (-count@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDevice.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800F4470 (-find@-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800F44E0 (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Win32kInterop::ProcessDeviceRemoval(
        __int64 **this,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rbx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // r11
  __int64 *v10; // rax
  __int64 v11; // rcx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  unsigned int v14; // [rsp+40h] [rbp+20h] BYREF
  __int64 *v15; // [rsp+48h] [rbp+28h] BYREF

  v2 = *((_DWORD *)a2 + 1);
  v14 = v2;
  LODWORD(v15) = v2;
  if ( std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::count(
         this + 8,
         &v15) )
  {
    InputETW::Win32kInterop::ProcessDeviceRemoval(v2);
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::find(
      this + 8,
      &v15,
      &v14);
    v4 = v15;
    if ( v15 == this[9] )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x25E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)0x80004005LL,
        savedregs);
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*this[7] + 64))(this[7], v15[3]);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x262,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v5,
        savedregs);
    std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::find(
      this + 16,
      &v15,
      &v14);
    if ( v15 != this[17] )
    {
      v6 = v15[3];
      std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator *>>>>,0>(
        this + 16,
        &v15);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    std::_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>::_Erase<unsigned long>(
      this + 36,
      &v14);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::_Erase<unsigned long>(
      this + 44,
      &v14);
    v7 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v4 + 16);
    v8 = this[11];
    v9 = 2 * ((unsigned __int64)this[14] & v7);
    if ( (__int64 *)v8[2 * ((unsigned __int64)this[14] & v7) + 1] == v4 )
    {
      if ( (__int64 *)v8[2 * ((unsigned __int64)this[14] & v7)] == v4 )
      {
        v10 = this[9];
        v8[v9] = (__int64)v10;
      }
      else
      {
        v10 = (__int64 *)v4[1];
      }
      v8[v9 + 1] = (__int64)v10;
    }
    else if ( (__int64 *)v8[2 * ((unsigned __int64)this[14] & v7)] == v4 )
    {
      v8[2 * ((unsigned __int64)this[14] & v7)] = *v4;
    }
    v11 = *v4;
    this[10] = (__int64 *)((char *)this[10] - 1);
    *(_QWORD *)v4[1] = v11;
    *(_QWORD *)(v11 + 8) = v4[1];
    std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
      v11,
      v4);
  }
}
