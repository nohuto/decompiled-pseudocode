/*
 * XREFs of ??$?0V?$tuple@AEAI@std@@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@$0A@$$Z$0A@$00$01@?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@AEAA@AEAV?$tuple@AEAI@1@AEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$0A@$00$01@1@@Z @ 0x180299BE0
 * Callers:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@1@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@Z @ 0x180299B60 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEAI@1@V-$tuple@$$QEAV-$com_ptr_t@UID3D11Fence@@Uer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ____0V__tuple_AEAI_std__V__tuple___QEAV__com_ptr_t_UID3D11Fence__Uerr_returncode_policy_wil___wil____QEAV__unique_any_t_V__unique_storage_U__handle_null_resource_policy_P6AHPEAX_Z_1_CloseHandle__YAH0_Z_details_wil___details_wil___2___QEAV__com_ptr_t_UIDisplayFence_Core_Display_Devices_Windows__Uerr_returncode_policy_wil___2__1__0A___Z_0A__00_01___pair___CBIVCDDisplayFlipAwayFence___std__AEAA_AEAV__tuple_AEAI_1_AEAV__tuple___QEAV__com_ptr_t_UID3D11Fence__Uerr_returncode_policy_wil___wil____QEAV__unique_any_t_V__unique_storage_U__handle_null_resource_policy_P6AHPEAX_Z_1_CloseHandle__YAH0_Z_details_wil___details_wil___2___QEAV__com_ptr_t_UIDisplayFence_Core_Display_Devices_Windows__Uerr_returncode_policy_wil___2__1_U__integer_sequence__K_0A__1_U__integer_sequence__K_0A__00_01_1__Z(
        __int64 a1,
        _DWORD **a2,
        __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 *v5; // r10
  _QWORD *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = CFlipAwayFence::s_nextUniqueId;
  *(_DWORD *)a1 = **a2;
  ++v3;
  v4 = *(__int64 **)(a3 + 16);
  v5 = *(__int64 **)a3;
  v6 = *(_QWORD **)(a3 + 8);
  *(_QWORD *)(a1 + 8) = v3;
  CFlipAwayFence::s_nextUniqueId = v3;
  v7 = *v4;
  *v4 = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = *v6;
  *v6 = 0LL;
  v8 = *v5;
  *v5 = 0LL;
  *(_QWORD *)(a1 + 32) = v8;
  return a1;
}
