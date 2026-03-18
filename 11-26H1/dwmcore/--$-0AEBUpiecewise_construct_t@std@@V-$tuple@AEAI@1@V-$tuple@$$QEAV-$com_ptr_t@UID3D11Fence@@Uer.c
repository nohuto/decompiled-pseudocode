/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@1@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@Z @ 0x180299B60
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@2@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@2@@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@Z @ 0x18029A008 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEAI@2@V-$tuple@$$QEAV-$com_ptr_t@UID3D11Fenc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@AEAI@std@@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@$0A@$$Z$0A@$00$01@?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@AEAA@AEAV?$tuple@AEAI@1@AEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$0A@$00$01@1@@Z @ 0x180299BE0 (--$-0V-$tuple@AEAI@std@@V-$tuple@$$QEAV-$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5)
{
  char *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  *a1 = a2;
  a1[1] = 0LL;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL, a2);
  v8 = a5;
  a1[1] = (__int64)v7;
  v11[0] = *v8;
  v9 = v8[1];
  v11[2] = v8[2];
  v12 = *a4;
  v11[1] = v9;
  ____0V__tuple_AEAI_std__V__tuple___QEAV__com_ptr_t_UID3D11Fence__Uerr_returncode_policy_wil___wil____QEAV__unique_any_t_V__unique_storage_U__handle_null_resource_policy_P6AHPEAX_Z_1_CloseHandle__YAH0_Z_details_wil___details_wil___2___QEAV__com_ptr_t_UIDisplayFence_Core_Display_Devices_Windows__Uerr_returncode_policy_wil___2__1__0A___Z_0A__00_01___pair___CBIVCDDisplayFlipAwayFence___std__AEAA_AEAV__tuple_AEAI_1_AEAV__tuple___QEAV__com_ptr_t_UID3D11Fence__Uerr_returncode_policy_wil___wil____QEAV__unique_any_t_V__unique_storage_U__handle_null_resource_policy_P6AHPEAX_Z_1_CloseHandle__YAH0_Z_details_wil___details_wil___2___QEAV__com_ptr_t_UIDisplayFence_Core_Display_Devices_Windows__Uerr_returncode_policy_wil___2__1_U__integer_sequence__K_0A__1_U__integer_sequence__K_0A__00_01_1__Z(
    v7 + 16,
    &v12,
    v11);
  return a1;
}
