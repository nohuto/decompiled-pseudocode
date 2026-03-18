/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18029A380
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@2@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@2@@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@Z @ 0x18029A008 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEAI@2@V-$tuple@$$QEAV-$com_ptr_t@UID3D11Fenc.c)
 * Callees:
 *     ??1CDDisplayFlipAwayFence@@QEAA@XZ @ 0x18029A3B0 (--1CDDisplayFlipAwayFence@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    CDDisplayFlipAwayFence::~CDDisplayFlipAwayFence((CDDisplayFlipAwayFence *)(v2 + 24));
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>(a1);
}
