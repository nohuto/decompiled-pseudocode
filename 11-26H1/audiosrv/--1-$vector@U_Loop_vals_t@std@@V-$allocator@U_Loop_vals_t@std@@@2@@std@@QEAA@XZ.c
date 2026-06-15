/*
 * XREFs of ??1?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x180086C7C
 * Callers:
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x180082F44 (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 *     ??1EffectPackConfiguration@@QEAA@XZ @ 0x1800ACDB0 (--1EffectPackConfiguration@@QEAA@XZ.c)
 *     ??1?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800B1148 (--1-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x180107750 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 *     ??1?$_Tgt_state_t@PEBG@std@@QEAA@XZ @ 0x1801351B0 (--1-$_Tgt_state_t@PEBG@std@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@@std@@QEAA@XZ @ 0x180135218 (--1-$_Tidy_guard@V-$vector@U_Grp_t@-$_Tgt_state_t@PEBG@std@@V-$allocator@U_Grp_t@-$_Tgt_state_t@.c)
 *     _std::_Matcher_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const___::_Matcher_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const____::_1_::dtor$2 @ 0x18016B6B3 (_std--_Matcher_unsigned_short_const___unsigned_short_std--regex_traits_unsigned_sho_ea_18016B6B3.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
