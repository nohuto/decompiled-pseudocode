/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002A144
 * Callers:
 *     ??$emplace_front@AEAPEAVCProcess@@@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@Z @ 0x1800375EC (--$emplace_front@AEAPEAVCProcess@@@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy.c)
 *     ??$_Append_range_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@std@@QEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18003E7D8 (--$_Append_range_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_typ.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$15 @ 0x18004C2C0 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$15.c)
 *     _std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::push_front_::_1_::dtor$0 @ 0x18004C804 (_std--forward_list_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_returncode_policy__std.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$5 @ 0x18004C816 (_CDuckingManager--OnStateChanged_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$14 @ 0x18004CD2D (_TsSessionCreate_--_1_--dtor$14.c)
 *     _TsSessionCreate_::_1_::dtor$20 @ 0x18004CD8D (_TsSessionCreate_--_1_--dtor$20.c)
 *     _TsSessionCreate_::_1_::dtor$23 @ 0x18004CDC6 (_TsSessionCreate_--_1_--dtor$23.c)
 *     _TsSessionCreate_::_1_::dtor$26 @ 0x18004CDFF (_TsSessionCreate_--_1_--dtor$26.c)
 *     _TsSessionCreate_::_1_::dtor$29 @ 0x18004CE38 (_TsSessionCreate_--_1_--dtor$29.c)
 *     _TsSessionCreate_::_1_::dtor$32 @ 0x18004CE71 (_TsSessionCreate_--_1_--dtor$32.c)
 *     _TsSessionCreate_::_1_::dtor$35 @ 0x18004CEAA (_TsSessionCreate_--_1_--dtor$35.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x10);
}
