/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18000A684
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180072F00 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ?TriggerUpdateInputTarget@CursorProcessor@@SAXXZ @ 0x18000A790 (-TriggerUpdateInputTarget@CursorProcessor@@SAXXZ.c)
 *     ??$_Insert_or_assign@AEBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x18000A7FC (--$_Insert_or_assign@AEBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@.c)
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x18000A9A4 (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?CreateDeviceInfo@Win32kInterop@@AEAA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18000AA40 (-CreateDeviceInfo@Win32kInterop@@AEAA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegac.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x180098958 (-UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800F4430 (-count@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDevice.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Win32kInterop::ProcessDeviceArrival(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  CursorSuppressionProcessor *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF
  void *v13; // [rsp+68h] [rbp+20h] BYREF

  switch ( a3 )
  {
    case 2u:
      CursorProcessor::TriggerUpdateInputTarget();
      if ( CursorSuppressionProcessor::s_processor )
        CursorSuppressionProcessor::UnsuppressForDeviceArrivalImpl(v7, *(_DWORD *)(a2 + 4));
      break;
    case 0x20u:
      CursorProcessor::TriggerUpdateInputTarget();
      break;
    case 0u:
      return;
  }
  v6 = *(_DWORD *)(a2 + 4);
  v12 = v6;
  if ( !std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::count(
          a1 + 64,
          &v12) )
  {
    InputETW::Win32kInterop::ProcessDeviceArrival(v6);
    Win32kInterop::CreateDeviceInfo(v8, &v13, a3, a2);
    v9 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 56) + 40LL))(
           *(_QWORD *)(a1 + 56),
           v13,
           a1);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1EB,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v9,
        v10[0]);
    std::unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>::_Insert_or_assign<unsigned long const &,std::unique_ptr<LegacyDeviceInfo>>(
      a1 + 64,
      v10,
      v13,
      &v13);
    if ( v13 )
      operator delete(v13, (const struct std::nothrow_t *)0x60C);
  }
}
